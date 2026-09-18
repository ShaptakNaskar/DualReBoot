cmake_minimum_required(VERSION 3.22)
project(BeachNative LANGUAGES CXX)

# Independent of port/: no Unicorn, JNI, Android SDK, or original engine binary.
add_library(beach-assets src/assets.cpp src/preferences.cpp src/scene.cpp src/scene_validation.cpp
  src/geometry.cpp src/camera.cpp src/appearance.cpp)
target_include_directories(beach-assets PUBLIC include)
target_compile_features(beach-assets PUBLIC cxx_std_17)
target_compile_options(beach-assets PRIVATE -Wall -Wextra -Wpedantic)

add_executable(beach-assets-inspect src/main.cpp)
target_link_libraries(beach-assets-inspect PRIVATE beach-assets)

option(BEACH_BUILD_RENDERER "Build the standalone EGL/GLES2 static-frame renderer" OFF)
if(BEACH_BUILD_RENDERER)
  find_library(BEACH_EGL EGL REQUIRED)
  find_library(BEACH_GLES GLESv2 REQUIRED)
  add_executable(beach-render src/render.cpp)
  target_link_libraries(beach-render PRIVATE beach-assets ${BEACH_EGL} ${BEACH_GLES})
  target_compile_options(beach-render PRIVATE -Wall -Wextra -Wpedantic)
endif()

include(CTest)
set(BEACH_ASSET_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../decoded/assets" CACHE PATH
  "Local original asset directory for integration tests (never published)")
if(BUILD_TESTING)
  add_executable(beach-assets-tests tests/assets_test.cpp)
  target_link_libraries(beach-assets-tests PRIVATE beach-assets)
  add_test(NAME asset-unit COMMAND beach-assets-tests)
  add_executable(beach-scene-tests tests/scene_test.cpp)
  target_link_libraries(beach-scene-tests PRIVATE beach-assets)
  add_test(NAME scene-unit COMMAND beach-scene-tests)
  add_executable(beach-geometry-tests tests/geometry_test.cpp)
  target_link_libraries(beach-geometry-tests PRIVATE beach-assets)
  add_test(NAME geometry-unit COMMAND beach-geometry-tests)
  if(BEACH_BUILD_RENDERER)
    add_test(NAME render-fixture COMMAND ${CMAKE_COMMAND}
      "-DTESTER=$<TARGET_FILE:beach-geometry-tests>" "-DRENDERER=$<TARGET_FILE:beach-render>"
      "-DTEST_OUTPUT=${CMAKE_CURRENT_BINARY_DIR}" -P "${CMAKE_CURRENT_SOURCE_DIR}/tests/render_test.cmake")
  endif()
  # Explicit input path keeps the library and CLI independent of this checkout.
  if(EXISTS "${BEACH_ASSET_DIR}/beach.stg-scene")
    add_test(NAME original-assets COMMAND beach-assets-tests
      "${BEACH_ASSET_DIR}")
    add_test(NAME original-scene COMMAND beach-scene-tests "${BEACH_ASSET_DIR}")
    add_test(NAME original-geometry COMMAND beach-geometry-tests "${BEACH_ASSET_DIR}")
    add_test(NAME asset-cli-export COMMAND ${CMAKE_COMMAND}
      "-DINSPECTOR=$<TARGET_FILE:beach-assets-inspect>"
      "-DASSETS=${BEACH_ASSET_DIR}"
      "-DTEST_OUTPUT=${CMAKE_CURRENT_BINARY_DIR}"
      -P "${CMAKE_CURRENT_SOURCE_DIR}/tests/export_test.cmake")
  endif()
endif()

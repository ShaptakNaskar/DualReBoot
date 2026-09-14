/* 0003f240 | STG::GERenderer::Internal_SetColorMask */

/* STG::GERenderer::Internal_SetColorMask(STG::GERendererAPI::EColorMask) */

void __thiscall STG::GERenderer::Internal_SetColorMask(undefined4 this,undefined4 param_2)

{
  FUN_0002e044();
  GERendererAPI::GL_SetColorMask(param_2);
  return;
}


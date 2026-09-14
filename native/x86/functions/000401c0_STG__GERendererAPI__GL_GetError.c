/* 000401c0 | STG::GERendererAPI::GL_GetError */

/* STG::GERendererAPI::GL_GetError(unsigned int&) */

bool STG::GERendererAPI::GL_GetError(uint *param_1)

{
  uint uVar1;
  
  FUN_0002e044();
  uVar1 = glGetError();
  *param_1 = uVar1;
  return uVar1 != 0;
}


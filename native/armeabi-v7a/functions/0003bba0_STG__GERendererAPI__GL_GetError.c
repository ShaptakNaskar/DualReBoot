/* 0003bba0 | STG::GERendererAPI::GL_GetError */

/* STG::GERendererAPI::GL_GetError(unsigned int&) */

bool STG::GERendererAPI::GL_GetError(uint *param_1)

{
  uint uVar1;
  
  uVar1 = glGetError();
  *param_1 = uVar1;
  return uVar1 != 0;
}


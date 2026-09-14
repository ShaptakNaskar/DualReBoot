/* 0003f4c0 | STG::GERendererAPI::GL_GetFilterMode */

/* STG::GERendererAPI::GL_GetFilterMode(STG::GERendererAPI::ESamplerState const&) */

undefined4 STG::GERendererAPI::GL_GetFilterMode(ESamplerState *param_1)

{
  int extraout_ECX;
  
  FUN_0002e915();
  return *(undefined4 *)(extraout_ECX + 0x48967 + *(int *)param_1 * 4);
}


/* 0003f4a0 | STG::GERendererAPI::GL_GetAddressMode */

/* STG::GERendererAPI::GL_GetAddressMode(STG::GERendererAPI::ESamplerState const&) */

undefined4 STG::GERendererAPI::GL_GetAddressMode(ESamplerState *param_1)

{
  int extraout_ECX;
  
  FUN_0002e915();
  return *(undefined4 *)(extraout_ECX + 0x4896b + *(int *)param_1 * 4);
}


/* 0003d81c | STG::GERendererAPI::GL_GetAddressMode */

/* STG::GERendererAPI::GL_GetAddressMode(STG::GERendererAPI::ESamplerState const&) */

undefined4 STG::GERendererAPI::GL_GetAddressMode(ESamplerState *param_1)

{
  return *(undefined4 *)(DAT_0003d830 + 0x3d82c + *(int *)param_1 * 4);
}


/* 0003b3a4 | STG::GERendererAPI::GL_GetAddressMode */

/* STG::GERendererAPI::GL_GetAddressMode(STG::GERendererAPI::ESamplerState const&) */

undefined4 STG::GERendererAPI::GL_GetAddressMode(ESamplerState *param_1)

{
  return *(undefined4 *)(DAT_0003b3b8 + 0x3b3b4 + *(int *)param_1 * 4);
}


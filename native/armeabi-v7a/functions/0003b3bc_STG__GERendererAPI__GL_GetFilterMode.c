/* 0003b3bc | STG::GERendererAPI::GL_GetFilterMode */

/* STG::GERendererAPI::GL_GetFilterMode(STG::GERendererAPI::ESamplerState const&) */

undefined4 STG::GERendererAPI::GL_GetFilterMode(ESamplerState *param_1)

{
  return *(undefined4 *)(DAT_0003b3d4 + *(int *)param_1 * 4 + 0x3b3e8);
}


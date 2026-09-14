/* 0003d834 | STG::GERendererAPI::GL_GetFilterMode */

/* STG::GERendererAPI::GL_GetFilterMode(STG::GERendererAPI::ESamplerState const&) */

undefined4 STG::GERendererAPI::GL_GetFilterMode(ESamplerState *param_1)

{
  return *(undefined4 *)(DAT_0003d84c + *(int *)param_1 * 4 + 0x3d860);
}


/* 0003a868 | STG::GERenderer::SetMaterial */

/* STG::GERenderer::SetMaterial(STG::GEMaterial const*, STG::GEColor const&) */

void __thiscall STG::GERenderer::SetMaterial(GERenderer *this,GEMaterial *param_1,GEColor *param_2)

{
  int iVar1;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  if (param_1 == (GEMaterial *)0x0) {
    param_1 = *(GEMaterial **)(this + 0xe8);
  }
  iVar1 = GEMaterial::GetIsEqual(param_1);
  if (iVar1 == 0) {
    ApplyFog((EBlendState *)this);
    GERendererAPI::GL_SetDepthState(*(undefined4 *)(param_1 + 0x144));
    GERendererAPI::GL_SetBlendState(*(undefined4 *)(param_1 + 0x13c));
    GERendererAPI::GL_SetCullState(*(undefined4 *)(param_1 + 0x140));
    local_28 = *(float *)param_2 * *(float *)(param_1 + 0x148);
    local_24 = *(float *)(param_2 + 4) * *(float *)(param_1 + 0x14c);
    local_20 = *(float *)(param_2 + 8) * *(float *)(param_1 + 0x150);
    local_1c = *(float *)(param_2 + 0xc) * *(float *)(param_1 + 0x154);
    GERendererAPI::GL_SetMaterialColor((GEColor *)&local_28);
    GERendererAPI::GL_SetTexture
              (0,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x3c),
               *(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x2c),param_1 + 0x4c,
               param_1 + 0xbc);
    GERendererAPI::GL_SetTexture
              (1,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40),
               *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x30),param_1 + 0x5c,
               param_1 + 0xfc);
  }
  *(GEMaterial **)(this + 0xec) = param_1;
  return;
}


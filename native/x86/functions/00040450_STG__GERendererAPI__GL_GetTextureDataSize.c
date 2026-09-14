/* 00040450 | STG::GERendererAPI::GL_GetTextureDataSize */

/* STG::GERendererAPI::GL_GetTextureDataSize(unsigned long, unsigned long,
   STG::GEPixelFormat::EFormat) */

int STG::GERendererAPI::GL_GetTextureDataSize(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int unaff_EBX;
  
  FUN_0002e044();
  uVar1 = *(uint *)(unaff_EBX + 0x47f03 + param_3 * 8);
  uVar2 = *(uint *)(unaff_EBX + 0x47eff + param_3 * 8);
  iVar5 = GL_GetTextureBitPerPixel(param_3);
  param_1 = param_1 / uVar2;
  param_2 = param_2 / uVar1;
  uVar3 = *(uint *)(unaff_EBX + 0x47f63 + param_3 * 8);
  uVar4 = *(uint *)(unaff_EBX + 0x47f5f + param_3 * 8);
  if (param_2 < uVar3) {
    param_2 = uVar3;
  }
  if (param_1 < uVar4) {
    param_1 = uVar4;
  }
  return param_2 * param_1 * (uVar1 * uVar2 * iVar5 >> 3);
}


/* 0003bd50 | STG::GERendererAPI::GL_GetTextureDataSize */

/* STG::GERendererAPI::GL_GetTextureDataSize(unsigned long, unsigned long,
   STG::GEPixelFormat::EFormat) */

int STG::GERendererAPI::GL_GetTextureDataSize(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = DAT_0003bdc8 + 0x3bd6c + param_3 * 8;
  iVar7 = *(int *)(iVar5 + 0x4a8);
  iVar6 = *(int *)(iVar5 + 0x4ac);
  iVar1 = GL_GetTextureBitPerPixel(param_3);
  uVar2 = __udivsi3(param_1,iVar7);
  uVar3 = __udivsi3(param_2,iVar6);
  if (uVar2 < *(uint *)(iVar5 + 0x508)) {
    uVar2 = *(uint *)(iVar5 + 0x508);
  }
  uVar4 = *(uint *)(iVar5 + 0x50c);
  if (*(uint *)(iVar5 + 0x50c) <= uVar3) {
    uVar4 = uVar3;
  }
  return ((uint)(iVar1 * iVar7 * iVar6) >> 3) * uVar2 * uVar4;
}


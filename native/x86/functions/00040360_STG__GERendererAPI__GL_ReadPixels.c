/* 00040360 | STG::GERendererAPI::GL_ReadPixels */

/* STG::GERendererAPI::GL_ReadPixels(STG::URectangle<unsigned long> const&, STG::GEPixelData&) */

undefined4 STG::GERendererAPI::GL_ReadPixels(URectangle *param_1,GEPixelData *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  
  piVar4 = (int *)FUN_0002e044();
  iVar1 = *piVar4;
  iVar2 = piVar4[3];
  uVar8 = piVar4[2] - iVar1;
  uVar7 = piVar4[1] - iVar2;
  GEPixelData::SetFormat(param_2,0);
  GEPixelData::SetDimensions(param_2,uVar8,uVar7);
  uVar5 = GL_GetTextureEnum(*(undefined4 *)param_2);
  uVar6 = GL_GetTextureDataType(*(undefined4 *)param_2);
  cVar3 = GEPixelData::Allocate(param_2);
  if (cVar3 != '\0') {
    glReadPixels(iVar1,iVar2,uVar8,uVar7,uVar5,uVar6,*(undefined4 *)(param_2 + 0xc));
    cVar3 = GL_GetError();
    if (cVar3 != '\0') {
      GEPixelData::Deallocate(param_2);
    }
  }
  return CONCAT31((int3)((uint)(*(int *)(param_2 + 0x1c) * *(int *)(param_2 + 0x14)) >> 8),
                  *(int *)(param_2 + 0x1c) * *(int *)(param_2 + 0x14) != 0);
}


/* 0003e1bc | STG::GERendererAPI::GL_ReadPixels */

/* STG::GERendererAPI::GL_ReadPixels(STG::URectangle<unsigned long> const&, STG::GEPixelData&) */

bool STG::GERendererAPI::GL_ReadPixels(URectangle *param_1,GEPixelData *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(param_1 + 0xc);
  iVar7 = *(int *)param_1;
  uVar5 = *(int *)(param_1 + 8) - iVar7;
  uVar4 = *(int *)(param_1 + 4) - iVar6;
  GEPixelData::SetFormat(param_2,0);
  GEPixelData::SetDimensions(param_2,uVar5,uVar4);
  uVar1 = GL_GetTextureEnum(*(undefined4 *)param_2);
  uVar2 = GL_GetTextureDataType(*(undefined4 *)param_2);
  iVar3 = GEPixelData::Allocate(param_2);
  if (iVar3 != 0) {
    glReadPixels(iVar7,iVar6,uVar5,uVar4,uVar1,uVar2,*(undefined4 *)(param_2 + 0xc));
    iVar3 = GL_GetError();
    if (iVar3 != 0) {
      GEPixelData::Deallocate(param_2);
    }
  }
  return *(int *)(param_2 + 0x1c) * *(int *)(param_2 + 0x14) != 0;
}


/* 0003ad0c | STG::GERenderer::Draw */

/* STG::GERenderer::Draw(STG::GEScene const&) */

void __thiscall STG::GERenderer::Draw(GERenderer *this,GEScene *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  SetFogEnabled(SUB41(this,0));
  iVar3 = *(int *)(param_1 + 0xdc);
  if (iVar3 != 0) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0xc4) + iVar2 * 4);
      iVar2 = iVar2 + 1;
      Draw(this,*(GEModel **)(*(int *)(param_1 + 0xb0) + iVar1 * 4),
           (MMatrix *)(*(int *)(param_1 + 0xc0) + iVar1 * 0x40));
    } while (iVar2 != iVar3);
  }
  local_28 = 0x3f800000;
  local_24 = 0x3f800000;
  local_20 = 0x3f800000;
  local_1c = 0x3f800000;
  SetMaterial(this,(GEMaterial *)0x0,(GEColor *)&local_28);
  return;
}


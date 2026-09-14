/* 0003ea50 | STG::GERenderer::Draw */

/* STG::GERenderer::Draw(STG::GEScene const&) */

void __thiscall STG::GERenderer::Draw(GERenderer *this,GEScene *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x3ea59;
  FUN_0002e044();
  SetFogEnabled(SUB41(this,0));
  iVar1 = *(int *)(param_1 + 0xdc);
  if (iVar1 != 0) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0xc4) + iVar3 * 4);
      iVar3 = iVar3 + 1;
      Draw(this,*(GEModel **)(*(int *)(param_1 + 0xb0) + iVar2 * 4),
           (MMatrix *)(iVar2 * 0x40 + *(int *)(param_1 + 0xc0)));
    } while (iVar3 != iVar1);
  }
  local_2c = 0x3f800000;
  local_28 = 0x3f800000;
  local_24 = 0x3f800000;
  local_20 = 0x3f800000;
  SetMaterial(this,(GEMaterial *)0x0,(GEColor *)&local_2c);
  return;
}


/* 00040430 | STG::GEScene::SetInherit_Visibility */

/* STG::GEScene::SetInherit_Visibility(unsigned long, unsigned long, unsigned long) */

void __thiscall
STG::GEScene::SetInherit_Visibility(GEScene *this,ulong param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 400);
  *(ulong *)(*(int *)(this + 0x188) + param_1 * 4) = param_2;
  *(ulong *)(iVar1 + param_1 * 4) = param_3;
  return;
}


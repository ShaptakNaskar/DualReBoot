/* 00045b30 | STG::GEScene::SetInherit_Visibility */

/* STG::GEScene::SetInherit_Visibility(unsigned long, unsigned long, unsigned long) */

void __thiscall
STG::GEScene::SetInherit_Visibility(GEScene *this,ulong param_1,ulong param_2,ulong param_3)

{
  *(ulong *)(*(int *)(this + 0x188) + param_1 * 4) = param_2;
  *(ulong *)(*(int *)(this + 400) + param_1 * 4) = param_3;
  return;
}


/* 00045df0 | STG::GEScene::SetInherit_Intersection */

/* STG::GEScene::SetInherit_Intersection(unsigned long, unsigned long, unsigned long) */

void __thiscall
STG::GEScene::SetInherit_Intersection(GEScene *this,ulong param_1,ulong param_2,ulong param_3)

{
  *(ulong *)(*(int *)(this + 0x198) + param_1 * 4) = param_2;
  *(ulong *)(*(int *)(this + 0x1a0) + param_1 * 4) = param_3;
  return;
}


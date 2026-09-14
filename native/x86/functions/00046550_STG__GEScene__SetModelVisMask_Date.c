/* 00046550 | STG::GEScene::SetModelVisMask_Date */

/* STG::GEScene::SetModelVisMask_Date(unsigned long, unsigned long, unsigned long, unsigned long) */

void __thiscall
STG::GEScene::SetModelVisMask_Date
          (GEScene *this,ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  *(ulong *)(*(int *)(this + 0x148) + param_1 * 4) = param_2;
  *(ulong *)(param_1 * 0x30 + *(int *)(this + 0x150) + param_3 * 4) = param_4;
  return;
}


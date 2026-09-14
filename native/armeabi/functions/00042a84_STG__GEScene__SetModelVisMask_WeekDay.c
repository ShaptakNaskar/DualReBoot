/* 00042a84 | STG::GEScene::SetModelVisMask_WeekDay */

/* STG::GEScene::SetModelVisMask_WeekDay(unsigned long, unsigned long, unsigned char) */

void __thiscall
STG::GEScene::SetModelVisMask_WeekDay(GEScene *this,ulong param_1,ulong param_2,uchar param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x140);
  *(ulong *)(*(int *)(this + 0x138) + param_1 * 4) = param_2;
  *(uchar *)(iVar1 + param_1) = param_3;
  return;
}


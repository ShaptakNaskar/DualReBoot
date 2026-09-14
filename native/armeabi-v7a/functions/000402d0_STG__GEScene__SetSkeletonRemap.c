/* 000402d0 | STG::GEScene::SetSkeletonRemap */

/* STG::GEScene::SetSkeletonRemap(unsigned long, unsigned long) */

void __thiscall STG::GEScene::SetSkeletonRemap(GEScene *this,ulong param_1,ulong param_2)

{
  *(ulong *)(*(int *)(this + 0x178) + param_1 * 4) = param_2;
  return;
}


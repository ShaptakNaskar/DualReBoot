/* 00042324 | STG::GEScene::SetVertexAnimationRemap */

/* STG::GEScene::SetVertexAnimationRemap(unsigned long, unsigned long) */

void __thiscall STG::GEScene::SetVertexAnimationRemap(GEScene *this,ulong param_1,ulong param_2)

{
  *(ulong *)(*(int *)(this + 0x168) + param_1 * 4) = param_2;
  return;
}


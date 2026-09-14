/* 0004215c | STG::GEScene::SetIntersectRemap */

/* STG::GEScene::SetIntersectRemap(unsigned long, unsigned long) */

void __thiscall STG::GEScene::SetIntersectRemap(GEScene *this,ulong param_1,ulong param_2)

{
  *(ulong *)(*(int *)(this + 0x110) + param_1 * 4) = param_2;
  return;
}


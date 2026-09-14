/* 00040f10 | STG::GEScene::GetChildResource */

/* STG::GEScene::GetChildResource(unsigned long) const */

undefined4 __thiscall STG::GEScene::GetChildResource(GEScene *this,ulong param_1)

{
  return *(undefined4 *)(*(int *)(this + 0xb0) + *(int *)(*(int *)(this + 0xe0) + param_1 * 4) * 4);
}


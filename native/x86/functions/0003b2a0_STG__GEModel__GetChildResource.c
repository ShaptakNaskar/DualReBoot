/* 0003b2a0 | STG::GEModel::GetChildResource */

/* STG::GEModel::GetChildResource(unsigned long) const */

undefined4 __thiscall STG::GEModel::GetChildResource(GEModel *this,ulong param_1)

{
  return *(undefined4 *)(*(int *)(this + 0x84) + param_1 * 4);
}


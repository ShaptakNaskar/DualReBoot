/* 00071c00 | EngineInterfaceImpl::GetNeedsReload */

/* EngineInterfaceImpl::GetNeedsReload(int) const */

undefined1 __thiscall EngineInterfaceImpl::GetNeedsReload(EngineInterfaceImpl *this,int param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 8) + 0x784);
  }
  return uVar1;
}


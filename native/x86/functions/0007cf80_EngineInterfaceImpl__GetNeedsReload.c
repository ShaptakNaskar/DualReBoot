/* 0007cf80 | EngineInterfaceImpl::GetNeedsReload */

/* EngineInterfaceImpl::GetNeedsReload(int) const */

undefined1 __thiscall EngineInterfaceImpl::GetNeedsReload(EngineInterfaceImpl *this,int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 8) + 0x770);
  }
  return uVar1;
}


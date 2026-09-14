/* 0007cc80 | EngineInterfaceImpl::Destroy */

/* EngineInterfaceImpl::Destroy(int) const */

EngineInterface * __thiscall EngineInterfaceImpl::Destroy(EngineInterfaceImpl *this,int param_1)

{
  EngineInterface *pEVar1;
  EngineInterface *local_20 [5];
  undefined4 uStack_c;
  
  uStack_c = 0x7cc8b;
  pEVar1 = (EngineInterface *)FUN_0002e044();
  local_20[0] = (EngineInterface *)param_1;
  if (param_1 != 0) {
    EngineInterface::Deallocate(local_20);
    pEVar1 = local_20[0];
  }
  return pEVar1;
}


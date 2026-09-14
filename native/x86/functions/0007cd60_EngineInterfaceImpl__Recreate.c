/* 0007cd60 | EngineInterfaceImpl::Recreate */

/* EngineInterfaceImpl::Recreate(int) const */

void __thiscall EngineInterfaceImpl::Recreate(EngineInterfaceImpl *this,int param_1)

{
  FUN_0002e044();
  Destroy(this,param_1);
  Create((int)this);
  return;
}


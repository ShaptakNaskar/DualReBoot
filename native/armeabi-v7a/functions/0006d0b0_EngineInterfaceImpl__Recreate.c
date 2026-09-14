/* 0006d0b0 | EngineInterfaceImpl::Recreate */

/* EngineInterfaceImpl::Recreate(int) const */

void __thiscall EngineInterfaceImpl::Recreate(EngineInterfaceImpl *this,int param_1)

{
  Destroy(this,param_1);
  Create((int)this);
  return;
}


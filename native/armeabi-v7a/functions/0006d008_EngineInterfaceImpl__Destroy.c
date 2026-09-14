/* 0006d008 | EngineInterfaceImpl::Destroy */

/* EngineInterfaceImpl::Destroy(int) const */

EngineInterface * __thiscall EngineInterfaceImpl::Destroy(EngineInterfaceImpl *this,int param_1)

{
  EngineInterface *local_c [2];
  
  local_c[0] = (EngineInterface *)param_1;
  if (param_1 != 0) {
    EngineInterface::Deallocate(local_c);
  }
  return local_c[0];
}


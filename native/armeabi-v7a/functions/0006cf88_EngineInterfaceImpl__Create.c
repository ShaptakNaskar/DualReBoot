/* 0006cf88 | EngineInterfaceImpl::Create */

/* EngineInterfaceImpl::Create(int) const */

EngineInterface * EngineInterfaceImpl::Create(int param_1)

{
  EngineInterface *this;
  
  **(int **)(DAT_0006c958 + 0x6c93c) = **(int **)(DAT_0006c958 + 0x6c93c) + 1;
  this = operator_new(0x1c);
  EngineInterface::EngineInterface(this);
  return this;
}


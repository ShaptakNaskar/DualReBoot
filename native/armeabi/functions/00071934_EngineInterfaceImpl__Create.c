/* 00071934 | EngineInterfaceImpl::Create */

/* EngineInterfaceImpl::Create(int) const */

EngineInterface * EngineInterfaceImpl::Create(int param_1)

{
  EngineInterface *this;
  
  **(int **)(DAT_00071308 + 0x712e8) = **(int **)(DAT_00071308 + 0x712e8) + 1;
  this = operator_new(0x1c);
  EngineInterface::EngineInterface(this);
  return this;
}


/* 000712d8 | EngineInterface::Allocate */

/* EngineInterface::Allocate() */

EngineInterface * EngineInterface::Allocate(void)

{
  EngineInterface *this;
  
  **(int **)(DAT_00071308 + 0x712e8) = **(int **)(DAT_00071308 + 0x712e8) + 1;
  this = operator_new(0x1c);
  EngineInterface(this);
  return this;
}


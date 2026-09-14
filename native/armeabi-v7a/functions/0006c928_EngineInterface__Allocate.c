/* 0006c928 | EngineInterface::Allocate */

/* EngineInterface::Allocate() */

EngineInterface * EngineInterface::Allocate(void)

{
  EngineInterface *this;
  
  **(int **)(DAT_0006c958 + 0x6c93c) = **(int **)(DAT_0006c958 + 0x6c93c) + 1;
  this = operator_new(0x1c);
  EngineInterface(this);
  return this;
}


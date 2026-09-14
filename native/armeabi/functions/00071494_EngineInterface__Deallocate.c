/* 00071494 | EngineInterface::Deallocate */

/* EngineInterface::Deallocate(EngineInterface*&) */

void EngineInterface::Deallocate(EngineInterface **param_1)

{
  EngineInterface *this;
  
  this = *param_1;
  if (this != (EngineInterface *)0x0) {
    **(int **)(DAT_000714d8 + 0x714b8) = **(int **)(DAT_000714d8 + 0x714b8) + -1;
    ~EngineInterface(this);
    operator_delete(this);
    *param_1 = (EngineInterface *)0x0;
  }
  return;
}


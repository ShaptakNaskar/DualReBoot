/* 0006caec | EngineInterface::Deallocate */

/* EngineInterface::Deallocate(EngineInterface*&) */

void EngineInterface::Deallocate(EngineInterface **param_1)

{
  EngineInterface *this;
  
  this = *param_1;
  if (this == (EngineInterface *)0x0) {
    return;
  }
  **(int **)(DAT_0006cb30 + 0x6cb10) = **(int **)(DAT_0006cb30 + 0x6cb10) + -1;
  ~EngineInterface(this);
  operator_delete(this);
  *param_1 = (EngineInterface *)0x0;
  return;
}


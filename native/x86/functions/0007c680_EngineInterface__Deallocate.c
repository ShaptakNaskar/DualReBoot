/* 0007c680 | EngineInterface::Deallocate */

/* EngineInterface::Deallocate(EngineInterface*&) */

void EngineInterface::Deallocate(EngineInterface **param_1)

{
  EngineInterface *this;
  int unaff_EBX;
  
  FUN_0002e044();
  this = *param_1;
  if (this != (EngineInterface *)0x0) {
    **(int **)("_ZTVN3STG20LLogicScene_HidePreyE" + unaff_EBX + 2) =
         **(int **)("_ZTVN3STG20LLogicScene_HidePreyE" + unaff_EBX + 2) + -1;
    ~EngineInterface(this);
    operator_delete(this);
    *param_1 = (EngineInterface *)0x0;
  }
  return;
}


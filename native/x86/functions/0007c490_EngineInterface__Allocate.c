/* 0007c490 | EngineInterface::Allocate */

/* EngineInterface::Allocate() */

EngineInterface * EngineInterface::Allocate(void)

{
  EngineInterface *this;
  int unaff_EBX;
  
  FUN_0002e044();
  **(int **)("_ZN3STG16LLogicObjectBaseINS_18LLogicSceneWrapperEED1Ev" + unaff_EBX + 0x2e) =
       **(int **)("_ZN3STG16LLogicObjectBaseINS_18LLogicSceneWrapperEED1Ev" + unaff_EBX + 0x2e) + 1;
  this = operator_new(0x1c);
  EngineInterface(this);
  return this;
}


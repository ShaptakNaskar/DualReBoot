/* 0007cb70 | EngineInterface::Deactivate */

/* EngineInterface::Deactivate() */

void __thiscall EngineInterface::Deactivate(EngineInterface *this)

{
  int extraout_ECX;
  
  FUN_0002e915();
  if ((EngineInterface *)
      **(int **)("_ZNK3STG18LLogicSceneWrapper15GetAnimTimeDataEv" + extraout_ECX) != this) {
    return;
  }
  **(int **)("_ZNK3STG18LLogicSceneWrapper15GetAnimTimeDataEv" + extraout_ECX) = 0;
  return;
}


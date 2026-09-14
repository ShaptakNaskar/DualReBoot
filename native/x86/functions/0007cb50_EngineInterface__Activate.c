/* 0007cb50 | EngineInterface::Activate */

/* EngineInterface::Activate() */

void __thiscall EngineInterface::Activate(EngineInterface *this)

{
  int extraout_ECX;
  
  FUN_0002e915();
  if (**(int **)("_ZNK3STG18LLogicSceneWrapper15GetAnimTimeDataEv" + extraout_ECX + 0x20) != 0) {
    return;
  }
  **(int **)("_ZNK3STG18LLogicSceneWrapper15GetAnimTimeDataEv" + extraout_ECX + 0x20) = (int)this;
  return;
}


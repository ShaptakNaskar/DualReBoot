/* 0002f448 | STG::FFileManager::CloseFile */

/* STG::FFileManager::CloseFile(STG::FFileBase*&) const */

undefined4 __thiscall STG::FFileManager::CloseFile(FFileManager *this,FFileBase **param_1)

{
  if (*param_1 == (FFileBase *)0x0) {
    return 0;
  }
  (**(code **)(*(int *)*param_1 + 4))();
  *param_1 = (FFileBase *)0x0;
  return 1;
}


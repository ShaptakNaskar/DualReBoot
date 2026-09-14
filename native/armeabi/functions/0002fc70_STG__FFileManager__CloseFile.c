/* 0002fc70 | STG::FFileManager::CloseFile */

/* STG::FFileManager::CloseFile(STG::FFileBase*&) const */

bool __thiscall STG::FFileManager::CloseFile(FFileManager *this,FFileBase **param_1)

{
  FFileBase *pFVar1;
  
  pFVar1 = *param_1;
  if (pFVar1 != (FFileBase *)0x0) {
    (**(code **)(*(int *)pFVar1 + 4))();
    *param_1 = (FFileBase *)0x0;
  }
  return pFVar1 != (FFileBase *)0x0;
}


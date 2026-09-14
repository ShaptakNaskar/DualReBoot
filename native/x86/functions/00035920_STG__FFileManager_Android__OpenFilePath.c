/* 00035920 | STG::FFileManager_Android::OpenFilePath */

/* STG::FFileManager_Android::OpenFilePath(STG::UStringBase<char, int> const&,
   STG::FFileBase::EAccess) const */

FFileMemory_Android * __thiscall
STG::FFileManager_Android::OpenFilePath(undefined4 this,int param_1,int param_3)

{
  char cVar1;
  int iVar2;
  AAsset *pAVar3;
  FFileMemory_Android *this_00;
  FFileMemory_Android *pFVar4;
  
  pFVar4 = (FFileMemory_Android *)0x0;
  iVar2 = FUN_0002e044();
  if ((*(int *)(iVar2 + 0x3c) != 0) && (param_3 == 0)) {
    pAVar3 = (AAsset *)
             AAssetManager_open(*(int *)(iVar2 + 0x3c),
                                *(char **)(param_1 + 0x18) + (**(char **)(param_1 + 0x18) == '/'),3)
    ;
    if (pAVar3 != (AAsset *)0x0) {
      this_00 = operator_new(0x40);
      FFileMemory_Android::FFileMemory_Android(this_00,pAVar3);
      cVar1 = (**(code **)(*(int *)this_00 + 0x1c))(this_00);
      pFVar4 = this_00;
      if (cVar1 == '\0') {
        pFVar4 = (FFileMemory_Android *)0x0;
        (**(code **)(*(int *)this_00 + 4))(this_00);
      }
    }
  }
  return pFVar4;
}


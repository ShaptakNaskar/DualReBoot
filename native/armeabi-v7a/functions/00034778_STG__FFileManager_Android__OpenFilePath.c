/* 00034778 | STG::FFileManager_Android::OpenFilePath */

/* STG::FFileManager_Android::OpenFilePath(STG::UStringBase<char, int> const&,
   STG::FFileBase::EAccess) const */

FFileMemory_Android *
STG::FFileManager_Android::OpenFilePath(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  AAsset *pAVar2;
  FFileMemory_Android *this;
  int iVar3;
  char *pcVar4;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    this = (FFileMemory_Android *)0x0;
  }
  else if (param_3 == 0) {
    pcVar4 = *(char **)(param_2 + 0x18);
    cVar1 = *pcVar4;
    if (cVar1 == '/') {
      pcVar4 = pcVar4 + 1;
    }
    pAVar2 = (AAsset *)AAssetManager_open(*(int *)(param_1 + 0x3c),pcVar4,3,cVar1,param_4);
    if (pAVar2 == (AAsset *)0x0) {
      this = (FFileMemory_Android *)0x0;
    }
    else {
      this = operator_new(0x40);
      FFileMemory_Android::FFileMemory_Android(this,pAVar2);
      iVar3 = (**(code **)(*(int *)this + 0x1c))(this);
      if (iVar3 == 0) {
        (**(code **)(*(int *)this + 4))(this);
        this = (FFileMemory_Android *)0x0;
      }
    }
  }
  else {
    this = (FFileMemory_Android *)0x0;
  }
  return this;
}


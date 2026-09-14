/* 00056bd0 | STG::LLogicScene_HidePrey::SetupIndices */

/* STG::LLogicScene_HidePrey::SetupIndices(STG::LLogicSceneWrapper const&,
   STG::UArrayFixed<STG::UStringBase<char, int>, unsigned long> const&, STG::UArrayFixed<unsigned
   long, unsigned long>&, unsigned long&) */

undefined1 __thiscall
STG::LLogicScene_HidePrey::SetupIndices
          (LLogicScene_HidePrey *this,LLogicSceneWrapper *param_1,UArrayFixed *param_2,
          UArrayFixed *param_3,ulong *param_4)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulong local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x56bdb;
  uVar2 = FUN_0002e044();
  *param_4 = 0;
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 != 0) {
    iVar4 = 0;
    iVar5 = 0;
    while( true ) {
      local_20[0] = 0xffffffff;
      cVar3 = LLogicSceneWrapper::FindModel
                        (param_1,(UStringBase *)(iVar4 + *(int *)param_2),local_20);
      if (cVar3 == '\0') break;
      cVar3 = LLogicSceneWrapper::GetIsModelLoaded(param_1,local_20[0]);
      if (cVar3 != '\0') {
        *(ulong *)(*(int *)param_3 + *param_4 * 4) = local_20[0];
        *param_4 = *param_4 + 1;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x1c;
      if (iVar5 == iVar1) {
        return *param_4 != 0;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}


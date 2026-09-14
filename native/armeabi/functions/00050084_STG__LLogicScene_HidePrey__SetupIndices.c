/* 00050084 | STG::LLogicScene_HidePrey::SetupIndices */

/* STG::LLogicScene_HidePrey::SetupIndices(STG::LLogicSceneWrapper const&,
   STG::UArrayFixed<STG::UStringBase<char, int>, unsigned long> const&, STG::UArrayFixed<unsigned
   long, unsigned long>&, unsigned long&) */

bool __thiscall
STG::LLogicScene_HidePrey::SetupIndices
          (LLogicScene_HidePrey *this,LLogicSceneWrapper *param_1,UArrayFixed *param_2,
          UArrayFixed *param_3,ulong *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  ulong local_2c [2];
  
  iVar3 = 0;
  *param_4 = 0;
  iVar2 = *(int *)(param_2 + 4);
  if (iVar2 == 0) {
    bVar5 = false;
  }
  else {
    iVar4 = 0;
    do {
      local_2c[0] = 0xffffffff;
      iVar1 = LLogicSceneWrapper::FindModel
                        (param_1,(UStringBase *)(*(int *)param_2 + iVar3),local_2c);
      iVar4 = iVar4 + 1;
      if (iVar1 == 0) {
        return false;
      }
      iVar1 = LLogicSceneWrapper::GetIsModelLoaded(param_1,local_2c[0]);
      if (iVar1 != 0) {
        *(ulong *)(*(int *)param_3 + *param_4 * 4) = local_2c[0];
        *param_4 = *param_4 + 1;
      }
      iVar3 = iVar3 + 0x1c;
    } while (iVar4 != iVar2);
    bVar5 = *param_4 != 0;
  }
  return bVar5;
}


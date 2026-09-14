/* 0004d8e0 | STG::LLogicScene_HidePrey::SetupIndices */

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
  
  iVar2 = 0;
  *param_4 = 0;
  iVar4 = *(int *)(param_2 + 4);
  if (iVar4 == 0) {
    bVar5 = false;
  }
  else {
    iVar3 = 0;
    do {
      local_2c[0] = 0xffffffff;
      iVar3 = iVar3 + 1;
      iVar1 = LLogicSceneWrapper::FindModel
                        (param_1,(UStringBase *)(*(int *)param_2 + iVar2),local_2c);
      iVar2 = iVar2 + 0x1c;
      if (iVar1 == 0) {
        return false;
      }
      iVar1 = LLogicSceneWrapper::GetIsModelLoaded(param_1,local_2c[0]);
      if (iVar1 != 0) {
        *(ulong *)(*(int *)param_3 + *param_4 * 4) = local_2c[0];
        *param_4 = *param_4 + 1;
      }
    } while (iVar3 != iVar4);
    bVar5 = *param_4 != 0;
  }
  return bVar5;
}


/* 00055d10 | STG::LLogicScene::Save */

/* STG::LLogicScene::Save(STG::FFileBase&, STG::UArrayFixed<STG::LLogicScene*, unsigned long>
   const&) */

void STG::LLogicScene::Save(FFileBase *param_1,UArrayFixed *param_2)

{
  int iVar1;
  LLogicScene *pLVar2;
  int iVar3;
  int extraout_EDX;
  uint uVar4;
  uint uVar5;
  int local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x55d1b;
  FUN_0002e044();
  local_20[0] = extraout_EDX;
  if (*(int *)(param_2 + 4) != 0) {
    iVar3 = 0;
    do {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      if (*(int *)(*(int *)param_2 + iVar1) != 0) {
        local_20[0] = local_20[0] + 1;
      }
    } while (iVar3 != *(int *)(param_2 + 4));
  }
  FFileBase::Write(param_1,(uchar *)local_20,4);
  uVar4 = *(uint *)(param_2 + 4);
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      pLVar2 = *(LLogicScene **)(*(int *)param_2 + uVar5 * 4);
      if (pLVar2 != (LLogicScene *)0x0) {
        Save(param_1,pLVar2);
        uVar4 = *(uint *)(param_2 + 4);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  return;
}


/* 0004ca68 | STG::LLogicScene::Save */

/* STG::LLogicScene::Save(STG::FFileBase&, STG::UArrayFixed<STG::LLogicScene*, unsigned long>
   const&) */

void STG::LLogicScene::Save(FFileBase *param_1,UArrayFixed *param_2)

{
  int iVar1;
  LLogicScene *pLVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int local_14;
  
  if (*(int *)(param_2 + 4) == 0) {
    local_14 = 0;
  }
  else {
    iVar3 = 0;
    local_14 = 0;
    do {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      if (*(int *)(*(int *)param_2 + iVar1) != 0) {
        local_14 = local_14 + 1;
      }
    } while (iVar3 != *(int *)(param_2 + 4));
  }
  FFileBase::Write(param_1,(uchar *)&local_14,4);
  uVar4 = *(uint *)(param_2 + 4);
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      pLVar2 = *(LLogicScene **)(*(int *)param_2 + uVar5 * 4);
      uVar5 = uVar5 + 1;
      if (pLVar2 != (LLogicScene *)0x0) {
        Save(param_1,pLVar2);
        uVar4 = *(uint *)(param_2 + 4);
      }
    } while (uVar5 < uVar4);
  }
  return;
}


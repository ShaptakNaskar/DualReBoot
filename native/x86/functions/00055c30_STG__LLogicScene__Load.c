/* 00055c30 | STG::LLogicScene::Load */

/* STG::LLogicScene::Load(STG::FFileBase const&, STG::UArrayFixed<STG::LLogicScene*, unsigned
   long>&) */

void STG::LLogicScene::Load(FFileBase *param_1,UArrayFixed *param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint local_20 [3];
  LLogicScene *local_14;
  
  local_14 = (LLogicScene *)0x55c3b;
  FUN_0002e044();
  FFileBase::Read(param_1,(uchar *)local_20,4);
  uVar4 = local_20[0];
  if (local_20[0] != *(uint *)(param_2 + 4)) {
    if (*(uint *)(param_2 + 4) != 0) {
      if (*(void **)param_2 != (void *)0x0) {
        operator_delete__(*(void **)param_2);
      }
      *(undefined4 *)param_2 = 0;
    }
    *(uint *)(param_2 + 4) = uVar4;
    if (uVar4 != 0) {
      pvVar2 = operator_new__(uVar4 << 2);
      iVar1 = *(int *)(param_2 + 4);
      *(void **)param_2 = pvVar2;
      if (iVar1 != 0) {
        iVar3 = 0;
        do {
          *(undefined4 *)(*(int *)param_2 + iVar3 * 4) = 0;
          iVar3 = iVar3 + 1;
        } while (iVar3 != iVar1);
      }
    }
  }
  uVar4 = 0;
  if (local_20[0] != 0) {
    do {
      local_14 = (LLogicScene *)0x0;
      Load(param_1,&local_14);
      *(LLogicScene **)(*(int *)param_2 + uVar4 * 4) = local_14;
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_20[0]);
  }
  return;
}


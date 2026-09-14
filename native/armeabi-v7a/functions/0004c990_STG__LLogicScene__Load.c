/* 0004c990 | STG::LLogicScene::Load */

/* STG::LLogicScene::Load(STG::FFileBase const&, STG::UArrayFixed<STG::LLogicScene*, unsigned
   long>&) */

void STG::LLogicScene::Load(FFileBase *param_1,UArrayFixed *param_2)

{
  void *pvVar1;
  int extraout_r2;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint local_20;
  LLogicScene *local_1c [2];
  
  FFileBase::Read(param_1,(uchar *)&local_20,4);
  uVar5 = local_20;
  if (local_20 != *(uint *)(param_2 + 4)) {
    if (*(uint *)(param_2 + 4) != 0) {
      if (*(void **)param_2 != (void *)0x0) {
        operator_delete__(*(void **)param_2);
      }
      *(undefined4 *)param_2 = 0;
    }
    *(uint *)(param_2 + 4) = uVar5;
    if (uVar5 != 0) {
      pvVar1 = operator_new__(uVar5 << 2);
      iVar4 = *(int *)(param_2 + 4);
      iVar2 = extraout_r2;
      if (iVar4 != 0) {
        iVar2 = 0;
      }
      *(void **)param_2 = pvVar1;
      iVar3 = iVar2;
      if (iVar4 != 0) {
        do {
          *(int *)(*(int *)param_2 + iVar3 * 4) = iVar2;
          iVar3 = iVar3 + 1;
        } while (iVar3 != iVar4);
      }
    }
  }
  if (local_20 != 0) {
    uVar5 = 0;
    do {
      local_1c[0] = (LLogicScene *)0x0;
      Load(param_1,local_1c);
      *(LLogicScene **)(*(int *)param_2 + uVar5 * 4) = local_1c[0];
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_20);
  }
  return;
}


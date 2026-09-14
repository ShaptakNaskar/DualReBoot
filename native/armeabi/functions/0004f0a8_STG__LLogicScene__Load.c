/* 0004f0a8 | STG::LLogicScene::Load */

/* STG::LLogicScene::Load(STG::FFileBase const&, STG::UArrayFixed<STG::LLogicScene*, unsigned
   long>&) */

void STG::LLogicScene::Load(FFileBase *param_1,UArrayFixed *param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_20;
  LLogicScene *local_1c [2];
  
  FFileBase::Read(param_1,(uchar *)&local_20,4);
  uVar4 = local_20;
  if (local_20 != *(uint *)(param_2 + 4)) {
    if (*(uint *)(param_2 + 4) != 0) {
      if (*(void **)param_2 != (void *)0x0) {
        operator_delete__(*(void **)param_2);
      }
      *(undefined4 *)param_2 = 0;
    }
    *(uint *)(param_2 + 4) = uVar4;
    if (uVar4 != 0) {
      pvVar1 = operator_new__(uVar4 << 2);
      iVar3 = *(int *)(param_2 + 4);
      *(void **)param_2 = pvVar1;
      if (iVar3 != 0) {
        iVar2 = 0;
        do {
          *(undefined4 *)(*(int *)param_2 + iVar2 * 4) = 0;
          iVar2 = iVar2 + 1;
        } while (iVar2 != iVar3);
      }
    }
  }
  if (local_20 != 0) {
    uVar4 = 0;
    do {
      local_1c[0] = (LLogicScene *)0x0;
      Load(param_1,local_1c);
      *(LLogicScene **)(*(int *)param_2 + uVar4 * 4) = local_1c[0];
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_20);
  }
  return;
}


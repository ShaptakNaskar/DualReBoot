/* 00055ab0 | STG::LLogicScene::Deallocate */

/* STG::LLogicScene::Deallocate(STG::UArrayFixed<STG::LLogicScene*, unsigned long>&) */

void STG::LLogicScene::Deallocate(UArrayFixed *param_1)

{
  uint uVar1;
  LLogicScene *local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x55ab9;
  FUN_0002e044();
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = 0;
    do {
      local_20[0] = *(LLogicScene **)(*(int *)param_1 + uVar1 * 4);
      Deallocate(local_20);
      *(undefined4 *)(*(int *)param_1 + uVar1 * 4) = 0;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 4));
    if (*(uint *)(param_1 + 4) != 0) {
      if (*(void **)param_1 != (void *)0x0) {
        operator_delete__(*(void **)param_1);
      }
      *(undefined4 *)param_1 = 0;
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  return;
}


/* 0004c870 | STG::LLogicScene::Deallocate */

/* STG::LLogicScene::Deallocate(STG::UArrayFixed<STG::LLogicScene*, unsigned long>&) */

void STG::LLogicScene::Deallocate(UArrayFixed *param_1)

{
  uint uVar1;
  uint uVar2;
  LLogicScene *local_14;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar2 = 0;
    do {
      local_14 = *(LLogicScene **)(*(int *)param_1 + uVar2 * 4);
      Deallocate(&local_14);
      uVar1 = *(uint *)(param_1 + 4);
      *(undefined4 *)(*(int *)param_1 + uVar2 * 4) = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
    if (uVar1 != 0) {
      if (*(void **)param_1 != (void *)0x0) {
        operator_delete__(*(void **)param_1);
      }
      *(undefined4 *)param_1 = 0;
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  return;
}


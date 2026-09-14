/* 0004ef58 | STG::LLogicScene::Deallocate */

/* STG::LLogicScene::Deallocate(STG::LLogicScene*&) */

void STG::LLogicScene::Deallocate(LLogicScene **param_1)

{
  if (*param_1 != (LLogicScene *)0x0) {
    (**(code **)(*(int *)*param_1 + 4))();
  }
  *param_1 = (LLogicScene *)0x0;
  return;
}


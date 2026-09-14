/* 00055a80 | STG::LLogicScene::Deallocate */

/* STG::LLogicScene::Deallocate(STG::LLogicScene*&) */

void STG::LLogicScene::Deallocate(LLogicScene **param_1)

{
  LLogicScene *pLVar1;
  
  pLVar1 = *param_1;
  if (pLVar1 != (LLogicScene *)0x0) {
    (**(code **)(*(int *)pLVar1 + 4))(pLVar1);
  }
  *param_1 = (LLogicScene *)0x0;
  return;
}


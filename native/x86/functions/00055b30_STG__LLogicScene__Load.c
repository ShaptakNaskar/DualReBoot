/* 00055b30 | STG::LLogicScene::Load */

/* STG::LLogicScene::Load(STG::FFileBase const&, STG::LLogicScene*&) */

void STG::LLogicScene::Load(FFileBase *param_1,LLogicScene **param_2)

{
  LLogicScene *pLVar1;
  uchar local_14 [4];
  undefined4 local_10;
  undefined4 uStack_c;
  
  uStack_c = 0x55b37;
  FUN_0002e044();
  FFileBase::Read(param_1,local_14,4);
  FFileBase::Read(param_1,(uchar *)&local_10,4);
  pLVar1 = (LLogicScene *)Allocate(local_10);
  *param_2 = pLVar1;
  (**(code **)(*(int *)pLVar1 + 8))(pLVar1,param_1);
  return;
}


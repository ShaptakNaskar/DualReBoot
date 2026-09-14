/* 0004effc | STG::LLogicScene::Load */

/* STG::LLogicScene::Load(STG::FFileBase const&, STG::LLogicScene*&) */

void STG::LLogicScene::Load(FFileBase *param_1,LLogicScene **param_2)

{
  LLogicScene *pLVar1;
  uchar auStack_18 [4];
  undefined4 local_14 [2];
  
  FFileBase::Read(param_1,auStack_18,4);
  FFileBase::Read(param_1,(uchar *)local_14,4);
  pLVar1 = (LLogicScene *)Allocate(local_14[0]);
  *param_2 = pLVar1;
  (**(code **)(*(int *)pLVar1 + 8))(pLVar1,param_1);
  return;
}


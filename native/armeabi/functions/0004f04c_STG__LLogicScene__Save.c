/* 0004f04c | STG::LLogicScene::Save */

/* STG::LLogicScene::Save(STG::FFileBase&, STG::LLogicScene const*) */

void STG::LLogicScene::Save(FFileBase *param_1,LLogicScene *param_2)

{
  undefined4 local_14;
  
  local_14 = 1;
  FFileBase::Write(param_1,(uchar *)&local_14,4);
  local_14 = *(undefined4 *)(param_2 + 4);
  FFileBase::Write(param_1,(uchar *)&local_14,4);
  (**(code **)(*(int *)param_2 + 0xc))(param_2,param_1);
  return;
}


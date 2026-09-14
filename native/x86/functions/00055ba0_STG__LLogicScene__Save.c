/* 00055ba0 | STG::LLogicScene::Save */

/* STG::LLogicScene::Save(STG::FFileBase&, STG::LLogicScene const*) */

void STG::LLogicScene::Save(FFileBase *param_1,LLogicScene *param_2)

{
  undefined4 local_20 [4];
  
  FUN_0002e044();
  local_20[0] = 1;
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(undefined4 *)(param_2 + 4);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  (**(code **)(*(int *)param_2 + 0xc))(param_2,param_1);
  return;
}


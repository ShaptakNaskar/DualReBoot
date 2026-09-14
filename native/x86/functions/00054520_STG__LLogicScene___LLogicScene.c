/* 00054520 | STG::LLogicScene::~LLogicScene */

/* STG::LLogicScene::~LLogicScene() */

void __thiscall STG::LLogicScene::~LLogicScene(LLogicScene *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x479b2) + 8;
  operator_delete(this);
  return;
}


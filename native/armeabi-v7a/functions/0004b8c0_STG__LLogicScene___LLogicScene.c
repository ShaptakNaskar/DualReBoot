/* 0004b8c0 | STG::LLogicScene::~LLogicScene */

/* STG::LLogicScene::~LLogicScene() */

LLogicScene * __thiscall STG::LLogicScene::~LLogicScene(LLogicScene *this)

{
  *(int *)this = *(int *)(DAT_0004b8e4 + 0x4b8d0) + 8;
  operator_delete(this);
  return this;
}


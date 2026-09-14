/* 0004dd28 | STG::LLogicScene::~LLogicScene */

/* STG::LLogicScene::~LLogicScene() */

LLogicScene * __thiscall STG::LLogicScene::~LLogicScene(LLogicScene *this)

{
  *(int *)this = *(int *)(DAT_0004dd4c + 0x4dd38) + 8;
  operator_delete(this);
  return this;
}


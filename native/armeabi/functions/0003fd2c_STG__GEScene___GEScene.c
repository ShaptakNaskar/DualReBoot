/* 0003fd2c | STG::GEScene::~GEScene */

/* STG::GEScene::~GEScene() */

GEScene * __thiscall STG::GEScene::~GEScene(GEScene *this)

{
  ~GEScene(this);
  operator_delete(this);
  return this;
}


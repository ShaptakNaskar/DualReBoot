/* 0004d448 | STG::GETextureSwapContainer::~GETextureSwapContainer */

/* STG::GETextureSwapContainer::~GETextureSwapContainer() */

GETextureSwapContainer * __thiscall
STG::GETextureSwapContainer::~GETextureSwapContainer(GETextureSwapContainer *this)

{
  ~GETextureSwapContainer(this);
  operator_delete(this);
  return this;
}


/* 00048dac | STG::GETexture::~GETexture */

/* STG::GETexture::~GETexture() */

GETexture * __thiscall STG::GETexture::~GETexture(GETexture *this)

{
  ~GETexture(this);
  operator_delete(this);
  return this;
}


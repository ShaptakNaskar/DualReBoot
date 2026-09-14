/* 00038e80 | STG::GEFont::~GEFont */

/* STG::GEFont::~GEFont() */

GEFont * __thiscall STG::GEFont::~GEFont(GEFont *this)

{
  ~GEFont(this);
  operator_delete(this);
  return this;
}


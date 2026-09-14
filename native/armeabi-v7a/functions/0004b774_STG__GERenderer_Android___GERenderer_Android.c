/* 0004b774 | STG::GERenderer_Android::~GERenderer_Android */

/* STG::GERenderer_Android::~GERenderer_Android() */

GERenderer_Android * __thiscall
STG::GERenderer_Android::~GERenderer_Android(GERenderer_Android *this)

{
  ~GERenderer_Android(this);
  operator_delete(this);
  return this;
}


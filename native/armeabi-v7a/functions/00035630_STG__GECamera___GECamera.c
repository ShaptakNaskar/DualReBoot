/* 00035630 | STG::GECamera::~GECamera */

/* STG::GECamera::~GECamera() */

GECamera * __thiscall STG::GECamera::~GECamera(GECamera *this)

{
  ~GECamera(this);
  operator_delete(this);
  return this;
}


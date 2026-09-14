/* 00038000 | STG::GEMaterial::~GEMaterial */

/* STG::GEMaterial::~GEMaterial() */

GEMaterial * __thiscall STG::GEMaterial::~GEMaterial(GEMaterial *this)

{
  ~GEMaterial(this);
  operator_delete(this);
  return this;
}


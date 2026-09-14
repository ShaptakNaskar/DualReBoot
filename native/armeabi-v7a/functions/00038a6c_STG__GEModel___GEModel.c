/* 00038a6c | STG::GEModel::~GEModel */

/* STG::GEModel::~GEModel() */

GEModel * __thiscall STG::GEModel::~GEModel(GEModel *this)

{
  ~GEModel(this);
  operator_delete(this);
  return this;
}


/* 0003bf20 | STG::GERenderer::~GERenderer */

/* STG::GERenderer::~GERenderer() */

GERenderer * __thiscall STG::GERenderer::~GERenderer(GERenderer *this)

{
  ~GERenderer(this);
  operator_delete(this);
  return this;
}


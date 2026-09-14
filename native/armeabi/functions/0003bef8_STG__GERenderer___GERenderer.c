/* 0003bef8 | STG::GERenderer::~GERenderer */

/* STG::GERenderer::~GERenderer() */

GERenderer * __thiscall STG::GERenderer::~GERenderer(GERenderer *this)

{
  *(int *)this = *(int *)(DAT_0003bf1c + 0x3bf08) + 8;
  GECamera::~GECamera((GECamera *)(this + 0x104));
  return this;
}


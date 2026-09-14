/* 00039b10 | STG::GERenderer::~GERenderer */

/* STG::GERenderer::~GERenderer() */

GERenderer * __thiscall STG::GERenderer::~GERenderer(GERenderer *this)

{
  *(int *)this = *(int *)(DAT_00039b34 + 0x39b20) + 8;
  GECamera::~GECamera((GECamera *)(this + 0x104));
  return this;
}


/* 0004dbb4 | STG::GERenderer_Android::~GERenderer_Android */

/* STG::GERenderer_Android::~GERenderer_Android() */

GERenderer_Android * __thiscall
STG::GERenderer_Android::~GERenderer_Android(GERenderer_Android *this)

{
  *(int *)this = *(int *)(DAT_0004dbd8 + 0x4dbc4) + 8;
  GERenderer::~GERenderer((GERenderer *)this);
  return this;
}


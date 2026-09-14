/* 0004b74c | STG::GERenderer_Android::~GERenderer_Android */

/* STG::GERenderer_Android::~GERenderer_Android() */

GERenderer_Android * __thiscall
STG::GERenderer_Android::~GERenderer_Android(GERenderer_Android *this)

{
  *(int *)this = *(int *)(DAT_0004b770 + 0x4b75c) + 8;
  GERenderer::~GERenderer((GERenderer *)this);
  return this;
}


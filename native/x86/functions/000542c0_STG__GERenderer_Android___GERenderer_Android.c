/* 000542c0 | STG::GERenderer_Android::~GERenderer_Android */

/* STG::GERenderer_Android::~GERenderer_Android() */

void __thiscall STG::GERenderer_Android::~GERenderer_Android(GERenderer_Android *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x47c0a) + 8;
  GERenderer::~GERenderer((GERenderer *)this);
  return;
}


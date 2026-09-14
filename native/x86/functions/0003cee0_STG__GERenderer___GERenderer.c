/* 0003cee0 | STG::GERenderer::~GERenderer */

/* STG::GERenderer::~GERenderer() */

void __thiscall STG::GERenderer::~GERenderer(GERenderer *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x5efc2) + 8;
  GECamera::~GECamera((GECamera *)(this + 0x104));
  return;
}


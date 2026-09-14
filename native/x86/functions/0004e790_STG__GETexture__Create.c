/* 0004e790 | STG::GETexture::Create */

/* STG::GETexture::Create(unsigned long, unsigned long, STG::GEPixelFormat::EFormat) */

bool __thiscall
STG::GETexture::Create(GETexture *this,undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  bool bVar1;
  
  FUN_0002e044();
  *(undefined4 *)(this + 0x30) = param_2;
  *(undefined4 *)(this + 0x2c) = param_1;
  GERendererAPI::GL_GenTexture((ulong *)(this + 0x94));
  GERendererAPI::GL_BindTexture(*(ulong *)(this + 0x94));
  GERendererAPI::GL_LoadTexImage2D(param_4,param_4,param_1,param_2,1,0);
  GERendererAPI::GL_UnbindTexture();
  bVar1 = false;
  if ((*(int *)(this + 0x94) - 1U < 0xfffffffe) && (*(int *)(this + 0x2c) != 0)) {
    bVar1 = *(int *)(this + 0x30) != 0;
  }
  return bVar1;
}


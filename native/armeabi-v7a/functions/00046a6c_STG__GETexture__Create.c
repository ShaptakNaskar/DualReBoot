/* 00046a6c | STG::GETexture::Create */

/* STG::GETexture::Create(unsigned long, unsigned long, STG::GEPixelFormat::EFormat) */

undefined4 __thiscall
STG::GETexture::Create(GETexture *this,undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0x2c) = param_1;
  *(undefined4 *)(this + 0x30) = param_2;
  GERendererAPI::GL_GenTexture((ulong *)(this + 0x94));
  GERendererAPI::GL_BindTexture(*(ulong *)(this + 0x94));
  GERendererAPI::GL_LoadTexImage2D(param_4,param_4,param_1,param_2,1,0);
  GERendererAPI::GL_UnbindTexture();
  if (*(int *)(this + 0x94) - 1U < 0xfffffffe) {
    uVar1 = 0;
    if ((*(int *)(this + 0x2c) != 0) && (uVar1 = 0, *(int *)(this + 0x30) != 0)) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


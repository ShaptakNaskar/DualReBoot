/* 0003bab0 | STG::GEPixelData::SetFormat */

/* STG::GEPixelData::SetFormat(STG::GEPixelFormat::EFormat) */

void __thiscall STG::GEPixelData::SetFormat(GEPixelData *this,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)this = param_2;
  uVar1 = GERendererAPI::GL_GetTextureBitPerPixel(param_2);
  *(uint *)(this + 4) = uVar1 >> 3;
  uVar2 = GERendererAPI::GL_GetTextureNumChannels(*(undefined4 *)this);
  *(undefined4 *)(this + 8) = uVar2;
  return;
}


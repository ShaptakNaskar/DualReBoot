/* 0006f810 | STG::UPreference_TextureSwap::~UPreference_TextureSwap */

/* STG::UPreference_TextureSwap::~UPreference_TextureSwap() */

UPreference_TextureSwap * __thiscall
STG::UPreference_TextureSwap::~UPreference_TextureSwap(UPreference_TextureSwap *this)

{
  ~UPreference_TextureSwap(this);
  operator_delete(this);
  return this;
}


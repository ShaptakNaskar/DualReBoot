/* 0006f788 | STG::UPreference_TextureSwap::~UPreference_TextureSwap */

/* STG::UPreference_TextureSwap::~UPreference_TextureSwap() */

UPreference_TextureSwap * __thiscall
STG::UPreference_TextureSwap::~UPreference_TextureSwap(UPreference_TextureSwap *this)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(this + 0x7c);
  *(int *)this = *(int *)(DAT_0006f80c + 0x6f7a0) + 8;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4) * 0x1c + iVar2;
    if (iVar2 != iVar3) {
      do {
        puVar1 = (undefined4 *)(iVar3 + -0x1c);
        iVar3 = iVar3 + -0x1c;
        (**(code **)*puVar1)(iVar3);
        iVar2 = *(int *)(this + 0x7c);
      } while (iVar2 != iVar3);
    }
    operator_delete__((void *)(iVar2 + -8));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  return this;
}


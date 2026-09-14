/* 0006b1c4 | STG::UPreference_TextureGroup::SetChild */

/* STG::UPreference_TextureGroup::SetChild(unsigned long, STG::UPreference_TextureSwap&) */

void __thiscall
STG::UPreference_TextureGroup::SetChild
          (UPreference_TextureGroup *this,ulong param_1,UPreference_TextureSwap *param_2)

{
  *(UPreference_TextureSwap **)(*(int *)(this + 0x90) + param_1 * 4) = param_2;
  return;
}


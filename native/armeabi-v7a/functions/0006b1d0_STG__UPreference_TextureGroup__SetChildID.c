/* 0006b1d0 | STG::UPreference_TextureGroup::SetChildID */

/* STG::UPreference_TextureGroup::SetChildID(unsigned long, unsigned long) */

void __thiscall
STG::UPreference_TextureGroup::SetChildID
          (UPreference_TextureGroup *this,ulong param_1,ulong param_2)

{
  *(ulong *)(*(int *)(this + 0x88) + param_1 * 4) = param_2;
  return;
}


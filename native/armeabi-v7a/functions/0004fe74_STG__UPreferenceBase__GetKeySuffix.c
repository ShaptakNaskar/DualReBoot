/* 0004fe74 | STG::UPreferenceBase::GetKeySuffix */

/* STG::UPreferenceBase::GetKeySuffix(STG::UStringBase<char, int>&) const */

UPreferenceBase * __thiscall
STG::UPreferenceBase::GetKeySuffix(UPreferenceBase *this,UStringBase *param_1)

{
  if (*(undefined1 **)(param_1 + 0x18) != *(undefined1 **)(param_1 + 0x14)) {
    **(undefined1 **)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  }
  return this;
}


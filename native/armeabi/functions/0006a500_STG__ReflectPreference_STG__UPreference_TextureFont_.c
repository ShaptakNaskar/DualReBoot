/* 0006a500 | STG::ReflectPreference<STG::UPreference_TextureFont> */

/* bool STG::ReflectPreference<STG::UPreference_TextureFont>(STG::FFileBase&,
   STG::UPreference_TextureFont const&, bool) */

bool __thiscall
STG::ReflectPreference<STG::UPreference_TextureFont>
          (STG *this,FFileBase *param_1,UPreference_TextureFont *param_2,bool param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)param_3;
  iVar1 = (**(code **)(*(int *)param_1 + 4))(param_1);
  if (iVar1 == 0) {
    return false;
  }
  (**(code **)(*(int *)this + 0xc))
            (this,DAT_0006a5f4 + 0x6a540,*(undefined4 *)(param_1 + 0x1c),
             *(code **)(*(int *)this + 0xc),uVar2);
  (**(code **)(*(int *)this + 0xc))(this,DAT_0006a5f8 + 0x6a55c,*(undefined4 *)(param_1 + 0x38));
  (**(code **)(*(int *)this + 0xc))(this,DAT_0006a5fc + 0x6a57c,*(undefined4 *)(param_1 + 0x54));
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x6c)) {
    (**(code **)(*(int *)this + 0xc))(this,DAT_0006a600 + 0x6a5a4);
  }
  (**(code **)(*(int *)this + 0xc))(this,DAT_0006a604 + 0x6a5bc);
  (**(code **)(*(int *)this + 0xc))(this,DAT_0006a608 + 0x6a5d4);
  (**(code **)(*(int *)this + 0xc))(this,DAT_0006a60c + 0x6a5ec);
  return true;
}


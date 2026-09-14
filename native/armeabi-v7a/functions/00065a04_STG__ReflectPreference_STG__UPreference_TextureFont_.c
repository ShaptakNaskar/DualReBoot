/* 00065a04 | STG::ReflectPreference<STG::UPreference_TextureFont> */

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
            (this,DAT_00065af4 + 0x65a40,*(undefined4 *)(param_1 + 0x1c),
             *(code **)(*(int *)this + 0xc),uVar2);
  (**(code **)(*(int *)this + 0xc))(this,DAT_00065af8 + 0x65a5c,*(undefined4 *)(param_1 + 0x38));
  (**(code **)(*(int *)this + 0xc))(this,DAT_00065afc + 0x65a7c,*(undefined4 *)(param_1 + 0x54));
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x6c)) {
    (**(code **)(*(int *)this + 0xc))(this,DAT_00065b00 + 0x65aa4);
  }
  (**(code **)(*(int *)this + 0xc))(this,DAT_00065b04 + 0x65abc);
  (**(code **)(*(int *)this + 0xc))(this,DAT_00065b08 + 0x65ad0);
  (**(code **)(*(int *)this + 0xc))(this,DAT_00065b0c + 0x65aec);
  return true;
}


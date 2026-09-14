/* 00065b10 | STG::ReflectPreference<STG::UPreference_FileChooser_Texture> */

/* bool STG::ReflectPreference<STG::UPreference_FileChooser_Texture>(STG::FFileBase&,
   STG::UPreference_FileChooser_Texture const&, bool) */

bool __thiscall
STG::ReflectPreference<STG::UPreference_FileChooser_Texture>
          (STG *this,FFileBase *param_1,UPreference_FileChooser_Texture *param_2,bool param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)param_3;
  iVar1 = (**(code **)(*(int *)param_1 + 4))(param_1);
  if (iVar1 == 0) {
    return false;
  }
  (**(code **)(*(int *)this + 0xc))
            (this,DAT_00065c00 + 0x65b4c,*(undefined4 *)(param_1 + 0x1c),
             *(code **)(*(int *)this + 0xc),uVar2);
  (**(code **)(*(int *)this + 0xc))(this,DAT_00065c04 + 0x65b68,*(undefined4 *)(param_1 + 0x38));
  (**(code **)(*(int *)this + 0xc))(this,DAT_00065c08 + 0x65b88,*(undefined4 *)(param_1 + 0x54));
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x6c)) {
    (**(code **)(*(int *)this + 0xc))(this,DAT_00065c0c + 0x65bb0);
  }
  (**(code **)(*(int *)this + 0xc))(this,DAT_00065c10 + 0x65bc8);
  (**(code **)(*(int *)this + 0xc))(this,DAT_00065c14 + 0x65bdc);
  (**(code **)(*(int *)this + 0xc))(this,DAT_00065c18 + 0x65bf8);
  return true;
}


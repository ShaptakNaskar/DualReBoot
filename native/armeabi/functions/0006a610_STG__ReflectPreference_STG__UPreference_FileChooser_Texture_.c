/* 0006a610 | STG::ReflectPreference<STG::UPreference_FileChooser_Texture> */

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
            (this,DAT_0006a704 + 0x6a650,*(undefined4 *)(param_1 + 0x1c),
             *(code **)(*(int *)this + 0xc),uVar2);
  (**(code **)(*(int *)this + 0xc))(this,DAT_0006a708 + 0x6a66c,*(undefined4 *)(param_1 + 0x38));
  (**(code **)(*(int *)this + 0xc))(this,DAT_0006a70c + 0x6a68c,*(undefined4 *)(param_1 + 0x54));
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x6c)) {
    (**(code **)(*(int *)this + 0xc))(this,DAT_0006a710 + 0x6a6b4);
  }
  (**(code **)(*(int *)this + 0xc))(this,DAT_0006a714 + 0x6a6cc);
  (**(code **)(*(int *)this + 0xc))(this,DAT_0006a718 + 0x6a6e4);
  (**(code **)(*(int *)this + 0xc))(this,DAT_0006a71c + 0x6a6fc);
  return true;
}


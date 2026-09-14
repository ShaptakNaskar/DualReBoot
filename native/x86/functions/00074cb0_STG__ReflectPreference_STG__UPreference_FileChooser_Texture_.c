/* 00074cb0 | STG::ReflectPreference<STG::UPreference_FileChooser_Texture> */

/* bool STG::ReflectPreference<STG::UPreference_FileChooser_Texture>(STG::FFileBase&,
   STG::UPreference_FileChooser_Texture const&, bool) */

bool STG::ReflectPreference<STG::UPreference_FileChooser_Texture>
               (FFileBase *param_1,UPreference_FileChooser_Texture *param_2,bool param_3)

{
  char cVar1;
  bool bVar2;
  int unaff_EBX;
  
  FUN_0002e044();
  cVar1 = (**(code **)(*(int *)param_2 + 4))(param_2);
  bVar2 = false;
  if (cVar1 != '\0') {
    (**(code **)(*(int *)param_1 + 0xc))
              (param_1,unaff_EBX + 0x126fe,*(undefined4 *)(param_2 + 0x1c));
    (**(code **)(*(int *)param_1 + 0xc))
              (param_1,unaff_EBX + 0x12713,*(undefined4 *)(param_2 + 0x38));
    (**(code **)(*(int *)param_1 + 0xc))
              (param_1,unaff_EBX + 0x12728,*(undefined4 *)(param_2 + 0x54));
    if (*(int *)(param_2 + 0x70) != *(int *)(param_2 + 0x6c)) {
      (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x1273d,*(int *)(param_2 + 0x70));
    }
    (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x12752);
    (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x1276e);
    (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x1276b);
    bVar2 = true;
  }
  return bVar2;
}


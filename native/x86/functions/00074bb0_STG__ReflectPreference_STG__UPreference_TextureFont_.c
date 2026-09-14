/* 00074bb0 | STG::ReflectPreference<STG::UPreference_TextureFont> */

/* bool STG::ReflectPreference<STG::UPreference_TextureFont>(STG::FFileBase&,
   STG::UPreference_TextureFont const&, bool) */

bool STG::ReflectPreference<STG::UPreference_TextureFont>
               (FFileBase *param_1,UPreference_TextureFont *param_2,bool param_3)

{
  char cVar1;
  bool bVar2;
  int unaff_EBX;
  
  FUN_0002e044();
  cVar1 = (**(code **)(*(int *)param_2 + 4))(param_2);
  bVar2 = false;
  if (cVar1 != '\0') {
    (**(code **)(*(int *)param_1 + 0xc))
              (param_1,unaff_EBX + 0x127fe,*(undefined4 *)(param_2 + 0x1c));
    (**(code **)(*(int *)param_1 + 0xc))
              (param_1,unaff_EBX + 0x12813,*(undefined4 *)(param_2 + 0x38));
    (**(code **)(*(int *)param_1 + 0xc))
              (param_1,unaff_EBX + 0x12828,*(undefined4 *)(param_2 + 0x54));
    if (*(int *)(param_2 + 0x70) != *(int *)(param_2 + 0x6c)) {
      (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x1283d,*(int *)(param_2 + 0x70));
    }
    (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x12852);
    (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x1286e);
    (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x1286b);
    bVar2 = true;
  }
  return bVar2;
}


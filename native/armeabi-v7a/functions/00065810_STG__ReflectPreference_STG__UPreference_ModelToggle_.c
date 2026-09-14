/* 00065810 | STG::ReflectPreference<STG::UPreference_ModelToggle> */

/* bool STG::ReflectPreference<STG::UPreference_ModelToggle>(STG::FFileBase&,
   STG::UPreference_ModelToggle const&, bool) */

bool STG::ReflectPreference<STG::UPreference_ModelToggle>
               (FFileBase *param_1,UPreference_ModelToggle *param_2,bool param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int local_38;
  uint local_34 [4];
  uint *local_24;
  uint *local_20;
  int local_1c;
  
  piVar3 = *(int **)(DAT_000659d8 + 0x65830);
  local_1c = *piVar3;
  iVar2 = (**(code **)(*(int *)param_2 + 4))(param_2);
  bVar1 = false;
  if (iVar2 != 0) {
    (**(code **)(*(int *)param_1 + 0xc))
              (param_1,DAT_000659dc + 0x65878,*(undefined4 *)(param_2 + 0x1c));
    (**(code **)(*(int *)param_1 + 0xc))
              (param_1,DAT_000659e0 + 0x65894,*(undefined4 *)(param_2 + 0x38));
    (**(code **)(*(int *)param_1 + 0xc))
              (param_1,DAT_000659e4 + 0x658b4,*(undefined4 *)(param_2 + 0x54));
    if (*(int *)(param_2 + 0x70) != *(int *)(param_2 + 0x6c)) {
      (**(code **)(*(int *)param_1 + 0xc))(param_1,DAT_000659e8 + 0x658dc);
    }
    (**(code **)(*(int *)param_1 + 0xc))(param_1,DAT_000659ec + 0x658f4);
    (**(code **)(*(int *)param_1 + 0xc))(param_1,DAT_000659f0 + 0x6590c);
    iVar2 = *(int *)(DAT_000659f4 + 0x6592c) + 8;
    local_34[0] = local_34[0] & 0xffffff00;
    local_38 = iVar2;
    local_24 = local_34;
    local_20 = local_34;
    (**(code **)(*(int *)param_2 + 0x28))(param_2,0,&local_38);
    (**(code **)(*(int *)param_1 + 0xc))(param_1,DAT_000659f8 + 0x65964,local_20);
    (**(code **)(*(int *)param_1 + 0xc))(param_1,DAT_000659fc + 0x65980);
    local_38 = iVar2;
    if ((local_20 != local_34) && (local_20 != (uint *)0x0)) {
      if (local_34[0] - (int)local_20 < 0x81) {
        std::__node_alloc::_M_deallocate(local_20,local_34[0] - (int)local_20);
      }
      else {
        operator_delete(local_20);
      }
    }
    (**(code **)(*(int *)param_1 + 0xc))(param_1,DAT_00065a00 + 0x659c4);
    bVar1 = true;
  }
  if (local_1c == *piVar3) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


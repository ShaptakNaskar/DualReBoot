/* 00074a00 | STG::ReflectPreference<STG::UPreference_ModelToggle> */

/* bool STG::ReflectPreference<STG::UPreference_ModelToggle>(STG::FFileBase&,
   STG::UPreference_ModelToggle const&, bool) */

bool STG::ReflectPreference<STG::UPreference_ModelToggle>
               (FFileBase *param_1,UPreference_ModelToggle *param_2,bool param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  int unaff_EBX;
  int local_30;
  uint local_2c [4];
  uint *local_1c;
  uint *local_18;
  int local_14;
  
  local_14 = 0x74a0b;
  FUN_0002e044();
  local_14 = **(int **)(
                       "_ZNSt4priv14_Pthread_alloc8allocateERjPNS_31_Pthread_alloc_per_thread_stateE"
                       + unaff_EBX + 0x38);
  cVar1 = (**(code **)(*(int *)param_2 + 4))(param_2);
  bVar3 = false;
  if (cVar1 != '\0') {
    (**(code **)(*(int *)param_1 + 0xc))
              (param_1,unaff_EBX + 0x129b4,*(undefined4 *)(param_2 + 0x1c));
    (**(code **)(*(int *)param_1 + 0xc))
              (param_1,unaff_EBX + 0x129c9,*(undefined4 *)(param_2 + 0x38));
    (**(code **)(*(int *)param_1 + 0xc))
              (param_1,unaff_EBX + 0x129de,*(undefined4 *)(param_2 + 0x54));
    if (*(int *)(param_2 + 0x70) != *(int *)(param_2 + 0x6c)) {
      (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x129f3,*(int *)(param_2 + 0x70));
    }
    (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x12a08);
    (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x12a16);
    iVar2 = *(int *)("_ZNSt4priv14_Pthread_alloc8allocateERjPNS_31_Pthread_alloc_per_thread_stateE"
                    + unaff_EBX + 0x3c) + 8;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_30 = iVar2;
    local_1c = local_2c;
    local_18 = local_2c;
    (**(code **)(*(int *)param_2 + 0x28))(param_2,0,&local_30);
    (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x12a19,local_18);
    (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x12a1e);
    local_30 = iVar2;
    if ((local_18 != local_2c) && (local_18 != (uint *)0x0)) {
      if (local_2c[0] - (int)local_18 < 0x81) {
        std::__node_alloc::_M_deallocate(local_18,local_2c[0] - (int)local_18);
      }
      else {
        operator_delete(local_18);
      }
    }
    (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x12a21);
    bVar3 = true;
  }
  if (local_14 ==
      **(int **)("_ZNSt4priv14_Pthread_alloc8allocateERjPNS_31_Pthread_alloc_per_thread_stateE" +
                unaff_EBX + 0x38)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}


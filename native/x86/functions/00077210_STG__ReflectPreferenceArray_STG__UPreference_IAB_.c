/* 00077210 | STG::ReflectPreferenceArray<STG::UPreference_IAB> */

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* bool STG::ReflectPreferenceArray<STG::UPreference_IAB>(STG::FFileBase&, STG::UPreference_IAB
   const*, STG::UPreference_IAB const*, char const*, bool) */

bool STG::ReflectPreferenceArray<STG::UPreference_IAB>
               (FFileBase *param_1,UPreference_IAB *param_2,UPreference_IAB *param_3,char *param_4,
               bool param_5)

{
  char cVar1;
  int iVar2;
  int unaff_EBX;
  int iVar3;
  int iVar4;
  UPreference_IAB *pUVar5;
  int local_60;
  uint *local_54;
  int local_4c;
  int local_30;
  uint local_2c [4];
  uint *local_1c;
  uint *local_18;
  int local_14;
  
  local_14 = 0x7721b;
  FUN_0002e044();
  local_14 = **(int **)("_ZTVN3STG17UPreference_SceneE" + unaff_EBX + 9);
  if (param_2 < param_3) {
    iVar3 = 0;
    pUVar5 = param_2;
    do {
      cVar1 = (**(code **)(*(int *)pUVar5 + 4))(pUVar5);
      pUVar5 = pUVar5 + 0x8c;
      iVar3 = (iVar3 + 1) - (uint)(cVar1 == '\0');
    } while (pUVar5 < param_3);
    (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x10264);
    (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x10267,param_4);
    if (iVar3 != 0) {
      (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x10271);
      local_4c = 0;
      do {
        cVar1 = (**(code **)(*(int *)param_2 + 4))(param_2);
        if (cVar1 != '\0') {
          iVar2 = (**(code **)(*(int *)param_2 + 0x18))(param_2);
          (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x101a4,*(int *)(param_2 + 0x1c))
          ;
          (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x101b9,*(int *)(param_2 + 0x38))
          ;
          (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x101ce,*(int *)(param_2 + 0x54))
          ;
          if (*(int *)(param_2 + 0x70) != *(int *)(param_2 + 0x6c)) {
            (**(code **)(*(int *)param_1 + 0xc))
                      (param_1,unaff_EBX + 0x101e3,*(int *)(param_2 + 0x70));
          }
          (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x101f8);
          iVar4 = *(int *)param_1;
          if (iVar2 == 0) {
            (**(code **)(iVar4 + 0xc))(param_1,unaff_EBX + 0x10214);
          }
          else {
            if (iVar2 == 1) {
              (**(code **)(iVar4 + 0xc))(param_1,unaff_EBX + 0x10206);
LAB_000773ff:
              local_60 = *(int *)("_ZTVN3STG17UPreference_SceneE" + unaff_EBX + 0xd);
              local_1c = local_2c;
              local_2c[0] = local_2c[0] & 0xffffff00;
              local_30 = local_60 + 8;
              iVar4 = 0;
              local_18 = local_1c;
              while( true ) {
                (**(code **)(*(int *)param_2 + 0x28))(param_2,iVar4,&local_30);
                iVar4 = iVar4 + 1;
                (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x10209,local_18);
                if (iVar2 == iVar4) break;
                (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x10276);
              }
            }
            else {
              (**(code **)(iVar4 + 0xc))();
              if (!param_5) goto LAB_000773ff;
              (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x10264);
              local_60 = *(int *)("_ZTVN3STG17UPreference_SceneE" + unaff_EBX + 0xd);
              local_2c[0] = local_2c[0] & 0xffffff00;
              local_30 = local_60 + 8;
              local_1c = local_2c;
              iVar4 = 0;
              local_18 = local_1c;
              do {
                (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x10279);
                (**(code **)(*(int *)param_2 + 0x28))(param_2,iVar4,&local_30);
                iVar4 = iVar4 + 1;
                (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x10209,local_18);
                if (iVar2 != iVar4) {
                  (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x1027d);
                }
              } while (iVar4 != iVar2);
            }
            local_54 = local_2c;
            (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x1020e);
            local_30 = local_60 + 8;
            if ((local_18 != local_54) && (local_18 != (uint *)0x0)) {
              if (local_2c[0] - (int)local_18 < 0x81) {
                std::__node_alloc::_M_deallocate(local_18,local_2c[0] - (int)local_18);
              }
              else {
                operator_delete(local_18);
              }
            }
          }
          (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x10211);
          local_4c = local_4c + 1;
          if (local_4c != iVar3) {
            (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x10281);
          }
        }
        param_2 = param_2 + 0x8c;
      } while (param_2 < param_3);
      (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x10116);
    }
  }
  else {
    (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x10264);
    (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x10267,param_4);
  }
  (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x10287);
  if (local_14 != **(int **)("_ZTVN3STG17UPreference_SceneE" + unaff_EBX + 9)) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e000();
  }
  return true;
}


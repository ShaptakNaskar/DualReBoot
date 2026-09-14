/* 00076d80 | STG::ReflectPreferenceArray<STG::UPreference_Theme> */

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* bool STG::ReflectPreferenceArray<STG::UPreference_Theme>(STG::FFileBase&, STG::UPreference_Theme
   const*, STG::UPreference_Theme const*, char const*, bool) */

bool STG::ReflectPreferenceArray<STG::UPreference_Theme>
               (FFileBase *param_1,UPreference_Theme *param_2,UPreference_Theme *param_3,
               char *param_4,bool param_5)

{
  char cVar1;
  int iVar2;
  int unaff_EBX;
  int iVar3;
  int iVar4;
  UPreference_Theme *pUVar5;
  int local_60;
  uint *local_54;
  int local_4c;
  int local_30;
  uint local_2c [4];
  uint *local_1c;
  uint *local_18;
  int local_14;
  
  local_14 = 0x76d8b;
  FUN_0002e044();
  local_14 = **(int **)("_ZNK3STG17UPreference_Scene13ReflectToFileEPKc" + unaff_EBX + 0x29);
  if (param_2 < param_3) {
    iVar3 = 0;
    pUVar5 = param_2;
    do {
      cVar1 = (**(code **)(*(int *)pUVar5 + 4))(pUVar5);
      pUVar5 = pUVar5 + 0x88;
      iVar3 = (iVar3 + 1) - (uint)(cVar1 == '\0');
    } while (pUVar5 < param_3);
    (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x106f4);
    (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x106f7,param_4);
    if (iVar3 != 0) {
      (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x10701);
      local_4c = 0;
      do {
        cVar1 = (**(code **)(*(int *)param_2 + 4))(param_2);
        if (cVar1 != '\0') {
          iVar2 = (**(code **)(*(int *)param_2 + 0x18))(param_2);
          (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x10634,*(int *)(param_2 + 0x1c))
          ;
          (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x10649,*(int *)(param_2 + 0x38))
          ;
          (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x1065e,*(int *)(param_2 + 0x54))
          ;
          if (*(int *)(param_2 + 0x70) != *(int *)(param_2 + 0x6c)) {
            (**(code **)(*(int *)param_1 + 0xc))
                      (param_1,unaff_EBX + 0x10673,*(int *)(param_2 + 0x70));
          }
          (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x10688);
          iVar4 = *(int *)param_1;
          if (iVar2 == 0) {
            (**(code **)(iVar4 + 0xc))(param_1,unaff_EBX + 0x106a4);
          }
          else {
            if (iVar2 == 1) {
              (**(code **)(iVar4 + 0xc))(param_1,unaff_EBX + 0x10696);
LAB_00076f6f:
              local_60 = *(int *)("_ZNK3STG17UPreference_Scene13ReflectToFileEPKc" +
                                 unaff_EBX + 0x2d);
              local_1c = local_2c;
              local_2c[0] = local_2c[0] & 0xffffff00;
              local_30 = local_60 + 8;
              iVar4 = 0;
              local_18 = local_1c;
              while( true ) {
                (**(code **)(*(int *)param_2 + 0x28))(param_2,iVar4,&local_30);
                iVar4 = iVar4 + 1;
                (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x10699,local_18);
                if (iVar2 == iVar4) break;
                (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x10706);
              }
            }
            else {
              (**(code **)(iVar4 + 0xc))();
              if (!param_5) goto LAB_00076f6f;
              (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x106f4);
              local_60 = *(int *)("_ZNK3STG17UPreference_Scene13ReflectToFileEPKc" +
                                 unaff_EBX + 0x2d);
              local_2c[0] = local_2c[0] & 0xffffff00;
              local_30 = local_60 + 8;
              local_1c = local_2c;
              iVar4 = 0;
              local_18 = local_1c;
              do {
                (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x10709);
                (**(code **)(*(int *)param_2 + 0x28))(param_2,iVar4,&local_30);
                iVar4 = iVar4 + 1;
                (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x10699,local_18);
                if (iVar2 != iVar4) {
                  (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x1070d);
                }
              } while (iVar4 != iVar2);
            }
            local_54 = local_2c;
            (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x1069e);
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
          (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x106a1);
          local_4c = local_4c + 1;
          if (local_4c != iVar3) {
            (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x10711);
          }
        }
        param_2 = param_2 + 0x88;
      } while (param_2 < param_3);
      (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x105a6);
    }
  }
  else {
    (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x106f4);
    (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x106f7,param_4);
  }
  (**(code **)(*(int *)param_1 + 0xc))(param_1,unaff_EBX + 0x10717);
  if (local_14 != **(int **)("_ZNK3STG17UPreference_Scene13ReflectToFileEPKc" + unaff_EBX + 0x29)) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e000();
  }
  return true;
}


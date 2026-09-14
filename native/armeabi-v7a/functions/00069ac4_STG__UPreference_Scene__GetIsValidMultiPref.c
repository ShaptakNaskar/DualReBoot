/* 00069ac4 | STG::UPreference_Scene::GetIsValidMultiPref */

/* STG::UPreference_Scene::GetIsValidMultiPref(STG::UStringBase<char, int> const&,
   STG::UStringBase<char, int> const&) const */

void __thiscall
STG::UPreference_Scene::GetIsValidMultiPref
          (UPreference_Scene *this,UStringBase *param_1,UStringBase *param_2)

{
  uint *puVar1;
  uint *puVar2;
  UPreferenceBase *pUVar3;
  UPreferenceBase *pUVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  uint *puVar9;
  int *piVar10;
  size_t sVar11;
  int iVar12;
  size_t sVar13;
  int iVar14;
  bool bVar15;
  int local_64;
  uint local_60 [4];
  uint *local_50;
  uint *local_4c;
  int local_48;
  uint local_44 [4];
  uint *local_34;
  uint *local_30;
  int local_2c;
  
  piVar10 = *(int **)(DAT_00069e0c + 0x69ae4);
  local_2c = *piVar10;
  pUVar3 = (UPreferenceBase *)FindPreference(this,param_1);
  pUVar4 = (UPreferenceBase *)FindPreference(this,param_2);
  if (pUVar3 != (UPreferenceBase *)0x0 && pUVar4 != (UPreferenceBase *)0x0) {
    sVar11 = *(int *)(param_1 + 0x14) - (int)*(void **)(param_1 + 0x18);
    sVar13 = *(int *)(param_2 + 0x14) - (int)*(void **)(param_2 + 0x18);
    sVar8 = sVar13;
    if ((int)sVar11 <= (int)sVar13) {
      sVar8 = sVar11;
    }
    iVar5 = memcmp(*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),sVar8);
    if (((iVar5 == 0) && ((int)sVar13 <= (int)sVar11)) &&
       (bVar15 = false, (int)sVar11 <= (int)sVar13)) goto LAB_00069b98;
    iVar5 = GetPreferenceType(this,pUVar3);
    iVar6 = GetPreferenceType(this,pUVar4);
    if (iVar5 != iVar6) {
      iVar5 = (**(code **)(*(int *)pUVar3 + 0x18))(pUVar3);
      if (iVar5 == 0) {
LAB_00069b8c:
        bVar15 = false;
        goto LAB_00069b98;
      }
      iVar6 = (**(code **)(*(int *)pUVar4 + 0x18))(pUVar4);
      if (iVar6 == iVar5) {
        iVar12 = 0;
        iVar5 = *(int *)(DAT_00069e10 + 0x69be4);
        iVar14 = iVar5 + 8;
        do {
          local_60[0] = local_60[0] & 0xffffff00;
          local_50 = local_60;
          local_64 = iVar14;
          local_4c = local_50;
          (**(code **)(*(int *)pUVar3 + 0x28))(pUVar3,iVar12,&local_64);
          local_44[0] = local_44[0] & 0xffffff00;
          local_34 = local_44;
          local_48 = iVar14;
          local_30 = local_34;
          (**(code **)(*(int *)pUVar4 + 0x28))(pUVar4,iVar12,&local_48);
          puVar2 = local_30;
          puVar9 = local_4c;
          puVar1 = local_50;
          sVar13 = (int)local_50 - (int)local_4c;
          sVar11 = (int)local_34 - (int)local_30;
          sVar8 = sVar11;
          if ((int)sVar13 <= (int)sVar11) {
            sVar8 = sVar13;
          }
          iVar7 = memcmp(local_4c,local_30,sVar8);
          if (((iVar7 != 0) || ((int)sVar13 < (int)sVar11)) ||
             (((int)sVar11 < (int)sVar13 || (puVar9 == puVar1)))) {
            local_48 = iVar5 + 8;
            if ((puVar2 != local_44) && (puVar2 != (uint *)0x0)) {
              if (local_44[0] - (int)puVar2 < 0x81) {
                std::__node_alloc::_M_deallocate(puVar2,local_44[0] - (int)puVar2);
                puVar9 = local_4c;
              }
              else {
                operator_delete(puVar2);
                puVar9 = local_4c;
              }
            }
            local_64 = iVar5 + 8;
            if (puVar9 == local_60) goto LAB_00069b94;
            if (puVar9 == (uint *)0x0) goto LAB_00069b8c;
            if (local_60[0] - (int)puVar9 < 0x81) {
              std::__node_alloc::_M_deallocate(puVar9,local_60[0] - (int)puVar9);
              bVar15 = false;
            }
            else {
              operator_delete(puVar9);
              bVar15 = false;
            }
            goto LAB_00069b98;
          }
          local_48 = iVar14;
          if ((puVar2 != local_44) && (puVar2 != (uint *)0x0)) {
            if (local_44[0] - (int)puVar2 < 0x81) {
              std::__node_alloc::_M_deallocate(puVar2,local_44[0] - (int)puVar2);
              puVar9 = local_4c;
            }
            else {
              operator_delete(puVar2);
              puVar9 = local_4c;
            }
          }
          local_64 = iVar14;
          if ((puVar9 != local_60) && (puVar9 != (uint *)0x0)) {
            if (local_60[0] - (int)puVar9 < 0x81) {
              std::__node_alloc::_M_deallocate(puVar9,local_60[0] - (int)puVar9);
            }
            else {
              operator_delete(puVar9);
            }
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 != iVar6);
        iVar5 = (**(code **)(*(int *)pUVar3 + 0x20))(pUVar3);
        iVar6 = (**(code **)(*(int *)pUVar4 + 0x20))(pUVar4);
        bVar15 = iVar5 == iVar6;
        goto LAB_00069b98;
      }
    }
  }
LAB_00069b94:
  bVar15 = false;
LAB_00069b98:
  if (local_2c != *piVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar15);
  }
  return;
}


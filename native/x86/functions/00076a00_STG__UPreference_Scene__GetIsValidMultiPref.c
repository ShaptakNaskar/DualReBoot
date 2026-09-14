/* 00076a00 | STG::UPreference_Scene::GetIsValidMultiPref */

/* STG::UPreference_Scene::GetIsValidMultiPref(STG::UStringBase<char, int> const&,
   STG::UStringBase<char, int> const&) const */

bool __thiscall
STG::UPreference_Scene::GetIsValidMultiPref
          (UPreference_Scene *this,UStringBase *param_1,UStringBase *param_2)

{
  uint *puVar1;
  uint *puVar2;
  UPreferenceBase *pUVar3;
  UPreferenceBase *pUVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  int iVar8;
  size_t sVar9;
  int unaff_EBX;
  uint *puVar10;
  size_t sVar11;
  bool bVar12;
  int local_5c;
  int local_50;
  uint local_4c [4];
  uint *local_3c;
  uint *local_38;
  int local_30;
  uint local_2c [4];
  uint *local_1c;
  uint *local_18;
  int local_14;
  
  local_14 = 0x76a0b;
  FUN_0002e044();
  local_14 = **(int **)("_ZTVN3STG23UPreference_TextureFontE" + unaff_EBX + 2);
  pUVar3 = (UPreferenceBase *)FindPreference(this,param_1);
  pUVar4 = (UPreferenceBase *)FindPreference(this,param_2);
  if ((pUVar4 == (UPreferenceBase *)0x0) || (pUVar3 == (UPreferenceBase *)0x0)) {
    bVar12 = false;
  }
  else {
    sVar9 = *(int *)(param_1 + 0x14) - (int)*(void **)(param_1 + 0x18);
    sVar11 = *(int *)(param_2 + 0x14) - (int)*(void **)(param_2 + 0x18);
    sVar7 = sVar9;
    if ((int)sVar11 <= (int)sVar9) {
      sVar7 = sVar11;
    }
    iVar5 = memcmp(*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),sVar7);
    if (((iVar5 != 0) || ((int)sVar9 < (int)sVar11)) || (bVar12 = false, (int)sVar11 < (int)sVar9))
    {
      bVar12 = false;
      iVar5 = GetPreferenceType(this,pUVar3);
      iVar6 = GetPreferenceType(this,pUVar4);
      if (((iVar5 != iVar6) && (iVar5 = (**(code **)(*(int *)pUVar3 + 0x18))(pUVar3), iVar5 != 0))
         && (iVar6 = (**(code **)(*(int *)pUVar4 + 0x18))(pUVar4), iVar6 == iVar5)) {
        iVar5 = *(int *)("_ZTVN3STG23UPreference_TextureFontE" + unaff_EBX + 6) + 8;
        local_5c = 0;
        do {
          local_3c = local_4c;
          local_4c[0] = local_4c[0] & 0xffffff00;
          local_50 = iVar5;
          local_38 = local_3c;
          (**(code **)(*(int *)pUVar3 + 0x28))(pUVar3,local_5c,&local_50);
          local_1c = local_2c;
          local_2c[0] = local_2c[0] & 0xffffff00;
          local_30 = iVar5;
          local_18 = local_1c;
          (**(code **)(*(int *)pUVar4 + 0x28))(pUVar4,local_5c,&local_30);
          puVar2 = local_18;
          puVar10 = local_38;
          puVar1 = local_3c;
          sVar9 = (int)local_3c - (int)local_38;
          sVar11 = (int)local_1c - (int)local_18;
          sVar7 = sVar9;
          if ((int)sVar11 <= (int)sVar9) {
            sVar7 = sVar11;
          }
          iVar8 = memcmp(local_38,local_18,sVar7);
          if (((iVar8 != 0) || ((int)sVar9 < (int)sVar11)) ||
             (((int)sVar11 < (int)sVar9 || (puVar1 == puVar10)))) {
            local_30 = *(int *)("_ZTVN3STG23UPreference_TextureFontE" + unaff_EBX + 6) + 8;
            if ((puVar2 != local_2c) && (puVar2 != (uint *)0x0)) {
              if (local_2c[0] - (int)puVar2 < 0x81) {
                std::__node_alloc::_M_deallocate(puVar2,local_2c[0] - (int)puVar2);
                puVar10 = local_38;
              }
              else {
                operator_delete(puVar2);
                puVar10 = local_38;
              }
            }
            bVar12 = false;
            local_50 = *(int *)("_ZTVN3STG23UPreference_TextureFontE" + unaff_EBX + 6) + 8;
            if ((puVar10 != local_4c) && (puVar10 != (uint *)0x0)) {
              if (local_4c[0] - (int)puVar10 < 0x81) {
                std::__node_alloc::_M_deallocate(puVar10,local_4c[0] - (int)puVar10);
              }
              else {
                operator_delete(puVar10);
              }
            }
            goto LAB_00076cf2;
          }
          local_30 = iVar5;
          if ((puVar2 != local_2c) && (puVar2 != (uint *)0x0)) {
            if (local_2c[0] - (int)puVar2 < 0x81) {
              std::__node_alloc::_M_deallocate(puVar2,local_2c[0] - (int)puVar2);
              puVar10 = local_38;
            }
            else {
              operator_delete(puVar2);
              puVar10 = local_38;
            }
          }
          local_50 = iVar5;
          if ((puVar10 != local_4c) && (puVar10 != (uint *)0x0)) {
            if (local_4c[0] - (int)puVar10 < 0x81) {
              std::__node_alloc::_M_deallocate(puVar10,local_4c[0] - (int)puVar10);
            }
            else {
              operator_delete(puVar10);
            }
          }
          local_5c = local_5c + 1;
        } while (local_5c != iVar6);
        iVar5 = (**(code **)(*(int *)pUVar3 + 0x20))(pUVar3);
        iVar6 = (**(code **)(*(int *)pUVar4 + 0x20))(pUVar4);
        bVar12 = iVar5 == iVar6;
      }
    }
  }
LAB_00076cf2:
  if (local_14 != **(int **)("_ZTVN3STG23UPreference_TextureFontE" + unaff_EBX + 2)) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e000();
  }
  return bVar12;
}


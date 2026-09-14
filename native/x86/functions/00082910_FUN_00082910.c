/* 00082910 | FUN_00082910 */

undefined4 * FUN_00082910(uint param_1,uint *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int unaff_EBX;
  undefined4 *puVar9;
  bool bVar10;
  int local_28;
  undefined4 *local_20;
  
  piVar4 = (int *)FUN_0002e044();
  local_28 = param_1 * *piVar4;
  puVar5 = *(undefined4 **)("_ZN3STG10GERenderer21SetMultiSampleEnabledEb" + unaff_EBX + 4);
  plVar1 = (longlong *)("_ZN3STG10GERenderer21SetMultiSampleEnabledEb" + unaff_EBX + 4);
  iVar8 = *(int *)("_ZN3STG10GERenderer21SetMultiSampleEnabledEb" + unaff_EBX + 8);
  do {
    if (puVar5 == (undefined4 *)0x0) break;
    LOCK();
    lVar3 = *plVar1;
    bVar10 = CONCAT44(iVar8,puVar5) == lVar3;
    if (bVar10) {
      *plVar1 = CONCAT44(iVar8 + 1,*puVar5);
    }
    else {
      iVar8 = (int)((ulonglong)lVar3 >> 0x20);
      puVar5 = (undefined4 *)lVar3;
    }
    UNLOCK();
  } while (!bVar10);
  if (puVar5 != (undefined4 *)0x0) {
    iVar8 = puVar5[1];
    uVar7 = iVar8 - (int)puVar5;
    if (((int)uVar7 < (int)param_1) || (local_28 <= (int)uVar7)) {
      puVar9 = (undefined4 *)0x0;
      local_20 = puVar5;
      if (local_28 <= (int)uVar7) {
        uVar7 = uVar7 - local_28;
        local_20 = (undefined4 *)((int)puVar5 + local_28);
        puVar9 = puVar5;
      }
    }
    else {
      *param_2 = uVar7 / param_1;
      local_28 = (uVar7 / param_1) * param_1;
      uVar7 = uVar7 - local_28;
      puVar9 = puVar5;
      local_20 = (undefined4 *)(local_28 + (int)puVar5);
    }
    if (uVar7 != 0) {
      if (((int)uVar7 < 8) || (puVar9 == (undefined4 *)0x0)) {
        uVar7 = uVar7 + 8 & 0xfffffff8;
        if (uVar7 != 8) {
          plVar2 = (longlong *)
                   ("_ZN3STG10GERenderer21SetMultiSampleEnabledEb" + uVar7 + unaff_EBX + 0xc);
          uVar6 = (undefined4)*plVar2;
          iVar8 = *(int *)((int)plVar2 + 4);
          do {
            *local_20 = uVar6;
            LOCK();
            lVar3 = *plVar2;
            bVar10 = CONCAT44(iVar8,uVar6) == lVar3;
            if (bVar10) {
              *plVar2 = CONCAT44(iVar8 + 1,local_20);
            }
            else {
              iVar8 = (int)((ulonglong)lVar3 >> 0x20);
              uVar6 = (undefined4)lVar3;
            }
            UNLOCK();
          } while (!bVar10);
        }
      }
      else {
        uVar6 = *(undefined4 *)("_ZN3STG10GERenderer21SetMultiSampleEnabledEb" + unaff_EBX + 4);
        local_20[1] = iVar8;
        iVar8 = *(int *)("_ZN3STG10GERenderer21SetMultiSampleEnabledEb" + unaff_EBX + 8);
        do {
          *local_20 = uVar6;
          LOCK();
          lVar3 = *plVar1;
          bVar10 = CONCAT44(iVar8,uVar6) == lVar3;
          if (bVar10) {
            *plVar1 = CONCAT44(iVar8 + 1,local_20);
          }
          else {
            iVar8 = (int)((ulonglong)lVar3 >> 0x20);
            uVar6 = (undefined4)lVar3;
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
    if (puVar9 != (undefined4 *)0x0) {
      return puVar9;
    }
  }
  LOCK();
  piVar4 = (int *)("_ZN3STG10GERenderer21SetMultiSampleEnabledEb" + unaff_EBX);
  iVar8 = *piVar4;
  *piVar4 = *piVar4;
  UNLOCK();
  uVar7 = (iVar8 + 7U & 0xfffffff8) + local_28 * 2;
  puVar5 = operator_new(uVar7);
  LOCK();
  *(int *)("_ZN3STG10GERenderer21SetMultiSampleEnabledEb" + unaff_EBX) =
       *(int *)("_ZN3STG10GERenderer21SetMultiSampleEnabledEb" + unaff_EBX) + ((int)uVar7 >> 4);
  UNLOCK();
  if (local_28 < (int)uVar7) {
    uVar6 = *(undefined4 *)("_ZN3STG10GERenderer21SetMultiSampleEnabledEb" + unaff_EBX + 4);
    puVar9 = (undefined4 *)((int)puVar5 + local_28);
    puVar9[1] = uVar7 + (int)puVar5;
    iVar8 = *(int *)("_ZN3STG10GERenderer21SetMultiSampleEnabledEb" + unaff_EBX + 8);
    do {
      *puVar9 = uVar6;
      LOCK();
      lVar3 = *plVar1;
      bVar10 = CONCAT44(iVar8,uVar6) == lVar3;
      if (bVar10) {
        *plVar1 = CONCAT44(iVar8 + 1,puVar9);
      }
      else {
        iVar8 = (int)((ulonglong)lVar3 >> 0x20);
        uVar6 = (undefined4)lVar3;
      }
      UNLOCK();
    } while (!bVar10);
  }
  return puVar5;
}


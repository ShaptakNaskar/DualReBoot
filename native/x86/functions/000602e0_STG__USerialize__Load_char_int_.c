/* 000602e0 | STG::USerialize::Load<char,int> */

/* void STG::USerialize::Load<char, int>(STG::FFileBase const*, STG::UStringBase<char, int>&) */

void STG::USerialize::Load<char,int>(FFileBase *param_1,UStringBase *param_2)

{
  UStringBase *pUVar1;
  UStringBase *pUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uchar uVar6;
  UStringBase *pUVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  UStringBase *pUVar11;
  uint uVar12;
  uint uVar13;
  int unaff_EBX;
  UStringBase *local_64;
  UStringBase *local_54;
  UStringBase *local_50;
  UStringBase *local_48;
  uint local_44;
  uchar local_31;
  uint local_30 [4];
  uint local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x602eb;
  FUN_0002e044();
  FFileBase::Read(param_1,(uchar *)local_30,4);
  pUVar7 = *(UStringBase **)(param_2 + 0x18);
  if (pUVar7 != *(UStringBase **)(param_2 + 0x14)) {
    *pUVar7 = (UStringBase)0x0;
    pUVar7 = *(UStringBase **)(param_2 + 0x18);
    *(UStringBase **)(param_2 + 0x14) = pUVar7;
  }
  if (local_30[0] == 0xffffffff) {
LAB_000606f8:
                    /* WARNING: Subroutine does not return */
    std::__stl_throw_length_error("_ZNSt17__Named_exceptionD0Ev" + unaff_EBX + 5);
  }
  uVar13 = local_30[0] + 1;
  uVar8 = 0;
  pUVar1 = param_2 + 4;
  uVar12 = 0x10;
  if (pUVar1 != pUVar7) {
    uVar12 = *(int *)(param_2 + 4) - (int)pUVar7;
  }
  if (uVar13 < uVar12) goto LAB_0006035e;
  local_54 = (UStringBase *)0x0;
  local_48 = (UStringBase *)0x0;
  if (uVar13 != 0) {
    local_20[0] = uVar13;
    if (uVar13 < 0x81) {
      local_48 = (UStringBase *)std::__node_alloc::_M_allocate(local_20);
    }
    else {
      local_48 = operator_new(uVar13);
    }
    pUVar7 = *(UStringBase **)(param_2 + 0x18);
    local_54 = local_48 + local_20[0];
    uVar8 = *(int *)(param_2 + 0x14) - (int)pUVar7;
  }
  pUVar11 = local_48;
  if (0 < (int)uVar8) {
    uVar12 = uVar8 >> 4;
    uVar9 = uVar12 * 0x10;
    uVar13 = uVar8;
    if ((uVar12 == 0) || (uVar8 < 0x10 || local_48 <= pUVar7 + 0x10 && pUVar7 <= local_48 + 0x10)) {
LAB_00060640:
      do {
        uVar13 = uVar13 - 1;
        *pUVar11 = *pUVar7;
        pUVar7 = pUVar7 + 1;
        pUVar11 = pUVar11 + 1;
      } while (0 < (int)uVar13);
    }
    else {
      iVar10 = 0;
      uVar13 = 0;
      do {
        pUVar11 = pUVar7 + iVar10;
        uVar3 = *(undefined4 *)(pUVar11 + 4);
        uVar4 = *(undefined4 *)(pUVar11 + 8);
        uVar5 = *(undefined4 *)(pUVar11 + 0xc);
        uVar13 = uVar13 + 1;
        pUVar2 = local_48 + iVar10;
        *(undefined4 *)pUVar2 = *(undefined4 *)pUVar11;
        *(undefined4 *)(pUVar2 + 4) = uVar3;
        *(undefined4 *)(pUVar2 + 8) = uVar4;
        *(undefined4 *)(pUVar2 + 0xc) = uVar5;
        iVar10 = iVar10 + 0x10;
      } while (uVar13 < uVar12);
      pUVar7 = pUVar7 + uVar9;
      uVar13 = uVar8 + uVar12 * -0x10;
      pUVar11 = local_48 + uVar9;
      if (uVar8 != uVar9) goto LAB_00060640;
    }
    pUVar11 = local_48 + uVar8;
  }
  *pUVar11 = (UStringBase)0x0;
  pUVar7 = *(UStringBase **)(param_2 + 0x18);
  if ((pUVar1 != pUVar7) && (pUVar7 != (UStringBase *)0x0)) {
    if ((uint)(*(int *)(param_2 + 4) - (int)pUVar7) < 0x81) {
      std::__node_alloc::_M_deallocate(pUVar7,*(int *)(param_2 + 4) - (int)pUVar7);
    }
    else {
      operator_delete(pUVar7);
    }
  }
  *(UStringBase **)(param_2 + 0x14) = pUVar11;
  *(UStringBase **)(param_2 + 4) = local_54;
  *(UStringBase **)(param_2 + 0x18) = local_48;
LAB_0006035e:
  if (local_30[0] != 0) {
    local_44 = 0;
    do {
      FFileBase::Read(param_1,&local_31,1);
      uVar6 = local_31;
      pUVar7 = *(UStringBase **)(param_2 + 0x18);
      pUVar11 = *(UStringBase **)(param_2 + 0x14);
      if (pUVar1 == pUVar7) {
        if ((int)pUVar1 - (int)pUVar11 == -0xf) {
LAB_000603e0:
          uVar13 = (int)pUVar11 - (int)pUVar7;
          if (uVar13 == 0xfffffffe) goto LAB_000606f8;
          uVar8 = 1;
          if (uVar13 != 0) {
            uVar8 = uVar13;
          }
          uVar8 = uVar13 + 1 + uVar8;
          if ((uVar8 == 0xffffffff) || (uVar8 < uVar13)) {
            local_20[0] = 0xfffffffe;
LAB_0006053d:
            local_50 = operator_new(local_20[0]);
            pUVar7 = *(UStringBase **)(param_2 + 0x18);
            local_64 = local_50 + local_20[0];
            uVar13 = *(int *)(param_2 + 0x14) - (int)pUVar7;
          }
          else if (uVar8 == 0) {
            local_64 = (UStringBase *)0x0;
            local_50 = (UStringBase *)0x0;
          }
          else {
            local_20[0] = uVar8;
            if (0x80 < uVar8) goto LAB_0006053d;
            local_50 = (UStringBase *)std::__node_alloc::_M_allocate(local_20);
            pUVar7 = *(UStringBase **)(param_2 + 0x18);
            local_64 = local_50 + local_20[0];
            uVar13 = *(int *)(param_2 + 0x14) - (int)pUVar7;
          }
          pUVar11 = local_50;
          if (0 < (int)uVar13) {
            uVar12 = uVar13 >> 4;
            uVar9 = uVar12 * 0x10;
            uVar8 = uVar13;
            if ((uVar12 == 0) ||
               (uVar13 < 0x10 || pUVar7 <= local_50 + 0x10 && local_50 <= pUVar7 + 0x10)) {
LAB_000604c8:
              do {
                uVar8 = uVar8 - 1;
                *pUVar11 = *pUVar7;
                pUVar7 = pUVar7 + 1;
                pUVar11 = pUVar11 + 1;
              } while (0 < (int)uVar8);
            }
            else {
              iVar10 = 0;
              uVar8 = 0;
              do {
                pUVar11 = pUVar7 + iVar10;
                uVar3 = *(undefined4 *)(pUVar11 + 4);
                uVar4 = *(undefined4 *)(pUVar11 + 8);
                uVar5 = *(undefined4 *)(pUVar11 + 0xc);
                uVar8 = uVar8 + 1;
                pUVar2 = local_50 + iVar10;
                *(undefined4 *)pUVar2 = *(undefined4 *)pUVar11;
                *(undefined4 *)(pUVar2 + 4) = uVar3;
                *(undefined4 *)(pUVar2 + 8) = uVar4;
                *(undefined4 *)(pUVar2 + 0xc) = uVar5;
                iVar10 = iVar10 + 0x10;
              } while (uVar8 < uVar12);
              pUVar7 = pUVar7 + uVar9;
              uVar8 = uVar13 + uVar12 * -0x10;
              pUVar11 = local_50 + uVar9;
              if (uVar9 != uVar13) goto LAB_000604c8;
            }
            pUVar11 = local_50 + uVar13;
          }
          *pUVar11 = (UStringBase)0x0;
          pUVar7 = *(UStringBase **)(param_2 + 0x18);
          if ((pUVar1 != pUVar7) && (pUVar7 != (UStringBase *)0x0)) {
            if ((uint)(*(int *)(param_2 + 4) - (int)pUVar7) < 0x81) {
              std::__node_alloc::_M_deallocate(pUVar7,*(int *)(param_2 + 4) - (int)pUVar7);
            }
            else {
              operator_delete(pUVar7);
            }
          }
          *(UStringBase **)(param_2 + 0x14) = pUVar11;
          *(UStringBase **)(param_2 + 4) = local_64;
          *(UStringBase **)(param_2 + 0x18) = local_50;
        }
      }
      else if (*(int *)(param_2 + 4) - (int)pUVar11 == 1) goto LAB_000603e0;
      pUVar11[1] = (UStringBase)0x0;
      local_44 = local_44 + 1;
      **(uchar **)(param_2 + 0x14) = uVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    } while (local_44 < local_30[0]);
  }
  return;
}


/* 00067ae0 | STG::USerialize::Load<unsigned_short,unsigned_short> */

/* void STG::USerialize::Load<unsigned short, unsigned short>(STG::FFileBase const*,
   STG::UStringBase<unsigned short, unsigned short>&) */

void STG::USerialize::Load<unsigned_short,unsigned_short>(FFileBase *param_1,UStringBase *param_2)

{
  UStringBase *pUVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  UStringBase *pUVar9;
  UStringBase *pUVar10;
  uint uVar11;
  int unaff_EBX;
  uint uVar12;
  UStringBase *pUVar13;
  UStringBase *local_64;
  UStringBase *local_58;
  UStringBase *local_48;
  uint local_44;
  undefined2 local_32;
  uint local_30 [4];
  uint local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x67aeb;
  FUN_0002e044();
  FFileBase::Read(param_1,(uchar *)local_30,4);
  pUVar9 = *(UStringBase **)(param_2 + 0x28);
  if (pUVar9 != *(UStringBase **)(param_2 + 0x24)) {
    *(undefined2 *)pUVar9 = 0;
    pUVar9 = *(UStringBase **)(param_2 + 0x28);
    *(UStringBase **)(param_2 + 0x24) = pUVar9;
  }
  if (0x7ffffffe < local_30[0]) {
                    /* WARNING: Subroutine does not return */
    std::__stl_throw_length_error
              ("_ZNK3STG18LLogicSceneWrapper33ComputeModelsAffectedByPreferenceERNS_11UArrayFixedImmEERKNS_11UStringBaseIciEE"
               + unaff_EBX + 0x5d);
  }
  uVar12 = local_30[0] + 1;
  uVar11 = 0;
  pUVar1 = param_2 + 4;
  uVar7 = 0x10;
  if (pUVar1 != pUVar9) {
    uVar7 = *(int *)(param_2 + 4) - (int)pUVar9 >> 1;
  }
  if (uVar12 < uVar7) goto LAB_00067b65;
  if (0x7fffffff < uVar12) {
    puts("_ZNK3STG17UPreference_Scene17GetPreferenceTypeEPKNS_15UPreferenceBaseE" + unaff_EBX + 10);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_58 = (UStringBase *)0x0;
  local_48 = (UStringBase *)0x0;
  if (uVar12 != 0) {
    local_20[0] = uVar12 * 2;
    if (local_20[0] < 0x81) {
      local_48 = (UStringBase *)std::__node_alloc::_M_allocate(local_20);
    }
    else {
      local_48 = operator_new(local_20[0]);
    }
    pUVar9 = *(UStringBase **)(param_2 + 0x28);
    local_58 = local_48 + (local_20[0] & 0xfffffffe);
    uVar11 = *(int *)(param_2 + 0x24) - (int)pUVar9 >> 1;
  }
  pUVar10 = local_48;
  if (0 < (int)uVar11) {
    uVar7 = uVar11 >> 3;
    pUVar10 = pUVar9;
    uVar12 = uVar11;
    pUVar13 = local_48;
    if ((uVar7 == 0) || (uVar11 < 0xb || local_48 <= pUVar9 + 0x10 && pUVar9 <= local_48 + 0x10)) {
LAB_00067e80:
      do {
        uVar12 = uVar12 - 1;
        *(undefined2 *)pUVar13 = *(undefined2 *)pUVar10;
        pUVar10 = pUVar10 + 2;
        pUVar13 = pUVar13 + 2;
      } while (0 < (int)uVar12);
    }
    else {
      iVar8 = 0;
      uVar12 = 0;
      do {
        pUVar10 = pUVar9 + iVar8;
        uVar3 = *(undefined4 *)(pUVar10 + 4);
        uVar4 = *(undefined4 *)(pUVar10 + 8);
        uVar5 = *(undefined4 *)(pUVar10 + 0xc);
        uVar12 = uVar12 + 1;
        pUVar13 = local_48 + iVar8;
        *(undefined4 *)pUVar13 = *(undefined4 *)pUVar10;
        *(undefined4 *)(pUVar13 + 4) = uVar3;
        *(undefined4 *)(pUVar13 + 8) = uVar4;
        *(undefined4 *)(pUVar13 + 0xc) = uVar5;
        iVar8 = iVar8 + 0x10;
      } while (uVar12 < uVar7);
      uVar12 = uVar11 + uVar7 * -8;
      pUVar10 = pUVar9 + uVar7 * 0x10;
      pUVar13 = local_48 + uVar7 * 0x10;
      if (uVar11 != uVar7 * 8) goto LAB_00067e80;
    }
    pUVar10 = local_48 + uVar11 * 2;
  }
  *(undefined2 *)pUVar10 = 0;
  if ((pUVar1 != pUVar9) && (pUVar9 != (UStringBase *)0x0)) {
    uVar12 = *(int *)(param_2 + 4) - (int)pUVar9 & 0xfffffffe;
    if (uVar12 < 0x81) {
      std::__node_alloc::_M_deallocate(pUVar9,uVar12);
    }
    else {
      operator_delete(pUVar9);
    }
  }
  *(UStringBase **)(param_2 + 0x24) = pUVar10;
  *(UStringBase **)(param_2 + 4) = local_58;
  *(UStringBase **)(param_2 + 0x28) = local_48;
LAB_00067b65:
  if (local_30[0] != 0) {
    local_44 = 0;
    do {
      FFileBase::Read(param_1,(uchar *)&local_32,2);
      uVar6 = local_32;
      pUVar10 = *(UStringBase **)(param_2 + 0x28);
      pUVar9 = *(UStringBase **)(param_2 + 0x24);
      if (pUVar1 == pUVar10) {
        iVar8 = 0x10 - ((int)pUVar9 - (int)pUVar1 >> 1);
      }
      else {
        iVar8 = *(int *)(param_2 + 4) - (int)pUVar9 >> 1;
      }
      if (iVar8 == 1) {
        uVar7 = (int)pUVar9 - (int)pUVar10 >> 1;
        uVar12 = 1;
        if (uVar7 != 0) {
          uVar12 = uVar7;
        }
        uVar12 = uVar7 + 1 + uVar12;
        if ((uVar12 < 0x7fffffff) && (uVar7 <= uVar12)) {
          if (uVar12 != 0) {
            local_20[0] = uVar12 * 2;
            if (0x80 < local_20[0]) goto LAB_00067d45;
            local_48 = (UStringBase *)std::__node_alloc::_M_allocate(local_20);
            goto LAB_00067d51;
          }
          local_64 = (UStringBase *)0x0;
          local_48 = (UStringBase *)0x0;
        }
        else {
          local_20[0] = 0xfffffffc;
LAB_00067d45:
          local_48 = operator_new(local_20[0]);
LAB_00067d51:
          pUVar10 = *(UStringBase **)(param_2 + 0x28);
          local_64 = local_48 + (local_20[0] & 0xfffffffe);
          uVar7 = *(int *)(param_2 + 0x24) - (int)pUVar10 >> 1;
        }
        pUVar9 = local_48;
        if (0 < (int)uVar7) {
          uVar11 = uVar7 >> 3;
          pUVar9 = pUVar10;
          uVar12 = uVar7;
          pUVar13 = local_48;
          if ((uVar11 == 0) ||
             (uVar7 < 0xb || pUVar10 <= local_48 + 0x10 && local_48 <= pUVar10 + 0x10)) {
LAB_00067cd0:
            do {
              uVar12 = uVar12 - 1;
              *(undefined2 *)pUVar13 = *(undefined2 *)pUVar9;
              pUVar9 = pUVar9 + 2;
              pUVar13 = pUVar13 + 2;
            } while (0 < (int)uVar12);
          }
          else {
            iVar8 = 0;
            uVar12 = 0;
            do {
              pUVar9 = pUVar10 + iVar8;
              uVar3 = *(undefined4 *)(pUVar9 + 4);
              uVar4 = *(undefined4 *)(pUVar9 + 8);
              uVar5 = *(undefined4 *)(pUVar9 + 0xc);
              uVar12 = uVar12 + 1;
              pUVar13 = local_48 + iVar8;
              *(undefined4 *)pUVar13 = *(undefined4 *)pUVar9;
              *(undefined4 *)(pUVar13 + 4) = uVar3;
              *(undefined4 *)(pUVar13 + 8) = uVar4;
              *(undefined4 *)(pUVar13 + 0xc) = uVar5;
              iVar8 = iVar8 + 0x10;
            } while (uVar12 < uVar11);
            uVar12 = uVar7 + uVar11 * -8;
            pUVar9 = pUVar10 + uVar11 * 0x10;
            pUVar13 = local_48 + uVar11 * 0x10;
            if (uVar11 * 8 != uVar7) goto LAB_00067cd0;
          }
          pUVar9 = local_48 + uVar7 * 2;
        }
        *(undefined2 *)pUVar9 = 0;
        if ((pUVar1 != pUVar10) && (pUVar10 != (UStringBase *)0x0)) {
          uVar12 = *(int *)(param_2 + 4) - (int)pUVar10 & 0xfffffffe;
          if (uVar12 < 0x81) {
            std::__node_alloc::_M_deallocate(pUVar10,uVar12);
          }
          else {
            operator_delete(pUVar10);
          }
        }
        *(UStringBase **)(param_2 + 4) = local_64;
        *(UStringBase **)(param_2 + 0x24) = pUVar9;
        *(UStringBase **)(param_2 + 0x28) = local_48;
      }
      *(undefined2 *)(pUVar9 + 2) = 0;
      puVar2 = *(undefined2 **)(param_2 + 0x24);
      local_44 = local_44 + 1;
      *puVar2 = uVar6;
      *(undefined2 **)(param_2 + 0x24) = puVar2 + 1;
    } while (local_44 < local_30[0]);
  }
  return;
}


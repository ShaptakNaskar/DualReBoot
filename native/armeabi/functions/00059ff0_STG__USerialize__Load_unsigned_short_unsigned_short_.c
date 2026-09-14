/* 00059ff0 | STG::USerialize::Load<unsigned_short,unsigned_short> */

/* WARNING: Removing unreachable block (ram,0x0005a03c) */
/* void STG::USerialize::Load<unsigned short, unsigned short>(STG::FFileBase const*,
   STG::UStringBase<unsigned short, unsigned short>&) */

void STG::USerialize::Load<unsigned_short,unsigned_short>(FFileBase *param_1,UStringBase *param_2)

{
  undefined2 uVar1;
  UStringBase *pUVar2;
  UStringBase *pUVar3;
  uint uVar4;
  UStringBase *pUVar5;
  uint uVar6;
  UStringBase *pUVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  UStringBase *pUVar11;
  undefined2 *puVar12;
  UStringBase *pUVar13;
  bool bVar14;
  bool bVar15;
  UStringBase *local_3c;
  undefined2 local_32;
  uint local_30;
  uint local_2c [2];
  
  FFileBase::Read(param_1,(uchar *)&local_30,4);
  pUVar2 = *(UStringBase **)(param_2 + 0x28);
  if (pUVar2 != *(UStringBase **)(param_2 + 0x24)) {
    *(undefined2 *)pUVar2 = 0;
    *(UStringBase **)(param_2 + 0x24) = pUVar2;
  }
  if (0x7ffffffe < local_30) {
                    /* WARNING: Subroutine does not return */
    std::__stl_throw_length_error((char *)(DAT_0005a434 + 0x5a3f8));
  }
  pUVar11 = param_2 + 4;
  if (pUVar2 == pUVar11) {
    uVar6 = 0x10;
  }
  else {
    uVar6 = *(int *)(param_2 + 4) - (int)pUVar2 >> 1;
  }
  uVar4 = local_30 + 1;
  if (uVar4 < uVar6) goto LAB_0005a060;
  if (0x7ffffffe < uVar4 && local_30 != 0x7ffffffe) {
    puts((char *)(DAT_0005a438 + 0x5a430));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uVar4 == 0) {
    pUVar3 = (UStringBase *)0x0;
    pUVar13 = (UStringBase *)0x0;
    pUVar5 = pUVar3;
  }
  else {
    local_2c[0] = uVar4 * 2;
    if (local_2c[0] < 0x81) {
      pUVar3 = (UStringBase *)std::__node_alloc::_M_allocate(local_2c);
    }
    else {
      pUVar3 = operator_new(local_2c[0]);
    }
    pUVar2 = *(UStringBase **)(param_2 + 0x28);
    uVar6 = *(int *)(param_2 + 0x24) - (int)pUVar2 >> 1;
    pUVar13 = pUVar3 + (local_2c[0] & 0xfffffffe);
    pUVar5 = pUVar3;
    if (0 < (int)uVar6) {
      bVar15 = pUVar3 + 4 <= pUVar2;
      bVar14 = pUVar2 == pUVar3 + 4;
      if (!bVar15 || bVar14) {
        bVar15 = pUVar2 + 4 <= pUVar3;
        bVar14 = pUVar3 == pUVar2 + 4;
      }
      uVar4 = uVar6 >> 1;
      pUVar5 = pUVar2;
      pUVar7 = pUVar3;
      uVar9 = uVar6;
      if (uVar4 == 0 ||
          ((uVar6 < 2 || (((uint)pUVar3 | (uint)pUVar2) & 3) != 0) || (!bVar15 || bVar14))) {
LAB_0005a370:
        do {
          uVar9 = uVar9 - 1;
          *(undefined2 *)pUVar7 = *(undefined2 *)pUVar5;
          pUVar5 = pUVar5 + 2;
          pUVar7 = pUVar7 + 2;
        } while (0 < (int)uVar9);
      }
      else {
        uVar9 = 0;
        pUVar5 = pUVar3;
        pUVar7 = pUVar2;
        do {
          uVar9 = uVar9 + 1;
          *(undefined4 *)pUVar5 = *(undefined4 *)pUVar7;
          pUVar5 = pUVar5 + 4;
          pUVar7 = pUVar7 + 4;
        } while (uVar9 < uVar4);
        pUVar5 = pUVar2 + uVar4 * 4;
        pUVar7 = pUVar3 + uVar4 * 4;
        uVar9 = uVar6 + uVar4 * -2;
        if (uVar6 != uVar4 * 2) goto LAB_0005a370;
      }
      pUVar5 = pUVar3 + uVar6 * 2;
    }
  }
  *(undefined2 *)pUVar5 = 0;
  if ((pUVar11 != pUVar2) && (pUVar2 != (UStringBase *)0x0)) {
    uVar6 = *(int *)(param_2 + 4) - (int)pUVar2 & 0xfffffffe;
    if (uVar6 < 0x81) {
      std::__node_alloc::_M_deallocate(pUVar2,uVar6);
    }
    else {
      operator_delete(pUVar2);
    }
  }
  *(UStringBase **)(param_2 + 4) = pUVar13;
  *(UStringBase **)(param_2 + 0x24) = pUVar5;
  *(UStringBase **)(param_2 + 0x28) = pUVar3;
LAB_0005a060:
  if (local_30 != 0) {
    uVar6 = 0;
    do {
      while( true ) {
        FFileBase::Read(param_1,(uchar *)&local_32,2);
        uVar1 = local_32;
        pUVar2 = *(UStringBase **)(param_2 + 0x28);
        puVar12 = *(undefined2 **)(param_2 + 0x24);
        if (pUVar11 == pUVar2) {
          iVar8 = 0x10 - ((int)puVar12 - (int)pUVar11 >> 1);
        }
        else {
          iVar8 = *(int *)(param_2 + 4) - (int)puVar12 >> 1;
        }
        if (iVar8 != 1) break;
        uVar4 = (int)puVar12 - (int)pUVar2 >> 1;
        uVar9 = uVar4 * 2 + 1;
        if (uVar4 == 0) {
          uVar9 = 2;
        }
        if ((uVar9 < 0x7fffffff) && (uVar4 <= uVar9)) {
          if (uVar9 != 0) {
            local_2c[0] = uVar9 * 2;
            if (0x80 < local_2c[0]) goto LAB_0005a248;
            pUVar3 = (UStringBase *)std::__node_alloc::_M_allocate(local_2c);
            goto LAB_0005a250;
          }
          pUVar13 = (UStringBase *)0x2;
          pUVar3 = (UStringBase *)0x0;
          local_3c = (UStringBase *)0x0;
        }
        else {
          local_2c[0] = 0xfffffffc;
LAB_0005a248:
          pUVar3 = operator_new(local_2c[0]);
LAB_0005a250:
          pUVar2 = *(UStringBase **)(param_2 + 0x28);
          local_3c = pUVar3 + (local_2c[0] & 0xfffffffe);
          pUVar13 = pUVar3 + 2;
          uVar4 = *(int *)(param_2 + 0x24) - (int)pUVar2 >> 1;
        }
        pUVar5 = pUVar3;
        if (0 < (int)uVar4) {
          bVar15 = pUVar2 + 4 <= pUVar3;
          bVar14 = pUVar3 == pUVar2 + 4;
          if (!bVar15 || bVar14) {
            bVar15 = pUVar3 + 4 <= pUVar2;
            bVar14 = pUVar2 == pUVar3 + 4;
          }
          uVar9 = uVar4 >> 1;
          pUVar13 = pUVar2;
          uVar10 = uVar4;
          if (uVar9 == 0 ||
              ((!bVar15 || bVar14) || (uVar4 < 2 || (((uint)pUVar2 | (uint)pUVar3) & 3) != 0))) {
LAB_0005a1bc:
            do {
              uVar10 = uVar10 - 1;
              *(undefined2 *)pUVar5 = *(undefined2 *)pUVar13;
              pUVar13 = pUVar13 + 2;
              pUVar5 = pUVar5 + 2;
            } while (0 < (int)uVar10);
          }
          else {
            uVar10 = 0;
            do {
              uVar10 = uVar10 + 1;
              *(undefined4 *)pUVar5 = *(undefined4 *)pUVar13;
              pUVar13 = pUVar13 + 4;
              pUVar5 = pUVar5 + 4;
            } while (uVar10 < uVar9);
            pUVar13 = pUVar2 + uVar9 * 4;
            pUVar5 = pUVar3 + uVar9 * 4;
            uVar10 = uVar4 + uVar9 * -2;
            if (uVar9 * 2 != uVar4) goto LAB_0005a1bc;
          }
          pUVar13 = pUVar3 + uVar4 * 2 + 2;
          pUVar5 = pUVar3 + uVar4 * 2;
        }
        *(undefined2 *)pUVar5 = 0;
        if ((pUVar11 != pUVar2) && (pUVar2 != (UStringBase *)0x0)) {
          uVar4 = *(int *)(param_2 + 4) - (int)pUVar2 & 0xfffffffe;
          if (uVar4 < 0x81) {
            std::__node_alloc::_M_deallocate(pUVar2,uVar4);
          }
          else {
            operator_delete(pUVar2);
          }
        }
        uVar6 = uVar6 + 1;
        *(UStringBase **)(param_2 + 0x24) = pUVar5;
        *(UStringBase **)(param_2 + 4) = local_3c;
        *(UStringBase **)(param_2 + 0x28) = pUVar3;
        *(undefined2 *)(pUVar5 + 2) = 0;
        *(undefined2 *)pUVar5 = uVar1;
        *(UStringBase **)(param_2 + 0x24) = pUVar13;
        if (local_30 <= uVar6) {
          return;
        }
      }
      uVar6 = uVar6 + 1;
      puVar12[1] = 0;
      *puVar12 = local_32;
      *(undefined2 **)(param_2 + 0x24) = puVar12 + 1;
    } while (uVar6 < local_30);
  }
  return;
}


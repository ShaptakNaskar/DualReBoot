/* 0005579c | STG::USerialize::Load<unsigned_short,unsigned_short> */

/* WARNING: Removing unreachable block (ram,0x000557e8) */
/* void STG::USerialize::Load<unsigned short, unsigned short>(STG::FFileBase const*,
   STG::UStringBase<unsigned short, unsigned short>&) */

void STG::USerialize::Load<unsigned_short,unsigned_short>(FFileBase *param_1,UStringBase *param_2)

{
  undefined2 uVar1;
  UStringBase *pUVar2;
  UStringBase *pUVar3;
  UStringBase *pUVar4;
  uint uVar5;
  UStringBase *pUVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  UStringBase *pUVar10;
  undefined2 *puVar11;
  UStringBase *pUVar12;
  uint uVar13;
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
    std::__stl_throw_length_error((char *)(DAT_00055bdc + 0x55ba0));
  }
  pUVar10 = param_2 + 4;
  uVar13 = local_30 + 1;
  if (pUVar2 == pUVar10) {
    uVar5 = 0x10;
  }
  else {
    uVar5 = *(int *)(param_2 + 4) - (int)pUVar2 >> 1;
  }
  if (uVar13 < uVar5) goto LAB_0005580c;
  if (0x7ffffffe < uVar13 && local_30 != 0x7ffffffe) {
    puts((char *)(DAT_00055be0 + 0x55bd8));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uVar13 == 0) {
    pUVar3 = (UStringBase *)0x0;
    pUVar12 = (UStringBase *)0x0;
    pUVar4 = pUVar3;
  }
  else {
    local_2c[0] = uVar13 * 2;
    if (local_2c[0] < 0x81) {
      pUVar3 = (UStringBase *)std::__node_alloc::_M_allocate(local_2c);
    }
    else {
      pUVar3 = operator_new(local_2c[0]);
    }
    pUVar2 = *(UStringBase **)(param_2 + 0x28);
    uVar13 = *(int *)(param_2 + 0x24) - (int)pUVar2 >> 1;
    pUVar12 = pUVar3 + (local_2c[0] & 0xfffffffe);
    pUVar4 = pUVar3;
    if (0 < (int)uVar13) {
      uVar5 = uVar13 >> 1;
      bVar15 = pUVar3 + 4 <= pUVar2;
      bVar14 = pUVar2 == pUVar3 + 4;
      if (!bVar15 || bVar14) {
        bVar15 = pUVar2 + 4 <= pUVar3;
        bVar14 = pUVar3 == pUVar2 + 4;
      }
      pUVar4 = pUVar2;
      pUVar6 = pUVar3;
      uVar8 = uVar13;
      if (uVar5 == 0 ||
          ((uVar13 < 2 || (((uint)pUVar3 | (uint)pUVar2) & 3) != 0) || (!bVar15 || bVar14))) {
LAB_00055b18:
        do {
          uVar8 = uVar8 - 1;
          *(undefined2 *)pUVar6 = *(undefined2 *)pUVar4;
          pUVar4 = pUVar4 + 2;
          pUVar6 = pUVar6 + 2;
        } while (0 < (int)uVar8);
      }
      else {
        uVar8 = 0;
        pUVar4 = pUVar3;
        pUVar6 = pUVar2;
        do {
          uVar8 = uVar8 + 1;
          *(undefined4 *)pUVar4 = *(undefined4 *)pUVar6;
          pUVar4 = pUVar4 + 4;
          pUVar6 = pUVar6 + 4;
        } while (uVar8 < uVar5);
        pUVar4 = pUVar2 + uVar5 * 4;
        pUVar6 = pUVar3 + uVar5 * 4;
        uVar8 = uVar13 + uVar5 * -2;
        if (uVar13 != uVar5 * 2) goto LAB_00055b18;
      }
      pUVar4 = pUVar3 + uVar13 * 2;
    }
  }
  *(undefined2 *)pUVar4 = 0;
  if ((pUVar10 != pUVar2) && (pUVar2 != (UStringBase *)0x0)) {
    uVar13 = *(int *)(param_2 + 4) - (int)pUVar2 & 0xfffffffe;
    if (uVar13 < 0x81) {
      std::__node_alloc::_M_deallocate(pUVar2,uVar13);
    }
    else {
      operator_delete(pUVar2);
    }
  }
  *(UStringBase **)(param_2 + 4) = pUVar12;
  *(UStringBase **)(param_2 + 0x24) = pUVar4;
  *(UStringBase **)(param_2 + 0x28) = pUVar3;
LAB_0005580c:
  if (local_30 != 0) {
    uVar13 = 0;
    do {
      while( true ) {
        FFileBase::Read(param_1,(uchar *)&local_32,2);
        uVar1 = local_32;
        pUVar2 = *(UStringBase **)(param_2 + 0x28);
        puVar11 = *(undefined2 **)(param_2 + 0x24);
        if (pUVar10 == pUVar2) {
          iVar7 = 0x10 - ((int)puVar11 - (int)pUVar10 >> 1);
        }
        else {
          iVar7 = *(int *)(param_2 + 4) - (int)puVar11 >> 1;
        }
        if (iVar7 != 1) break;
        uVar5 = (int)puVar11 - (int)pUVar2 >> 1;
        uVar8 = uVar5 * 2 + 1;
        if (uVar5 == 0) {
          uVar8 = 2;
        }
        if ((uVar8 < 0x7fffffff) && (uVar5 <= uVar8)) {
          if (uVar8 != 0) {
            local_2c[0] = uVar8 * 2;
            if (0x80 < local_2c[0]) goto LAB_000559f0;
            pUVar3 = (UStringBase *)std::__node_alloc::_M_allocate(local_2c);
            goto LAB_000559f8;
          }
          pUVar12 = (UStringBase *)0x2;
          pUVar3 = (UStringBase *)0x0;
          local_3c = (UStringBase *)0x0;
        }
        else {
          local_2c[0] = 0xfffffffc;
LAB_000559f0:
          pUVar3 = operator_new(local_2c[0]);
LAB_000559f8:
          pUVar2 = *(UStringBase **)(param_2 + 0x28);
          pUVar12 = pUVar3 + 2;
          local_3c = pUVar3 + (local_2c[0] & 0xfffffffe);
          uVar5 = *(int *)(param_2 + 0x24) - (int)pUVar2 >> 1;
        }
        pUVar4 = pUVar3;
        if (0 < (int)uVar5) {
          bVar15 = pUVar2 + 4 <= pUVar3;
          bVar14 = pUVar3 == pUVar2 + 4;
          if (!bVar15 || bVar14) {
            bVar15 = pUVar3 + 4 <= pUVar2;
            bVar14 = pUVar2 == pUVar3 + 4;
          }
          uVar8 = uVar5 >> 1;
          pUVar12 = pUVar2;
          uVar9 = uVar5;
          if (uVar8 == 0 ||
              ((!bVar15 || bVar14) || (uVar5 < 2 || (((uint)pUVar2 | (uint)pUVar3) & 3) != 0))) {
LAB_00055964:
            do {
              uVar9 = uVar9 - 1;
              *(undefined2 *)pUVar4 = *(undefined2 *)pUVar12;
              pUVar12 = pUVar12 + 2;
              pUVar4 = pUVar4 + 2;
            } while (0 < (int)uVar9);
          }
          else {
            uVar9 = 0;
            do {
              uVar9 = uVar9 + 1;
              *(undefined4 *)pUVar4 = *(undefined4 *)pUVar12;
              pUVar12 = pUVar12 + 4;
              pUVar4 = pUVar4 + 4;
            } while (uVar9 < uVar8);
            pUVar12 = pUVar2 + uVar8 * 4;
            pUVar4 = pUVar3 + uVar8 * 4;
            uVar9 = uVar5 + uVar8 * -2;
            if (uVar8 * 2 != uVar5) goto LAB_00055964;
          }
          pUVar12 = pUVar3 + uVar5 * 2 + 2;
          pUVar4 = pUVar3 + uVar5 * 2;
        }
        *(undefined2 *)pUVar4 = 0;
        if ((pUVar10 != pUVar2) && (pUVar2 != (UStringBase *)0x0)) {
          uVar5 = *(int *)(param_2 + 4) - (int)pUVar2 & 0xfffffffe;
          if (uVar5 < 0x81) {
            std::__node_alloc::_M_deallocate(pUVar2,uVar5);
          }
          else {
            operator_delete(pUVar2);
          }
        }
        uVar13 = uVar13 + 1;
        *(UStringBase **)(param_2 + 0x24) = pUVar4;
        *(UStringBase **)(param_2 + 0x28) = pUVar3;
        *(UStringBase **)(param_2 + 4) = local_3c;
        *(undefined2 *)(pUVar4 + 2) = 0;
        *(undefined2 *)pUVar4 = uVar1;
        *(UStringBase **)(param_2 + 0x24) = pUVar12;
        if (local_30 <= uVar13) {
          return;
        }
      }
      uVar13 = uVar13 + 1;
      puVar11[1] = 0;
      *puVar11 = local_32;
      *(undefined2 **)(param_2 + 0x24) = puVar11 + 1;
    } while (uVar13 < local_30);
  }
  return;
}


/* 0005ad80 | STG::UStringBase<char,int>::operator= */

/* STG::UStringBase<char, int>::TEMPNAMEPLACEHOLDERVALUE(STG::UStringBase<char, int> const&) */

UStringBase<char,int> * __thiscall
STG::UStringBase<char,int>::operator=(UStringBase<char,int> *this,UStringBase *param_1)

{
  void *__src;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  UStringBase<char,int> *pUVar7;
  UStringBase<char,int> *pUVar8;
  UStringBase<char,int> *pUVar9;
  UStringBase<char,int> *pUVar10;
  uint uVar11;
  int unaff_EBX;
  uint uVar12;
  UStringBase<char,int> *pUVar13;
  UStringBase<char,int> *pUVar14;
  UStringBase<char,int> *local_48;
  UStringBase<char,int> *local_2c;
  UStringBase<char,int> *local_24;
  UStringBase<char,int> *local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x5ad8b;
  FUN_0002e044();
  if (param_1 == (UStringBase *)this) {
    return this;
  }
  pUVar14 = *(UStringBase<char,int> **)(param_1 + 0x14);
  __src = *(void **)(param_1 + 0x18);
  uVar12 = (int)pUVar14 - (int)__src;
  local_24 = *(UStringBase<char,int> **)(this + 0x14);
  pUVar9 = *(UStringBase<char,int> **)(this + 0x18);
  uVar11 = (int)local_24 - (int)pUVar9;
  if (uVar12 <= uVar11) {
    if (uVar12 != 0) {
      memmove(pUVar9,__src,uVar12);
      local_24 = *(UStringBase<char,int> **)(this + 0x14);
      pUVar9 = *(UStringBase<char,int> **)(this + 0x18);
    }
    pUVar9 = pUVar9 + uVar12;
    if (pUVar9 == local_24) {
      return this;
    }
    *pUVar9 = *local_24;
    *(UStringBase<char,int> **)(this + 0x14) = pUVar9 + (*(int *)(this + 0x14) - (int)local_24);
    return this;
  }
  local_2c = (UStringBase<char,int> *)0x0;
  if (uVar11 != 0) {
    memmove(pUVar9,__src,uVar11);
    local_24 = *(UStringBase<char,int> **)(this + 0x14);
    pUVar9 = *(UStringBase<char,int> **)(this + 0x18);
    local_2c = local_24 + -(int)pUVar9;
  }
  pUVar13 = local_2c + (int)__src;
  if (pUVar14 == pUVar13) {
    return this;
  }
  pUVar7 = pUVar14 + -(int)pUVar13;
  if (this + 4 == pUVar9) {
    pUVar8 = pUVar9 + (0x10 - (int)local_24);
  }
  else {
    pUVar8 = (UStringBase<char,int> *)(*(int *)(this + 4) - (int)local_24);
  }
  if (pUVar7 < pUVar8) {
    pUVar9 = pUVar13 + 1;
    uVar11 = (int)pUVar14 - (int)pUVar9;
    if ((int)uVar11 < 1) goto LAB_0005aefc;
    uVar4 = uVar11 >> 4;
    pUVar14 = local_24 + 1;
    uVar5 = uVar4 * 0x10;
    uVar12 = uVar11;
    if ((uVar4 == 0) || (uVar11 < 0x10 || pUVar14 <= pUVar13 + 0x11 && pUVar9 <= local_24 + 0x11)) {
LAB_0005aee0:
      do {
        uVar12 = uVar12 - 1;
        *pUVar14 = *pUVar9;
        pUVar9 = pUVar9 + 1;
        pUVar14 = pUVar14 + 1;
      } while (0 < (int)uVar12);
    }
    else {
      iVar6 = 0;
      uVar12 = 0;
      do {
        pUVar8 = pUVar13 + iVar6 + 1;
        uVar1 = *(undefined4 *)(pUVar8 + 4);
        uVar2 = *(undefined4 *)(pUVar8 + 8);
        uVar3 = *(undefined4 *)(pUVar8 + 0xc);
        uVar12 = uVar12 + 1;
        pUVar10 = local_24 + iVar6 + 1;
        *(undefined4 *)pUVar10 = *(undefined4 *)pUVar8;
        *(undefined4 *)(pUVar10 + 4) = uVar1;
        *(undefined4 *)(pUVar10 + 8) = uVar2;
        *(undefined4 *)(pUVar10 + 0xc) = uVar3;
        iVar6 = iVar6 + 0x10;
      } while (uVar12 < uVar4);
      pUVar9 = pUVar9 + uVar5;
      pUVar14 = pUVar14 + uVar5;
      uVar12 = uVar11 + uVar4 * -0x10;
      if (uVar11 != uVar5) goto LAB_0005aee0;
    }
    local_24 = *(UStringBase<char,int> **)(this + 0x14);
LAB_0005aefc:
    local_24[(int)pUVar7] = (UStringBase<char,int>)0x0;
    **(UStringBase<char,int> **)(this + 0x14) = *pUVar13;
    *(UStringBase<char,int> **)(this + 0x14) = pUVar7 + *(int *)(this + 0x14);
    return this;
  }
  if ((UStringBase<char,int> *)(-2 - (int)local_2c) < pUVar7) {
                    /* WARNING: Subroutine does not return */
    std::__stl_throw_length_error((char *)((int)&__DT_REL[0x3e6].r_offset + unaff_EBX + 1));
  }
  pUVar14 = local_2c;
  if (local_2c <= pUVar7) {
    pUVar14 = pUVar7;
  }
  pUVar14 = local_2c + 1 + (int)pUVar14;
  if ((pUVar14 == (UStringBase<char,int> *)0xffffffff) || (pUVar14 < local_2c)) {
    local_20[0] = (UStringBase<char,int> *)0xfffffffe;
LAB_0005b1b5:
    local_24 = operator_new((uint)local_20[0]);
LAB_0005b1c3:
    local_48 = local_24 + (int)local_20[0];
    pUVar9 = *(UStringBase<char,int> **)(this + 0x18);
    local_2c = (UStringBase<char,int> *)(*(int *)(this + 0x14) - (int)pUVar9);
  }
  else {
    if (pUVar14 != (UStringBase<char,int> *)0x0) {
      local_20[0] = pUVar14;
      if ((UStringBase<char,int> *)0x80 < pUVar14) goto LAB_0005b1b5;
      local_24 = (UStringBase<char,int> *)std::__node_alloc::_M_allocate((uint *)local_20);
      goto LAB_0005b1c3;
    }
    local_48 = (UStringBase<char,int> *)0x0;
    local_24 = (UStringBase<char,int> *)0x0;
  }
  pUVar14 = local_24;
  if (0 < (int)local_2c) {
    uVar11 = (uint)local_2c >> 4;
    pUVar10 = (UStringBase<char,int> *)(uVar11 * 0x10);
    pUVar14 = local_2c;
    pUVar8 = local_24;
    if ((uVar11 == 0) ||
       (local_2c < (UStringBase<char,int> *)0x10 ||
        local_24 <= pUVar9 + 0x10 && pUVar9 <= local_24 + 0x10)) {
LAB_0005b0a0:
      do {
        pUVar14 = pUVar14 + -1;
        *pUVar8 = *pUVar9;
        pUVar9 = pUVar9 + 1;
        pUVar8 = pUVar8 + 1;
      } while (0 < (int)pUVar14);
    }
    else {
      iVar6 = 0;
      uVar12 = 0;
      do {
        pUVar14 = pUVar9 + iVar6;
        uVar1 = *(undefined4 *)(pUVar14 + 4);
        uVar2 = *(undefined4 *)(pUVar14 + 8);
        uVar3 = *(undefined4 *)(pUVar14 + 0xc);
        uVar12 = uVar12 + 1;
        pUVar8 = local_24 + iVar6;
        *(undefined4 *)pUVar8 = *(undefined4 *)pUVar14;
        *(undefined4 *)(pUVar8 + 4) = uVar1;
        *(undefined4 *)(pUVar8 + 8) = uVar2;
        *(undefined4 *)(pUVar8 + 0xc) = uVar3;
        iVar6 = iVar6 + 0x10;
      } while (uVar12 < uVar11);
      pUVar9 = pUVar9 + (int)pUVar10;
      pUVar14 = local_2c + uVar11 * -0x10;
      pUVar8 = local_24 + (int)pUVar10;
      if (local_2c != pUVar10) goto LAB_0005b0a0;
    }
    pUVar14 = local_24 + (int)local_2c;
  }
  if ((int)pUVar7 < 1) goto LAB_0005b156;
  uVar11 = (uint)pUVar7 >> 4;
  pUVar10 = (UStringBase<char,int> *)(uVar11 * 0x10);
  pUVar8 = pUVar14;
  pUVar9 = pUVar7;
  if ((uVar11 == 0) ||
     (pUVar7 < (UStringBase<char,int> *)0x10 ||
      pUVar13 <= pUVar14 + 0x10 && pUVar14 <= pUVar13 + 0x10)) {
LAB_0005b140:
    do {
      pUVar9 = pUVar9 + -1;
      *pUVar8 = *pUVar13;
      pUVar13 = pUVar13 + 1;
      pUVar8 = pUVar8 + 1;
    } while (0 < (int)pUVar9);
  }
  else {
    iVar6 = 0;
    uVar12 = 0;
    do {
      pUVar9 = pUVar13 + iVar6;
      uVar1 = *(undefined4 *)(pUVar9 + 4);
      uVar2 = *(undefined4 *)(pUVar9 + 8);
      uVar3 = *(undefined4 *)(pUVar9 + 0xc);
      uVar12 = uVar12 + 1;
      pUVar8 = pUVar14 + iVar6;
      *(undefined4 *)pUVar8 = *(undefined4 *)pUVar9;
      *(undefined4 *)(pUVar8 + 4) = uVar1;
      *(undefined4 *)(pUVar8 + 8) = uVar2;
      *(undefined4 *)(pUVar8 + 0xc) = uVar3;
      iVar6 = iVar6 + 0x10;
    } while (uVar12 < uVar11);
    pUVar13 = pUVar13 + (int)pUVar10;
    pUVar8 = pUVar14 + (int)pUVar10;
    pUVar9 = pUVar7 + uVar11 * -0x10;
    if (pUVar7 != pUVar10) goto LAB_0005b140;
  }
  pUVar14 = pUVar14 + (int)pUVar7;
LAB_0005b156:
  *pUVar14 = (UStringBase<char,int>)0x0;
  pUVar9 = *(UStringBase<char,int> **)(this + 0x18);
  if ((this + 4 != pUVar9) && (pUVar9 != (UStringBase<char,int> *)0x0)) {
    if ((uint)(*(int *)(this + 4) - (int)pUVar9) < 0x81) {
      std::__node_alloc::_M_deallocate(pUVar9,*(int *)(this + 4) - (int)pUVar9);
    }
    else {
      operator_delete(pUVar9);
    }
  }
  *(UStringBase<char,int> **)(this + 4) = local_48;
  *(UStringBase<char,int> **)(this + 0x14) = pUVar14;
  *(UStringBase<char,int> **)(this + 0x18) = local_24;
  return this;
}


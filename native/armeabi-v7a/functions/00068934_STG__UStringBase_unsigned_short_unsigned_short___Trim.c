/* 00068934 | STG::UStringBase<unsigned_short,unsigned_short>::Trim */

/* STG::UStringBase<unsigned short, unsigned short>::Trim() */

UStringBase<unsigned_short,unsigned_short> * __thiscall
STG::UStringBase<unsigned_short,unsigned_short>::Trim
          (UStringBase<unsigned_short,unsigned_short> *this)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  ushort *__dest;
  ushort *puVar4;
  int iVar5;
  ushort *__src;
  ushort *__dest_00;
  int local_2c;
  
  __src = *(ushort **)(this + 0x24);
  __dest_00 = *(ushort **)(this + 0x28);
  iVar2 = (int)__src - (int)__dest_00 >> 3;
  local_2c = (int)__src - (int)__dest_00 >> 1;
  iVar1 = local_2c;
  puVar3 = __src;
  puVar4 = __src;
  iVar5 = iVar2;
  if (0 < iVar2) {
    do {
      iVar1 = iswspace((uint)puVar3[-1]);
      __dest = puVar3;
      if (((iVar1 == 0) || (iVar1 = iswspace((uint)puVar3[-2]), __dest = puVar3 + -1, iVar1 == 0))
         || (iVar1 = iswspace((uint)puVar3[-3]), __dest = puVar3 + -2, iVar1 == 0))
      goto LAB_000689c8;
      puVar4 = puVar3 + -4;
      iVar1 = iswspace((uint)puVar3[-4]);
      __dest = puVar3 + -3;
      if (iVar1 == 0) goto LAB_000689c8;
      iVar5 = iVar5 + -1;
      puVar3 = puVar4;
    } while (iVar5 != 0);
    iVar1 = (int)puVar4 - (int)__dest_00 >> 1;
  }
  if (iVar1 == 2) {
LAB_00068b10:
    iVar1 = iswspace((uint)puVar4[-1]);
    __dest = puVar4;
    if (iVar1 != 0) {
      puVar4 = puVar4 + -1;
LAB_00068ad8:
      iVar1 = iswspace((uint)puVar4[-1]);
      __dest = puVar4;
      if (iVar1 != 0) {
        __dest = __dest_00;
      }
    }
  }
  else if (iVar1 == 3) {
    iVar1 = iswspace((uint)puVar4[-1]);
    __dest = puVar4;
    if (iVar1 != 0) {
      puVar4 = puVar4 + -1;
      goto LAB_00068b10;
    }
  }
  else {
    __dest = __dest_00;
    if (iVar1 == 1) goto LAB_00068ad8;
  }
LAB_000689c8:
  if (__src != __dest) {
    memmove(__dest,__src,2);
    __dest_00 = *(ushort **)(this + 0x28);
    __src = (ushort *)(*(int *)(this + 0x24) - ((int)__src - (int)__dest & 0xfffffffeU));
    *(ushort **)(this + 0x24) = __src;
    local_2c = (int)__src - (int)__dest_00 >> 1;
    iVar2 = (int)__src - (int)__dest_00 >> 3;
  }
  puVar3 = __dest_00;
  if (0 < iVar2) {
    do {
      iVar1 = iswspace((uint)*puVar3);
      puVar4 = puVar3;
      if ((iVar1 == 0) || (iVar1 = iswspace((uint)puVar3[1]), puVar4 = puVar3 + 1, iVar1 == 0))
      goto LAB_00068a68;
      iVar1 = iswspace((uint)puVar3[2]);
      if (iVar1 == 0) {
        puVar4 = puVar3 + 2;
        goto LAB_00068a68;
      }
      iVar1 = iswspace((uint)puVar3[3]);
      if (iVar1 == 0) {
        puVar4 = puVar3 + 3;
        goto LAB_00068a68;
      }
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + 4;
    } while (iVar2 != 0);
    local_2c = (int)__src - (int)puVar3 >> 1;
  }
  if (local_2c == 2) {
LAB_00068b88:
    iVar2 = iswspace((uint)*puVar3);
    puVar4 = puVar3;
    if (iVar2 == 0) goto LAB_00068a68;
    puVar3 = puVar3 + 1;
  }
  else {
    if (local_2c == 3) {
      iVar2 = iswspace((uint)*puVar3);
      puVar4 = puVar3;
      if (iVar2 == 0) goto LAB_00068a68;
      puVar3 = puVar3 + 1;
      goto LAB_00068b88;
    }
    puVar4 = __src;
    if (local_2c != 1) goto LAB_00068a68;
  }
  iVar2 = iswspace((uint)*puVar3);
  puVar4 = puVar3;
  if (iVar2 != 0) {
    puVar4 = __src;
  }
LAB_00068a68:
  if (puVar4 != __dest_00) {
    iVar2 = ((int)__src - (int)puVar4 >> 1) + 1;
    if (iVar2 != 0) {
      memmove(__dest_00,puVar4,iVar2 * 2);
      __src = *(ushort **)(this + 0x24);
    }
    *(uint *)(this + 0x24) = (int)__src - ((int)puVar4 - (int)__dest_00 & 0xfffffffeU);
  }
  return this;
}


/* 0006d438 | STG::UStringBase<unsigned_short,unsigned_short>::Trim */

/* STG::UStringBase<unsigned short, unsigned short>::Trim() */

UStringBase<unsigned_short,unsigned_short> * __thiscall
STG::UStringBase<unsigned_short,unsigned_short>::Trim
          (UStringBase<unsigned_short,unsigned_short> *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  ushort *__src;
  ushort *__dest;
  
  __src = *(ushort **)(this + 0x24);
  __dest = *(ushort **)(this + 0x28);
  iVar3 = (int)__src - (int)__dest >> 3;
  iVar2 = (int)__src - (int)__dest >> 1;
  iVar1 = iVar2;
  puVar4 = __src;
  iVar6 = iVar3;
  if (0 < iVar3) {
    do {
      iVar1 = iswspace((uint)puVar4[-1]);
      puVar5 = puVar4;
      if (iVar1 == 0) goto LAB_0006d4c0;
      iVar1 = iswspace((uint)puVar4[-2]);
      puVar5 = puVar4 + -1;
      if (iVar1 == 0) goto LAB_0006d4c0;
      iVar1 = iswspace((uint)puVar4[-3]);
      puVar5 = puVar4 + -2;
      if (iVar1 == 0) goto LAB_0006d4c0;
      iVar1 = iswspace((uint)puVar4[-4]);
      puVar5 = puVar4 + -3;
      if (iVar1 == 0) goto LAB_0006d4c0;
      iVar6 = iVar6 + -1;
      puVar4 = puVar4 + -4;
    } while (iVar6 != 0);
    iVar1 = (int)puVar4 - (int)__dest >> 1;
  }
  if (iVar1 == 2) {
LAB_0006d674:
    iVar1 = iswspace((uint)puVar4[-1]);
    puVar5 = puVar4;
    if (iVar1 != 0) {
      puVar4 = puVar4 + -1;
LAB_0006d64c:
      iVar1 = iswspace((uint)puVar4[-1]);
      puVar5 = puVar4;
      if (iVar1 != 0) {
        puVar5 = __dest;
      }
    }
  }
  else if (iVar1 == 3) {
    iVar1 = iswspace((uint)puVar4[-1]);
    puVar5 = puVar4;
    if (iVar1 != 0) {
      puVar4 = puVar4 + -1;
      goto LAB_0006d674;
    }
  }
  else {
    puVar5 = __dest;
    if (iVar1 == 1) goto LAB_0006d64c;
  }
LAB_0006d4c0:
  if (__src != puVar5) {
    memmove(puVar5,__src,2);
    __dest = *(ushort **)(this + 0x28);
    __src = (ushort *)(*(int *)(this + 0x24) - ((int)__src - (int)puVar5 & 0xfffffffeU));
    iVar2 = (int)__src - (int)__dest >> 1;
    *(ushort **)(this + 0x24) = __src;
    iVar3 = (int)__src - (int)__dest >> 3;
  }
  puVar4 = __dest;
  if (0 < iVar3) {
    do {
      iVar2 = iswspace((uint)*puVar4);
      puVar5 = puVar4;
      if (iVar2 == 0) goto LAB_0006d55c;
      iVar2 = iswspace((uint)puVar4[1]);
      puVar5 = puVar4 + 1;
      if (iVar2 == 0) goto LAB_0006d55c;
      iVar2 = iswspace((uint)puVar4[2]);
      if (iVar2 == 0) {
        puVar5 = puVar4 + 2;
        goto LAB_0006d55c;
      }
      iVar2 = iswspace((uint)puVar4[3]);
      if (iVar2 == 0) {
        puVar5 = puVar4 + 3;
        goto LAB_0006d55c;
      }
      iVar3 = iVar3 + -1;
      puVar4 = puVar4 + 4;
    } while (iVar3 != 0);
    iVar2 = (int)__src - (int)puVar4 >> 1;
  }
  if (iVar2 == 2) {
LAB_0006d5f0:
    iVar3 = iswspace((uint)*puVar4);
    puVar5 = puVar4;
    if (iVar3 == 0) goto LAB_0006d55c;
    puVar4 = puVar4 + 1;
  }
  else {
    if (iVar2 == 3) {
      iVar3 = iswspace((uint)*puVar4);
      puVar5 = puVar4;
      if (iVar3 == 0) goto LAB_0006d55c;
      puVar4 = puVar4 + 1;
      goto LAB_0006d5f0;
    }
    puVar5 = __src;
    if (iVar2 != 1) goto LAB_0006d55c;
  }
  iVar3 = iswspace((uint)*puVar4);
  puVar5 = puVar4;
  if (iVar3 != 0) {
    puVar5 = __src;
  }
LAB_0006d55c:
  if (puVar5 != __dest) {
    iVar3 = ((int)__src - (int)puVar5 >> 1) + 1;
    if (iVar3 != 0) {
      memmove(__dest,puVar5,iVar3 * 2);
      __src = *(ushort **)(this + 0x24);
    }
    *(uint *)(this + 0x24) = (int)__src - ((int)puVar5 - (int)__dest & 0xfffffffeU);
  }
  return this;
}


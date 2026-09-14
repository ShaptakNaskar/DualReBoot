/* 000756a0 | STG::UStringBase<unsigned_short,unsigned_short>::Trim */

/* STG::UStringBase<unsigned short, unsigned short>::Trim() */

UStringBase<unsigned_short,unsigned_short> * __thiscall
STG::UStringBase<unsigned_short,unsigned_short>::Trim
          (UStringBase<unsigned_short,unsigned_short> *this)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  ushort *local_2c;
  ushort *local_28;
  int local_24;
  
  FUN_0002e044();
  local_2c = *(ushort **)(this + 0x24);
  local_28 = *(ushort **)(this + 0x28);
  iVar5 = (int)local_2c - (int)local_28 >> 3;
  local_24 = (int)local_2c - (int)local_28 >> 1;
  iVar1 = local_24;
  iVar2 = iVar5;
  puVar4 = local_2c;
  if (0 < iVar5) {
    do {
      iVar1 = iswspace((uint)puVar4[-1]);
      puVar3 = puVar4;
      if (iVar1 == 0) goto LAB_00075758;
      iVar1 = iswspace((uint)puVar4[-2]);
      puVar3 = puVar4 + -1;
      if (iVar1 == 0) goto LAB_00075758;
      iVar1 = iswspace((uint)puVar4[-3]);
      puVar3 = puVar4 + -2;
      if (iVar1 == 0) goto LAB_00075758;
      iVar1 = iswspace((uint)puVar4[-4]);
      puVar3 = puVar4 + -3;
      if (iVar1 == 0) goto LAB_00075758;
      puVar4 = puVar4 + -4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar1 = (int)puVar4 - (int)local_28 >> 1;
  }
  if (iVar1 == 2) {
LAB_00075943:
    iVar1 = iswspace((uint)puVar4[-1]);
    puVar3 = puVar4;
    if (iVar1 != 0) {
      puVar4 = puVar4 + -1;
LAB_0007595a:
      iVar1 = iswspace((uint)puVar4[-1]);
      puVar3 = puVar4;
      if (iVar1 != 0) {
        puVar3 = local_28;
      }
    }
  }
  else if (iVar1 == 3) {
    iVar1 = iswspace((uint)puVar4[-1]);
    puVar3 = puVar4;
    if (iVar1 != 0) {
      puVar4 = puVar4 + -1;
      goto LAB_00075943;
    }
  }
  else {
    puVar3 = local_28;
    if (iVar1 == 1) goto LAB_0007595a;
  }
LAB_00075758:
  if (local_2c != puVar3) {
    memmove(puVar3,local_2c,2);
    local_2c = (ushort *)(*(int *)(this + 0x24) - ((int)local_2c - (int)puVar3 & 0xfffffffeU));
    *(ushort **)(this + 0x24) = local_2c;
    local_28 = *(ushort **)(this + 0x28);
    local_24 = (int)local_2c - (int)local_28 >> 1;
    iVar5 = (int)local_2c - (int)local_28 >> 3;
  }
  puVar3 = local_28;
  puVar4 = local_28;
  if (0 < iVar5) {
    do {
      iVar1 = iswspace((uint)*puVar3);
      puVar4 = puVar3;
      if (iVar1 == 0) goto LAB_00075816;
      puVar4 = puVar3 + 1;
      iVar1 = iswspace((uint)puVar3[1]);
      if (iVar1 == 0) goto LAB_00075816;
      iVar1 = iswspace((uint)puVar3[2]);
      if (iVar1 == 0) {
        puVar4 = puVar3 + 2;
        goto LAB_00075816;
      }
      iVar1 = iswspace((uint)puVar3[3]);
      if (iVar1 == 0) {
        puVar4 = puVar3 + 3;
        goto LAB_00075816;
      }
      puVar3 = puVar3 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    local_24 = (int)local_2c - (int)puVar3 >> 1;
    puVar4 = puVar3;
  }
  if (local_24 == 2) {
LAB_000758c5:
    iVar1 = iswspace((uint)*puVar4);
    if (iVar1 == 0) goto LAB_00075816;
    puVar4 = puVar4 + 1;
LAB_000758db:
    iVar1 = iswspace((uint)*puVar4);
    if (iVar1 == 0) goto LAB_00075816;
  }
  else {
    if (local_24 == 3) {
      iVar1 = iswspace((uint)*puVar4);
      if (iVar1 == 0) goto LAB_00075816;
      puVar4 = puVar4 + 1;
      goto LAB_000758c5;
    }
    if (local_24 == 1) goto LAB_000758db;
  }
  puVar4 = local_2c;
LAB_00075816:
  if (puVar4 != local_28) {
    iVar1 = ((int)local_2c - (int)puVar4 >> 1) + 1;
    if (iVar1 != 0) {
      memmove(local_28,puVar4,iVar1 * 2);
      local_2c = *(ushort **)(this + 0x24);
    }
    *(uint *)(this + 0x24) = (int)local_2c - ((int)puVar4 - (int)local_28 & 0xfffffffeU);
  }
  return this;
}


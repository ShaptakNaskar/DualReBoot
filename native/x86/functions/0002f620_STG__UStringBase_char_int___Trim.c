/* 0002f620 | STG::UStringBase<char,int>::Trim */

/* STG::UStringBase<char, int>::Trim() */

UStringBase<char,int> * __thiscall STG::UStringBase<char,int>::Trim(UStringBase<char,int> *this)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int unaff_EBX;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *local_28;
  byte *local_24;
  int local_20;
  
  FUN_0002e044();
  local_28 = *(byte **)(this + 0x14);
  local_24 = *(byte **)(this + 0x18);
  local_20 = (int)local_28 - (int)local_24;
  iVar2 = local_20 >> 2;
  pbVar7 = local_28;
  iVar4 = local_20;
  if (iVar2 < 1) {
LAB_0002f89e:
    if (iVar4 == 2) {
LAB_0002f95f:
      pbVar3 = pbVar7;
      if ((pbVar7[-1] != 0xff) &&
         ((*(byte *)(**(int **)(&DAT_0006c827 + unaff_EBX) + 1 + (uint)pbVar7[-1]) & 8) != 0)) {
        pbVar7 = pbVar7 + -1;
LAB_0002f98b:
        pbVar3 = pbVar7;
        if ((pbVar7[-1] != 0xff) &&
           ((*(byte *)(**(int **)(&DAT_0006c827 + unaff_EBX) + 1 + (uint)pbVar7[-1]) & 8) != 0)) {
          pbVar3 = local_24;
        }
      }
    }
    else if (iVar4 == 3) {
      pbVar3 = pbVar7;
      if ((pbVar7[-1] != 0xff) &&
         ((*(byte *)(**(int **)(&DAT_0006c827 + unaff_EBX) + 1 + (uint)pbVar7[-1]) & 8) != 0)) {
        pbVar7 = pbVar7 + -1;
        goto LAB_0002f95f;
      }
    }
    else {
      pbVar3 = local_24;
      if (iVar4 == 1) goto LAB_0002f98b;
    }
LAB_0002f712:
    if (local_28 != pbVar3) {
      *pbVar3 = *local_28;
      local_28 = pbVar3 + (*(int *)(this + 0x14) - (int)local_28);
      *(byte **)(this + 0x14) = local_28;
      local_24 = *(byte **)(this + 0x18);
      local_20 = (int)local_28 - (int)local_24;
      iVar2 = local_20 >> 2;
    }
    pbVar7 = local_24;
    if (iVar2 < 1) {
LAB_0002f87a:
      if (local_20 == 2) {
LAB_0002f8e7:
        if ((*pbVar7 == 0xff) ||
           ((*(byte *)(**(int **)(&DAT_0006c827 + unaff_EBX) + 1 + (uint)*pbVar7) & 8) == 0))
        goto LAB_0002f802;
        pbVar7 = pbVar7 + 1;
LAB_0002f90c:
        if ((*pbVar7 == 0xff) ||
           ((*(byte *)(**(int **)(&DAT_0006c827 + unaff_EBX) + 1 + (uint)*pbVar7) & 8) == 0))
        goto LAB_0002f802;
      }
      else {
        if (local_20 == 3) {
          if ((*pbVar7 == 0xff) ||
             ((*(byte *)(**(int **)(&DAT_0006c827 + unaff_EBX) + 1 + (uint)*pbVar7) & 8) == 0))
          goto LAB_0002f802;
          pbVar7 = pbVar7 + 1;
          goto LAB_0002f8e7;
        }
        if (local_20 == 1) goto LAB_0002f90c;
      }
      pbVar7 = local_28;
      goto LAB_0002f802;
    }
  }
  else if ((local_28[-1] != 0xff) &&
          (iVar4 = **(int **)(&DAT_0006c827 + unaff_EBX),
          (*(byte *)(iVar4 + 1 + (uint)local_28[-1]) & 8) != 0)) {
    pbVar3 = local_28 + -1;
    uVar5 = (uint)(char)local_28[-2];
    pbVar1 = local_28;
    pbVar7 = pbVar3;
    iVar6 = iVar2;
    if (uVar5 != 0xffffffff) {
      while (pbVar3 = pbVar7, (*(byte *)(iVar4 + 1 + (uVar5 & 0xff)) & 8) != 0) {
        pbVar3 = pbVar1 + -2;
        if ((pbVar1[-3] == 0xff) || ((*(byte *)(iVar4 + 1 + (uint)pbVar1[-3]) & 8) == 0)) break;
        pbVar3 = pbVar1 + -3;
        if ((pbVar1[-4] == 0xff) || ((*(byte *)(iVar4 + 1 + (uint)pbVar1[-4]) & 8) == 0)) break;
        pbVar3 = pbVar1 + -4;
        iVar6 = iVar6 + -1;
        if (iVar6 == 0) {
          pbVar7 = pbVar3;
          iVar4 = (int)pbVar3 - (int)local_24;
          goto LAB_0002f89e;
        }
        if ((pbVar1[-5] == 0xff) || ((*(byte *)(iVar4 + 1 + (uint)pbVar1[-5]) & 8) == 0)) break;
        uVar5 = (uint)(char)pbVar1[-6];
        pbVar7 = pbVar1 + -5;
        pbVar1 = pbVar3;
        pbVar3 = pbVar7;
        if (uVar5 == 0xffffffff) break;
      }
    }
    goto LAB_0002f712;
  }
  if (*local_24 == 0xff) {
    return this;
  }
  iVar4 = **(int **)(&DAT_0006c827 + unaff_EBX);
  if ((*(byte *)(iVar4 + 1 + (uint)*local_24) & 8) == 0) {
    return this;
  }
  uVar5 = (uint)(char)local_24[1];
  pbVar7 = local_24 + 1;
  pbVar1 = local_24;
  if (uVar5 != 0xffffffff) {
    while ((*(byte *)(iVar4 + 1 + (uVar5 & 0xff)) & 8) != 0) {
      if ((pbVar1[2] == 0xff) || ((*(byte *)(iVar4 + 1 + (uint)pbVar1[2]) & 8) == 0)) {
        pbVar7 = pbVar1 + 2;
        break;
      }
      if ((pbVar1[3] == 0xff) || ((*(byte *)(iVar4 + 1 + (uint)pbVar1[3]) & 8) == 0)) {
        pbVar7 = pbVar1 + 3;
        break;
      }
      iVar2 = iVar2 + -1;
      pbVar3 = pbVar1 + 4;
      pbVar7 = pbVar3;
      if (iVar2 == 0) {
        local_20 = (int)local_28 - (int)pbVar3;
        goto LAB_0002f87a;
      }
      if ((*pbVar3 == 0xff) || ((*(byte *)(iVar4 + 1 + (uint)*pbVar3) & 8) == 0)) break;
      uVar5 = (uint)(char)pbVar1[5];
      pbVar7 = pbVar1 + 5;
      pbVar1 = pbVar3;
      if (uVar5 == 0xffffffff) break;
    }
  }
LAB_0002f802:
  if (pbVar7 != local_24) {
    if (local_28 + (1 - (int)pbVar7) != (byte *)0x0) {
      memmove(local_24,pbVar7,(size_t)(local_28 + (1 - (int)pbVar7)));
      local_28 = *(byte **)(this + 0x14);
    }
    *(byte **)(this + 0x14) = local_28 + ((int)local_24 - (int)pbVar7);
  }
  return this;
}


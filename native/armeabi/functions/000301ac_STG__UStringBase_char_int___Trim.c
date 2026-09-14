/* 000301ac | STG::UStringBase<char,int>::Trim */

/* STG::UStringBase<char, int>::Trim() */

UStringBase<char,int> * __thiscall STG::UStringBase<char,int>::Trim(UStringBase<char,int> *this)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  
  pbVar10 = *(byte **)(this + 0x14);
  pbVar8 = *(byte **)(this + 0x18);
  iVar11 = (int)pbVar10 - (int)pbVar8;
  iVar2 = iVar11 >> 2;
  iVar9 = DAT_000304f0 + 0x301d4;
  pbVar4 = pbVar10;
  iVar3 = iVar11;
  if (iVar2 < 1) {
LAB_00030290:
    if (iVar3 == 2) {
      iVar3 = **(int **)(iVar9 + DAT_000304f4);
LAB_000304b0:
      pbVar7 = pbVar4;
      if ((*(byte *)(iVar3 + (uint)pbVar4[-1] + 1) & 8) != 0) {
        pbVar4 = pbVar4 + -1;
LAB_00030414:
        pbVar7 = pbVar4;
        if ((*(byte *)(iVar3 + (uint)pbVar4[-1] + 1) & 8) != 0) {
          pbVar7 = pbVar8;
        }
      }
    }
    else if (iVar3 == 3) {
      iVar3 = **(int **)(iVar9 + DAT_000304f4);
      pbVar7 = pbVar4;
      if ((*(byte *)(iVar3 + (uint)pbVar4[-1] + 1) & 8) != 0) {
        pbVar4 = pbVar4 + -1;
        goto LAB_000304b0;
      }
    }
    else {
      pbVar7 = pbVar8;
      if (iVar3 == 1) {
        iVar3 = **(int **)(iVar9 + DAT_000304f4);
        goto LAB_00030414;
      }
    }
LAB_000302ac:
    if (pbVar10 != pbVar7) {
      *pbVar7 = *pbVar10;
      pbVar8 = *(byte **)(this + 0x18);
      pbVar10 = pbVar7 + (*(int *)(this + 0x14) - (int)pbVar10);
      iVar11 = (int)pbVar10 - (int)pbVar8;
      *(byte **)(this + 0x14) = pbVar10;
      iVar2 = iVar11 >> 2;
    }
    pbVar4 = pbVar8;
    if (iVar2 < 1) {
LAB_0003038c:
      if (iVar11 == 2) {
        iVar2 = **(int **)(iVar9 + DAT_000304f4);
LAB_00030460:
        pbVar7 = pbVar8;
        if ((*(byte *)(iVar2 + (uint)*pbVar8 + 1) & 8) == 0) goto LAB_000303a8;
        pbVar8 = pbVar8 + 1;
      }
      else {
        if (iVar11 == 3) {
          iVar2 = **(int **)(iVar9 + DAT_000304f4);
          pbVar7 = pbVar8;
          if ((*(byte *)(iVar2 + (uint)*pbVar8 + 1) & 8) == 0) goto LAB_000303a8;
          pbVar8 = pbVar8 + 1;
          goto LAB_00030460;
        }
        pbVar7 = pbVar10;
        if (iVar11 != 1) goto LAB_000303a8;
        iVar2 = **(int **)(iVar9 + DAT_000304f4);
      }
      pbVar7 = pbVar8;
      if ((*(byte *)(iVar2 + (uint)*pbVar8 + 1) & 8) != 0) {
        pbVar7 = pbVar10;
      }
      goto LAB_000303a8;
    }
    piVar5 = *(int **)(iVar9 + DAT_000304f4);
  }
  else {
    piVar5 = *(int **)(iVar9 + DAT_000304f4);
    iVar3 = *piVar5;
    pbVar4 = pbVar8;
    if ((*(byte *)(iVar3 + (uint)pbVar10[-1] + 1) & 8) != 0) {
      pbVar6 = pbVar10;
      iVar12 = iVar2;
      if ((*(byte *)(iVar3 + (uint)pbVar10[-2] + 1) & 8) == 0) {
        pbVar7 = pbVar10 + -1;
      }
      else {
        while ((pbVar7 = pbVar6 + -2, (*(byte *)(iVar3 + (uint)pbVar6[-3] + 1) & 8) != 0 &&
               (pbVar7 = pbVar6 + -3, (*(byte *)(iVar3 + (uint)pbVar6[-4] + 1) & 8) != 0))) {
          pbVar4 = pbVar6 + -4;
          if (iVar12 + -1 == 0) {
            iVar3 = (int)pbVar4 - (int)pbVar8;
            goto LAB_00030290;
          }
          pbVar7 = pbVar4;
          if (((*(byte *)(iVar3 + (uint)pbVar6[-5] + 1) & 8) == 0) ||
             (pbVar1 = pbVar6 + -6, pbVar7 = pbVar6 + -5, pbVar6 = pbVar4, iVar12 = iVar12 + -1,
             (*(byte *)(iVar3 + (uint)*pbVar1 + 1) & 8) == 0)) break;
        }
      }
      goto LAB_000302ac;
    }
  }
  iVar3 = *piVar5;
  if ((*(byte *)(iVar3 + (uint)*pbVar4 + 1) & 8) == 0) {
    return this;
  }
  pbVar6 = pbVar4;
  if ((*(byte *)(iVar3 + (uint)pbVar4[1] + 1) & 8) == 0) {
    pbVar7 = pbVar4 + 1;
  }
  else {
    while( true ) {
      pbVar8 = pbVar6 + 4;
      if ((*(byte *)(iVar3 + (uint)pbVar6[2] + 1) & 8) == 0) {
        pbVar7 = pbVar6 + 2;
        goto LAB_000303a8;
      }
      if ((*(byte *)(iVar3 + (uint)pbVar6[3] + 1) & 8) == 0) break;
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar11 = (int)pbVar10 - (int)pbVar8;
        goto LAB_0003038c;
      }
      pbVar7 = pbVar8;
      if (((*(byte *)(iVar3 + (uint)pbVar6[4] + 1) & 8) == 0) ||
         (pbVar1 = pbVar6 + 5, pbVar7 = pbVar6 + 5, pbVar6 = pbVar8,
         (*(byte *)(iVar3 + (uint)*pbVar1 + 1) & 8) == 0)) goto LAB_000303a8;
    }
    pbVar7 = pbVar6 + 3;
  }
LAB_000303a8:
  if (pbVar7 != pbVar4) {
    if (pbVar10 + (1 - (int)pbVar7) != (byte *)0x0) {
      memmove(pbVar4,pbVar7,(size_t)(pbVar10 + (1 - (int)pbVar7)));
      pbVar10 = *(byte **)(this + 0x14);
    }
    *(byte **)(this + 0x14) = pbVar10 + ((int)pbVar4 - (int)pbVar7);
  }
  return this;
}


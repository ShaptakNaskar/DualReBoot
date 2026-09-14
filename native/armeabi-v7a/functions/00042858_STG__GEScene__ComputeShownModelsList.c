/* 00042858 | STG::GEScene::ComputeShownModelsList */

/* STG::GEScene::ComputeShownModelsList(STG::UArrayFixed<bool, unsigned long>&) const */

void __thiscall STG::GEScene::ComputeShownModelsList(GEScene *this,UArrayFixed *param_1)

{
  int iVar1;
  byte *pbVar2;
  undefined1 uVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar4 = *(int *)(this + 0xa4);
  if (iVar4 != 0) {
    iVar12 = *(int *)param_1;
    iVar8 = 0;
    piVar6 = *(int **)(this + 0xb0);
    do {
      *(byte *)(iVar12 + iVar8) = *(byte *)(*piVar6 + 0x9d) ^ 1;
      iVar8 = iVar8 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar8 != iVar4);
  }
  if (*(uint *)(this + 0x310) < *(uint *)(this + 0xac)) {
    iVar8 = *(uint *)(this + 0x310) * 0x248 + *(int *)(this + 0xb8);
    iVar4 = *(int *)(iVar8 + 0x240);
    if (iVar4 != 0) {
      iVar13 = *(int *)param_1;
      iVar12 = 0;
      piVar6 = *(int **)(iVar8 + 0x238);
      do {
        iVar12 = iVar12 + 1;
        *(undefined1 *)(iVar13 + *piVar6) = 0;
        piVar6 = piVar6 + 1;
      } while (iVar12 != iVar4);
    }
  }
  puVar5 = (uint *)GetTimeOfDay(this);
  iVar4 = *(int *)(this + 300);
  uVar7 = *puVar5;
  if (iVar4 != 0) {
    iVar12 = *(int *)(this + 0x128);
    iVar8 = 0;
    iVar13 = *(int *)(this + 0x130);
    do {
      iVar9 = iVar8 * 4;
      iVar10 = iVar8 * 4;
      iVar8 = iVar8 + 1;
      if ((1 << (uVar7 & 0xff) & *(uint *)(iVar13 + iVar9)) == 0) {
        *(undefined1 *)(*(int *)param_1 + *(int *)(iVar12 + iVar10)) = 0;
      }
    } while (iVar8 != iVar4);
  }
  uVar7 = GetEnvironmentIndex(this);
  iVar4 = *(int *)(this + 0x15c);
  if (iVar4 != 0) {
    iVar13 = *(int *)(this + 0x158);
    iVar8 = 0;
    iVar12 = *(int *)(this + 0x160);
    do {
      iVar9 = iVar8 * 4;
      iVar10 = iVar8 * 4;
      iVar8 = iVar8 + 1;
      if ((1 << (uVar7 & 0xff) & *(uint *)(iVar12 + iVar9)) == 0) {
        *(undefined1 *)(*(int *)param_1 + *(int *)(iVar13 + iVar10)) = 0;
      }
    } while (iVar8 != iVar4);
  }
  iVar8 = *(int *)(this + 0x13c);
  iVar4 = *(int *)(this + 0x14c);
  if (iVar4 != 0 || iVar8 != 0) {
    iVar12 = *(int *)(this + 0x6a0);
    uVar7 = *(uint *)(this + 0x6ac);
    iVar13 = *(int *)(this + 0x6a4);
    if (iVar8 != 0) {
      iVar11 = *(int *)(this + 0x138);
      iVar9 = 0;
      iVar10 = *(int *)(this + 0x140);
      do {
        pbVar2 = (byte *)(iVar10 + iVar9);
        iVar1 = iVar9 * 4;
        iVar9 = iVar9 + 1;
        if (((uint)*pbVar2 & 1 << (uVar7 & 0xff)) == 0) {
          *(undefined1 *)(*(int *)param_1 + *(int *)(iVar11 + iVar1)) = 0;
        }
      } while (iVar9 != iVar8);
    }
    if (iVar4 != 0) {
      iVar8 = *(int *)(this + 0x150);
      iVar9 = 0;
      iVar11 = *(int *)(this + 0x148);
      iVar10 = 0;
      do {
        puVar5 = (uint *)(iVar8 + iVar13 * 4 + iVar9);
        iVar9 = iVar9 + 0x30;
        iVar1 = iVar10 * 4;
        iVar10 = iVar10 + 1;
        if ((1 << (iVar12 - 1U & 0xff) & *puVar5) == 0) {
          *(undefined1 *)(*(int *)param_1 + *(int *)(iVar11 + iVar1)) = 0;
        }
      } while (iVar10 != iVar4);
    }
  }
  iVar4 = *(int *)(this + 0x18c);
  if (iVar4 != 0) {
    iVar9 = *(int *)(this + 0x188);
    iVar12 = 0;
    iVar13 = *(int *)(this + 400);
    iVar8 = *(int *)param_1;
    do {
      iVar11 = *(int *)(iVar9 + iVar12 * 4);
      iVar10 = iVar12 * 4;
      iVar12 = iVar12 + 1;
      uVar3 = *(undefined1 *)(iVar8 + *(int *)(iVar13 + iVar10));
      if (*(char *)(iVar8 + iVar11) == '\0') {
        uVar3 = 0;
      }
      *(undefined1 *)(iVar8 + iVar11) = uVar3;
    } while (iVar12 != iVar4);
    return;
  }
  return;
}


/* 00044b38 | STG::GEScene::ComputeShownModelsList */

/* STG::GEScene::ComputeShownModelsList(STG::UArrayFixed<bool, unsigned long>&) const */

void __thiscall STG::GEScene::ComputeShownModelsList(GEScene *this,UArrayFixed *param_1)

{
  int iVar1;
  byte *pbVar2;
  undefined1 uVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar8 = *(int *)(this + 0xa4);
  if (iVar8 != 0) {
    iVar12 = *(int *)param_1;
    iVar6 = 0;
    piVar5 = *(int **)(this + 0xb0);
    do {
      *(byte *)(iVar12 + iVar6) = *(byte *)(*piVar5 + 0x9d) ^ 1;
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar6 != iVar8);
  }
  if (*(uint *)(this + 0x310) < *(uint *)(this + 0xac)) {
    iVar6 = *(uint *)(this + 0x310) * 0x248 + *(int *)(this + 0xb8);
    iVar8 = *(int *)(iVar6 + 0x240);
    if (iVar8 != 0) {
      iVar13 = *(int *)param_1;
      iVar12 = 0;
      piVar5 = *(int **)(iVar6 + 0x238);
      do {
        iVar12 = iVar12 + 1;
        *(undefined1 *)(iVar13 + *piVar5) = 0;
        piVar5 = piVar5 + 1;
      } while (iVar12 != iVar8);
    }
  }
  puVar4 = (uint *)GetTimeOfDay(this);
  iVar8 = *(int *)(this + 300);
  uVar7 = *puVar4;
  if (iVar8 != 0) {
    iVar12 = *(int *)(this + 0x128);
    iVar13 = *(int *)(this + 0x130);
    iVar6 = 0;
    do {
      iVar9 = iVar6 * 4;
      iVar10 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      if ((1 << (uVar7 & 0xff) & *(uint *)(iVar13 + iVar9)) == 0) {
        *(undefined1 *)(*(int *)param_1 + *(int *)(iVar12 + iVar10)) = 0;
      }
    } while (iVar6 != iVar8);
  }
  uVar7 = GetEnvironmentIndex(this);
  iVar8 = *(int *)(this + 0x15c);
  if (iVar8 != 0) {
    iVar13 = *(int *)(this + 0x158);
    iVar12 = *(int *)(this + 0x160);
    iVar6 = 0;
    do {
      iVar9 = iVar6 * 4;
      iVar10 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      if ((1 << (uVar7 & 0xff) & *(uint *)(iVar12 + iVar9)) == 0) {
        *(undefined1 *)(*(int *)param_1 + *(int *)(iVar13 + iVar10)) = 0;
      }
    } while (iVar6 != iVar8);
  }
  iVar6 = *(int *)(this + 0x13c);
  iVar8 = *(int *)(this + 0x14c);
  if (iVar8 != 0 || iVar6 != 0) {
    iVar12 = *(int *)(this + 0x6a0);
    uVar7 = *(uint *)(this + 0x6ac);
    iVar13 = *(int *)(this + 0x6a4);
    if (iVar6 != 0) {
      iVar11 = *(int *)(this + 0x138);
      iVar10 = *(int *)(this + 0x140);
      iVar9 = 0;
      do {
        pbVar2 = (byte *)(iVar10 + iVar9);
        iVar1 = iVar9 * 4;
        iVar9 = iVar9 + 1;
        if (((uint)*pbVar2 & 1 << (uVar7 & 0xff)) == 0) {
          *(undefined1 *)(*(int *)param_1 + *(int *)(iVar11 + iVar1)) = 0;
        }
      } while (iVar9 != iVar6);
    }
    if (iVar8 != 0) {
      iVar9 = *(int *)(this + 0x150);
      iVar11 = *(int *)(this + 0x148);
      iVar6 = 0;
      iVar10 = 0;
      do {
        iVar1 = iVar10 * 4;
        iVar10 = iVar10 + 1;
        if ((1 << (iVar12 - 1U & 0xff) & *(uint *)(iVar9 + iVar13 * 4 + iVar6)) == 0) {
          *(undefined1 *)(*(int *)param_1 + *(int *)(iVar11 + iVar1)) = 0;
        }
        iVar6 = iVar6 + 0x30;
      } while (iVar10 != iVar8);
    }
  }
  iVar8 = *(int *)(this + 0x18c);
  if (iVar8 != 0) {
    iVar9 = *(int *)(this + 0x188);
    iVar6 = *(int *)param_1;
    iVar13 = *(int *)(this + 400);
    iVar12 = 0;
    do {
      iVar11 = *(int *)(iVar9 + iVar12 * 4);
      iVar10 = iVar12 * 4;
      iVar12 = iVar12 + 1;
      uVar3 = *(undefined1 *)(iVar6 + *(int *)(iVar13 + iVar10));
      if (*(char *)(iVar6 + iVar11) == '\0') {
        uVar3 = 0;
      }
      *(undefined1 *)(iVar6 + iVar11) = uVar3;
    } while (iVar12 != iVar8);
  }
  return;
}


/* 00048eb0 | STG::GEScene::ComputeShownModelsList */

/* STG::GEScene::ComputeShownModelsList(STG::UArrayFixed<bool, unsigned long>&) const */

void __thiscall STG::GEScene::ComputeShownModelsList(GEScene *this,UArrayFixed *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  char cVar13;
  
  FUN_0002e044();
  iVar10 = *(int *)(this + 0xa4);
  if (iVar10 != 0) {
    iVar1 = *(int *)param_1;
    iVar5 = 0;
    do {
      *(byte *)(iVar1 + iVar5) = *(byte *)(*(int *)(*(int *)(this + 0xb0) + iVar5 * 4) + 0x9d) ^ 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar10);
  }
  if ((*(uint *)(this + 0x304) < *(uint *)(this + 0xac)) &&
     (iVar10 = *(uint *)(this + 0x304) * 0x248 + *(int *)(this + 0xb8),
     *(int *)(iVar10 + 0x240) != 0)) {
    iVar5 = *(int *)param_1;
    uVar6 = 0;
    do {
      iVar1 = uVar6 * 4;
      uVar6 = uVar6 + 1;
      *(undefined1 *)(iVar5 + *(int *)(*(int *)(iVar10 + 0x238) + iVar1)) = 0;
    } while (uVar6 < *(uint *)(iVar10 + 0x240));
  }
  puVar7 = (undefined4 *)GetTimeOfDay(this);
  uVar2 = *puVar7;
  iVar10 = *(int *)(this + 300);
  if (iVar10 != 0) {
    iVar5 = *(int *)(this + 0x128);
    iVar1 = *(int *)(this + 0x130);
    iVar11 = 0;
    do {
      if ((*(uint *)(iVar1 + iVar11 * 4) & 1 << ((byte)uVar2 & 0x1f)) == 0) {
        *(undefined1 *)(*(int *)param_1 + *(int *)(iVar5 + iVar11 * 4)) = 0;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar10);
  }
  bVar4 = GetEnvironmentIndex(this);
  iVar10 = *(int *)(this + 0x15c);
  if (iVar10 != 0) {
    iVar5 = *(int *)(this + 0x158);
    iVar1 = *(int *)(this + 0x160);
    iVar11 = 0;
    do {
      if ((*(uint *)(iVar1 + iVar11 * 4) & 1 << (bVar4 & 0x1f)) == 0) {
        *(undefined1 *)(*(int *)param_1 + *(int *)(iVar5 + iVar11 * 4)) = 0;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar10);
  }
  iVar10 = *(int *)(this + 0x13c);
  iVar5 = *(int *)(this + 0x14c);
  if (iVar5 != 0 || iVar10 != 0) {
    uVar2 = *(undefined4 *)(this + 0x698);
    iVar1 = *(int *)(this + 0x690);
    uVar3 = *(undefined4 *)(this + 0x68c);
    if (iVar10 != 0) {
      iVar11 = *(int *)(this + 0x140);
      iVar9 = *(int *)(this + 0x138);
      iVar8 = 0;
      do {
        if ((1 << ((byte)uVar2 & 0x1f) & (uint)*(byte *)(iVar11 + iVar8)) == 0) {
          *(undefined1 *)(*(int *)param_1 + *(int *)(iVar9 + iVar8 * 4)) = 0;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 != iVar10);
    }
    if (iVar5 != 0) {
      iVar10 = *(int *)(this + 0x150);
      iVar11 = *(int *)(this + 0x148);
      iVar8 = 0;
      iVar9 = 0;
      do {
        if ((*(uint *)(iVar10 + iVar1 * 4 + iVar8) & 1 << ((char)uVar3 - 1U & 0x1f)) == 0) {
          *(undefined1 *)(*(int *)param_1 + *(int *)(iVar11 + iVar9 * 4)) = 0;
        }
        iVar9 = iVar9 + 1;
        iVar8 = iVar8 + 0x30;
      } while (iVar9 != iVar5);
    }
  }
  iVar10 = *(int *)(this + 0x18c);
  if (iVar10 != 0) {
    iVar1 = *(int *)(this + 0x188);
    iVar11 = *(int *)param_1;
    iVar9 = *(int *)(this + 400);
    iVar5 = 0;
    do {
      iVar8 = iVar5 * 4;
      pcVar12 = (char *)(iVar11 + *(int *)(iVar1 + iVar5 * 4));
      iVar5 = iVar5 + 1;
      cVar13 = *(char *)(iVar11 + *(int *)(iVar9 + iVar8));
      if (*pcVar12 == '\0') {
        cVar13 = '\0';
      }
      *pcVar12 = cVar13;
    } while (iVar5 != iVar10);
  }
  return;
}


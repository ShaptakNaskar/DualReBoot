/* 0004391c | STG::GEScene::ApplyPreferences */

/* STG::GEScene::ApplyPreferences() */

void __thiscall STG::GEScene::ApplyPreferences(GEScene *this)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  GETimeOfDay *pGVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  UPreference_ModelSwap *this_00;
  int iVar15;
  int iVar16;
  int iVar17;
  uint *local_30;
  ulong local_2c [2];
  
  iVar16 = *(int *)(this + 0x3c);
  if (iVar16 != 0) {
    iVar10 = 0;
    iVar14 = 0;
    do {
      while( true ) {
        iVar13 = *(int *)(this + 0x38);
        iVar14 = iVar14 + 1;
        iVar15 = iVar13 + iVar10;
        iVar3 = (**(code **)(*(int *)(iVar13 + iVar10) + 0x18))(iVar15);
        if (iVar3 == 0) break;
        piVar1 = (int *)(iVar13 + iVar10);
        iVar10 = iVar10 + 0x88;
        uVar4 = (**(code **)(*piVar1 + 0x20))(iVar15);
        *(undefined4 *)(this + 0x310) = uVar4;
        if (iVar14 == iVar16) goto LAB_00043990;
      }
      iVar10 = iVar10 + 0x88;
    } while (iVar14 != iVar16);
  }
LAB_00043990:
  iVar16 = *(int *)(this + 0x84);
  if (iVar16 != 0) {
    iVar10 = 0;
    iVar14 = 0;
    do {
      while( true ) {
        iVar13 = *(int *)(this + 0x80);
        iVar14 = iVar14 + 1;
        iVar15 = iVar13 + iVar10;
        iVar3 = (**(code **)(*(int *)(iVar13 + iVar10) + 0x18))(iVar15);
        if (iVar3 == 0) break;
        piVar1 = (int *)(iVar13 + iVar10);
        iVar10 = iVar10 + 0x88;
        uVar5 = (**(code **)(*piVar1 + 0x20))(iVar15);
        SetEnvironmentIndex(this,uVar5);
        if (iVar14 == iVar16) goto LAB_00043a00;
      }
      iVar10 = iVar10 + 0x88;
    } while (iVar14 != iVar16);
  }
LAB_00043a00:
  pGVar11 = (GETimeOfDay *)(this + 0x5c4);
  UPreference_Scene::GetTimeOfDay
            ((UPreference_Scene *)(this + 0x2c),(ResultData *)(this + 0x5fc),pGVar11);
  GETimeOfDay::operator=((GETimeOfDay *)(this + 0x5cc),pGVar11);
  GETimeOfDay::operator=((GETimeOfDay *)(this + 0x5d4),pGVar11);
  iVar16 = *(int *)(this + 0x4c);
  if (iVar16 != 0) {
    iVar3 = *(int *)(this + 0x48);
    iVar10 = 0;
    iVar14 = 0;
    do {
      iVar15 = iVar3 + iVar10;
      iVar13 = *(int *)(iVar15 + 0x8c);
      bVar2 = *(byte *)(*(int *)(iVar15 + 0x7c) + *(int *)(iVar15 + 0x84));
      if (iVar13 != 0) {
        uVar6 = *(uint *)(this + 0xa4);
        iVar17 = *(int *)(iVar15 + 0x88);
        iVar15 = 0;
        do {
          uVar8 = *(uint *)(iVar17 + iVar15 * 4);
          iVar15 = iVar15 + 1;
          if (uVar8 < uVar6) {
            *(byte *)(*(int *)(*(int *)(this + 0xb0) + uVar8 * 4) + 0x9d) = bVar2 ^ 1;
          }
        } while (iVar15 != iVar13);
      }
      iVar14 = iVar14 + 1;
      iVar10 = iVar10 + 0x90;
    } while (iVar14 != iVar16);
  }
  iVar16 = *(int *)(this + 0x74);
  if (iVar16 != 0) {
    iVar10 = 0;
    iVar14 = 0;
    do {
      uVar12 = 0;
      this_00 = (UPreference_ModelSwap *)(*(int *)(this + 0x70) + iVar10);
      uVar5 = (**(code **)(*(int *)(*(int *)(this + 0x70) + iVar10) + 0x20))(this_00);
      iVar3 = (**(code **)(*(int *)this_00 + 0x18))(this_00);
      if (iVar3 != 0) {
        do {
          UPreference_ModelSwap::GetModelIndices(this_00,uVar12,&local_30,local_2c);
          if (local_2c[0] != 0) {
            uVar6 = *(uint *)(this + 0xa4);
            uVar9 = 0;
            puVar7 = local_30;
            do {
              uVar9 = uVar9 + 1;
              if (*puVar7 < uVar6) {
                *(bool *)(*(int *)(*(int *)(this + 0xb0) + *puVar7 * 4) + 0x9d) = uVar12 != uVar5;
              }
              puVar7 = puVar7 + 1;
            } while (uVar9 != local_2c[0]);
          }
          uVar12 = uVar12 + 1;
          uVar6 = (**(code **)(*(int *)this_00 + 0x18))(this_00);
        } while (uVar12 < uVar6);
      }
      iVar14 = iVar14 + 1;
      iVar10 = iVar10 + 0xa0;
    } while (iVar14 != iVar16);
  }
  return;
}


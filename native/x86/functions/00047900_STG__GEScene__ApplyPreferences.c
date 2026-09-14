/* 00047900 | STG::GEScene::ApplyPreferences */

/* STG::GEScene::ApplyPreferences() */

void __thiscall STG::GEScene::ApplyPreferences(GEScene *this)

{
  GETimeOfDay *pGVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  UPreference_ModelSwap *this_00;
  int iVar11;
  int *piVar12;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  ulong *local_20 [3];
  ulong local_14;
  
  local_14 = 0x4790b;
  FUN_0002e044();
  iVar3 = *(int *)(this + 0x3c);
  if (iVar3 != 0) {
    local_24 = 0;
    iVar11 = 0;
    do {
      piVar12 = (int *)(iVar11 + *(int *)(this + 0x38));
      iVar4 = (**(code **)(*piVar12 + 0x18))(piVar12);
      if (iVar4 != 0) {
        uVar5 = (**(code **)(*piVar12 + 0x20))(piVar12);
        *(undefined4 *)(this + 0x304) = uVar5;
      }
      local_24 = local_24 + 1;
      iVar11 = iVar11 + 0x88;
    } while (local_24 != iVar3);
  }
  iVar3 = *(int *)(this + 0x84);
  if (iVar3 != 0) {
    local_24 = 0;
    iVar11 = 0;
    do {
      piVar12 = (int *)(iVar11 + *(int *)(this + 0x80));
      iVar4 = (**(code **)(*piVar12 + 0x18))(piVar12);
      if (iVar4 != 0) {
        uVar6 = (**(code **)(*piVar12 + 0x20))(piVar12);
        SetEnvironmentIndex(this,uVar6);
      }
      local_24 = local_24 + 1;
      iVar11 = iVar11 + 0x88;
    } while (local_24 != iVar3);
  }
  pGVar1 = (GETimeOfDay *)(this + 0x5b0);
  UPreference_Scene::GetTimeOfDay
            ((UPreference_Scene *)(this + 0x2c),(ResultData *)(this + 0x5e8),pGVar1);
  GETimeOfDay::operator=((GETimeOfDay *)(this + 0x5b8),pGVar1);
  GETimeOfDay::operator=((GETimeOfDay *)(this + 0x5c0),pGVar1);
  iVar3 = *(int *)(this + 0x4c);
  if (iVar3 != 0) {
    iVar11 = *(int *)(this + 0x48);
    local_30 = 0;
    local_2c = 0;
    do {
      iVar7 = iVar11 + local_30;
      bVar2 = *(byte *)(*(int *)(iVar7 + 0x7c) + *(int *)(iVar7 + 0x84));
      iVar4 = *(int *)(iVar7 + 0x8c);
      if (iVar4 != 0) {
        iVar7 = *(int *)(iVar7 + 0x88);
        iVar8 = 0;
        do {
          uVar9 = *(uint *)(iVar7 + iVar8 * 4);
          if (uVar9 < *(uint *)(this + 0xa4)) {
            *(byte *)(*(int *)(*(int *)(this + 0xb0) + uVar9 * 4) + 0x9d) = bVar2 ^ 1;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 != iVar4);
      }
      local_2c = local_2c + 1;
      local_30 = local_30 + 0x90;
    } while (local_2c != iVar3);
  }
  iVar3 = *(int *)(this + 0x74);
  if (iVar3 != 0) {
    local_38 = 0;
    local_34 = 0;
    do {
      this_00 = (UPreference_ModelSwap *)(local_38 + *(int *)(this + 0x70));
      uVar9 = (**(code **)(*(int *)this_00 + 0x20))(this_00);
      for (local_28 = 0; uVar10 = (**(code **)(*(int *)this_00 + 0x18))(this_00), local_28 < uVar10;
          local_28 = local_28 + 1) {
        UPreference_ModelSwap::GetModelIndices(this_00,local_28,local_20,&local_14);
        if (local_14 != 0) {
          uVar6 = 0;
          do {
            if (local_20[0][uVar6] < *(uint *)(this + 0xa4)) {
              *(bool *)(*(int *)(*(int *)(this + 0xb0) + local_20[0][uVar6] * 4) + 0x9d) =
                   local_28 != uVar9;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 != local_14);
        }
      }
      local_34 = local_34 + 1;
      local_38 = local_38 + 0xa0;
    } while (local_34 != iVar3);
  }
  return;
}


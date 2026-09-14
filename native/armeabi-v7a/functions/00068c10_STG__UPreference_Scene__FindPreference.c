/* 00068c10 | STG::UPreference_Scene::FindPreference */

/* STG::UPreference_Scene::FindPreference(STG::UStringBase<char, int> const&) */

uint __thiscall STG::UPreference_Scene::FindPreference(UPreference_Scene *this,UStringBase *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  size_t sVar4;
  undefined4 *puVar5;
  size_t sVar6;
  uint uVar7;
  size_t sVar8;
  void *pvVar9;
  uint uVar10;
  
  uVar7 = *(uint *)(this + 4);
  uVar10 = uVar7 + *(int *)(this + 8) * 0x88;
  if (uVar7 < uVar10) {
    pvVar9 = *(void **)(param_1 + 0x18);
    puVar5 = (undefined4 *)(uVar7 + 0x1c);
    sVar8 = *(int *)(param_1 + 0x14) - (int)pvVar9;
    do {
      pvVar3 = (void *)*puVar5;
      piVar1 = puVar5 + -1;
      puVar5 = puVar5 + 0x22;
      sVar6 = *piVar1 - (int)pvVar3;
      sVar4 = sVar6;
      if ((int)sVar8 <= (int)sVar6) {
        sVar4 = sVar8;
      }
      iVar2 = memcmp(pvVar9,pvVar3,sVar4);
      if (((iVar2 == 0) && ((int)sVar6 <= (int)sVar8)) && ((int)sVar8 <= (int)sVar6)) {
        if (uVar7 != 0) {
          return uVar7;
        }
        break;
      }
      uVar7 = uVar7 + 0x88;
    } while (uVar7 < uVar10);
  }
  uVar7 = *(uint *)(this + 0x5c);
  uVar10 = *(int *)(this + 0x60) * 0x8c + uVar7;
  if (uVar7 < uVar10) {
    pvVar9 = *(void **)(param_1 + 0x18);
    puVar5 = (undefined4 *)(uVar7 + 0x1c);
    sVar8 = *(int *)(param_1 + 0x14) - (int)pvVar9;
    do {
      pvVar3 = (void *)*puVar5;
      piVar1 = puVar5 + -1;
      puVar5 = puVar5 + 0x23;
      sVar6 = *piVar1 - (int)pvVar3;
      sVar4 = sVar6;
      if ((int)sVar8 <= (int)sVar6) {
        sVar4 = sVar8;
      }
      iVar2 = memcmp(pvVar9,pvVar3,sVar4);
      if (((iVar2 == 0) && ((int)sVar6 <= (int)sVar8)) && ((int)sVar8 <= (int)sVar6)) {
        if (uVar7 != 0) {
          return uVar7;
        }
        break;
      }
      uVar7 = uVar7 + 0x8c;
    } while (uVar7 < uVar10);
  }
  uVar7 = *(uint *)(this + 0xc);
  uVar10 = uVar7 + *(int *)(this + 0x10) * 0x88;
  if (uVar7 < uVar10) {
    pvVar9 = *(void **)(param_1 + 0x18);
    puVar5 = (undefined4 *)(uVar7 + 0x1c);
    sVar8 = *(int *)(param_1 + 0x14) - (int)pvVar9;
    do {
      pvVar3 = (void *)*puVar5;
      piVar1 = puVar5 + -1;
      puVar5 = puVar5 + 0x22;
      sVar6 = *piVar1 - (int)pvVar3;
      sVar4 = sVar6;
      if ((int)sVar8 <= (int)sVar6) {
        sVar4 = sVar8;
      }
      iVar2 = memcmp(pvVar9,pvVar3,sVar4);
      if (((iVar2 == 0) && ((int)sVar6 <= (int)sVar8)) && ((int)sVar8 <= (int)sVar6)) {
        if (uVar7 != 0) {
          return uVar7;
        }
        break;
      }
      uVar7 = uVar7 + 0x88;
    } while (uVar7 < uVar10);
  }
  uVar7 = *(uint *)(this + 0x2c);
  uVar10 = *(int *)(this + 0x30) * 0x98 + uVar7;
  if (uVar7 < uVar10) {
    pvVar9 = *(void **)(param_1 + 0x18);
    puVar5 = (undefined4 *)(uVar7 + 0x1c);
    sVar8 = *(int *)(param_1 + 0x14) - (int)pvVar9;
    do {
      pvVar3 = (void *)*puVar5;
      piVar1 = puVar5 + -1;
      puVar5 = puVar5 + 0x26;
      sVar6 = *piVar1 - (int)pvVar3;
      sVar4 = sVar6;
      if ((int)sVar8 <= (int)sVar6) {
        sVar4 = sVar8;
      }
      iVar2 = memcmp(pvVar9,pvVar3,sVar4);
      if (((iVar2 == 0) && ((int)sVar6 <= (int)sVar8)) && ((int)sVar8 <= (int)sVar6)) {
        if (uVar7 != 0) {
          return uVar7;
        }
        break;
      }
      uVar7 = uVar7 + 0x98;
    } while (uVar7 < uVar10);
  }
  uVar7 = *(uint *)(this + 0x1c);
  uVar10 = uVar7 + *(int *)(this + 0x20) * 0x90;
  if (uVar7 < uVar10) {
    pvVar9 = *(void **)(param_1 + 0x18);
    puVar5 = (undefined4 *)(uVar7 + 0x1c);
    sVar8 = *(int *)(param_1 + 0x14) - (int)pvVar9;
    do {
      pvVar3 = (void *)*puVar5;
      piVar1 = puVar5 + -1;
      puVar5 = puVar5 + 0x24;
      sVar6 = *piVar1 - (int)pvVar3;
      sVar4 = sVar6;
      if ((int)sVar8 <= (int)sVar6) {
        sVar4 = sVar8;
      }
      iVar2 = memcmp(pvVar9,pvVar3,sVar4);
      if (((iVar2 == 0) && ((int)sVar6 <= (int)sVar8)) && ((int)sVar8 <= (int)sVar6)) {
        if (uVar7 != 0) {
          return uVar7;
        }
        break;
      }
      uVar7 = uVar7 + 0x90;
    } while (uVar7 < uVar10);
  }
  uVar7 = *(uint *)(this + 0x44);
  uVar10 = uVar7 + *(int *)(this + 0x48) * 0xa0;
  for (; uVar7 < uVar10; uVar7 = uVar7 + 0xa0) {
    iVar2 = UStringBase<char,int>::IsEqual
                      ((UStringBase<char,int> *)param_1,(UStringBase *)(uVar7 + 4));
    if (iVar2 != 0) {
      if (uVar7 != 0) {
        return uVar7;
      }
      break;
    }
  }
  uVar7 = *(uint *)(this + 0x24);
  uVar10 = uVar7 + *(int *)(this + 0x28) * 0x90;
  for (; uVar7 < uVar10; uVar7 = uVar7 + 0x90) {
    iVar2 = UStringBase<char,int>::IsEqual
                      ((UStringBase<char,int> *)param_1,(UStringBase *)(uVar7 + 4));
    if (iVar2 != 0) {
      if (uVar7 != 0) {
        return uVar7;
      }
      break;
    }
  }
  uVar7 = *(uint *)(this + 0x34);
  uVar10 = *(int *)(this + 0x38) * 0x94 + uVar7;
  for (; uVar7 < uVar10; uVar7 = uVar7 + 0x94) {
    iVar2 = UStringBase<char,int>::IsEqual
                      ((UStringBase<char,int> *)param_1,(UStringBase *)(uVar7 + 4));
    if (iVar2 != 0) {
      if (uVar7 != 0) {
        return uVar7;
      }
      break;
    }
  }
  uVar7 = *(uint *)(this + 0x3c);
  uVar10 = uVar7 + *(int *)(this + 0x40) * 0x88;
  for (; uVar7 < uVar10; uVar7 = uVar7 + 0x88) {
    iVar2 = UStringBase<char,int>::IsEqual
                      ((UStringBase<char,int> *)param_1,(UStringBase *)(uVar7 + 4));
    if (iVar2 != 0) {
      if (uVar7 != 0) {
        return uVar7;
      }
      break;
    }
  }
  uVar7 = *(uint *)(this + 0x4c);
  uVar10 = *(int *)(this + 0x50) * 0x8c + uVar7;
  do {
    if (uVar10 <= uVar7) {
LAB_00068fc8:
      uVar7 = *(uint *)(this + 0x54);
      uVar10 = uVar7 + *(int *)(this + 0x58) * 0x88;
      while( true ) {
        if (uVar10 <= uVar7) {
          return 0;
        }
        iVar2 = UStringBase<char,int>::IsEqual
                          ((UStringBase<char,int> *)param_1,(UStringBase *)(uVar7 + 4));
        if (iVar2 != 0) break;
        uVar7 = uVar7 + 0x88;
      }
      return uVar7;
    }
    iVar2 = UStringBase<char,int>::IsEqual
                      ((UStringBase<char,int> *)param_1,(UStringBase *)(uVar7 + 4));
    if (iVar2 != 0) {
      if (uVar7 != 0) {
        return uVar7;
      }
      goto LAB_00068fc8;
    }
    uVar7 = uVar7 + 0x8c;
  } while( true );
}


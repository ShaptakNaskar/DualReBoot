/* 0006d6f0 | STG::UPreference_Scene::FindPreference */

/* STG::UPreference_Scene::FindPreference(STG::UStringBase<char, int> const&) */

uint __thiscall STG::UPreference_Scene::FindPreference(UPreference_Scene *this,UStringBase *param_1)

{
  int iVar1;
  size_t sVar2;
  undefined4 *puVar3;
  size_t sVar4;
  uint uVar5;
  size_t sVar6;
  void *pvVar7;
  uint uVar8;
  
  uVar5 = *(uint *)(this + 4);
  uVar8 = *(int *)(this + 8) * 0x88 + uVar5;
  if (uVar5 < uVar8) {
    pvVar7 = *(void **)(param_1 + 0x18);
    puVar3 = (undefined4 *)(uVar5 + 0x1c);
    sVar6 = *(int *)(param_1 + 0x14) - (int)pvVar7;
    do {
      sVar4 = puVar3[-1] - (int)*puVar3;
      sVar2 = sVar4;
      if ((int)sVar6 <= (int)sVar4) {
        sVar2 = sVar6;
      }
      iVar1 = memcmp(pvVar7,(void *)*puVar3,sVar2);
      if (((iVar1 == 0) && ((int)sVar4 <= (int)sVar6)) && ((int)sVar6 <= (int)sVar4)) {
        if (uVar5 != 0) {
          return uVar5;
        }
        break;
      }
      uVar5 = uVar5 + 0x88;
      puVar3 = puVar3 + 0x22;
    } while (uVar5 < uVar8);
  }
  uVar5 = *(uint *)(this + 0x5c);
  uVar8 = *(int *)(this + 0x60) * 0x8c + uVar5;
  if (uVar5 < uVar8) {
    pvVar7 = *(void **)(param_1 + 0x18);
    puVar3 = (undefined4 *)(uVar5 + 0x1c);
    sVar6 = *(int *)(param_1 + 0x14) - (int)pvVar7;
    do {
      sVar4 = puVar3[-1] - (int)*puVar3;
      sVar2 = sVar4;
      if ((int)sVar6 <= (int)sVar4) {
        sVar2 = sVar6;
      }
      iVar1 = memcmp(pvVar7,(void *)*puVar3,sVar2);
      if (((iVar1 == 0) && ((int)sVar4 <= (int)sVar6)) && ((int)sVar6 <= (int)sVar4)) {
        if (uVar5 != 0) {
          return uVar5;
        }
        break;
      }
      uVar5 = uVar5 + 0x8c;
      puVar3 = puVar3 + 0x23;
    } while (uVar5 < uVar8);
  }
  uVar5 = *(uint *)(this + 0xc);
  uVar8 = *(int *)(this + 0x10) * 0x88 + uVar5;
  if (uVar5 < uVar8) {
    pvVar7 = *(void **)(param_1 + 0x18);
    puVar3 = (undefined4 *)(uVar5 + 0x1c);
    sVar6 = *(int *)(param_1 + 0x14) - (int)pvVar7;
    do {
      sVar4 = puVar3[-1] - (int)*puVar3;
      sVar2 = sVar4;
      if ((int)sVar6 <= (int)sVar4) {
        sVar2 = sVar6;
      }
      iVar1 = memcmp(pvVar7,(void *)*puVar3,sVar2);
      if (((iVar1 == 0) && ((int)sVar4 <= (int)sVar6)) && ((int)sVar6 <= (int)sVar4)) {
        if (uVar5 != 0) {
          return uVar5;
        }
        break;
      }
      uVar5 = uVar5 + 0x88;
      puVar3 = puVar3 + 0x22;
    } while (uVar5 < uVar8);
  }
  uVar5 = *(uint *)(this + 0x2c);
  uVar8 = *(int *)(this + 0x30) * 0x98 + uVar5;
  if (uVar5 < uVar8) {
    pvVar7 = *(void **)(param_1 + 0x18);
    puVar3 = (undefined4 *)(uVar5 + 0x1c);
    sVar6 = *(int *)(param_1 + 0x14) - (int)pvVar7;
    do {
      sVar4 = puVar3[-1] - (int)*puVar3;
      sVar2 = sVar4;
      if ((int)sVar6 <= (int)sVar4) {
        sVar2 = sVar6;
      }
      iVar1 = memcmp(pvVar7,(void *)*puVar3,sVar2);
      if (((iVar1 == 0) && ((int)sVar4 <= (int)sVar6)) && ((int)sVar6 <= (int)sVar4)) {
        if (uVar5 != 0) {
          return uVar5;
        }
        break;
      }
      uVar5 = uVar5 + 0x98;
      puVar3 = puVar3 + 0x26;
    } while (uVar5 < uVar8);
  }
  uVar5 = *(uint *)(this + 0x1c);
  uVar8 = *(int *)(this + 0x20) * 0x90 + uVar5;
  if (uVar5 < uVar8) {
    pvVar7 = *(void **)(param_1 + 0x18);
    puVar3 = (undefined4 *)(uVar5 + 0x1c);
    sVar6 = *(int *)(param_1 + 0x14) - (int)pvVar7;
    do {
      sVar4 = puVar3[-1] - (int)*puVar3;
      sVar2 = sVar4;
      if ((int)sVar6 <= (int)sVar4) {
        sVar2 = sVar6;
      }
      iVar1 = memcmp(pvVar7,(void *)*puVar3,sVar2);
      if (((iVar1 == 0) && ((int)sVar4 <= (int)sVar6)) && ((int)sVar6 <= (int)sVar4)) {
        if (uVar5 != 0) {
          return uVar5;
        }
        break;
      }
      uVar5 = uVar5 + 0x90;
      puVar3 = puVar3 + 0x24;
    } while (uVar5 < uVar8);
  }
  uVar5 = *(uint *)(this + 0x44);
  uVar8 = *(int *)(this + 0x48) * 0xa0 + uVar5;
  for (; uVar5 < uVar8; uVar5 = uVar5 + 0xa0) {
    iVar1 = UStringBase<char,int>::IsEqual
                      ((UStringBase<char,int> *)param_1,(UStringBase *)(uVar5 + 4));
    if (iVar1 != 0) {
      if (uVar5 != 0) {
        return uVar5;
      }
      break;
    }
  }
  uVar5 = *(uint *)(this + 0x24);
  uVar8 = *(int *)(this + 0x28) * 0x90 + uVar5;
  for (; uVar5 < uVar8; uVar5 = uVar5 + 0x90) {
    iVar1 = UStringBase<char,int>::IsEqual
                      ((UStringBase<char,int> *)param_1,(UStringBase *)(uVar5 + 4));
    if (iVar1 != 0) {
      if (uVar5 != 0) {
        return uVar5;
      }
      break;
    }
  }
  uVar5 = *(uint *)(this + 0x34);
  uVar8 = *(int *)(this + 0x38) * 0x94 + uVar5;
  for (; uVar5 < uVar8; uVar5 = uVar5 + 0x94) {
    iVar1 = UStringBase<char,int>::IsEqual
                      ((UStringBase<char,int> *)param_1,(UStringBase *)(uVar5 + 4));
    if (iVar1 != 0) {
      if (uVar5 != 0) {
        return uVar5;
      }
      break;
    }
  }
  uVar5 = *(uint *)(this + 0x3c);
  uVar8 = *(int *)(this + 0x40) * 0x88 + uVar5;
  for (; uVar5 < uVar8; uVar5 = uVar5 + 0x88) {
    iVar1 = UStringBase<char,int>::IsEqual
                      ((UStringBase<char,int> *)param_1,(UStringBase *)(uVar5 + 4));
    if (iVar1 != 0) {
      if (uVar5 != 0) {
        return uVar5;
      }
      break;
    }
  }
  uVar5 = *(uint *)(this + 0x4c);
  uVar8 = *(int *)(this + 0x50) * 0x8c + uVar5;
  do {
    if (uVar8 <= uVar5) {
LAB_0006dac0:
      uVar5 = *(uint *)(this + 0x54);
      uVar8 = *(int *)(this + 0x58) * 0x88 + uVar5;
      while( true ) {
        if (uVar8 <= uVar5) {
          return 0;
        }
        iVar1 = UStringBase<char,int>::IsEqual
                          ((UStringBase<char,int> *)param_1,(UStringBase *)(uVar5 + 4));
        if (iVar1 != 0) break;
        uVar5 = uVar5 + 0x88;
      }
      return uVar5;
    }
    iVar1 = UStringBase<char,int>::IsEqual
                      ((UStringBase<char,int> *)param_1,(UStringBase *)(uVar5 + 4));
    if (iVar1 != 0) {
      if (uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0006dac0;
    }
    uVar5 = uVar5 + 0x8c;
  } while( true );
}


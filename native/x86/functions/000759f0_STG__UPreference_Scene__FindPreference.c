/* 000759f0 | STG::UPreference_Scene::FindPreference */

/* STG::UPreference_Scene::FindPreference(STG::UStringBase<char, int> const&) */

uint __thiscall STG::UPreference_Scene::FindPreference(UPreference_Scene *this,UStringBase *param_1)

{
  void *pvVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  size_t sVar6;
  size_t sVar7;
  uint uVar8;
  
  FUN_0002e044();
  uVar8 = *(uint *)(this + 4);
  uVar3 = *(int *)(this + 8) * 0x88 + uVar8;
  if (uVar8 < uVar3) {
    pvVar1 = *(void **)(param_1 + 0x18);
    sVar6 = *(int *)(param_1 + 0x14) - (int)pvVar1;
    do {
      sVar7 = *(int *)(uVar8 + 0x18) - (int)*(void **)(uVar8 + 0x1c);
      sVar5 = sVar6;
      if ((int)sVar7 <= (int)sVar6) {
        sVar5 = sVar7;
      }
      iVar4 = memcmp(pvVar1,*(void **)(uVar8 + 0x1c),sVar5);
      if (((iVar4 == 0) && ((int)sVar7 <= (int)sVar6)) && ((int)sVar6 <= (int)sVar7)) {
        if (uVar8 != 0) {
          return uVar8;
        }
        break;
      }
      uVar8 = uVar8 + 0x88;
    } while (uVar8 < uVar3);
  }
  uVar8 = *(uint *)(this + 0x5c);
  uVar3 = *(int *)(this + 0x60) * 0x8c + uVar8;
  if (uVar8 < uVar3) {
    pvVar1 = *(void **)(param_1 + 0x18);
    sVar6 = *(int *)(param_1 + 0x14) - (int)pvVar1;
    do {
      sVar7 = *(int *)(uVar8 + 0x18) - (int)*(void **)(uVar8 + 0x1c);
      sVar5 = sVar6;
      if ((int)sVar7 <= (int)sVar6) {
        sVar5 = sVar7;
      }
      iVar4 = memcmp(pvVar1,*(void **)(uVar8 + 0x1c),sVar5);
      if (((iVar4 == 0) && ((int)sVar7 <= (int)sVar6)) && ((int)sVar6 <= (int)sVar7)) {
        if (uVar8 != 0) {
          return uVar8;
        }
        break;
      }
      uVar8 = uVar8 + 0x8c;
    } while (uVar8 < uVar3);
  }
  uVar8 = *(uint *)(this + 0xc);
  uVar3 = *(int *)(this + 0x10) * 0x88 + uVar8;
  if (uVar8 < uVar3) {
    pvVar1 = *(void **)(param_1 + 0x18);
    sVar6 = *(int *)(param_1 + 0x14) - (int)pvVar1;
    do {
      sVar7 = *(int *)(uVar8 + 0x18) - (int)*(void **)(uVar8 + 0x1c);
      sVar5 = sVar6;
      if ((int)sVar7 <= (int)sVar6) {
        sVar5 = sVar7;
      }
      iVar4 = memcmp(pvVar1,*(void **)(uVar8 + 0x1c),sVar5);
      if (((iVar4 == 0) && ((int)sVar7 <= (int)sVar6)) && ((int)sVar6 <= (int)sVar7)) {
        if (uVar8 != 0) {
          return uVar8;
        }
        break;
      }
      uVar8 = uVar8 + 0x88;
    } while (uVar8 < uVar3);
  }
  uVar8 = *(uint *)(this + 0x2c);
  uVar3 = *(int *)(this + 0x30) * 0x98 + uVar8;
  if (uVar8 < uVar3) {
    pvVar1 = *(void **)(param_1 + 0x18);
    sVar6 = *(int *)(param_1 + 0x14) - (int)pvVar1;
    do {
      sVar7 = *(int *)(uVar8 + 0x18) - (int)*(void **)(uVar8 + 0x1c);
      sVar5 = sVar6;
      if ((int)sVar7 <= (int)sVar6) {
        sVar5 = sVar7;
      }
      iVar4 = memcmp(pvVar1,*(void **)(uVar8 + 0x1c),sVar5);
      if (((iVar4 == 0) && ((int)sVar7 <= (int)sVar6)) && ((int)sVar6 <= (int)sVar7)) {
        if (uVar8 != 0) {
          return uVar8;
        }
        break;
      }
      uVar8 = uVar8 + 0x98;
    } while (uVar8 < uVar3);
  }
  uVar8 = *(uint *)(this + 0x1c);
  uVar3 = *(int *)(this + 0x20) * 0x90 + uVar8;
  if (uVar8 < uVar3) {
    pvVar1 = *(void **)(param_1 + 0x18);
    sVar6 = *(int *)(param_1 + 0x14) - (int)pvVar1;
    do {
      sVar7 = *(int *)(uVar8 + 0x18) - (int)*(void **)(uVar8 + 0x1c);
      sVar5 = sVar6;
      if ((int)sVar7 <= (int)sVar6) {
        sVar5 = sVar7;
      }
      iVar4 = memcmp(pvVar1,*(void **)(uVar8 + 0x1c),sVar5);
      if (((iVar4 == 0) && ((int)sVar7 <= (int)sVar6)) && ((int)sVar6 <= (int)sVar7)) {
        if (uVar8 != 0) {
          return uVar8;
        }
        break;
      }
      uVar8 = uVar8 + 0x90;
    } while (uVar8 < uVar3);
  }
  uVar8 = *(uint *)(this + 0x44);
  uVar3 = *(int *)(this + 0x48) * 0xa0 + uVar8;
  for (; uVar8 < uVar3; uVar8 = uVar8 + 0xa0) {
    cVar2 = UStringBase<char,int>::IsEqual(param_1);
    if (cVar2 != '\0') {
      if (uVar8 != 0) {
        return uVar8;
      }
      break;
    }
  }
  uVar8 = *(uint *)(this + 0x24);
  uVar3 = *(int *)(this + 0x28) * 0x90 + uVar8;
  for (; uVar8 < uVar3; uVar8 = uVar8 + 0x90) {
    cVar2 = UStringBase<char,int>::IsEqual(param_1);
    if (cVar2 != '\0') {
      if (uVar8 != 0) {
        return uVar8;
      }
      break;
    }
  }
  uVar8 = *(uint *)(this + 0x34);
  uVar3 = *(int *)(this + 0x38) * 0x94 + uVar8;
  for (; uVar8 < uVar3; uVar8 = uVar8 + 0x94) {
    cVar2 = UStringBase<char,int>::IsEqual(param_1);
    if (cVar2 != '\0') {
      if (uVar8 != 0) {
        return uVar8;
      }
      break;
    }
  }
  uVar8 = *(uint *)(this + 0x3c);
  uVar3 = *(int *)(this + 0x40) * 0x88 + uVar8;
  for (; uVar8 < uVar3; uVar8 = uVar8 + 0x88) {
    cVar2 = UStringBase<char,int>::IsEqual(param_1);
    if (cVar2 != '\0') {
      if (uVar8 != 0) {
        return uVar8;
      }
      break;
    }
  }
  uVar8 = *(uint *)(this + 0x4c);
  uVar3 = *(int *)(this + 0x50) * 0x8c + uVar8;
  do {
    if (uVar3 <= uVar8) {
LAB_00075e0a:
      uVar8 = *(uint *)(this + 0x54);
      uVar3 = *(int *)(this + 0x58) * 0x88 + uVar8;
      while( true ) {
        if (uVar3 <= uVar8) {
          return 0;
        }
        cVar2 = UStringBase<char,int>::IsEqual(param_1);
        if (cVar2 != '\0') break;
        uVar8 = uVar8 + 0x88;
      }
      return uVar8;
    }
    cVar2 = UStringBase<char,int>::IsEqual(param_1);
    if (cVar2 != '\0') {
      if (uVar8 != 0) {
        return uVar8;
      }
      goto LAB_00075e0a;
    }
    uVar8 = uVar8 + 0x8c;
  } while( true );
}


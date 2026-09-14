/* 00041f30 | STG::GEScene::LoadAllResources */

/* STG::GEScene::LoadAllResources() */

undefined4 __thiscall STG::GEScene::LoadAllResources(GEScene *this)

{
  GEColor *pGVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  code *pcVar16;
  LLogicSceneWrapper aLStack_2c [8];
  
  iVar13 = DAT_00042308;
  ApplyPreferences(this);
  uVar10 = *(uint *)(this + 0xa4);
  iVar13 = iVar13 + 0x41f54;
  if (uVar10 == *(uint *)(this + 0xec)) {
LAB_00041f88:
    uVar8 = *(uint *)(this + 0xe4);
    if (uVar10 == uVar8) goto LAB_00041f94;
  }
  else {
    if (*(uint *)(this + 0xec) != 0) {
      if (*(void **)(this + 0xe8) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0xe8));
      }
      *(undefined4 *)(this + 0xe8) = 0;
    }
    *(uint *)(this + 0xec) = uVar10;
    if (uVar10 == 0) {
      uVar10 = *(uint *)(this + 0xa4);
      goto LAB_00041f88;
    }
    pvVar5 = operator_new__(uVar10);
    uVar10 = *(uint *)(this + 0xa4);
    uVar8 = *(uint *)(this + 0xe4);
    *(void **)(this + 0xe8) = pvVar5;
    if (uVar10 == uVar8) goto LAB_00041f94;
  }
  if (uVar8 != 0) {
    if (*(void **)(this + 0xe0) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0xe0));
    }
    *(undefined4 *)(this + 0xe0) = 0;
  }
  *(uint *)(this + 0xe4) = uVar10;
  if (uVar10 != 0) {
    pvVar5 = operator_new__(uVar10 << 2);
    *(void **)(this + 0xe0) = pvVar5;
  }
LAB_00041f94:
  uVar8 = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  ComputeShownModelsList(this,(UArrayFixed *)(this + 0xe8));
  uVar10 = *(uint *)(this + 0xa4);
  if (uVar10 != 0) {
    iVar7 = *(int *)(this + 0xe8);
    do {
      if (*(char *)(iVar7 + uVar8) != '\0') {
        *(uint *)(*(int *)(this + 0xe0) + *(int *)(this + 0xf0) * 4) = uVar8;
        uVar10 = *(uint *)(this + 0xa4);
        *(int *)(this + 0xf0) = *(int *)(this + 0xf0) + 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar10);
  }
  pGVar1 = (GEColor *)GetEnvironmentSettings(this);
  ApplyTint(this,pGVar1);
  iVar7 = GETextureModifier::Activate
                    ((GETextureModifier *)(this + 0x324),(GETimeOfDay *)(this + 0x5d4),
                     (UPreference_Scene *)(this + 0x2c));
  uVar2 = UResource::LoadAllResources();
  puVar11 = *(uint **)(iVar13 + DAT_0004230c);
  if (((*puVar11 & 1) == 0) &&
     (iVar6 = thunk_FUN_0007004c(puVar11), iVar9 = DAT_00042318, iVar6 != 0)) {
    piVar12 = *(int **)(iVar13 + DAT_00042310);
    piVar12[1] = 0;
    piVar12[2] = 0;
    *piVar12 = *(int *)(iVar13 + iVar9) + 8;
    thunk_FUN_000700b0(puVar11);
    __aeabi_atexit(piVar12,*(undefined4 *)(iVar13 + DAT_0004231c),
                   *(undefined4 *)(iVar13 + DAT_00042320));
  }
  else {
    piVar12 = *(int **)(iVar13 + DAT_00042310);
  }
  if ((int *)piVar12[1] != (int *)0x0) {
    iVar13 = *(int *)(iVar13 + DAT_00042314);
    piVar14 = (int *)piVar12[1];
    do {
      piVar3 = (int *)piVar14[8];
      if (piVar3 != (int *)0x0) {
        iVar9 = piVar3[1];
        piVar3[1] = iVar9 + -1;
        if (iVar9 == 1) {
          (**(code **)(*piVar3 + 4))();
        }
        piVar14 = (int *)piVar12[1];
      }
      iVar9 = piVar14[9];
      piVar15 = (int *)piVar14[10];
      piVar4 = (int *)piVar14[8];
      piVar3 = piVar15;
      if (iVar9 != 0) {
        piVar14[9] = 0;
        *(int **)(iVar9 + 0x28) = piVar15;
        piVar3 = (int *)piVar14[10];
      }
      if (piVar3 != (int *)0x0) {
        piVar14[10] = 0;
        piVar3[9] = 0;
      }
      if ((piVar4 != (int *)0x0) && (iVar9 = piVar4[1], piVar4[1] = iVar9 + -1, iVar9 == 1)) {
        (**(code **)(*piVar4 + 4))();
      }
      piVar3 = (int *)piVar14[6];
      piVar14[8] = 0;
      *piVar14 = iVar13 + 8;
      if ((piVar3 == piVar14 + 1) || (piVar3 == (int *)0x0)) {
LAB_00042108:
        operator_delete(piVar14);
        piVar12[1] = (int)piVar15;
      }
      else {
        if (0x80 < (uint)(piVar14[1] - (int)piVar3)) {
          operator_delete(piVar3);
          goto LAB_00042108;
        }
        std::__node_alloc::_M_deallocate(piVar3,piVar14[1] - (int)piVar3);
        operator_delete(piVar14);
        piVar12[1] = (int)piVar15;
      }
      piVar14 = piVar15;
    } while (piVar15 != (int *)0x0);
  }
  piVar12[2] = 0;
  if (iVar7 != 0) {
    GETextureModifier::Deactivate((GETextureModifier *)(this + 0x324));
  }
  iVar7 = *(int *)(this + 0x5b4);
  iVar13 = 0;
  *(undefined4 *)(this + 0x5c0) = 0;
  if (iVar7 != 0) {
    do {
      *(undefined4 *)(*(int *)(this + 0x5b8) + iVar13 * 4) = 0;
      piVar12 = *(int **)(*(int *)(this + 0x5b0) + iVar13 * 4);
      iVar13 = iVar13 + 1;
      if (piVar12 != (int *)0x0) {
        pcVar16 = *(code **)(*piVar12 + 0x10);
        LLogicSceneWrapper::LLogicSceneWrapper(aLStack_2c,this);
        iVar9 = (*pcVar16)(piVar12,aLStack_2c);
        LLogicSceneWrapper::~LLogicSceneWrapper(aLStack_2c);
        if (iVar9 != 0) {
          iVar9 = *(int *)(this + 0x5c0);
          *(int *)(this + 0x5c0) = iVar9 + 1;
          *(int **)(*(int *)(this + 0x5b8) + iVar9 * 4) = piVar12;
        }
      }
    } while (iVar13 != iVar7);
  }
  if (*(int *)(this + 0xec) != 0) {
    if (*(void **)(this + 0xe8) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0xe8));
    }
    *(undefined4 *)(this + 0xe8) = 0;
    *(undefined4 *)(this + 0xec) = 0;
  }
  if (*(int *)(this + 0xe4) != 0) {
    if (*(void **)(this + 0xe0) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0xe0));
    }
    *(undefined4 *)(this + 0xe0) = 0;
    *(undefined4 *)(this + 0xe4) = 0;
  }
  *(undefined4 *)(this + 0xf0) = 0;
  return uVar2;
}


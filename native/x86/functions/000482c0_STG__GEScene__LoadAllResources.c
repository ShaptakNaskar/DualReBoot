/* 000482c0 | STG::GEScene::LoadAllResources */

/* STG::GEScene::LoadAllResources() */

undefined4 __thiscall STG::GEScene::LoadAllResources(GEScene *this)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  GEColor *pGVar8;
  undefined4 uVar9;
  int *piVar10;
  void *pvVar11;
  int iVar12;
  uint uVar13;
  int unaff_EBX;
  int *piVar14;
  int iVar15;
  LLogicSceneWrapper local_20 [12];
  undefined4 uStack_14;
  
  uStack_14 = 0x482c9;
  FUN_0002e044();
  ApplyPreferences(this);
  uVar13 = *(uint *)(this + 0xa4);
  if (uVar13 != *(uint *)(this + 0xec)) {
    if (*(uint *)(this + 0xec) != 0) {
      if (*(void **)(this + 0xe8) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0xe8));
      }
      *(undefined4 *)(this + 0xe8) = 0;
    }
    *(uint *)(this + 0xec) = uVar13;
    if (uVar13 != 0) {
      pvVar11 = operator_new__(uVar13);
      *(void **)(this + 0xe8) = pvVar11;
    }
    uVar13 = *(uint *)(this + 0xa4);
  }
  if (uVar13 != *(uint *)(this + 0xe4)) {
    if (*(uint *)(this + 0xe4) != 0) {
      if (*(void **)(this + 0xe0) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0xe0));
      }
      *(undefined4 *)(this + 0xe0) = 0;
    }
    *(uint *)(this + 0xe4) = uVar13;
    if (uVar13 != 0) {
      pvVar11 = operator_new__(uVar13 << 2);
      *(void **)(this + 0xe0) = pvVar11;
    }
  }
  *(undefined4 *)(this + 0xf0) = 0;
  ComputeShownModelsList(this,(UArrayFixed *)(this + 0xe8));
  uVar13 = *(uint *)(this + 0xa4);
  if (uVar13 != 0) {
    uVar7 = 0;
    do {
      if (*(char *)(*(int *)(this + 0xe8) + uVar7) != '\0') {
        *(uint *)(*(int *)(this + 0xe0) + *(int *)(this + 0xf0) * 4) = uVar7;
        *(int *)(this + 0xf0) = *(int *)(this + 0xf0) + 1;
        uVar13 = *(uint *)(this + 0xa4);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar13);
  }
  pGVar8 = (GEColor *)GetEnvironmentSettings(this);
  ApplyTint(this,pGVar8);
  cVar6 = GETextureModifier::Activate
                    ((GETextureModifier *)(this + 0x318),(GETimeOfDay *)(this + 0x5c0),
                     (UPreference_Scene *)(this + 0x2c));
  uVar9 = UResource::LoadAllResources((UResource *)this);
  pcVar1 = *(char **)(unaff_EBX + 0x53bc7);
  piVar2 = *(int **)(unaff_EBX + 0x53bcb);
  if ((*pcVar1 == '\0') && (iVar12 = FUN_00080eb0(pcVar1), iVar12 != 0)) {
    iVar12 = *(int *)(unaff_EBX + 0x53bcf);
    piVar2[1] = 0;
    piVar2[2] = 0;
    *piVar2 = iVar12 + 8;
    FUN_00080f40(pcVar1);
    __cxa_atexit(*(undefined4 *)(unaff_EBX + 0x53bd3),piVar2,*(undefined4 *)(unaff_EBX + 0x53b9f));
  }
  piVar14 = (int *)piVar2[1];
  if (piVar14 == (int *)0x0) {
LAB_000484fb:
    piVar2[2] = 0;
    if (cVar6 != '\0') {
      GETextureModifier::Deactivate((GETextureModifier *)(this + 0x318));
    }
    iVar12 = *(int *)(this + 0x5a0);
    *(undefined4 *)(this + 0x5ac) = 0;
    if (iVar12 != 0) {
      iVar15 = 0;
      do {
        *(undefined4 *)(*(int *)(this + 0x5a4) + iVar15 * 4) = 0;
        piVar2 = *(int **)(*(int *)(this + 0x59c) + iVar15 * 4);
        if (piVar2 != (int *)0x0) {
          pcVar4 = *(code **)(*piVar2 + 0x10);
          LLogicSceneWrapper::LLogicSceneWrapper(local_20,this);
          cVar6 = (*pcVar4)(piVar2,local_20);
          LLogicSceneWrapper::~LLogicSceneWrapper(local_20);
          if (cVar6 != '\0') {
            iVar5 = *(int *)(this + 0x5ac);
            *(int *)(this + 0x5ac) = iVar5 + 1;
            *(int **)(*(int *)(this + 0x5a4) + iVar5 * 4) = piVar2;
          }
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 != iVar12);
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
    return uVar9;
  }
  iVar12 = *(int *)(unaff_EBX + 0x53b73);
  piVar10 = (int *)piVar14[8];
  if (piVar10 == (int *)0x0) goto LAB_0004842b;
  iVar15 = piVar10[1];
  piVar10[1] = iVar15 + -1;
  do {
    if (iVar15 == 1) {
      (**(code **)(*piVar10 + 4))(piVar10);
    }
    piVar14 = (int *)piVar2[1];
LAB_0004842b:
    do {
      piVar3 = (int *)piVar14[10];
      piVar10 = piVar3;
      if (piVar14[9] != 0) {
        *(int **)(piVar14[9] + 0x28) = piVar3;
        piVar14[9] = 0;
        piVar10 = (int *)piVar14[10];
      }
      if (piVar10 != (int *)0x0) {
        piVar10[9] = 0;
        piVar14[10] = 0;
      }
      piVar10 = (int *)piVar14[8];
      if ((piVar10 != (int *)0x0) && (iVar15 = piVar10[1], piVar10[1] = iVar15 + -1, iVar15 == 1)) {
        (**(code **)(*piVar10 + 4))(piVar10);
      }
      *piVar14 = iVar12 + 8;
      piVar10 = (int *)piVar14[6];
      piVar14[8] = 0;
      if ((piVar10 == piVar14 + 1) || (piVar10 == (int *)0x0)) {
LAB_000484a3:
        operator_delete(piVar14);
        piVar2[1] = (int)piVar3;
      }
      else {
        if ((uint)(piVar14[1] - (int)piVar10) < 0x81) {
          std::__node_alloc::_M_deallocate(piVar10,piVar14[1] - (int)piVar10);
          goto LAB_000484a3;
        }
        operator_delete(piVar10);
        operator_delete(piVar14);
        piVar2[1] = (int)piVar3;
      }
      if (piVar3 == (int *)0x0) goto LAB_000484fb;
      piVar10 = (int *)piVar3[8];
      piVar14 = piVar3;
    } while (piVar10 == (int *)0x0);
    iVar15 = piVar10[1];
    piVar10[1] = iVar15 + -1;
  } while( true );
}


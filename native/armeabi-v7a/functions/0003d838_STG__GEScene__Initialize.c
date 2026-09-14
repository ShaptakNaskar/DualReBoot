/* 0003d838 | STG::GEScene::Initialize */

/* STG::GEScene::Initialize(unsigned long, unsigned long) */

void __thiscall STG::GEScene::Initialize(GEScene *this,ulong param_1,ulong param_2)

{
  MSIMD *this_00;
  void *pvVar1;
  GEModel *this_01;
  undefined4 *puVar2;
  int extraout_r1;
  undefined4 uVar3;
  uint uVar4;
  undefined4 extraout_r2;
  undefined4 uVar5;
  undefined4 extraout_r3;
  uint uVar6;
  int iVar7;
  GECamera *this_02;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  *(ulong *)(this + 0xa4) = param_1;
  *(ulong *)(this + 0xa8) = param_2;
  *(undefined4 *)(this + 0xdc) = 0;
  if (param_2 != 0) {
    puVar2 = operator_new__(param_2 * 0x210 + 8);
    puVar2[1] = param_2;
    *puVar2 = 0x210;
    this_02 = (GECamera *)(puVar2 + 2);
    while (param_2 = param_2 - 1, param_2 != 0xffffffff) {
      GECamera::GECamera(this_02);
      this_02 = this_02 + 0x210;
    }
    param_1 = *(ulong *)(this + 0xa4);
    *(GECamera **)(this + 0xb4) = (GECamera *)(puVar2 + 2);
  }
  if (param_1 == 0) goto LAB_0003d864;
  pvVar1 = operator_new__(param_1 << 2);
  *(void **)(this + 0xb0) = pvVar1;
  pvVar1 = operator_new__(*(int *)(this + 0xa4) << 6);
  *(void **)(this + 0xbc) = pvVar1;
  pvVar1 = operator_new__(*(int *)(this + 0xa4) << 6);
  uVar6 = *(uint *)(this + 0xa4);
  *(void **)(this + 0xc0) = pvVar1;
  if (uVar6 != *(uint *)(this + 200)) {
    if (*(uint *)(this + 200) != 0) {
      if (*(void **)(this + 0xc4) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0xc4));
      }
      *(undefined4 *)(this + 0xc4) = 0;
    }
    *(uint *)(this + 200) = uVar6;
    if (uVar6 == 0) {
      uVar6 = *(uint *)(this + 0xa4);
    }
    else {
      pvVar1 = operator_new__(uVar6 << 2);
      uVar6 = *(uint *)(this + 0xa4);
      *(void **)(this + 0xc4) = pvVar1;
    }
  }
  if (*(uint *)(this + 0xd0) != uVar6) {
    if (*(uint *)(this + 0xd0) != 0) {
      if (*(void **)(this + 0xcc) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0xcc));
      }
      *(undefined4 *)(this + 0xcc) = 0;
    }
    *(uint *)(this + 0xd0) = uVar6;
    if (uVar6 == 0) {
      uVar6 = *(uint *)(this + 0xa4);
    }
    else {
      pvVar1 = operator_new__(uVar6);
      uVar6 = *(uint *)(this + 0xa4);
      *(void **)(this + 0xcc) = pvVar1;
    }
  }
  if (uVar6 != *(uint *)(this + 0xd8)) {
    if (*(uint *)(this + 0xd8) != 0) {
      if (*(void **)(this + 0xd4) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0xd4));
      }
      *(undefined4 *)(this + 0xd4) = 0;
    }
    *(uint *)(this + 0xd8) = uVar6;
    if (uVar6 == 0) {
      uVar6 = *(uint *)(this + 0xa4);
    }
    else {
      pvVar1 = operator_new__(uVar6);
      uVar6 = *(uint *)(this + 0xa4);
      *(void **)(this + 0xd4) = pvVar1;
    }
  }
  pvVar1 = operator_new__(uVar6 << 2);
  *(void **)(this + 0xf4) = pvVar1;
  pvVar1 = operator_new__(*(int *)(this + 0xa4) << 2);
  iVar7 = *(int *)(this + 0xa4);
  *(void **)(this + 0xf8) = pvVar1;
  if (iVar7 != *(int *)(this + 0x104)) {
    if (*(int *)(this + 0x104) != 0) {
      if (*(void **)(this + 0x100) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x100));
      }
      *(undefined4 *)(this + 0x100) = 0;
    }
    *(int *)(this + 0x104) = iVar7;
    if (iVar7 == 0) {
      iVar7 = *(int *)(this + 0xa4);
    }
    else {
      pvVar1 = operator_new__(iVar7 << 2);
      iVar7 = *(int *)(this + 0xa4);
      *(void **)(this + 0x100) = pvVar1;
    }
  }
  if (iVar7 != *(int *)(this + 0x10c)) {
    if (*(int *)(this + 0x10c) != 0) {
      if (*(void **)(this + 0x108) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x108));
      }
      *(undefined4 *)(this + 0x108) = 0;
    }
    *(int *)(this + 0x10c) = iVar7;
    if (iVar7 == 0) {
      iVar7 = *(int *)(this + 0xa4);
    }
    else {
      pvVar1 = operator_new__(iVar7 << 2);
      iVar7 = *(int *)(this + 0xa4);
      *(void **)(this + 0x108) = pvVar1;
    }
  }
  *(int *)(this + 0xfc) = iVar7;
  if (iVar7 == 0) {
    uVar6 = 0;
  }
  else {
    iVar9 = *(int *)(this + 0xf4);
    iVar7 = 0;
    iVar8 = *(int *)(this + 0xf8);
    uVar4 = 0;
    iVar11 = *(int *)(this + 0x100);
    iVar10 = *(int *)(this + 0x108);
    do {
      *(uint *)(iVar9 + iVar7) = uVar4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(iVar8 + iVar7) = 0xffffffff;
      *(undefined4 *)(iVar11 + iVar7) = 0xffffffff;
      *(undefined4 *)(iVar10 + iVar7) = 0;
      iVar7 = iVar7 + 4;
      uVar6 = *(uint *)(this + 0xa4);
    } while (uVar4 < uVar6);
  }
  if (uVar6 != *(uint *)(this + 0x1ac)) {
    if (*(uint *)(this + 0x1ac) != 0) {
      if (*(void **)(this + 0x1a8) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x1a8));
      }
      *(undefined4 *)(this + 0x1a8) = 0;
    }
    *(uint *)(this + 0x1ac) = uVar6;
    if (uVar6 != 0) {
      puVar2 = operator_new__(uVar6 << 3);
      iVar8 = *(int *)(this + 0x1ac);
      uVar5 = extraout_r3;
      uVar3 = extraout_r2;
      iVar7 = extraout_r1;
      if (iVar8 != 0) {
        iVar7 = 0;
        uVar3 = 0;
        uVar5 = 0;
      }
      *(undefined4 **)(this + 0x1a8) = puVar2;
      if (iVar8 != 0) {
        do {
          iVar7 = iVar7 + 1;
          *puVar2 = uVar3;
          puVar2[1] = uVar5;
          puVar2 = puVar2 + 2;
        } while (iVar8 != iVar7);
        uVar6 = *(uint *)(this + 0xa4);
        goto LAB_0003da20;
      }
    }
    uVar6 = *(uint *)(this + 0xa4);
  }
LAB_0003da20:
  if (uVar6 != 0) {
    uVar6 = 0;
    do {
      this_01 = operator_new(200);
      GEModel::GEModel(this_01);
      *(GEModel **)(*(int *)(this + 0xb0) + uVar6 * 4) = this_01;
      MMatrix::MakeIdentity((MMatrix *)(*(int *)(this + 0xbc) + uVar6 * 0x40));
      MMatrix::MakeIdentity((MMatrix *)(*(int *)(this + 0xc0) + uVar6 * 0x40));
      iVar7 = *(int *)(this + 0xcc);
      iVar8 = *(int *)(this + 0xd4);
      *(uint *)(*(int *)(this + 0xc4) + uVar6 * 4) = uVar6;
      uVar4 = *(uint *)(this + 0xa4);
      *(undefined1 *)(iVar7 + uVar6) = 0;
      *(undefined1 *)(iVar8 + uVar6) = 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
LAB_0003d864:
  this_00 = operator_new(0xc);
  MSIMD::MSIMD(this_00);
  *(MSIMD **)(this + 0x1b0) = this_00;
  MSIMD::Initialize(this_00);
  uVar3 = **(undefined4 **)(this + 0x1b0);
  uVar5 = (*(undefined4 **)(this + 0x1b0))[1];
  this[0x790] = (GEScene)0x1;
  *(undefined4 *)(this + 0x1b4) = uVar3;
  *(undefined4 *)(this + 0x1b8) = uVar5;
  return;
}


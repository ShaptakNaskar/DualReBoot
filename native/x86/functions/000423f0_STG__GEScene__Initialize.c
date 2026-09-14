/* 000423f0 | STG::GEScene::Initialize */

/* STG::GEScene::Initialize(unsigned long, unsigned long) */

void __thiscall STG::GEScene::Initialize(GEScene *this,ulong param_1,ulong param_2)

{
  MSIMD *this_00;
  void *pvVar1;
  uint uVar2;
  GEModel *this_01;
  ulong *puVar3;
  int iVar4;
  int iVar5;
  GECamera *this_02;
  uint uVar6;
  
  FUN_0002e044();
  *(ulong *)(this + 0xa4) = param_1;
  *(ulong *)(this + 0xa8) = param_2;
  *(undefined4 *)(this + 0xdc) = 0;
  if (param_2 != 0) {
    puVar3 = operator_new__(param_2 * 0x210 + 4);
    *puVar3 = param_2;
    this_02 = (GECamera *)(puVar3 + 1);
    while (param_2 = param_2 - 1, param_2 != 0xffffffff) {
      GECamera::GECamera(this_02);
      this_02 = this_02 + 0x210;
    }
    *(GECamera **)(this + 0xb4) = (GECamera *)(puVar3 + 1);
    param_1 = *(ulong *)(this + 0xa4);
  }
  if (param_1 == 0) goto LAB_00042431;
  pvVar1 = operator_new__(param_1 << 2);
  *(void **)(this + 0xb0) = pvVar1;
  pvVar1 = operator_new__(*(int *)(this + 0xa4) << 6);
  *(void **)(this + 0xbc) = pvVar1;
  pvVar1 = operator_new__(*(int *)(this + 0xa4) << 6);
  *(void **)(this + 0xc0) = pvVar1;
  uVar2 = *(uint *)(this + 0xa4);
  if (uVar2 != *(uint *)(this + 200)) {
    if (*(uint *)(this + 200) != 0) {
      if (*(void **)(this + 0xc4) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0xc4));
      }
      *(undefined4 *)(this + 0xc4) = 0;
    }
    *(uint *)(this + 200) = uVar2;
    if (uVar2 != 0) {
      pvVar1 = operator_new__(uVar2 << 2);
      *(void **)(this + 0xc4) = pvVar1;
    }
    uVar2 = *(uint *)(this + 0xa4);
  }
  if (*(uint *)(this + 0xd0) != uVar2) {
    if (*(uint *)(this + 0xd0) != 0) {
      if (*(void **)(this + 0xcc) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0xcc));
      }
      *(undefined4 *)(this + 0xcc) = 0;
    }
    *(uint *)(this + 0xd0) = uVar2;
    if (uVar2 != 0) {
      pvVar1 = operator_new__(uVar2);
      *(void **)(this + 0xcc) = pvVar1;
    }
    uVar2 = *(uint *)(this + 0xa4);
  }
  if (uVar2 != *(uint *)(this + 0xd8)) {
    if (*(uint *)(this + 0xd8) != 0) {
      if (*(void **)(this + 0xd4) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0xd4));
      }
      *(undefined4 *)(this + 0xd4) = 0;
    }
    *(uint *)(this + 0xd8) = uVar2;
    if (uVar2 != 0) {
      pvVar1 = operator_new__(uVar2);
      *(void **)(this + 0xd4) = pvVar1;
    }
    uVar2 = *(uint *)(this + 0xa4);
  }
  pvVar1 = operator_new__(uVar2 << 2);
  *(void **)(this + 0xf4) = pvVar1;
  pvVar1 = operator_new__(*(int *)(this + 0xa4) << 2);
  *(void **)(this + 0xf8) = pvVar1;
  iVar5 = *(int *)(this + 0xa4);
  if (iVar5 == *(int *)(this + 0x104)) {
    iVar4 = *(int *)(this + 0x10c);
    if (iVar5 != iVar4) {
LAB_0004277f:
      if (iVar4 != 0) {
        if (*(void **)(this + 0x108) != (void *)0x0) {
          operator_delete__(*(void **)(this + 0x108));
        }
        *(undefined4 *)(this + 0x108) = 0;
      }
      *(int *)(this + 0x10c) = iVar5;
      if (iVar5 != 0) {
        pvVar1 = operator_new__(iVar5 << 2);
        *(void **)(this + 0x108) = pvVar1;
      }
      iVar5 = *(int *)(this + 0xa4);
    }
  }
  else {
    if (*(int *)(this + 0x104) != 0) {
      if (*(void **)(this + 0x100) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x100));
      }
      *(undefined4 *)(this + 0x100) = 0;
    }
    *(int *)(this + 0x104) = iVar5;
    if (iVar5 != 0) {
      pvVar1 = operator_new__(iVar5 << 2);
      *(void **)(this + 0x100) = pvVar1;
    }
    iVar5 = *(int *)(this + 0xa4);
    iVar4 = *(int *)(this + 0x10c);
    if (iVar5 != iVar4) goto LAB_0004277f;
  }
  uVar2 = 0;
  uVar6 = 0;
  *(int *)(this + 0xfc) = iVar5;
  if (iVar5 != 0) {
    iVar5 = *(int *)(this + 0xf4);
    iVar4 = *(int *)(this + 0xf8);
    do {
      *(uint *)(iVar5 + uVar2 * 4) = uVar2;
      *(undefined4 *)(iVar4 + uVar2 * 4) = 0xffffffff;
      *(undefined4 *)(*(int *)(this + 0x100) + uVar2 * 4) = 0xffffffff;
      *(undefined4 *)(*(int *)(this + 0x108) + uVar2 * 4) = 0;
      uVar2 = uVar2 + 1;
      uVar6 = *(uint *)(this + 0xa4);
    } while (uVar2 < uVar6);
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
      pvVar1 = operator_new__(uVar6 << 3);
      iVar5 = *(int *)(this + 0x1ac);
      *(void **)(this + 0x1a8) = pvVar1;
      if (iVar5 != 0) {
        iVar4 = 0;
        do {
          *(undefined4 *)((int)pvVar1 + iVar4 * 8) = 0;
          *(undefined4 *)((int)pvVar1 + iVar4 * 8 + 4) = 0;
          iVar4 = iVar4 + 1;
        } while (iVar4 != iVar5);
      }
    }
    uVar6 = *(uint *)(this + 0xa4);
  }
  uVar2 = 0;
  if (uVar6 != 0) {
    do {
      this_01 = operator_new(200);
      GEModel::GEModel(this_01);
      *(GEModel **)(*(int *)(this + 0xb0) + uVar2 * 4) = this_01;
      MMatrix::MakeIdentity((MMatrix *)(*(int *)(this + 0xbc) + uVar2 * 0x40));
      MMatrix::MakeIdentity((MMatrix *)(uVar2 * 0x40 + *(int *)(this + 0xc0)));
      *(uint *)(*(int *)(this + 0xc4) + uVar2 * 4) = uVar2;
      *(undefined1 *)(*(int *)(this + 0xcc) + uVar2) = 0;
      *(undefined1 *)(*(int *)(this + 0xd4) + uVar2) = 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(this + 0xa4));
  }
LAB_00042431:
  this_00 = operator_new(0xc);
  MSIMD::MSIMD(this_00);
  *(MSIMD **)(this + 0x1b0) = this_00;
  MSIMD::Initialize(this_00);
  *(undefined4 *)(this + 0x1b4) = **(undefined4 **)(this + 0x1b0);
  *(undefined4 *)(this + 0x1b8) = (*(undefined4 **)(this + 0x1b0))[1];
  this[0x77c] = (GEScene)0x1;
  return;
}


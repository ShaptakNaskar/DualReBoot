/* 0004b4a0 | STG::GESkeleton::Animation::Initialize */

/* STG::GESkeleton::Animation::Initialize(STG::MMatrix const&, unsigned long, unsigned long,
   unsigned long) */

void __thiscall
STG::GESkeleton::Animation::Initialize
          (Animation *this,MMatrix *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  BoneAnim *this_00;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  BoneAnim *pBVar12;
  MMatrix local_50 [60];
  undefined4 uStack_14;
  
  uStack_14 = 0x4b4ab;
  FUN_0002e044();
  *(ulong *)(this + 0x78) = param_2;
  *(ulong *)(this + 0x7c) = param_3;
  *(ulong *)(this + 0x80) = param_4;
  MMatrix::operator=((MMatrix *)(this + 0x38),param_1);
  iVar1 = *(int *)(this + 0x80);
  if (iVar1 != *(int *)(this + 4)) {
    if (*(int *)(this + 4) == 0) {
      *(int *)(this + 4) = iVar1;
    }
    else {
      pBVar12 = *(BoneAnim **)this;
      if (pBVar12 != (BoneAnim *)0x0) {
        this_00 = pBVar12 + *(int *)(pBVar12 + -4) * 0x18;
        if (pBVar12 != this_00) {
          do {
            this_00 = this_00 + -0x18;
            BoneAnim::~BoneAnim(this_00);
            pBVar12 = *(BoneAnim **)this;
          } while (pBVar12 != this_00);
        }
        operator_delete__(pBVar12 + -4);
      }
      *(undefined4 *)this = 0;
      *(int *)(this + 4) = iVar1;
    }
    if (iVar1 != 0) {
      piVar3 = operator_new__(iVar1 * 0x18 + 4);
      *piVar3 = iVar1;
      pBVar12 = (BoneAnim *)(piVar3 + 1);
      while (iVar1 = iVar1 + -1, iVar1 != -1) {
        BoneAnim::BoneAnim(pBVar12);
        pBVar12 = pBVar12 + 0x18;
      }
      *(BoneAnim **)this = (BoneAnim *)(piVar3 + 1);
    }
  }
  MMatrix::MakeIdentity(local_50);
  iVar1 = *(int *)(this + 0x78);
  if (iVar1 != *(int *)(this + 0xc)) {
    if (*(int *)(this + 0xc) != 0) {
      if (*(void **)(this + 8) != (void *)0x0) {
        operator_delete__(*(void **)(this + 8));
      }
      *(undefined4 *)(this + 8) = 0;
    }
    *(int *)(this + 0xc) = iVar1;
    if (iVar1 != 0) {
      pvVar2 = operator_new__(iVar1 << 6);
      iVar1 = *(int *)(this + 0xc);
      *(void **)(this + 8) = pvVar2;
      if (iVar1 != 0) {
        iVar8 = 0;
        do {
          iVar9 = iVar8 + 1;
          MMatrix::operator=((MMatrix *)(iVar8 * 0x40 + *(int *)(this + 8)),local_50);
          iVar8 = iVar9;
        } while (iVar9 != iVar1);
      }
    }
    iVar1 = *(int *)(this + 0x78);
  }
  if (*(int *)(this + 0x14) != iVar1) {
    if (*(int *)(this + 0x14) != 0) {
      if (*(void **)(this + 0x10) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x10));
      }
      *(undefined4 *)(this + 0x10) = 0;
    }
    *(int *)(this + 0x14) = iVar1;
    if (iVar1 != 0) {
      pvVar2 = operator_new__(iVar1 << 6);
      iVar1 = *(int *)(this + 0x14);
      *(void **)(this + 0x10) = pvVar2;
      if (iVar1 != 0) {
        iVar8 = 0;
        do {
          iVar9 = iVar8 + 1;
          MMatrix::operator=((MMatrix *)(iVar8 * 0x40 + *(int *)(this + 0x10)),local_50);
          iVar8 = iVar9;
        } while (iVar9 != iVar1);
      }
    }
    iVar1 = *(int *)(this + 0x78);
  }
  if (*(int *)(this + 0x1c) != iVar1) {
    if (*(int *)(this + 0x1c) != 0) {
      if (*(void **)(this + 0x18) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x18));
      }
      *(undefined4 *)(this + 0x18) = 0;
    }
    *(int *)(this + 0x1c) = iVar1;
    if (iVar1 != 0) {
      pvVar2 = operator_new__(iVar1 << 6);
      iVar1 = *(int *)(this + 0x1c);
      *(void **)(this + 0x18) = pvVar2;
      if (iVar1 != 0) {
        iVar8 = 0;
        do {
          iVar9 = iVar8 + 1;
          MMatrix::operator=((MMatrix *)(iVar8 * 0x40 + *(int *)(this + 0x18)),local_50);
          iVar8 = iVar9;
        } while (iVar9 != iVar1);
      }
    }
    iVar1 = *(int *)(this + 0x78);
  }
  if (iVar1 != *(int *)(this + 0x24)) {
    if (*(int *)(this + 0x24) != 0) {
      if (*(void **)(this + 0x20) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x20));
      }
      *(undefined4 *)(this + 0x20) = 0;
    }
    *(int *)(this + 0x24) = iVar1;
    if (iVar1 != 0) {
      pvVar2 = operator_new__(iVar1 << 6);
      iVar1 = *(int *)(this + 0x24);
      *(void **)(this + 0x20) = pvVar2;
      if (iVar1 != 0) {
        iVar8 = 0;
        do {
          iVar9 = iVar8 + 1;
          MMatrix::operator=((MMatrix *)(iVar8 * 0x40 + *(int *)(this + 0x20)),local_50);
          iVar8 = iVar9;
        } while (iVar1 != iVar9);
      }
    }
    iVar1 = *(int *)(this + 0x78);
  }
  if (*(int *)(this + 0x2c) != iVar1) {
    if (*(int *)(this + 0x2c) != 0) {
      if (*(void **)(this + 0x28) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x28));
      }
      *(undefined4 *)(this + 0x28) = 0;
    }
    *(int *)(this + 0x2c) = iVar1;
    if (iVar1 != 0) {
      pvVar2 = operator_new__(iVar1 << 2);
      *(void **)(this + 0x28) = pvVar2;
    }
    iVar1 = *(int *)(this + 0x78);
  }
  if (iVar1 == *(int *)(this + 0x34)) goto LAB_0004b66f;
  if (*(int *)(this + 0x34) != 0) {
    if (*(void **)(this + 0x30) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x30));
    }
    *(undefined4 *)(this + 0x30) = 0;
  }
  *(int *)(this + 0x34) = iVar1;
  if (iVar1 != 0) {
    pvVar2 = operator_new__(iVar1 << 2);
    uVar6 = *(uint *)(this + 0x34);
    *(void **)(this + 0x30) = pvVar2;
    if (uVar6 != 0) {
      uVar4 = -(((uint)pvVar2 & 0xf) >> 2) & 3;
      if (uVar6 < uVar4) {
        uVar4 = uVar6;
      }
      uVar7 = 0;
      if (uVar4 != 0) {
        do {
          *(undefined4 *)((int)pvVar2 + uVar7 * 4) = 0xffffffff;
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar4);
        if (uVar6 == uVar4) goto LAB_0004b66c;
      }
      uVar10 = uVar6 - uVar4 >> 2;
      if (uVar10 != 0) {
        puVar11 = (undefined4 *)((int)pvVar2 + uVar4 * 4);
        uVar5 = 0;
        do {
          uVar5 = uVar5 + 1;
          *puVar11 = 0xffffffff;
          puVar11[1] = 0xffffffff;
          puVar11[2] = 0xffffffff;
          puVar11[3] = 0xffffffff;
          puVar11 = puVar11 + 4;
        } while (uVar5 < uVar10);
        uVar7 = uVar7 + uVar10 * 4;
        if (uVar6 - uVar4 == uVar10 * 4) goto LAB_0004b66c;
      }
      do {
        *(undefined4 *)((int)pvVar2 + uVar7 * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar6);
    }
  }
LAB_0004b66c:
  iVar1 = *(int *)(this + 0x78);
LAB_0004b66f:
  uVar6 = 0;
  if (iVar1 != 0) {
    do {
      *(uint *)(*(int *)(this + 0x28) + uVar6 * 4) = uVar6;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(this + 0x78));
  }
  this[0x84] = (Animation)0x1;
  return;
}


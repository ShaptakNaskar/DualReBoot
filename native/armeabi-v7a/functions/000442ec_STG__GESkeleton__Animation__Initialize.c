/* 000442ec | STG::GESkeleton::Animation::Initialize */

/* STG::GESkeleton::Animation::Initialize(STG::MMatrix const&, unsigned long, unsigned long,
   unsigned long) */

void __thiscall
STG::GESkeleton::Animation::Initialize
          (Animation *this,MMatrix *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  undefined4 extraout_r2;
  undefined4 uVar5;
  uint uVar6;
  int extraout_r3;
  BoneAnim *this_00;
  int iVar7;
  BoneAnim *pBVar8;
  MMatrix aMStack_58 [68];
  
  *(ulong *)(this + 0x78) = param_2;
  *(ulong *)(this + 0x7c) = param_3;
  *(ulong *)(this + 0x80) = param_4;
  MMatrix::operator=((MMatrix *)(this + 0x38),param_1);
  iVar7 = *(int *)(this + 0x80);
  if (iVar7 != *(int *)(this + 4)) {
    if (*(int *)(this + 4) != 0) {
      pBVar8 = *(BoneAnim **)this;
      if (pBVar8 != (BoneAnim *)0x0) {
        this_00 = pBVar8 + *(int *)(pBVar8 + -4) * 0x18;
        if (pBVar8 != this_00) {
          do {
            this_00 = this_00 + -0x18;
            BoneAnim::~BoneAnim(this_00);
            pBVar8 = *(BoneAnim **)this;
          } while (pBVar8 != this_00);
        }
        operator_delete__(pBVar8 + -8);
      }
      *(undefined4 *)this = 0;
    }
    *(int *)(this + 4) = iVar7;
    if (iVar7 != 0) {
      puVar2 = operator_new__(iVar7 * 0x18 + 8);
      puVar2[1] = iVar7;
      *puVar2 = 0x18;
      pBVar8 = (BoneAnim *)(puVar2 + 2);
      while (iVar7 = iVar7 + -1, iVar7 != -1) {
        BoneAnim::BoneAnim(pBVar8);
        pBVar8 = pBVar8 + 0x18;
      }
      *(BoneAnim **)this = (BoneAnim *)(puVar2 + 2);
    }
  }
  MMatrix::MakeIdentity(aMStack_58);
  iVar7 = *(int *)(this + 0x78);
  if (iVar7 != *(int *)(this + 0xc)) {
    if (*(int *)(this + 0xc) != 0) {
      if (*(void **)(this + 8) != (void *)0x0) {
        operator_delete__(*(void **)(this + 8));
      }
      *(undefined4 *)(this + 8) = 0;
    }
    *(int *)(this + 0xc) = iVar7;
    if (iVar7 != 0) {
      pvVar3 = operator_new__(iVar7 << 6);
      iVar7 = *(int *)(this + 0xc);
      *(void **)(this + 8) = pvVar3;
      if (iVar7 != 0) {
        iVar4 = 0;
        do {
          iVar1 = iVar4 * 0x40;
          iVar4 = iVar4 + 1;
          MMatrix::operator=((MMatrix *)(*(int *)(this + 8) + iVar1),aMStack_58);
        } while (iVar7 != iVar4);
      }
    }
    iVar7 = *(int *)(this + 0x78);
  }
  if (*(int *)(this + 0x14) != iVar7) {
    if (*(int *)(this + 0x14) != 0) {
      if (*(void **)(this + 0x10) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x10));
      }
      *(undefined4 *)(this + 0x10) = 0;
    }
    *(int *)(this + 0x14) = iVar7;
    if (iVar7 != 0) {
      pvVar3 = operator_new__(iVar7 << 6);
      iVar7 = *(int *)(this + 0x14);
      *(void **)(this + 0x10) = pvVar3;
      if (iVar7 != 0) {
        iVar4 = 0;
        do {
          iVar1 = iVar4 * 0x40;
          iVar4 = iVar4 + 1;
          MMatrix::operator=((MMatrix *)(*(int *)(this + 0x10) + iVar1),aMStack_58);
        } while (iVar4 != iVar7);
      }
    }
    iVar7 = *(int *)(this + 0x78);
  }
  if (iVar7 != *(int *)(this + 0x1c)) {
    if (*(int *)(this + 0x1c) != 0) {
      if (*(void **)(this + 0x18) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x18));
      }
      *(undefined4 *)(this + 0x18) = 0;
    }
    *(int *)(this + 0x1c) = iVar7;
    if (iVar7 != 0) {
      pvVar3 = operator_new__(iVar7 << 6);
      iVar7 = *(int *)(this + 0x1c);
      *(void **)(this + 0x18) = pvVar3;
      if (iVar7 != 0) {
        iVar4 = 0;
        do {
          iVar1 = iVar4 * 0x40;
          iVar4 = iVar4 + 1;
          MMatrix::operator=((MMatrix *)(*(int *)(this + 0x18) + iVar1),aMStack_58);
        } while (iVar4 != iVar7);
      }
    }
    iVar7 = *(int *)(this + 0x78);
  }
  if (*(int *)(this + 0x24) != iVar7) {
    if (*(int *)(this + 0x24) != 0) {
      if (*(void **)(this + 0x20) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x20));
      }
      *(undefined4 *)(this + 0x20) = 0;
    }
    *(int *)(this + 0x24) = iVar7;
    if (iVar7 != 0) {
      pvVar3 = operator_new__(iVar7 << 6);
      iVar7 = *(int *)(this + 0x24);
      *(void **)(this + 0x20) = pvVar3;
      if (iVar7 != 0) {
        iVar4 = 0;
        do {
          iVar1 = iVar4 * 0x40;
          iVar4 = iVar4 + 1;
          MMatrix::operator=((MMatrix *)(*(int *)(this + 0x20) + iVar1),aMStack_58);
        } while (iVar7 != iVar4);
      }
    }
    iVar7 = *(int *)(this + 0x78);
  }
  if (iVar7 != *(int *)(this + 0x2c)) {
    if (*(int *)(this + 0x2c) != 0) {
      if (*(void **)(this + 0x28) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x28));
      }
      *(undefined4 *)(this + 0x28) = 0;
    }
    *(int *)(this + 0x2c) = iVar7;
    if (iVar7 == 0) {
      iVar7 = *(int *)(this + 0x78);
    }
    else {
      pvVar3 = operator_new__(iVar7 << 2);
      iVar7 = *(int *)(this + 0x78);
      *(void **)(this + 0x28) = pvVar3;
    }
  }
  if (*(int *)(this + 0x34) != iVar7) {
    if (*(int *)(this + 0x34) != 0) {
      if (*(void **)(this + 0x30) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x30));
      }
      *(undefined4 *)(this + 0x30) = 0;
    }
    *(int *)(this + 0x34) = iVar7;
    if (iVar7 != 0) {
      puVar2 = operator_new__(iVar7 << 2);
      iVar4 = *(int *)(this + 0x34);
      uVar5 = extraout_r2;
      iVar7 = extraout_r3;
      if (iVar4 != 0) {
        iVar7 = 0;
        uVar5 = 0xffffffff;
      }
      *(undefined4 **)(this + 0x30) = puVar2;
      if (iVar4 != 0) {
        do {
          iVar7 = iVar7 + 1;
          *puVar2 = uVar5;
          puVar2 = puVar2 + 1;
        } while (iVar4 != iVar7);
      }
    }
    iVar7 = *(int *)(this + 0x78);
  }
  if (iVar7 != 0) {
    iVar7 = *(int *)(this + 0x28);
    uVar6 = 0;
    do {
      *(uint *)(iVar7 + uVar6 * 4) = uVar6;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(this + 0x78));
  }
  this[0x84] = (Animation)0x1;
  return;
}


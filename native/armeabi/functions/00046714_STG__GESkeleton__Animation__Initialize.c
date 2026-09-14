/* 00046714 | STG::GESkeleton::Animation::Initialize */

/* STG::GESkeleton::Animation::Initialize(STG::MMatrix const&, unsigned long, unsigned long,
   unsigned long) */

void __thiscall
STG::GESkeleton::Animation::Initialize
          (Animation *this,MMatrix *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  BoneAnim *this_00;
  int iVar6;
  BoneAnim *pBVar7;
  MMatrix aMStack_58 [68];
  
  *(ulong *)(this + 0x7c) = param_3;
  *(ulong *)(this + 0x78) = param_2;
  *(ulong *)(this + 0x80) = param_4;
  MMatrix::operator=((MMatrix *)(this + 0x38),param_1);
  iVar6 = *(int *)(this + 0x80);
  if (iVar6 != *(int *)(this + 4)) {
    if (*(int *)(this + 4) != 0) {
      pBVar7 = *(BoneAnim **)this;
      if (pBVar7 != (BoneAnim *)0x0) {
        this_00 = pBVar7 + *(int *)(pBVar7 + -4) * 0x18;
        if (pBVar7 != this_00) {
          do {
            this_00 = this_00 + -0x18;
            BoneAnim::~BoneAnim(this_00);
            pBVar7 = *(BoneAnim **)this;
          } while (pBVar7 != this_00);
        }
        operator_delete__(pBVar7 + -8);
      }
      *(undefined4 *)this = 0;
    }
    *(int *)(this + 4) = iVar6;
    if (iVar6 != 0) {
      puVar2 = operator_new__(iVar6 * 0x18 + 8);
      *puVar2 = 0x18;
      puVar2[1] = iVar6;
      pBVar7 = (BoneAnim *)(puVar2 + 2);
      while (iVar6 = iVar6 + -1, iVar6 != -1) {
        BoneAnim::BoneAnim(pBVar7);
        pBVar7 = pBVar7 + 0x18;
      }
      *(BoneAnim **)this = (BoneAnim *)(puVar2 + 2);
    }
  }
  MMatrix::MakeIdentity(aMStack_58);
  iVar6 = *(int *)(this + 0x78);
  if (iVar6 != *(int *)(this + 0xc)) {
    if (*(int *)(this + 0xc) != 0) {
      if (*(void **)(this + 8) != (void *)0x0) {
        operator_delete__(*(void **)(this + 8));
      }
      *(undefined4 *)(this + 8) = 0;
    }
    *(int *)(this + 0xc) = iVar6;
    if (iVar6 != 0) {
      pvVar3 = operator_new__(iVar6 << 6);
      iVar6 = *(int *)(this + 0xc);
      *(void **)(this + 8) = pvVar3;
      if (iVar6 != 0) {
        iVar5 = 0;
        do {
          iVar1 = iVar5 * 0x40;
          iVar5 = iVar5 + 1;
          MMatrix::operator=((MMatrix *)(*(int *)(this + 8) + iVar1),aMStack_58);
        } while (iVar6 != iVar5);
      }
    }
    iVar6 = *(int *)(this + 0x78);
  }
  if (*(int *)(this + 0x14) != iVar6) {
    if (*(int *)(this + 0x14) != 0) {
      if (*(void **)(this + 0x10) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x10));
      }
      *(undefined4 *)(this + 0x10) = 0;
    }
    *(int *)(this + 0x14) = iVar6;
    if (iVar6 != 0) {
      pvVar3 = operator_new__(iVar6 << 6);
      iVar6 = *(int *)(this + 0x14);
      *(void **)(this + 0x10) = pvVar3;
      if (iVar6 != 0) {
        iVar5 = 0;
        do {
          iVar1 = iVar5 * 0x40;
          iVar5 = iVar5 + 1;
          MMatrix::operator=((MMatrix *)(*(int *)(this + 0x10) + iVar1),aMStack_58);
        } while (iVar5 != iVar6);
      }
    }
    iVar6 = *(int *)(this + 0x78);
  }
  if (iVar6 != *(int *)(this + 0x1c)) {
    if (*(int *)(this + 0x1c) != 0) {
      if (*(void **)(this + 0x18) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x18));
      }
      *(undefined4 *)(this + 0x18) = 0;
    }
    *(int *)(this + 0x1c) = iVar6;
    if (iVar6 != 0) {
      pvVar3 = operator_new__(iVar6 << 6);
      iVar6 = *(int *)(this + 0x1c);
      *(void **)(this + 0x18) = pvVar3;
      if (iVar6 != 0) {
        iVar5 = 0;
        do {
          iVar1 = iVar5 * 0x40;
          iVar5 = iVar5 + 1;
          MMatrix::operator=((MMatrix *)(*(int *)(this + 0x18) + iVar1),aMStack_58);
        } while (iVar5 != iVar6);
      }
    }
    iVar6 = *(int *)(this + 0x78);
  }
  if (*(int *)(this + 0x24) != iVar6) {
    if (*(int *)(this + 0x24) != 0) {
      if (*(void **)(this + 0x20) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x20));
      }
      *(undefined4 *)(this + 0x20) = 0;
    }
    *(int *)(this + 0x24) = iVar6;
    if (iVar6 != 0) {
      pvVar3 = operator_new__(iVar6 << 6);
      iVar6 = *(int *)(this + 0x24);
      *(void **)(this + 0x20) = pvVar3;
      if (iVar6 != 0) {
        iVar5 = 0;
        do {
          iVar1 = iVar5 * 0x40;
          iVar5 = iVar5 + 1;
          MMatrix::operator=((MMatrix *)(*(int *)(this + 0x20) + iVar1),aMStack_58);
        } while (iVar6 != iVar5);
      }
    }
    iVar6 = *(int *)(this + 0x78);
  }
  if (iVar6 != *(int *)(this + 0x2c)) {
    if (*(int *)(this + 0x2c) != 0) {
      if (*(void **)(this + 0x28) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x28));
      }
      *(undefined4 *)(this + 0x28) = 0;
    }
    *(int *)(this + 0x2c) = iVar6;
    if (iVar6 == 0) {
      iVar6 = *(int *)(this + 0x78);
    }
    else {
      pvVar3 = operator_new__(iVar6 << 2);
      iVar6 = *(int *)(this + 0x78);
      *(void **)(this + 0x28) = pvVar3;
    }
  }
  if (*(int *)(this + 0x34) != iVar6) {
    if (*(int *)(this + 0x34) != 0) {
      if (*(void **)(this + 0x30) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x30));
      }
      *(undefined4 *)(this + 0x30) = 0;
    }
    *(int *)(this + 0x34) = iVar6;
    if (iVar6 != 0) {
      puVar2 = operator_new__(iVar6 << 2);
      iVar6 = *(int *)(this + 0x34);
      *(undefined4 **)(this + 0x30) = puVar2;
      if (iVar6 != 0) {
        iVar5 = 0;
        do {
          iVar5 = iVar5 + 1;
          *puVar2 = 0xffffffff;
          puVar2 = puVar2 + 1;
        } while (iVar6 != iVar5);
      }
    }
    iVar6 = *(int *)(this + 0x78);
  }
  if (iVar6 != 0) {
    iVar6 = *(int *)(this + 0x28);
    uVar4 = 0;
    do {
      *(uint *)(iVar6 + uVar4 * 4) = uVar4;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(this + 0x78));
  }
  this[0x84] = (Animation)0x1;
  return;
}


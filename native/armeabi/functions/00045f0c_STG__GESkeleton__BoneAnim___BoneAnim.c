/* 00045f0c | STG::GESkeleton::BoneAnim::~BoneAnim */

/* STG::GESkeleton::BoneAnim::~BoneAnim() */

BoneAnim * __thiscall STG::GESkeleton::BoneAnim::~BoneAnim(BoneAnim *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(this + 0xc) != 0) {
    iVar1 = *(int *)(this + 8);
    if (iVar1 != 0) {
      iVar5 = *(int *)(iVar1 + -4) * 0x58 + iVar1;
      iVar2 = iVar5 + -0x38;
      iVar6 = iVar5 + -0x40;
      iVar3 = iVar5;
      while (iVar1 != iVar3) {
        iVar1 = iVar3 - iVar5;
        if (*(int *)(iVar1 + iVar2 + 4) != 0) {
          if (*(void **)(iVar1 + iVar2) != (void *)0x0) {
            operator_delete__(*(void **)(iVar1 + iVar2));
          }
          *(undefined4 *)(iVar1 + iVar2) = 0;
          *(undefined4 *)(iVar1 + iVar2 + 4) = 0;
        }
        if (*(int *)(iVar1 + iVar6 + 4) != 0) {
          if (*(void **)(iVar1 + iVar6) != (void *)0x0) {
            operator_delete__(*(void **)(iVar1 + iVar6));
          }
          *(undefined4 *)(iVar1 + iVar6) = 0;
          *(undefined4 *)(iVar1 + iVar6 + 4) = 0;
        }
        iVar4 = iVar5 + -0x48;
        if (*(int *)(iVar1 + iVar4 + 4) != 0) {
          if (*(void **)(iVar1 + iVar4) != (void *)0x0) {
            operator_delete__(*(void **)(iVar1 + iVar4));
          }
          *(undefined4 *)(iVar1 + iVar4) = 0;
          *(undefined4 *)(iVar1 + iVar4 + 4) = 0;
        }
        iVar3 = iVar3 + -0x58;
        iVar1 = *(int *)(this + 8);
      }
      operator_delete__((void *)(iVar1 + -8));
    }
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
  }
  if (*(int *)(this + 4) != 0) {
    iVar1 = *(int *)this;
    if (iVar1 != 0) {
      iVar5 = *(int *)(iVar1 + -4) * 0x58 + iVar1;
      iVar2 = iVar5 + -0x38;
      iVar6 = iVar5 + -0x40;
      iVar3 = iVar5;
      while (iVar1 != iVar3) {
        iVar1 = iVar3 - iVar5;
        if (*(int *)(iVar1 + iVar2 + 4) != 0) {
          if (*(void **)(iVar1 + iVar2) != (void *)0x0) {
            operator_delete__(*(void **)(iVar1 + iVar2));
          }
          *(undefined4 *)(iVar1 + iVar2) = 0;
          *(undefined4 *)(iVar1 + iVar2 + 4) = 0;
        }
        if (*(int *)(iVar1 + iVar6 + 4) != 0) {
          if (*(void **)(iVar1 + iVar6) != (void *)0x0) {
            operator_delete__(*(void **)(iVar1 + iVar6));
          }
          *(undefined4 *)(iVar1 + iVar6) = 0;
          *(undefined4 *)(iVar1 + iVar6 + 4) = 0;
        }
        iVar4 = iVar5 + -0x48;
        if (*(int *)(iVar1 + iVar4 + 4) != 0) {
          if (*(void **)(iVar1 + iVar4) != (void *)0x0) {
            operator_delete__(*(void **)(iVar1 + iVar4));
          }
          *(undefined4 *)(iVar1 + iVar4) = 0;
          *(undefined4 *)(iVar1 + iVar4 + 4) = 0;
        }
        iVar3 = iVar3 + -0x58;
        iVar1 = *(int *)this;
      }
      operator_delete__((void *)(iVar1 + -8));
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
  }
  return this;
}


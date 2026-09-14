/* 000465a4 | STG::GESkeleton::Animation::~Animation */

/* STG::GESkeleton::Animation::~Animation() */

Animation * __thiscall STG::GESkeleton::Animation::~Animation(Animation *this)

{
  BoneAnim *pBVar1;
  BoneAnim *this_00;
  
  if (*(int *)(this + 0x34) != 0) {
    if (*(void **)(this + 0x30) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x30));
    }
    *(undefined4 *)(this + 0x30) = 0;
    *(undefined4 *)(this + 0x34) = 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    if (*(void **)(this + 0x28) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x28));
    }
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x2c) = 0;
  }
  if (*(int *)(this + 0x24) != 0) {
    if (*(void **)(this + 0x20) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x20));
    }
    *(undefined4 *)(this + 0x20) = 0;
    *(undefined4 *)(this + 0x24) = 0;
  }
  if (*(int *)(this + 0x1c) != 0) {
    if (*(void **)(this + 0x18) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x18));
    }
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined4 *)(this + 0x1c) = 0;
  }
  if (*(int *)(this + 0x14) != 0) {
    if (*(void **)(this + 0x10) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x10));
    }
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x14) = 0;
  }
  if (*(int *)(this + 0xc) != 0) {
    if (*(void **)(this + 8) != (void *)0x0) {
      operator_delete__(*(void **)(this + 8));
    }
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
  }
  if (*(int *)(this + 4) == 0) {
    return this;
  }
  pBVar1 = *(BoneAnim **)this;
  if (pBVar1 != (BoneAnim *)0x0) {
    this_00 = pBVar1 + *(int *)(pBVar1 + -4) * 0x18;
    if (pBVar1 != this_00) {
      do {
        this_00 = this_00 + -0x18;
        BoneAnim::~BoneAnim(this_00);
        pBVar1 = *(BoneAnim **)this;
      } while (pBVar1 != this_00);
    }
    operator_delete__(pBVar1 + -8);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return this;
}


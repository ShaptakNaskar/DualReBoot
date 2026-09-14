/* 0004a9f0 | STG::GESkeleton::BoneAnim::~BoneAnim */

/* STG::GESkeleton::BoneAnim::~BoneAnim() */

void __thiscall STG::GESkeleton::BoneAnim::~BoneAnim(BoneAnim *this)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  FUN_0002e044();
  if (*(int *)(this + 0xc) != 0) {
    piVar2 = *(int **)(this + 8);
    if (piVar2 != (int *)0x0) {
      iVar1 = piVar2[-1];
      piVar4 = piVar2 + iVar1 * 0x15 + -0x10;
      piVar3 = piVar2 + iVar1 * 0x15 + -0xe;
      piVar5 = piVar2 + iVar1 * 0x15 + -0xc;
      while (piVar2 != piVar4 + 0x10) {
        if (*piVar5 != 0) {
          if ((void *)piVar5[-1] != (void *)0x0) {
            operator_delete__((void *)piVar5[-1]);
          }
          piVar5[-1] = 0;
          *piVar5 = 0;
        }
        if (*piVar3 != 0) {
          if ((void *)piVar3[-1] != (void *)0x0) {
            operator_delete__((void *)piVar3[-1]);
          }
          piVar3[-1] = 0;
          *piVar3 = 0;
        }
        if (*piVar4 != 0) {
          if ((void *)piVar4[-1] != (void *)0x0) {
            operator_delete__((void *)piVar4[-1]);
          }
          piVar4[-1] = 0;
          *piVar4 = 0;
        }
        piVar4 = piVar4 + -0x15;
        piVar3 = piVar3 + -0x15;
        piVar5 = piVar5 + -0x15;
        piVar2 = *(int **)(this + 8);
      }
      operator_delete__(piVar2 + -1);
    }
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
  }
  if (*(int *)(this + 4) == 0) {
    return;
  }
  piVar2 = *(int **)this;
  if (piVar2 != (int *)0x0) {
    iVar1 = piVar2[-1];
    piVar4 = piVar2 + iVar1 * 0x15 + -0x10;
    piVar3 = piVar2 + iVar1 * 0x15 + -0xe;
    piVar5 = piVar2 + iVar1 * 0x15 + -0xc;
    while (piVar2 != piVar4 + 0x10) {
      if (*piVar5 != 0) {
        if ((void *)piVar5[-1] != (void *)0x0) {
          operator_delete__((void *)piVar5[-1]);
        }
        piVar5[-1] = 0;
        *piVar5 = 0;
      }
      if (*piVar3 != 0) {
        if ((void *)piVar3[-1] != (void *)0x0) {
          operator_delete__((void *)piVar3[-1]);
        }
        piVar3[-1] = 0;
        *piVar3 = 0;
      }
      if (*piVar4 != 0) {
        if ((void *)piVar4[-1] != (void *)0x0) {
          operator_delete__((void *)piVar4[-1]);
        }
        piVar4[-1] = 0;
        *piVar4 = 0;
      }
      piVar4 = piVar4 + -0x15;
      piVar3 = piVar3 + -0x15;
      piVar5 = piVar5 + -0x15;
      piVar2 = *(int **)this;
    }
    operator_delete__(piVar2 + -1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}


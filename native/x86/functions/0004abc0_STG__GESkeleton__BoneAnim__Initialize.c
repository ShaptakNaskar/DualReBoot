/* 0004abc0 | STG::GESkeleton::BoneAnim::Initialize */

/* STG::GESkeleton::BoneAnim::Initialize(unsigned long, bool, bool) */

void __thiscall
STG::GESkeleton::BoneAnim::Initialize(BoneAnim *this,ulong param_1,bool param_2,bool param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  uVar2 = FUN_0002e044();
  *(undefined4 *)(this + 0x10) = uVar2;
  if ((param_2) && (*(int *)(this + 4) != 3)) {
    if (*(int *)(this + 4) != 0) {
      piVar4 = *(int **)this;
      if (piVar4 != (int *)0x0) {
        iVar1 = piVar4[-1];
        piVar5 = piVar4 + iVar1 * 0x15 + -0xe;
        piVar7 = piVar4 + iVar1 * 0x15 + -0x10;
        piVar6 = piVar4 + iVar1 * 0x15 + -0xc;
        while (piVar4 != piVar7 + 0x10) {
          if (*piVar6 != 0) {
            if ((void *)piVar6[-1] != (void *)0x0) {
              operator_delete__((void *)piVar6[-1]);
            }
            piVar6[-1] = 0;
            *piVar6 = 0;
          }
          if (*piVar5 != 0) {
            if ((void *)piVar5[-1] != (void *)0x0) {
              operator_delete__((void *)piVar5[-1]);
            }
            piVar5[-1] = 0;
            *piVar5 = 0;
          }
          if (*piVar7 != 0) {
            if ((void *)piVar7[-1] != (void *)0x0) {
              operator_delete__((void *)piVar7[-1]);
            }
            piVar7[-1] = 0;
            *piVar7 = 0;
          }
          piVar7 = piVar7 + -0x15;
          piVar5 = piVar5 + -0x15;
          piVar6 = piVar6 + -0x15;
          piVar4 = *(int **)this;
        }
        operator_delete__(piVar4 + -1);
      }
      *(undefined4 *)this = 0;
    }
    *(undefined4 *)(this + 4) = 3;
    puVar3 = operator_new__(0x100);
    *puVar3 = 3;
    puVar3[1] = 0;
    puVar3[2] = 0xc;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    *(undefined1 *)(puVar3 + 0x15) = 0;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0xc;
    puVar3[0x18] = 0;
    puVar3[0x19] = 0;
    puVar3[0x1a] = 0;
    puVar3[0x1b] = 0;
    puVar3[0x1c] = 0;
    puVar3[0x1d] = 0;
    puVar3[0x1e] = 0;
    puVar3[0x1f] = 0;
    puVar3[0x20] = 0;
    puVar3[0x21] = 0;
    puVar3[0x22] = 0;
    puVar3[0x23] = 0;
    puVar3[0x24] = 0;
    puVar3[0x25] = 0;
    puVar3[0x26] = 0;
    puVar3[0x27] = 0;
    puVar3[0x28] = 0;
    puVar3[0x29] = 0;
    *(undefined1 *)(puVar3 + 0x2a) = 0;
    puVar3[0x2b] = 0;
    puVar3[0x2c] = 0xc;
    puVar3[0x2d] = 0;
    puVar3[0x2e] = 0;
    puVar3[0x2f] = 0;
    puVar3[0x30] = 0;
    puVar3[0x31] = 0;
    puVar3[0x32] = 0;
    puVar3[0x33] = 0;
    puVar3[0x34] = 0;
    puVar3[0x35] = 0;
    puVar3[0x36] = 0;
    puVar3[0x37] = 0;
    puVar3[0x38] = 0;
    puVar3[0x39] = 0;
    puVar3[0x3a] = 0;
    puVar3[0x3b] = 0;
    puVar3[0x3c] = 0;
    puVar3[0x3d] = 0;
    puVar3[0x3e] = 0;
    *(undefined1 *)(puVar3 + 0x3f) = 0;
    *(undefined4 **)this = puVar3 + 1;
  }
  if ((param_3) && (*(int *)(this + 0xc) != 3)) {
    if (*(int *)(this + 0xc) != 0) {
      piVar4 = *(int **)(this + 8);
      if (piVar4 != (int *)0x0) {
        iVar1 = piVar4[-1];
        piVar5 = piVar4 + iVar1 * 0x15 + -0xe;
        piVar7 = piVar4 + iVar1 * 0x15 + -0x10;
        piVar6 = piVar4 + iVar1 * 0x15 + -0xc;
        while (piVar4 != piVar7 + 0x10) {
          if (*piVar6 != 0) {
            if ((void *)piVar6[-1] != (void *)0x0) {
              operator_delete__((void *)piVar6[-1]);
            }
            piVar6[-1] = 0;
            *piVar6 = 0;
          }
          if (*piVar5 != 0) {
            if ((void *)piVar5[-1] != (void *)0x0) {
              operator_delete__((void *)piVar5[-1]);
            }
            piVar5[-1] = 0;
            *piVar5 = 0;
          }
          if (*piVar7 != 0) {
            if ((void *)piVar7[-1] != (void *)0x0) {
              operator_delete__((void *)piVar7[-1]);
            }
            piVar7[-1] = 0;
            *piVar7 = 0;
          }
          piVar7 = piVar7 + -0x15;
          piVar5 = piVar5 + -0x15;
          piVar6 = piVar6 + -0x15;
          piVar4 = *(int **)(this + 8);
        }
        operator_delete__(piVar4 + -1);
      }
      *(undefined4 *)(this + 8) = 0;
    }
    *(undefined4 *)(this + 0xc) = 3;
    puVar3 = operator_new__(0x100);
    *puVar3 = 3;
    puVar3[1] = 0;
    puVar3[2] = 0xc;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    *(undefined1 *)(puVar3 + 0x15) = 0;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0xc;
    puVar3[0x18] = 0;
    puVar3[0x19] = 0;
    puVar3[0x1a] = 0;
    puVar3[0x1b] = 0;
    puVar3[0x1c] = 0;
    puVar3[0x1d] = 0;
    puVar3[0x1e] = 0;
    puVar3[0x1f] = 0;
    puVar3[0x20] = 0;
    puVar3[0x21] = 0;
    puVar3[0x22] = 0;
    puVar3[0x23] = 0;
    puVar3[0x24] = 0;
    puVar3[0x25] = 0;
    puVar3[0x26] = 0;
    puVar3[0x27] = 0;
    puVar3[0x28] = 0;
    puVar3[0x29] = 0;
    *(undefined1 *)(puVar3 + 0x2a) = 0;
    puVar3[0x2b] = 0;
    puVar3[0x2c] = 0xc;
    puVar3[0x2d] = 0;
    puVar3[0x2e] = 0;
    puVar3[0x2f] = 0;
    puVar3[0x30] = 0;
    puVar3[0x31] = 0;
    puVar3[0x32] = 0;
    puVar3[0x33] = 0;
    puVar3[0x34] = 0;
    puVar3[0x35] = 0;
    puVar3[0x36] = 0;
    puVar3[0x37] = 0;
    puVar3[0x38] = 0;
    puVar3[0x39] = 0;
    puVar3[0x3a] = 0;
    puVar3[0x3b] = 0;
    puVar3[0x3c] = 0;
    puVar3[0x3d] = 0;
    puVar3[0x3e] = 0;
    *(undefined1 *)(puVar3 + 0x3f) = 0;
    *(undefined4 **)(this + 8) = puVar3 + 1;
  }
  this[0x14] = (BoneAnim)0x1;
  return;
}


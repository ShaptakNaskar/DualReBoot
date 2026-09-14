/* 00046114 | STG::GESkeleton::BoneAnim::Initialize */

/* STG::GESkeleton::BoneAnim::Initialize(unsigned long, bool, bool) */

void __thiscall
STG::GESkeleton::BoneAnim::Initialize(BoneAnim *this,ulong param_1,bool param_2,bool param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  *(ulong *)(this + 0x10) = param_1;
  if ((param_2) && (*(int *)(this + 4) != 3)) {
    if (*(int *)(this + 4) != 0) {
      iVar2 = *(int *)this;
      if (iVar2 != 0) {
        iVar7 = *(int *)(iVar2 + -4) * 0x58 + iVar2;
        iVar3 = iVar7 + -0x38;
        iVar6 = iVar7 + -0x40;
        iVar4 = iVar7;
        while (iVar2 != iVar4) {
          iVar2 = iVar4 - iVar7;
          if (*(int *)(iVar2 + iVar3 + 4) != 0) {
            if (*(void **)(iVar2 + iVar3) != (void *)0x0) {
              operator_delete__(*(void **)(iVar2 + iVar3));
            }
            *(undefined4 *)(iVar2 + iVar3) = 0;
            *(undefined4 *)(iVar2 + iVar3 + 4) = 0;
          }
          if (*(int *)(iVar2 + iVar6 + 4) != 0) {
            if (*(void **)(iVar2 + iVar6) != (void *)0x0) {
              operator_delete__(*(void **)(iVar2 + iVar6));
            }
            *(undefined4 *)(iVar2 + iVar6) = 0;
            *(undefined4 *)(iVar2 + iVar6 + 4) = 0;
          }
          iVar5 = iVar7 + -0x48;
          if (*(int *)(iVar2 + iVar5 + 4) != 0) {
            if (*(void **)(iVar2 + iVar5) != (void *)0x0) {
              operator_delete__(*(void **)(iVar2 + iVar5));
            }
            *(undefined4 *)(iVar2 + iVar5) = 0;
            *(undefined4 *)(iVar2 + iVar5 + 4) = 0;
          }
          iVar4 = iVar4 + -0x58;
          iVar2 = *(int *)this;
        }
        operator_delete__((void *)(iVar2 + -8));
      }
      *(undefined4 *)this = 0;
    }
    *(undefined4 *)(this + 4) = 3;
    puVar1 = operator_new__(0x110);
    puVar1[3] = 0xc;
    puVar1[0x19] = 0xc;
    *puVar1 = 0x58;
    puVar1[1] = 3;
    puVar1[2] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    *(undefined1 *)(puVar1 + 0x16) = 0;
    puVar1[0x18] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0;
    puVar1[0x27] = 0;
    puVar1[0x28] = 0;
    puVar1[0x29] = 0;
    puVar1[0x2a] = 0;
    puVar1[0x2b] = 0;
    *(undefined1 *)(puVar1 + 0x2c) = 0;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0xc;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
    puVar1[0x32] = 0;
    puVar1[0x33] = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0;
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3d] = 0;
    puVar1[0x3e] = 0;
    puVar1[0x3f] = 0;
    puVar1[0x40] = 0;
    puVar1[0x41] = 0;
    *(undefined1 *)(puVar1 + 0x42) = 0;
    *(undefined4 **)this = puVar1 + 2;
  }
  if ((param_3) && (*(int *)(this + 0xc) != 3)) {
    if (*(int *)(this + 0xc) != 0) {
      iVar2 = *(int *)(this + 8);
      if (iVar2 != 0) {
        iVar6 = *(int *)(iVar2 + -4) * 0x58 + iVar2;
        iVar3 = iVar6 + -0x38;
        iVar7 = iVar6 + -0x40;
        iVar4 = iVar6;
        while (iVar2 != iVar4) {
          iVar2 = iVar4 - iVar6;
          if (*(int *)(iVar2 + iVar3 + 4) != 0) {
            if (*(void **)(iVar2 + iVar3) != (void *)0x0) {
              operator_delete__(*(void **)(iVar2 + iVar3));
            }
            *(undefined4 *)(iVar2 + iVar3) = 0;
            *(undefined4 *)(iVar2 + iVar3 + 4) = 0;
          }
          if (*(int *)(iVar2 + iVar7 + 4) != 0) {
            if (*(void **)(iVar2 + iVar7) != (void *)0x0) {
              operator_delete__(*(void **)(iVar2 + iVar7));
            }
            *(undefined4 *)(iVar2 + iVar7) = 0;
            *(undefined4 *)(iVar2 + iVar7 + 4) = 0;
          }
          iVar5 = iVar6 + -0x48;
          if (*(int *)(iVar2 + iVar5 + 4) != 0) {
            if (*(void **)(iVar2 + iVar5) != (void *)0x0) {
              operator_delete__(*(void **)(iVar2 + iVar5));
            }
            *(undefined4 *)(iVar2 + iVar5) = 0;
            *(undefined4 *)(iVar2 + iVar5 + 4) = 0;
          }
          iVar4 = iVar4 + -0x58;
          iVar2 = *(int *)(this + 8);
        }
        operator_delete__((void *)(iVar2 + -8));
      }
      *(undefined4 *)(this + 8) = 0;
    }
    *(undefined4 *)(this + 0xc) = 3;
    puVar1 = operator_new__(0x110);
    puVar1[3] = 0xc;
    puVar1[0x19] = 0xc;
    *puVar1 = 0x58;
    puVar1[1] = 3;
    puVar1[2] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    *(undefined1 *)(puVar1 + 0x16) = 0;
    puVar1[0x18] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0;
    puVar1[0x27] = 0;
    puVar1[0x28] = 0;
    puVar1[0x29] = 0;
    puVar1[0x2a] = 0;
    puVar1[0x2b] = 0;
    *(undefined1 *)(puVar1 + 0x2c) = 0;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0xc;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
    puVar1[0x32] = 0;
    puVar1[0x33] = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0;
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3d] = 0;
    puVar1[0x3e] = 0;
    puVar1[0x3f] = 0;
    puVar1[0x40] = 0;
    puVar1[0x41] = 0;
    *(undefined1 *)(puVar1 + 0x42) = 0;
    *(undefined4 **)(this + 8) = puVar1 + 2;
  }
  this[0x14] = (BoneAnim)0x1;
  return;
}


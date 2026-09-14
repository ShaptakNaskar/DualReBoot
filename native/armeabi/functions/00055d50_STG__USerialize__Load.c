/* 00055d50 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GESkeleton::Animation&) */

void STG::USerialize::Load(FFileBase *param_1,Animation *param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  BoneAnim *this;
  uint uVar4;
  BoneAnim *pBVar5;
  ulong local_68;
  ulong local_64;
  ulong local_60;
  uint local_5c;
  MMatrix aMStack_58 [64];
  
  FFileBase::Read(param_1,(uchar *)&local_5c,4);
  FFileBase::Read(param_1,(uchar *)&local_68,4);
  FFileBase::Read(param_1,(uchar *)&local_64,4);
  FFileBase::Read(param_1,(uchar *)&local_60,4);
  Load(param_1,aMStack_58);
  GESkeleton::Animation::Initialize(param_2,aMStack_58,local_68,local_64,local_60);
  FFileBase::Read(param_1,(uchar *)&local_5c,4);
  uVar4 = local_5c;
  if (local_5c != *(uint *)(param_2 + 4)) {
    if (*(uint *)(param_2 + 4) == 0) {
      *(uint *)(param_2 + 4) = local_5c;
    }
    else {
      pBVar5 = *(BoneAnim **)param_2;
      if (pBVar5 != (BoneAnim *)0x0) {
        this = pBVar5 + *(int *)(pBVar5 + -4) * 0x18;
        if (pBVar5 != this) {
          do {
            this = this + -0x18;
            GESkeleton::BoneAnim::~BoneAnim(this);
            pBVar5 = *(BoneAnim **)param_2;
          } while (pBVar5 != this);
        }
        operator_delete__(pBVar5 + -8);
      }
      *(uint *)(param_2 + 4) = uVar4;
      *(undefined4 *)param_2 = 0;
    }
    if (uVar4 != 0) {
      puVar2 = operator_new__(uVar4 * 0x18 + 8);
      *puVar2 = 0x18;
      puVar2[1] = uVar4;
      pBVar5 = (BoneAnim *)(puVar2 + 2);
      while (uVar4 = uVar4 - 1, uVar4 != 0xffffffff) {
        GESkeleton::BoneAnim::BoneAnim(pBVar5);
        pBVar5 = pBVar5 + 0x18;
      }
      *(BoneAnim **)param_2 = (BoneAnim *)(puVar2 + 2);
    }
  }
  if (local_5c != 0) {
    iVar3 = 0;
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      Load(param_1,(BoneAnim *)(*(int *)param_2 + iVar3));
      iVar3 = iVar3 + 0x18;
    } while (uVar4 < local_5c);
  }
  FFileBase::Read(param_1,(uchar *)&local_5c,4);
  uVar4 = local_5c;
  if (local_5c != *(uint *)(param_2 + 0xc)) {
    if (*(uint *)(param_2 + 0xc) == 0) {
      *(uint *)(param_2 + 0xc) = local_5c;
    }
    else {
      if (*(void **)(param_2 + 8) != (void *)0x0) {
        operator_delete__(*(void **)(param_2 + 8));
      }
      *(uint *)(param_2 + 0xc) = uVar4;
      *(undefined4 *)(param_2 + 8) = 0;
    }
    if (uVar4 != 0) {
      pvVar1 = operator_new__(uVar4 << 6);
      *(void **)(param_2 + 8) = pvVar1;
    }
  }
  if (local_5c != 0) {
    uVar4 = 0;
    do {
      Load(param_1,(MMatrix *)(*(int *)(param_2 + 8) + uVar4 * 0x40));
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_5c);
  }
  FFileBase::Read(param_1,(uchar *)&local_5c,4);
  uVar4 = local_5c;
  if (local_5c != *(uint *)(param_2 + 0x14)) {
    if (*(uint *)(param_2 + 0x14) == 0) {
      *(uint *)(param_2 + 0x14) = local_5c;
    }
    else {
      if (*(void **)(param_2 + 0x10) != (void *)0x0) {
        operator_delete__(*(void **)(param_2 + 0x10));
      }
      *(uint *)(param_2 + 0x14) = uVar4;
      *(undefined4 *)(param_2 + 0x10) = 0;
    }
    if (uVar4 != 0) {
      pvVar1 = operator_new__(uVar4 << 6);
      *(void **)(param_2 + 0x10) = pvVar1;
    }
  }
  if (local_5c != 0) {
    uVar4 = 0;
    do {
      Load(param_1,(MMatrix *)(*(int *)(param_2 + 0x10) + uVar4 * 0x40));
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_5c);
  }
  FFileBase::Read(param_1,(uchar *)&local_5c,4);
  uVar4 = local_5c;
  if (local_5c != *(uint *)(param_2 + 0x2c)) {
    if (*(uint *)(param_2 + 0x2c) == 0) {
      *(uint *)(param_2 + 0x2c) = local_5c;
    }
    else {
      if (*(void **)(param_2 + 0x28) != (void *)0x0) {
        operator_delete__(*(void **)(param_2 + 0x28));
      }
      *(uint *)(param_2 + 0x2c) = uVar4;
      *(undefined4 *)(param_2 + 0x28) = 0;
    }
    if (uVar4 != 0) {
      pvVar1 = operator_new__(uVar4 << 2);
      *(void **)(param_2 + 0x28) = pvVar1;
    }
  }
  if (local_5c != 0) {
    uVar4 = 0;
    do {
      FFileBase::Read(param_1,(uchar *)(*(int *)(param_2 + 0x28) + uVar4 * 4),4);
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_5c);
  }
  FFileBase::Read(param_1,(uchar *)&local_5c,4);
  uVar4 = local_5c;
  if (local_5c != *(uint *)(param_2 + 0x34)) {
    if (*(uint *)(param_2 + 0x34) == 0) {
      *(uint *)(param_2 + 0x34) = local_5c;
    }
    else {
      if (*(void **)(param_2 + 0x30) != (void *)0x0) {
        operator_delete__(*(void **)(param_2 + 0x30));
      }
      *(uint *)(param_2 + 0x34) = uVar4;
      *(undefined4 *)(param_2 + 0x30) = 0;
    }
    if (uVar4 != 0) {
      pvVar1 = operator_new__(uVar4 << 2);
      *(void **)(param_2 + 0x30) = pvVar1;
    }
  }
  if (local_5c != 0) {
    uVar4 = 0;
    do {
      FFileBase::Read(param_1,(uchar *)(*(int *)(param_2 + 0x30) + uVar4 * 4),4);
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_5c);
  }
  return;
}


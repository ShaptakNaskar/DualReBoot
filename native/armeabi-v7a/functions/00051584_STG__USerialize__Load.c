/* 00051584 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GESkeleton::Animation&) */

void STG::USerialize::Load(FFileBase *param_1,Animation *param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  BoneAnim *pBVar3;
  int iVar4;
  BoneAnim *this;
  uint uVar5;
  ulong local_68;
  ulong uStack_64;
  ulong uStack_60;
  uint local_5c;
  MMatrix aMStack_58 [64];
  
  FFileBase::Read(param_1,(uchar *)&local_5c,4);
  FFileBase::Read(param_1,(uchar *)&local_68,4);
  FFileBase::Read(param_1,(uchar *)&uStack_64,4);
  FFileBase::Read(param_1,(uchar *)&uStack_60,4);
  Load(param_1,aMStack_58);
  GESkeleton::Animation::Initialize(param_2,aMStack_58,local_68,uStack_64,uStack_60);
  FFileBase::Read(param_1,(uchar *)&local_5c,4);
  uVar5 = local_5c;
  if (local_5c != *(uint *)(param_2 + 4)) {
    if (*(uint *)(param_2 + 4) == 0) {
      *(uint *)(param_2 + 4) = local_5c;
    }
    else {
      pBVar3 = *(BoneAnim **)param_2;
      if (pBVar3 != (BoneAnim *)0x0) {
        this = pBVar3 + *(int *)(pBVar3 + -4) * 0x18;
        if (pBVar3 != this) {
          do {
            this = this + -0x18;
            GESkeleton::BoneAnim::~BoneAnim(this);
            pBVar3 = *(BoneAnim **)param_2;
          } while (pBVar3 != this);
        }
        operator_delete__(pBVar3 + -8);
      }
      *(uint *)(param_2 + 4) = uVar5;
      *(undefined4 *)param_2 = 0;
    }
    if (uVar5 != 0) {
      puVar2 = operator_new__(uVar5 * 0x18 + 8);
      puVar2[1] = uVar5;
      *puVar2 = 0x18;
      pBVar3 = (BoneAnim *)(puVar2 + 2);
      while (uVar5 = uVar5 - 1, uVar5 != 0xffffffff) {
        GESkeleton::BoneAnim::BoneAnim(pBVar3);
        pBVar3 = pBVar3 + 0x18;
      }
      *(BoneAnim **)param_2 = (BoneAnim *)(puVar2 + 2);
    }
  }
  if (local_5c != 0) {
    iVar4 = 0;
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      pBVar3 = (BoneAnim *)(*(int *)param_2 + iVar4);
      iVar4 = iVar4 + 0x18;
      Load(param_1,pBVar3);
    } while (uVar5 < local_5c);
  }
  FFileBase::Read(param_1,(uchar *)&local_5c,4);
  uVar5 = local_5c;
  if (local_5c != *(uint *)(param_2 + 0xc)) {
    if (*(uint *)(param_2 + 0xc) == 0) {
      *(uint *)(param_2 + 0xc) = local_5c;
    }
    else {
      if (*(void **)(param_2 + 8) != (void *)0x0) {
        operator_delete__(*(void **)(param_2 + 8));
      }
      *(uint *)(param_2 + 0xc) = uVar5;
      *(undefined4 *)(param_2 + 8) = 0;
    }
    if (uVar5 != 0) {
      pvVar1 = operator_new__(uVar5 << 6);
      *(void **)(param_2 + 8) = pvVar1;
    }
  }
  if (local_5c != 0) {
    uVar5 = 0;
    do {
      iVar4 = uVar5 * 0x40;
      uVar5 = uVar5 + 1;
      Load(param_1,(MMatrix *)(*(int *)(param_2 + 8) + iVar4));
    } while (uVar5 < local_5c);
  }
  FFileBase::Read(param_1,(uchar *)&local_5c,4);
  uVar5 = local_5c;
  if (local_5c != *(uint *)(param_2 + 0x14)) {
    if (*(uint *)(param_2 + 0x14) == 0) {
      *(uint *)(param_2 + 0x14) = local_5c;
    }
    else {
      if (*(void **)(param_2 + 0x10) != (void *)0x0) {
        operator_delete__(*(void **)(param_2 + 0x10));
      }
      *(uint *)(param_2 + 0x14) = uVar5;
      *(undefined4 *)(param_2 + 0x10) = 0;
    }
    if (uVar5 != 0) {
      pvVar1 = operator_new__(uVar5 << 6);
      *(void **)(param_2 + 0x10) = pvVar1;
    }
  }
  if (local_5c != 0) {
    uVar5 = 0;
    do {
      iVar4 = uVar5 * 0x40;
      uVar5 = uVar5 + 1;
      Load(param_1,(MMatrix *)(*(int *)(param_2 + 0x10) + iVar4));
    } while (uVar5 < local_5c);
  }
  FFileBase::Read(param_1,(uchar *)&local_5c,4);
  uVar5 = local_5c;
  if (local_5c != *(uint *)(param_2 + 0x2c)) {
    if (*(uint *)(param_2 + 0x2c) == 0) {
      *(uint *)(param_2 + 0x2c) = local_5c;
    }
    else {
      if (*(void **)(param_2 + 0x28) != (void *)0x0) {
        operator_delete__(*(void **)(param_2 + 0x28));
      }
      *(uint *)(param_2 + 0x2c) = uVar5;
      *(undefined4 *)(param_2 + 0x28) = 0;
    }
    if (uVar5 != 0) {
      pvVar1 = operator_new__(uVar5 << 2);
      *(void **)(param_2 + 0x28) = pvVar1;
    }
  }
  if (local_5c != 0) {
    uVar5 = 0;
    do {
      iVar4 = uVar5 * 4;
      uVar5 = uVar5 + 1;
      FFileBase::Read(param_1,(uchar *)(*(int *)(param_2 + 0x28) + iVar4),4);
    } while (uVar5 < local_5c);
  }
  FFileBase::Read(param_1,(uchar *)&local_5c,4);
  uVar5 = local_5c;
  if (local_5c != *(uint *)(param_2 + 0x34)) {
    if (*(uint *)(param_2 + 0x34) == 0) {
      *(uint *)(param_2 + 0x34) = local_5c;
    }
    else {
      if (*(void **)(param_2 + 0x30) != (void *)0x0) {
        operator_delete__(*(void **)(param_2 + 0x30));
      }
      *(uint *)(param_2 + 0x34) = uVar5;
      *(undefined4 *)(param_2 + 0x30) = 0;
    }
    if (uVar5 != 0) {
      pvVar1 = operator_new__(uVar5 << 2);
      *(void **)(param_2 + 0x30) = pvVar1;
    }
  }
  if (local_5c != 0) {
    uVar5 = 0;
    do {
      iVar4 = uVar5 * 4;
      uVar5 = uVar5 + 1;
      FFileBase::Read(param_1,(uchar *)(*(int *)(param_2 + 0x30) + iVar4),4);
    } while (uVar5 < local_5c);
  }
  return;
}


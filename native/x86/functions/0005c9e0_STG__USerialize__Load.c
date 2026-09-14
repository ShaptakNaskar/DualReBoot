/* 0005c9e0 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GESkeleton::Animation&) */

void STG::USerialize::Load(FFileBase *param_1,Animation *param_2)

{
  int iVar1;
  void *pvVar2;
  BoneAnim *this;
  uint *puVar3;
  BoneAnim *pBVar4;
  uint uVar5;
  ulong local_6c;
  ulong local_68;
  ulong local_64;
  uint local_60 [4];
  MMatrix local_50 [60];
  undefined4 uStack_14;
  
  uStack_14 = 0x5c9eb;
  FUN_0002e044();
  FFileBase::Read(param_1,(uchar *)local_60,4);
  FFileBase::Read(param_1,(uchar *)&local_6c,4);
  FFileBase::Read(param_1,(uchar *)&local_68,4);
  FFileBase::Read(param_1,(uchar *)&local_64,4);
  Load(param_1,local_50);
  GESkeleton::Animation::Initialize(param_2,local_50,local_6c,local_68,local_64);
  FFileBase::Read(param_1,(uchar *)local_60,4);
  uVar5 = local_60[0];
  if (local_60[0] != *(uint *)(param_2 + 4)) {
    if (*(uint *)(param_2 + 4) == 0) {
      *(uint *)(param_2 + 4) = local_60[0];
    }
    else {
      pBVar4 = *(BoneAnim **)param_2;
      if (pBVar4 != (BoneAnim *)0x0) {
        this = pBVar4 + *(int *)(pBVar4 + -4) * 0x18;
        if (pBVar4 != this) {
          do {
            this = this + -0x18;
            GESkeleton::BoneAnim::~BoneAnim(this);
            pBVar4 = *(BoneAnim **)param_2;
          } while (pBVar4 != this);
        }
        operator_delete__(pBVar4 + -4);
      }
      *(undefined4 *)param_2 = 0;
      *(uint *)(param_2 + 4) = uVar5;
    }
    if (uVar5 != 0) {
      puVar3 = operator_new__(uVar5 * 0x18 + 4);
      *puVar3 = uVar5;
      pBVar4 = (BoneAnim *)(puVar3 + 1);
      while (uVar5 = uVar5 - 1, uVar5 != 0xffffffff) {
        GESkeleton::BoneAnim::BoneAnim(pBVar4);
        pBVar4 = pBVar4 + 0x18;
      }
      *(BoneAnim **)param_2 = (BoneAnim *)(puVar3 + 1);
    }
  }
  if (local_60[0] != 0) {
    iVar1 = 0;
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      Load(param_1,(BoneAnim *)(iVar1 + *(int *)param_2));
      iVar1 = iVar1 + 0x18;
    } while (uVar5 < local_60[0]);
  }
  FFileBase::Read(param_1,(uchar *)local_60,4);
  uVar5 = local_60[0];
  if (local_60[0] != *(uint *)(param_2 + 0xc)) {
    if (*(uint *)(param_2 + 0xc) == 0) {
      *(uint *)(param_2 + 0xc) = local_60[0];
    }
    else {
      if (*(void **)(param_2 + 8) != (void *)0x0) {
        operator_delete__(*(void **)(param_2 + 8));
      }
      *(undefined4 *)(param_2 + 8) = 0;
      *(uint *)(param_2 + 0xc) = uVar5;
    }
    if (uVar5 != 0) {
      pvVar2 = operator_new__(uVar5 << 6);
      *(void **)(param_2 + 8) = pvVar2;
    }
  }
  if (local_60[0] != 0) {
    uVar5 = 0;
    do {
      Load(param_1,(MMatrix *)(uVar5 * 0x40 + *(int *)(param_2 + 8)));
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_60[0]);
  }
  FFileBase::Read(param_1,(uchar *)local_60,4);
  uVar5 = local_60[0];
  if (local_60[0] != *(uint *)(param_2 + 0x14)) {
    if (*(uint *)(param_2 + 0x14) == 0) {
      *(uint *)(param_2 + 0x14) = local_60[0];
    }
    else {
      if (*(void **)(param_2 + 0x10) != (void *)0x0) {
        operator_delete__(*(void **)(param_2 + 0x10));
      }
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(uint *)(param_2 + 0x14) = uVar5;
    }
    if (uVar5 != 0) {
      pvVar2 = operator_new__(uVar5 << 6);
      *(void **)(param_2 + 0x10) = pvVar2;
    }
  }
  if (local_60[0] != 0) {
    uVar5 = 0;
    do {
      Load(param_1,(MMatrix *)(uVar5 * 0x40 + *(int *)(param_2 + 0x10)));
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_60[0]);
  }
  FFileBase::Read(param_1,(uchar *)local_60,4);
  uVar5 = local_60[0];
  if (local_60[0] != *(uint *)(param_2 + 0x2c)) {
    if (*(uint *)(param_2 + 0x2c) == 0) {
      *(uint *)(param_2 + 0x2c) = local_60[0];
    }
    else {
      if (*(void **)(param_2 + 0x28) != (void *)0x0) {
        operator_delete__(*(void **)(param_2 + 0x28));
      }
      *(undefined4 *)(param_2 + 0x28) = 0;
      *(uint *)(param_2 + 0x2c) = uVar5;
    }
    if (uVar5 != 0) {
      pvVar2 = operator_new__(uVar5 << 2);
      *(void **)(param_2 + 0x28) = pvVar2;
    }
  }
  if (local_60[0] != 0) {
    uVar5 = 0;
    do {
      iVar1 = uVar5 * 4;
      uVar5 = uVar5 + 1;
      FFileBase::Read(param_1,(uchar *)(iVar1 + *(int *)(param_2 + 0x28)),4);
    } while (uVar5 < local_60[0]);
  }
  FFileBase::Read(param_1,(uchar *)local_60,4);
  uVar5 = local_60[0];
  if (local_60[0] != *(uint *)(param_2 + 0x34)) {
    if (*(uint *)(param_2 + 0x34) == 0) {
      *(uint *)(param_2 + 0x34) = local_60[0];
    }
    else {
      if (*(void **)(param_2 + 0x30) != (void *)0x0) {
        operator_delete__(*(void **)(param_2 + 0x30));
      }
      *(undefined4 *)(param_2 + 0x30) = 0;
      *(uint *)(param_2 + 0x34) = uVar5;
    }
    if (uVar5 != 0) {
      pvVar2 = operator_new__(uVar5 << 2);
      *(void **)(param_2 + 0x30) = pvVar2;
    }
  }
  if (local_60[0] != 0) {
    uVar5 = 0;
    do {
      FFileBase::Read(param_1,(uchar *)(uVar5 * 4 + *(int *)(param_2 + 0x30)),4);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_60[0]);
  }
  return;
}


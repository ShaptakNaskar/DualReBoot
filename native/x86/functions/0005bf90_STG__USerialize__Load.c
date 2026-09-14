/* 0005bf90 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GESkeleton::VertexGroup&) */

void STG::USerialize::Load(FFileBase *param_1,VertexGroup *param_2)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  ulong local_2c;
  ulong local_28;
  ulong local_24;
  uint local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x5bf9b;
  FUN_0002e044();
  FFileBase::Read(param_1,(uchar *)local_20,4);
  FFileBase::Read(param_1,(uchar *)&local_2c,4);
  FFileBase::Read(param_1,(uchar *)&local_28,4);
  FFileBase::Read(param_1,(uchar *)&local_24,4);
  GESkeleton::VertexGroup::Initialize(param_2,local_2c,local_28,local_24);
  FFileBase::Read(param_1,(uchar *)local_20,4);
  uVar3 = local_20[0];
  if (local_20[0] != *(uint *)(param_2 + 4)) {
    if (*(uint *)(param_2 + 4) == 0) {
      *(uint *)(param_2 + 4) = local_20[0];
    }
    else {
      if (*(void **)param_2 != (void *)0x0) {
        operator_delete__(*(void **)param_2);
      }
      *(undefined4 *)param_2 = 0;
      *(uint *)(param_2 + 4) = uVar3;
    }
    if (uVar3 != 0) {
      pvVar2 = operator_new__(uVar3 << 2);
      *(void **)param_2 = pvVar2;
    }
  }
  if (local_20[0] != 0) {
    uVar3 = 0;
    do {
      iVar1 = uVar3 * 4;
      uVar3 = uVar3 + 1;
      FFileBase::Read(param_1,(uchar *)(iVar1 + *(int *)param_2),4);
    } while (uVar3 < local_20[0]);
  }
  return;
}


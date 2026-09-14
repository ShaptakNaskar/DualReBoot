/* 000555d4 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GESkeleton::VertexGroup&) */

void STG::USerialize::Load(FFileBase *param_1,VertexGroup *param_2)

{
  void *pvVar1;
  uint uVar2;
  ulong local_20;
  ulong uStack_1c;
  ulong uStack_18;
  uint local_14;
  
  FFileBase::Read(param_1,(uchar *)&local_14,4);
  FFileBase::Read(param_1,(uchar *)&local_20,4);
  FFileBase::Read(param_1,(uchar *)&uStack_1c,4);
  FFileBase::Read(param_1,(uchar *)&uStack_18,4);
  GESkeleton::VertexGroup::Initialize(param_2,local_20,uStack_1c,uStack_18);
  FFileBase::Read(param_1,(uchar *)&local_14,4);
  uVar2 = local_14;
  if (local_14 != *(uint *)(param_2 + 4)) {
    if (*(uint *)(param_2 + 4) == 0) {
      *(uint *)(param_2 + 4) = local_14;
    }
    else {
      if (*(void **)param_2 != (void *)0x0) {
        operator_delete__(*(void **)param_2);
      }
      *(uint *)(param_2 + 4) = uVar2;
      *(undefined4 *)param_2 = 0;
    }
    if (uVar2 != 0) {
      pvVar1 = operator_new__(uVar2 << 2);
      *(void **)param_2 = pvVar1;
    }
  }
  if (local_14 != 0) {
    uVar2 = 0;
    do {
      FFileBase::Read(param_1,(uchar *)(*(int *)param_2 + uVar2 * 4),4);
      uVar2 = uVar2 + 1;
    } while (uVar2 < local_14);
  }
  return;
}


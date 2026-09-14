/* 0005e100 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GEVertexBuffer&) */

void STG::USerialize::Load(FFileBase *param_1,GEVertexBuffer *param_2)

{
  uint uVar1;
  uint uVar2;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  uint local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x5e109;
  FUN_0002e044();
  FFileBase::Read(param_1,(uchar *)local_20,4);
  uVar1 = local_20[0];
  FFileBase::Read(param_1,(uchar *)&local_34,4);
  if (local_34 != 0) {
    uVar2 = 0;
    do {
      FFileBase::Read(param_1,(uchar *)&local_30,4);
      FFileBase::Read(param_1,(uchar *)&local_2c,4);
      FFileBase::Read(param_1,(uchar *)local_20,4);
      uVar2 = uVar2 + 1;
      GEVertexBuffer::AddComponent(param_2,local_30,local_2c,local_20[0]);
    } while (uVar2 < local_34);
  }
  uVar2 = 0;
  if (1 < uVar1) {
    FFileBase::Read(param_1,(uchar *)local_20,4);
    uVar2 = local_20[0];
  }
  FFileBase::Read(param_1,(uchar *)&local_28,4);
  FFileBase::Read(param_1,(uchar *)&local_24,4);
  GEVertexBuffer::Allocate(param_2,uVar2,local_28);
  FFileBase::Read(param_1,*(uchar **)(param_2 + 0x14),local_28 * local_24);
  return;
}


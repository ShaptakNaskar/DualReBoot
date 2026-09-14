/* 000527a8 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GEVertexBuffer&) */

void STG::USerialize::Load(FFileBase *param_1,GEVertexBuffer *param_2)

{
  uint uVar1;
  uint uVar2;
  uint local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int local_24;
  int local_20;
  uint local_1c [2];
  
  FFileBase::Read(param_1,(uchar *)local_1c,4);
  uVar1 = local_1c[0];
  FFileBase::Read(param_1,(uchar *)&local_30,4);
  if (local_30 != 0) {
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
      FFileBase::Read(param_1,(uchar *)&uStack_2c,4);
      FFileBase::Read(param_1,(uchar *)&uStack_28,4);
      FFileBase::Read(param_1,(uchar *)local_1c,4);
      GEVertexBuffer::AddComponent(param_2,uStack_2c,uStack_28,local_1c[0]);
    } while (uVar2 < local_30);
  }
  if (uVar1 < 2) {
    local_1c[0] = 0;
  }
  else {
    FFileBase::Read(param_1,(uchar *)local_1c,4);
  }
  FFileBase::Read(param_1,(uchar *)&local_24,4);
  FFileBase::Read(param_1,(uchar *)&local_20,4);
  GEVertexBuffer::Allocate(param_2,local_1c[0],local_24);
  FFileBase::Read(param_1,*(uchar **)(param_2 + 0x14),local_20 * local_24);
  return;
}


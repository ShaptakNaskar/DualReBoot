/* 0005d7d0 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GESkeleton::Mesh const&) */

void STG::USerialize::Save(FFileBase *param_1,Mesh *param_2)

{
  Animation *pAVar1;
  VertexGroup *pVVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_3c;
  float local_38;
  MVector3 local_34 [12];
  float local_28;
  float local_24;
  float local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x5d7d9;
  FUN_0002e044();
  local_3c = 1;
  FFileBase::Write(param_1,(uchar *)&local_3c,4);
  local_3c = *(undefined4 *)(param_2 + 4);
  FFileBase::Write(param_1,(uchar *)&local_3c,4);
  local_3c = *(undefined4 *)(param_2 + 0xc);
  FFileBase::Write(param_1,(uchar *)&local_3c,4);
  local_3c = *(undefined4 *)(param_2 + 0x10);
  FFileBase::Write(param_1,(uchar *)&local_3c,4);
  local_3c = *(undefined4 *)(param_2 + 4);
  FFileBase::Write(param_1,(uchar *)&local_3c,4);
  if (*(int *)(param_2 + 4) != 0) {
    uVar5 = 0;
    iVar4 = 0;
    do {
      pAVar1 = (Animation *)(*(int *)param_2 + iVar4);
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x88;
      Save(param_1,pAVar1);
    } while (uVar5 < *(uint *)(param_2 + 4));
  }
  local_3c = *(undefined4 *)(param_2 + 0xc);
  FFileBase::Write(param_1,(uchar *)&local_3c,4);
  if (*(int *)(param_2 + 0xc) != 0) {
    iVar4 = 0;
    uVar5 = 0;
    do {
      pVVar2 = (VertexGroup *)(*(int *)(param_2 + 8) + iVar4);
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x14;
      Save(param_1,pVVar2);
    } while (uVar5 < *(uint *)(param_2 + 0xc));
  }
  local_3c = 3;
  FFileBase::Write(param_1,(uchar *)&local_3c,4);
  if (*(int *)(param_2 + 0x10) != 0) {
    uVar3 = 0;
    do {
      GESkeleton::Mesh::GetVertex(param_2,uVar3,local_34,&local_28);
      uVar3 = uVar3 + 1;
      Save(param_1,local_34);
      local_38 = local_28;
      FFileBase::Write(param_1,(uchar *)&local_38,4);
      local_38 = local_24;
      FFileBase::Write(param_1,(uchar *)&local_38,4);
      local_38 = local_20;
      FFileBase::Write(param_1,(uchar *)&local_38,4);
    } while (uVar3 < *(uint *)(param_2 + 0x10));
  }
  return;
}


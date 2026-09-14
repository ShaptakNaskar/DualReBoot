/* 00052150 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GESkeleton::Mesh const&) */

void STG::USerialize::Save(FFileBase *param_1,Mesh *param_2)

{
  Animation *pAVar1;
  VertexGroup *pVVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_38;
  float local_34;
  MVector3 aMStack_30 [12];
  float local_24;
  float local_20;
  float local_1c;
  
  local_38 = 1;
  FFileBase::Write(param_1,(uchar *)&local_38,4);
  local_38 = *(undefined4 *)(param_2 + 4);
  FFileBase::Write(param_1,(uchar *)&local_38,4);
  local_38 = *(undefined4 *)(param_2 + 0xc);
  FFileBase::Write(param_1,(uchar *)&local_38,4);
  local_38 = *(undefined4 *)(param_2 + 0x10);
  FFileBase::Write(param_1,(uchar *)&local_38,4);
  local_38 = *(undefined4 *)(param_2 + 4);
  FFileBase::Write(param_1,(uchar *)&local_38,4);
  if (*(int *)(param_2 + 4) != 0) {
    iVar4 = 0;
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      pAVar1 = (Animation *)(*(int *)param_2 + iVar4);
      iVar4 = iVar4 + 0x88;
      Save(param_1,pAVar1);
    } while (uVar5 < *(uint *)(param_2 + 4));
  }
  local_38 = *(undefined4 *)(param_2 + 0xc);
  FFileBase::Write(param_1,(uchar *)&local_38,4);
  if (*(int *)(param_2 + 0xc) != 0) {
    iVar4 = 0;
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      pVVar2 = (VertexGroup *)(*(int *)(param_2 + 8) + iVar4);
      iVar4 = iVar4 + 0x14;
      Save(param_1,pVVar2);
    } while (uVar5 < *(uint *)(param_2 + 0xc));
  }
  local_38 = 3;
  FFileBase::Write(param_1,(uchar *)&local_38,4);
  if (*(int *)(param_2 + 0x10) != 0) {
    uVar3 = 0;
    do {
      GESkeleton::Mesh::GetVertex(param_2,uVar3,aMStack_30,&local_24);
      uVar3 = uVar3 + 1;
      Save(param_1,aMStack_30);
      local_34 = local_24;
      FFileBase::Write(param_1,(uchar *)&local_34,4);
      local_34 = local_20;
      FFileBase::Write(param_1,(uchar *)&local_34,4);
      local_34 = local_1c;
      FFileBase::Write(param_1,(uchar *)&local_34,4);
    } while (uVar3 < *(uint *)(param_2 + 0x10));
  }
  return;
}


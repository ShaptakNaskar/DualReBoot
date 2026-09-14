/* 000519ac | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GESkeleton::Mesh&) */

void STG::USerialize::Load(FFileBase *param_1,Mesh *param_2)

{
  undefined4 *puVar1;
  Animation *pAVar2;
  VertexGroup *pVVar3;
  int iVar4;
  ulong uVar5;
  VertexGroup *this;
  Animation *this_00;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  ulong uStack_44;
  ulong uStack_40;
  ulong local_3c;
  float local_38;
  uint local_34;
  MVector3 aMStack_30 [12];
  float local_24 [3];
  
  FFileBase::Read(param_1,(uchar *)&local_34,4);
  FFileBase::Read(param_1,(uchar *)&uStack_44,4);
  FFileBase::Read(param_1,(uchar *)&uStack_40,4);
  FFileBase::Read(param_1,(uchar *)&local_3c,4);
  GESkeleton::Mesh::Initialize(param_2,uStack_44,uStack_40,local_3c);
  FFileBase::Read(param_1,(uchar *)&local_34,4);
  uVar6 = local_34;
  if (local_34 != *(uint *)(param_2 + 4)) {
    if (*(uint *)(param_2 + 4) == 0) {
      *(uint *)(param_2 + 4) = local_34;
    }
    else {
      pAVar2 = *(Animation **)param_2;
      if (pAVar2 != (Animation *)0x0) {
        this_00 = pAVar2 + *(int *)(pAVar2 + -4) * 0x88;
        if (pAVar2 != this_00) {
          do {
            this_00 = this_00 + -0x88;
            GESkeleton::Animation::~Animation(this_00);
            pAVar2 = *(Animation **)param_2;
          } while (pAVar2 != this_00);
        }
        operator_delete__(pAVar2 + -8);
      }
      *(uint *)(param_2 + 4) = uVar6;
      *(undefined4 *)param_2 = 0;
    }
    if (uVar6 != 0) {
      puVar1 = operator_new__(uVar6 * 0x88 + 8);
      puVar1[1] = uVar6;
      *puVar1 = 0x88;
      pAVar2 = (Animation *)(puVar1 + 2);
      while (uVar6 = uVar6 - 1, uVar6 != 0xffffffff) {
        GESkeleton::Animation::Animation(pAVar2);
        pAVar2 = pAVar2 + 0x88;
      }
      *(Animation **)param_2 = (Animation *)(puVar1 + 2);
    }
  }
  if (local_34 != 0) {
    iVar4 = 0;
    uVar6 = 0;
    do {
      uVar6 = uVar6 + 1;
      pAVar2 = (Animation *)(*(int *)param_2 + iVar4);
      iVar4 = iVar4 + 0x88;
      Load(param_1,pAVar2);
    } while (uVar6 < local_34);
  }
  FFileBase::Read(param_1,(uchar *)&local_34,4);
  uVar6 = local_34;
  if (local_34 != *(uint *)(param_2 + 0xc)) {
    if (*(uint *)(param_2 + 0xc) == 0) {
      *(uint *)(param_2 + 0xc) = local_34;
    }
    else {
      pVVar3 = *(VertexGroup **)(param_2 + 8);
      if (pVVar3 != (VertexGroup *)0x0) {
        this = pVVar3 + *(int *)(pVVar3 + -4) * 0x14;
        if (pVVar3 != this) {
          do {
            this = this + -0x14;
            GESkeleton::VertexGroup::~VertexGroup(this);
            pVVar3 = *(VertexGroup **)(param_2 + 8);
          } while (pVVar3 != this);
        }
        operator_delete__(pVVar3 + -8);
      }
      *(uint *)(param_2 + 0xc) = uVar6;
      *(undefined4 *)(param_2 + 8) = 0;
    }
    if (uVar6 != 0) {
      puVar1 = operator_new__(uVar6 * 0x14 + 8);
      puVar1[1] = uVar6;
      *puVar1 = 0x14;
      pVVar3 = (VertexGroup *)(puVar1 + 2);
      while (uVar6 = uVar6 - 1, uVar6 != 0xffffffff) {
        GESkeleton::VertexGroup::VertexGroup(pVVar3);
        pVVar3 = pVVar3 + 0x14;
      }
      *(VertexGroup **)(param_2 + 8) = (VertexGroup *)(puVar1 + 2);
    }
  }
  if (local_34 != 0) {
    iVar4 = 0;
    uVar6 = 0;
    do {
      uVar6 = uVar6 + 1;
      pVVar3 = (VertexGroup *)(*(int *)(param_2 + 8) + iVar4);
      iVar4 = iVar4 + 0x14;
      Load(param_1,pVVar3);
    } while (uVar6 < local_34);
  }
  FFileBase::Read(param_1,(uchar *)&local_34,4);
  local_24[0] = 0.0;
  local_24[1] = 0.0;
  local_24[2] = 0.0;
  if (local_3c != 0) {
    uVar5 = 0;
    do {
      Load(param_1,aMStack_30);
      if (local_34 != 0) {
        pfVar8 = local_24;
        uVar6 = 0;
        do {
          FFileBase::Read(param_1,(uchar *)&local_38,4);
          uVar7 = uVar6 + 1;
          if (uVar6 < 3) {
            *pfVar8 = local_38;
          }
          pfVar8 = pfVar8 + 1;
          uVar6 = uVar7;
        } while (uVar7 < local_34);
      }
      GESkeleton::Mesh::SetVertex(param_2,uVar5,aMStack_30,local_24);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_3c);
  }
  return;
}


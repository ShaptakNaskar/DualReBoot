/* 00056178 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GESkeleton::Mesh&) */

void STG::USerialize::Load(FFileBase *param_1,Mesh *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  ulong uVar3;
  VertexGroup *this;
  Animation *this_00;
  uint uVar4;
  VertexGroup *pVVar5;
  Animation *pAVar6;
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
  uVar4 = local_34;
  if (local_34 != *(uint *)(param_2 + 4)) {
    if (*(uint *)(param_2 + 4) == 0) {
      *(uint *)(param_2 + 4) = local_34;
    }
    else {
      pAVar6 = *(Animation **)param_2;
      if (pAVar6 != (Animation *)0x0) {
        this_00 = pAVar6 + *(int *)(pAVar6 + -4) * 0x88;
        if (pAVar6 != this_00) {
          do {
            this_00 = this_00 + -0x88;
            GESkeleton::Animation::~Animation(this_00);
            pAVar6 = *(Animation **)param_2;
          } while (pAVar6 != this_00);
        }
        operator_delete__(pAVar6 + -8);
      }
      *(uint *)(param_2 + 4) = uVar4;
      *(undefined4 *)param_2 = 0;
    }
    if (uVar4 != 0) {
      puVar1 = operator_new__(uVar4 * 0x88 + 8);
      *puVar1 = 0x88;
      puVar1[1] = uVar4;
      pAVar6 = (Animation *)(puVar1 + 2);
      while (uVar4 = uVar4 - 1, uVar4 != 0xffffffff) {
        GESkeleton::Animation::Animation(pAVar6);
        pAVar6 = pAVar6 + 0x88;
      }
      *(Animation **)param_2 = (Animation *)(puVar1 + 2);
    }
  }
  if (local_34 != 0) {
    iVar2 = 0;
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      Load(param_1,(Animation *)(*(int *)param_2 + iVar2));
      iVar2 = iVar2 + 0x88;
    } while (uVar4 < local_34);
  }
  FFileBase::Read(param_1,(uchar *)&local_34,4);
  uVar4 = local_34;
  if (local_34 != *(uint *)(param_2 + 0xc)) {
    if (*(uint *)(param_2 + 0xc) == 0) {
      *(uint *)(param_2 + 0xc) = local_34;
    }
    else {
      pVVar5 = *(VertexGroup **)(param_2 + 8);
      if (pVVar5 != (VertexGroup *)0x0) {
        this = pVVar5 + *(int *)(pVVar5 + -4) * 0x14;
        if (pVVar5 != this) {
          do {
            this = this + -0x14;
            GESkeleton::VertexGroup::~VertexGroup(this);
            pVVar5 = *(VertexGroup **)(param_2 + 8);
          } while (pVVar5 != this);
        }
        operator_delete__(pVVar5 + -8);
      }
      *(uint *)(param_2 + 0xc) = uVar4;
      *(undefined4 *)(param_2 + 8) = 0;
    }
    if (uVar4 != 0) {
      puVar1 = operator_new__(uVar4 * 0x14 + 8);
      *puVar1 = 0x14;
      puVar1[1] = uVar4;
      pVVar5 = (VertexGroup *)(puVar1 + 2);
      while (uVar4 = uVar4 - 1, uVar4 != 0xffffffff) {
        GESkeleton::VertexGroup::VertexGroup(pVVar5);
        pVVar5 = pVVar5 + 0x14;
      }
      *(VertexGroup **)(param_2 + 8) = (VertexGroup *)(puVar1 + 2);
    }
  }
  if (local_34 != 0) {
    iVar2 = 0;
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      Load(param_1,(VertexGroup *)(*(int *)(param_2 + 8) + iVar2));
      iVar2 = iVar2 + 0x14;
    } while (uVar4 < local_34);
  }
  FFileBase::Read(param_1,(uchar *)&local_34,4);
  local_24[0] = 0.0;
  local_24[1] = 0.0;
  local_24[2] = 0.0;
  if (local_3c != 0) {
    uVar3 = 0;
    do {
      Load(param_1,aMStack_30);
      if (local_34 != 0) {
        uVar4 = 0;
        do {
          FFileBase::Read(param_1,(uchar *)&local_38,4);
          if (uVar4 < 3) {
            local_24[uVar4] = local_38;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < local_34);
      }
      GESkeleton::Mesh::SetVertex(param_2,uVar3,aMStack_30,local_24);
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_3c);
  }
  return;
}


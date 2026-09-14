/* 0005ceb0 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GESkeleton::Mesh&) */

void STG::USerialize::Load(FFileBase *param_1,Mesh *param_2)

{
  uint *puVar1;
  Animation *this;
  int iVar2;
  VertexGroup *this_00;
  uint uVar3;
  ulong uVar4;
  VertexGroup *pVVar5;
  Animation *pAVar6;
  float local_50;
  ulong local_4c;
  ulong local_48;
  ulong local_44;
  uint local_40 [4];
  float local_30 [5];
  MVector3 local_1c [8];
  undefined4 uStack_14;
  
  uStack_14 = 0x5cebb;
  FUN_0002e044();
  FFileBase::Read(param_1,(uchar *)local_40,4);
  FFileBase::Read(param_1,(uchar *)&local_4c,4);
  FFileBase::Read(param_1,(uchar *)&local_48,4);
  FFileBase::Read(param_1,(uchar *)&local_44,4);
  GESkeleton::Mesh::Initialize(param_2,local_4c,local_48,local_44);
  FFileBase::Read(param_1,(uchar *)local_40,4);
  uVar3 = local_40[0];
  if (local_40[0] != *(uint *)(param_2 + 4)) {
    if (*(uint *)(param_2 + 4) == 0) {
      *(uint *)(param_2 + 4) = local_40[0];
    }
    else {
      pAVar6 = *(Animation **)param_2;
      if (pAVar6 != (Animation *)0x0) {
        this = pAVar6 + *(int *)(pAVar6 + -4) * 0x88;
        if (pAVar6 != this) {
          do {
            this = this + -0x88;
            GESkeleton::Animation::~Animation(this);
            pAVar6 = *(Animation **)param_2;
          } while (pAVar6 != this);
        }
        operator_delete__(pAVar6 + -4);
      }
      *(undefined4 *)param_2 = 0;
      *(uint *)(param_2 + 4) = uVar3;
    }
    if (uVar3 != 0) {
      puVar1 = operator_new__(uVar3 * 0x88 + 4);
      *puVar1 = uVar3;
      pAVar6 = (Animation *)(puVar1 + 1);
      while (uVar3 = uVar3 - 1, uVar3 != 0xffffffff) {
        GESkeleton::Animation::Animation(pAVar6);
        pAVar6 = pAVar6 + 0x88;
      }
      *(Animation **)param_2 = (Animation *)(puVar1 + 1);
    }
  }
  if (local_40[0] != 0) {
    uVar3 = 0;
    iVar2 = 0;
    do {
      uVar3 = uVar3 + 1;
      Load(param_1,(Animation *)(iVar2 + *(int *)param_2));
      iVar2 = iVar2 + 0x88;
    } while (uVar3 < local_40[0]);
  }
  FFileBase::Read(param_1,(uchar *)local_40,4);
  uVar3 = local_40[0];
  if (local_40[0] != *(uint *)(param_2 + 0xc)) {
    if (*(uint *)(param_2 + 0xc) == 0) {
      *(uint *)(param_2 + 0xc) = local_40[0];
    }
    else {
      pVVar5 = *(VertexGroup **)(param_2 + 8);
      if (pVVar5 != (VertexGroup *)0x0) {
        this_00 = pVVar5 + *(int *)(pVVar5 + -4) * 0x14;
        if (pVVar5 != this_00) {
          do {
            this_00 = this_00 + -0x14;
            GESkeleton::VertexGroup::~VertexGroup(this_00);
            pVVar5 = *(VertexGroup **)(param_2 + 8);
          } while (pVVar5 != this_00);
        }
        operator_delete__(pVVar5 + -4);
      }
      *(undefined4 *)(param_2 + 8) = 0;
      *(uint *)(param_2 + 0xc) = uVar3;
    }
    if (uVar3 != 0) {
      puVar1 = operator_new__(uVar3 * 0x14 + 4);
      *puVar1 = uVar3;
      pVVar5 = (VertexGroup *)(puVar1 + 1);
      while (uVar3 = uVar3 - 1, uVar3 != 0xffffffff) {
        GESkeleton::VertexGroup::VertexGroup(pVVar5);
        pVVar5 = pVVar5 + 0x14;
      }
      *(VertexGroup **)(param_2 + 8) = (VertexGroup *)(puVar1 + 1);
    }
  }
  if (local_40[0] != 0) {
    uVar3 = 0;
    iVar2 = 0;
    do {
      uVar3 = uVar3 + 1;
      Load(param_1,(VertexGroup *)(iVar2 + *(int *)(param_2 + 8)));
      iVar2 = iVar2 + 0x14;
    } while (uVar3 < local_40[0]);
  }
  FFileBase::Read(param_1,(uchar *)local_40,4);
  local_30[0] = 0.0;
  local_30[1] = 0.0;
  local_30[2] = 0.0;
  if (local_44 != 0) {
    uVar4 = 0;
    do {
      Load(param_1,local_1c);
      if (local_40[0] != 0) {
        uVar3 = 0;
        do {
          FFileBase::Read(param_1,(uchar *)&local_50,4);
          if (uVar3 < 3) {
            local_30[uVar3] = local_50;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < local_40[0]);
      }
      uVar3 = uVar4 + 1;
      GESkeleton::Mesh::SetVertex(param_2,uVar4,local_1c,local_30);
      uVar4 = uVar3;
    } while (uVar3 < local_44);
  }
  return;
}


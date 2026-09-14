/* 0004733c | STG::GESkeleton::Mesh::Update */

/* STG::GESkeleton::Mesh::Update(float*, void (*)(float*, float const*, float const*, float const*,
   float const*, float const*, unsigned long), STG::GEAnimationTimeData::EDriver,
   STG::GEAnimationTimeData const&, bool, STG::UTimeValue<unsigned long long, 1ul> const&) */

void __thiscall
STG::GESkeleton::Mesh::Update
          (Mesh *this,int param_1,code *param_2,undefined4 param_4,undefined4 param_5,
          undefined1 param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  Animation *pAVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  MMatrix *this_00;
  MMatrix *pMVar8;
  int iVar9;
  int local_40;
  int local_3c;
  
  pAVar4 = *(Animation **)this;
  Animation::Update(pAVar4,param_4,param_5,param_6,param_7);
  local_40 = *(int *)(this + 0x1c);
  local_3c = *(int *)(this + 0x20);
  pMVar8 = *(MMatrix **)(this + 0x24);
  iVar5 = *(int *)(this + 0x14);
  iVar7 = *(int *)(this + 0x18);
  piVar2 = *(int **)(this + 8);
  if (*(int *)(this + 0xc) * 0x14 != 0) {
    do {
      piVar3 = piVar2 + 5;
      iVar9 = piVar2[3];
      if (piVar2[1] != 0) {
        uVar6 = 0;
        this_00 = pMVar8;
        do {
          iVar1 = uVar6 * 4;
          uVar6 = uVar6 + 1;
          MMatrix::operator=(this_00,(MMatrix *)
                                     (*(int *)(pAVar4 + 0x20) + *(int *)(*piVar2 + iVar1) * 0x40));
          this_00 = this_00 + 0x40;
        } while (uVar6 < (uint)piVar2[1]);
      }
      (*param_2)(param_1,iVar5,pMVar8,iVar7,local_40,local_3c,iVar9);
      iVar9 = iVar9 * 0x10;
      param_1 = param_1 + iVar9;
      iVar5 = iVar5 + iVar9;
      iVar7 = iVar7 + iVar9;
      local_40 = local_40 + iVar9;
      local_3c = local_3c + iVar9;
      piVar2 = piVar3;
    } while (piVar3 != (int *)(*(int *)(this + 0xc) * 0x14 + *(int *)(this + 8)));
  }
  return;
}


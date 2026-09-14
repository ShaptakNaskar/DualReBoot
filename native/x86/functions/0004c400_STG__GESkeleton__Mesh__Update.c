/* 0004c400 | STG::GESkeleton::Mesh::Update */

/* STG::GESkeleton::Mesh::Update(float*, void (*)(float*, float const*, float const*, float const*,
   float const*, float const*, unsigned long), STG::GEAnimationTimeData::EDriver,
   STG::GEAnimationTimeData const&, bool, STG::UTimeValue<unsigned long long, 1ul> const&) */

void __thiscall
STG::GESkeleton::Mesh::Update
          (Mesh *this,int param_1,code *param_2,undefined4 param_4,undefined4 param_5,
          undefined1 param_6,undefined4 param_7)

{
  int iVar1;
  Animation *pAVar2;
  MMatrix *pMVar3;
  int iVar4;
  MMatrix *this_00;
  uint uVar5;
  int *piVar6;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  FUN_0002e044();
  pAVar2 = *(Animation **)this;
  Animation::Update(pAVar2,param_4,param_5,param_6,param_7);
  local_34 = *(int *)(this + 0x14);
  local_30 = *(int *)(this + 0x18);
  local_28 = *(int *)(this + 0x20);
  local_2c = *(int *)(this + 0x1c);
  pMVar3 = *(MMatrix **)(this + 0x24);
  piVar6 = *(int **)(this + 8);
  if ((*(int *)(this + 0xc) * 5 & 0x3fffffffU) != 0) {
    local_38 = param_1;
    do {
      iVar4 = piVar6[3];
      if (piVar6[1] != 0) {
        uVar5 = 0;
        this_00 = pMVar3;
        do {
          iVar1 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          MMatrix::operator=(this_00,(MMatrix *)
                                     (*(int *)(*piVar6 + iVar1) * 0x40 + *(int *)(pAVar2 + 0x20)));
          this_00 = this_00 + 0x40;
        } while (uVar5 < (uint)piVar6[1]);
      }
      (*param_2)(local_38,local_34,pMVar3,local_30,local_2c,local_28,iVar4);
      iVar4 = iVar4 * 0x10;
      local_34 = local_34 + iVar4;
      local_38 = local_38 + iVar4;
      local_30 = local_30 + iVar4;
      local_2c = local_2c + iVar4;
      local_28 = local_28 + iVar4;
      piVar6 = piVar6 + 5;
    } while (piVar6 != (int *)(*(int *)(this + 8) + *(int *)(this + 0xc) * 0x14));
  }
  return;
}


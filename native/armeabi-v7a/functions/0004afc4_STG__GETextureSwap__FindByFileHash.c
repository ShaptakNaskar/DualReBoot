/* 0004afc4 | STG::GETextureSwap::FindByFileHash */

/* STG::GETextureSwap::FindByFileHash(STG::FFileHash const&, unsigned long&, bool&, bool&,
   STG::GETimeOfDay&, unsigned long&) const */

undefined4 __thiscall
STG::GETextureSwap::FindByFileHash
          (GETextureSwap *this,FFileHash *param_1,ulong *param_2,bool *param_3,bool *param_4,
          GETimeOfDay *param_5,ulong *param_6)

{
  GETextureSwap GVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*(ulong *)(this + 0x1c) == 0) {
    return 0;
  }
  if (*(int *)(*(int *)(this + 0x28) + 0x1c) == *(int *)(param_1 + 0x1c)) {
    uVar3 = 0;
    uVar4 = uVar3;
    uVar5 = uVar3;
  }
  else {
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      if (uVar5 == *(ulong *)(this + 0x1c)) {
        return 0;
      }
    } while (*(int *)(*(int *)(this + 0x28) + uVar5 * 0x20 + 0x1c) != *(int *)(param_1 + 0x1c));
    uVar4 = uVar5 * 8;
    uVar3 = uVar5 * 4;
  }
  GVar1 = this[0x20];
  iVar2 = *(int *)(this + 0x2c);
  *param_2 = uVar5;
  *param_3 = (bool)GVar1;
  *param_4 = (bool)this[0x21];
  GETimeOfDay::operator=(param_5,(GETimeOfDay *)(iVar2 + uVar4));
  *param_6 = *(ulong *)(*(int *)(this + 0x30) + uVar3);
  return 1;
}


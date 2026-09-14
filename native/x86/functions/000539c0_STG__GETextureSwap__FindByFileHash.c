/* 000539c0 | STG::GETextureSwap::FindByFileHash */

/* STG::GETextureSwap::FindByFileHash(STG::FFileHash const&, unsigned long&, bool&, bool&,
   STG::GETimeOfDay&, unsigned long&) const */

undefined4 __thiscall
STG::GETextureSwap::FindByFileHash
          (GETextureSwap *this,FFileHash *param_1,ulong *param_2,bool *param_3,bool *param_4,
          GETimeOfDay *param_5,ulong *param_6)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = FUN_0002e044();
  if (*(ulong *)(this + 0x1c) == 0) {
    return uVar2;
  }
  if (*(int *)(*(int *)(this + 0x28) + 0x1c) == *(int *)(param_1 + 0x1c)) {
    iVar6 = 0;
    iVar5 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    piVar4 = (int *)(*(int *)(this + 0x28) + 0x3c);
    do {
      uVar3 = uVar3 + 1;
      if (uVar3 == *(ulong *)(this + 0x1c)) {
        return 0;
      }
      iVar5 = *piVar4;
      piVar4 = piVar4 + 8;
    } while (iVar5 != *(int *)(param_1 + 0x1c));
    iVar5 = uVar3 * 8;
    iVar6 = uVar3 * 4;
  }
  *param_2 = uVar3;
  *param_3 = (bool)this[0x20];
  iVar1 = *(int *)(this + 0x2c);
  *param_4 = (bool)this[0x21];
  GETimeOfDay::operator=(param_5,(GETimeOfDay *)(iVar1 + iVar5));
  *param_6 = *(ulong *)(*(int *)(this + 0x30) + iVar6);
  return 1;
}


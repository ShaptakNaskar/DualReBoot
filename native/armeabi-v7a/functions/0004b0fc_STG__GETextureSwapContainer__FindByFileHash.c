/* 0004b0fc | STG::GETextureSwapContainer::FindByFileHash */

/* STG::GETextureSwapContainer::FindByFileHash(STG::FFileHash const&, unsigned long&, unsigned
   long&, bool&, bool&, STG::GETimeOfDay&, unsigned long&) const */

undefined4 __thiscall
STG::GETextureSwapContainer::FindByFileHash
          (GETextureSwapContainer *this,FFileHash *param_1,ulong *param_2,ulong *param_3,
          bool *param_4,bool *param_5,GETimeOfDay *param_6,ulong *param_7)

{
  GETextureSwap *this_00;
  int iVar1;
  int iVar2;
  ulong uVar3;
  bool local_3a;
  bool local_39;
  ulong local_38;
  ulong local_34;
  GETimeOfDay aGStack_30 [12];
  
  if (*(int *)(this + 8) != 0) {
    iVar2 = 0;
    uVar3 = 0;
    do {
      GETimeOfDay::GETimeOfDay(aGStack_30);
      this_00 = (GETextureSwap *)(*(int *)(this + 4) + iVar2);
      iVar2 = iVar2 + 0x34;
      iVar1 = GETextureSwap::FindByFileHash
                        (this_00,param_1,&local_38,&local_3a,&local_39,aGStack_30,&local_34);
      if (iVar1 != 0) {
        *param_2 = uVar3;
        *param_3 = local_38;
        *param_4 = local_3a;
        *param_5 = local_39;
        GETimeOfDay::operator=(param_6,aGStack_30);
        *param_7 = local_34;
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(this + 8));
  }
  return 0;
}


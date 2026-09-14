/* 00053b40 | STG::GETextureSwapContainer::FindByFileHash */

/* STG::GETextureSwapContainer::FindByFileHash(STG::FFileHash const&, unsigned long&, unsigned
   long&, bool&, bool&, STG::GETimeOfDay&, unsigned long&) const */

undefined4 __thiscall
STG::GETextureSwapContainer::FindByFileHash
          (GETextureSwapContainer *this,FFileHash *param_1,ulong *param_2,ulong *param_3,
          bool *param_4,bool *param_5,GETimeOfDay *param_6,ulong *param_7)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  bool local_2e;
  bool local_2d;
  ulong local_2c;
  ulong local_28;
  GETimeOfDay local_24 [16];
  undefined4 uStack_14;
  
  uStack_14 = 0x53b4b;
  uVar2 = FUN_0002e044();
  if (*(int *)(this + 8) != 0) {
    uVar3 = 0;
    while( true ) {
      GETimeOfDay::GETimeOfDay(local_24);
      cVar1 = GETextureSwap::FindByFileHash
                        ((GETextureSwap *)(uVar3 * 0x34 + *(int *)(this + 4)),param_1,&local_2c,
                         &local_2e,&local_2d,local_24,&local_28);
      if (cVar1 != '\0') break;
      uVar3 = uVar3 + 1;
      if (*(uint *)(this + 8) <= uVar3) {
        return 0;
      }
    }
    *param_2 = uVar3;
    *param_3 = local_2c;
    *param_4 = local_2e;
    *param_5 = local_2d;
    GETimeOfDay::operator=(param_6,local_24);
    *param_7 = local_28;
    uVar2 = 1;
  }
  return uVar2;
}


/* 0005c5ec | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GECameraSet&) */

void STG::USerialize::Load(FFileBase *param_1,GECameraSet *param_2)

{
  int *piVar1;
  uint uVar2;
  ulong local_44;
  ulong local_40;
  uchar auStack_3c [4];
  int local_38;
  _String_base<char,std::allocator<char>> a_Stack_34 [24];
  int local_1c;
  
  piVar1 = *(int **)(DAT_0005c70c + 0x5c604);
  local_1c = *piVar1;
  FFileBase::Read(param_1,auStack_3c,4);
  UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_38);
  Load<char,int>(param_1,(UStringBase *)&local_38);
  FFileBase::Read(param_1,(uchar *)&local_44,4);
  FFileBase::Read(param_1,(uchar *)&local_40,4);
  FFileBase::Read(param_1,(uchar *)(param_2 + 0x244),4);
  GECameraSet::Initialize(param_2,(UStringBase *)&local_38,local_44,local_40);
  if (*(int *)(param_2 + 0x234) != 0) {
    uVar2 = 0;
    do {
      FFileBase::Read(param_1,(uchar *)(*(int *)(param_2 + 0x230) + uVar2 * 4),4);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_2 + 0x234));
  }
  if (*(int *)(param_2 + 0x240) != 0) {
    uVar2 = 0;
    do {
      FFileBase::Read(param_1,(uchar *)(*(int *)(param_2 + 0x238) + uVar2 * 4),4);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_2 + 0x240));
  }
  local_38 = *(int *)(DAT_0005c710 + 0x5c6e8) + 8;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_34);
  if (local_1c == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


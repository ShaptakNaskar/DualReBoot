/* 00057db8 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GECameraSet&) */

void STG::USerialize::Load(FFileBase *param_1,GECameraSet *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  ulong uStack_44;
  ulong uStack_40;
  uchar auStack_3c [4];
  int local_38;
  _String_base<char,std::allocator<char>> a_Stack_34 [24];
  int local_1c;
  
  piVar2 = *(int **)(DAT_00057ed4 + 0x57dd8);
  local_1c = *piVar2;
  FFileBase::Read(param_1,auStack_3c,4);
  UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_38);
  Load<char,int>(param_1,(UStringBase *)&local_38);
  FFileBase::Read(param_1,(uchar *)&uStack_44,4);
  FFileBase::Read(param_1,(uchar *)&uStack_40,4);
  FFileBase::Read(param_1,(uchar *)(param_2 + 0x244),4);
  GECameraSet::Initialize(param_2,(UStringBase *)&local_38,uStack_44,uStack_40);
  if (*(int *)(param_2 + 0x234) != 0) {
    uVar3 = 0;
    do {
      iVar1 = uVar3 * 4;
      uVar3 = uVar3 + 1;
      FFileBase::Read(param_1,(uchar *)(*(int *)(param_2 + 0x230) + iVar1),4);
    } while (uVar3 < *(uint *)(param_2 + 0x234));
  }
  if (*(int *)(param_2 + 0x240) != 0) {
    uVar3 = 0;
    do {
      iVar1 = uVar3 * 4;
      uVar3 = uVar3 + 1;
      FFileBase::Read(param_1,(uchar *)(*(int *)(param_2 + 0x238) + iVar1),4);
    } while (uVar3 < *(uint *)(param_2 + 0x240));
  }
  local_38 = *(int *)(DAT_00057ed8 + 0x57eb0) + 8;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_34);
  if (local_1c == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


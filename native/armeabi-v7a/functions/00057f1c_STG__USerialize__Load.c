/* 00057f1c | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GEFont&) */

void STG::USerialize::Load(FFileBase *param_1,GEFont *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ushort uVar3;
  URectangle *pUVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  uint in_fpscr;
  float fVar12;
  bool local_95;
  ushort local_94 [2];
  ushort local_90;
  short local_8e;
  short local_8c;
  short local_8a;
  short local_88;
  ushort local_86;
  float local_84;
  ulong local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  URectangle local_58 [16];
  int local_48;
  _String_base<char,std::allocator<char>> a_Stack_44 [16];
  int local_34;
  int local_30;
  int local_2c;
  
  piVar9 = *(int **)(DAT_00058308 + 0x57f3c);
  local_2c = *piVar9;
  FFileBase::Read(param_1,(uchar *)&local_6c,4);
  uVar1 = local_6c;
  if (local_6c < 5) {
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_48);
    Load<char,int>(param_1,(UStringBase *)&local_48);
    if (local_30 != local_34) {
      UStringBase<char,int>::operator=
                ((UStringBase<char,int> *)(param_2 + 0x30),(UStringBase *)&local_48);
      uVar2 = UStringBaseHash_Internal
                        (*(uchar **)(param_2 + 0x48),
                         *(int *)(param_2 + 0x44) - (int)*(uchar **)(param_2 + 0x48));
      *(undefined4 *)(param_2 + 0x4c) = uVar2;
    }
    local_48 = *(int *)(DAT_0005830c + 0x58290) + 8;
    std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_44);
    FFileBase::Read(param_1,(uchar *)&local_84,4);
    FFileBase::Read(param_1,(uchar *)local_94,2);
    local_95 = false;
    if (2 < uVar1) goto LAB_00057f88;
    local_80 = 0;
    if (uVar1 != 2) {
      GEFont::Allocate(param_2,local_94[0],local_84,0,false);
      goto joined_r0x000582ec;
    }
  }
  else {
    Load(param_1,(FFileHash *)(param_2 + 0x30));
    FFileBase::Read(param_1,(uchar *)&local_84,4);
    FFileBase::Read(param_1,(uchar *)local_94,2);
LAB_00057f88:
    local_95 = false;
    FFileBase::Read(param_1,&local_95,1);
  }
  local_80 = 0;
  FFileBase::Read(param_1,(uchar *)&local_80,4);
  GEFont::Allocate(param_2,local_94[0],local_84,local_80,local_95);
joined_r0x000582ec:
  if (local_80 != 0) {
    FFileBase::Read(param_1,*(uchar **)(param_2 + 0x360),*(ulong *)(param_2 + 0x364));
  }
  if (local_94[0] != 0) {
    uVar5 = 0;
    do {
      iVar6 = *(int *)(param_2 + 0x58) + uVar5 * 0x24;
      if (uVar1 < 4) {
        FFileBase::Read(param_1,(uchar *)&local_86,2);
        FFileBase::Read(param_1,(uchar *)&local_7c,4);
        FFileBase::Read(param_1,(uchar *)&local_78,4);
        FFileBase::Read(param_1,(uchar *)&local_74,4);
        FFileBase::Read(param_1,(uchar *)&local_70,4);
        FFileBase::Read(param_1,(uchar *)&local_8e,1);
        FFileBase::Read(param_1,(uchar *)&local_8c,1);
        FFileBase::Read(param_1,(uchar *)&local_8a,1);
        FFileBase::Read(param_1,(uchar *)&local_88,1);
        FFileBase::Read(param_1,(uchar *)&local_6c,1);
        FFileBase::Read(param_1,(uchar *)(iVar6 + 0x1c),4);
        pUVar4 = local_58;
        lVar7 = (long)(char)local_8e;
        fVar12 = (float)VectorSignedToFloat((int)(char)local_6c,(byte)(in_fpscr >> 0x16) & 3);
        lVar11 = (long)(char)local_8c;
        lVar10 = (long)(char)local_8a;
        lVar8 = (long)(char)local_88;
        uVar3 = local_86;
      }
      else {
        FFileBase::Read(param_1,(uchar *)&local_90,2);
        FFileBase::Read(param_1,(uchar *)&local_7c,4);
        FFileBase::Read(param_1,(uchar *)&local_78,4);
        FFileBase::Read(param_1,(uchar *)&local_74,4);
        FFileBase::Read(param_1,(uchar *)&local_70,4);
        FFileBase::Read(param_1,(uchar *)&local_8e,2);
        FFileBase::Read(param_1,(uchar *)&local_8c,2);
        FFileBase::Read(param_1,(uchar *)&local_8a,2);
        FFileBase::Read(param_1,(uchar *)&local_88,2);
        FFileBase::Read(param_1,(uchar *)&local_86,2);
        FFileBase::Read(param_1,(uchar *)(iVar6 + 0x1c),4);
        fVar12 = (float)VectorSignedToFloat((int)(short)local_86,(byte)(in_fpscr >> 0x16) & 3);
        local_68 = local_7c;
        pUVar4 = (URectangle *)&local_68;
        lVar7 = (long)local_8e;
        lVar11 = (long)local_8c;
        local_64 = local_78;
        lVar10 = (long)local_8a;
        lVar8 = (long)local_88;
        local_60 = local_74;
        local_5c = local_70;
        uVar3 = local_90;
      }
      GEFont::SetCharData(param_2,(ushort)uVar5,uVar3,pUVar4,lVar7,lVar11,lVar10,lVar8,fVar12);
      uVar5 = uVar5 + 1 & 0xffff;
    } while (uVar5 < local_94[0]);
  }
  GEFont::Finalize(param_2);
  if (local_2c == *piVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


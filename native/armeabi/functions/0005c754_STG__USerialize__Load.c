/* 0005c754 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GEFont&) */

void STG::USerialize::Load(FFileBase *param_1,GEFont *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  uchar local_8d;
  ushort local_8c [2];
  ushort local_88;
  short local_86;
  short local_84;
  short local_82;
  short local_80;
  ushort local_7e;
  ulong local_7c;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  _String_base<char,std::allocator<char>> a_Stack_3c [16];
  int local_2c;
  int local_28;
  int local_24;
  
  piVar6 = *(int **)(DAT_0005cb68 + 0x5c76c);
  local_24 = *piVar6;
  FFileBase::Read(param_1,(uchar *)&local_64,4);
  uVar1 = local_64;
  if (local_64 < 5) {
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_40);
    Load<char,int>(param_1,(UStringBase *)&local_40);
    if (local_28 != local_2c) {
      UStringBase<char,int>::operator=
                ((UStringBase<char,int> *)(param_2 + 0x30),(UStringBase *)&local_40);
      uVar2 = UStringBaseHash_Internal
                        (*(uchar **)(param_2 + 0x48),
                         *(int *)(param_2 + 0x44) - (int)*(uchar **)(param_2 + 0x48));
      *(undefined4 *)(param_2 + 0x4c) = uVar2;
    }
    local_40 = *(int *)(DAT_0005cb6c + 0x5caec) + 8;
    std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_3c);
    FFileBase::Read(param_1,(uchar *)&local_7c,4);
    fVar9 = (float)FFileBase::Read(param_1,(uchar *)local_8c,2);
    local_8d = '\0';
    if (2 < uVar1) goto LAB_0005c7c0;
    local_78 = 0;
    if (uVar1 != 2) {
      GEFont::Allocate(param_2,local_8c[0],fVar9,local_7c,false);
      goto joined_r0x0005cb4c;
    }
  }
  else {
    Load(param_1,(FFileHash *)(param_2 + 0x30));
    FFileBase::Read(param_1,(uchar *)&local_7c,4);
    FFileBase::Read(param_1,(uchar *)local_8c,2);
LAB_0005c7c0:
    local_8d = '\0';
    FFileBase::Read(param_1,&local_8d,1);
  }
  local_78 = 0;
  fVar9 = (float)FFileBase::Read(param_1,(uchar *)&local_78,4);
  GEFont::Allocate(param_2,local_8c[0],fVar9,local_7c,SUB41(local_78,0));
joined_r0x0005cb4c:
  if (local_78 != 0) {
    FFileBase::Read(param_1,*(uchar **)(param_2 + 0x360),*(ulong *)(param_2 + 0x364));
  }
  if (local_8c[0] != 0) {
    uVar5 = 0;
    do {
      while( true ) {
        iVar7 = uVar5 * 0x24 + *(int *)(param_2 + 0x58);
        if (3 < uVar1) break;
        FFileBase::Read(param_1,(uchar *)&local_7e,2);
        FFileBase::Read(param_1,(uchar *)&local_74,4);
        FFileBase::Read(param_1,(uchar *)&local_70,4);
        FFileBase::Read(param_1,(uchar *)&local_6c,4);
        FFileBase::Read(param_1,(uchar *)&local_68,4);
        FFileBase::Read(param_1,(uchar *)&local_86,1);
        FFileBase::Read(param_1,(uchar *)&local_84,1);
        FFileBase::Read(param_1,(uchar *)&local_82,1);
        FFileBase::Read(param_1,(uchar *)&local_80,1);
        FFileBase::Read(param_1,(uchar *)&local_64,1);
        FFileBase::Read(param_1,(uchar *)(iVar7 + 0x1c),4);
        iVar7 = (int)(char)local_84;
        iVar3 = (int)(char)local_82;
        local_50 = local_74;
        iVar4 = (int)(char)local_80;
        iVar8 = (int)(char)local_86;
        local_4c = local_70;
        local_48 = local_6c;
        local_44 = local_68;
        fVar9 = (float)__floatsisf((int)(char)local_64);
        GEFont::SetCharData(param_2,(ushort)uVar5,local_7e,(URectangle *)&local_50,iVar8,iVar7,iVar3
                            ,iVar4,fVar9);
        uVar5 = uVar5 + 1 & 0xffff;
        if (local_8c[0] <= uVar5) goto LAB_0005ca78;
      }
      FFileBase::Read(param_1,(uchar *)&local_88,2);
      FFileBase::Read(param_1,(uchar *)&local_74,4);
      FFileBase::Read(param_1,(uchar *)&local_70,4);
      FFileBase::Read(param_1,(uchar *)&local_6c,4);
      FFileBase::Read(param_1,(uchar *)&local_68,4);
      FFileBase::Read(param_1,(uchar *)&local_86,2);
      FFileBase::Read(param_1,(uchar *)&local_84,2);
      FFileBase::Read(param_1,(uchar *)&local_82,2);
      FFileBase::Read(param_1,(uchar *)&local_80,2);
      FFileBase::Read(param_1,(uchar *)&local_7e,2);
      FFileBase::Read(param_1,(uchar *)(iVar7 + 0x1c),4);
      iVar7 = (int)local_84;
      iVar3 = (int)local_82;
      local_60 = local_74;
      iVar4 = (int)local_80;
      iVar8 = (int)local_86;
      local_5c = local_70;
      local_58 = local_6c;
      local_54 = local_68;
      fVar9 = (float)__floatsisf((int)(short)local_7e);
      GEFont::SetCharData(param_2,(ushort)uVar5,local_88,(URectangle *)&local_60,iVar8,iVar7,iVar3,
                          iVar4,fVar9);
      uVar5 = uVar5 + 1 & 0xffff;
    } while (uVar5 < local_8c[0]);
  }
LAB_0005ca78:
  GEFont::Finalize(param_2);
  if (local_24 == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


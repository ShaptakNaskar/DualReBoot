/* 00062a50 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GEFont&) */

void STG::USerialize::Load(FFileBase *param_1,GEFont *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  int unaff_EBX;
  URectangle *pUVar10;
  bool local_81;
  ushort local_80 [2];
  ushort local_7c;
  short local_7a;
  short local_78;
  short local_76;
  short local_74;
  ushort local_72;
  ulong local_70 [2];
  float local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  URectangle local_40 [16];
  UStringBase<char,int> local_30 [20];
  int local_1c;
  int local_18;
  int local_14;
  
  local_14 = 0x62a5b;
  FUN_0002e044();
  local_14 = **(int **)(unaff_EBX + 0x393dd);
  FFileBase::Read(param_1,(uchar *)&local_54,4);
  uVar2 = local_54;
  if (local_54 < 5) {
    UStringBase<char,int>::UStringBase(local_30);
    Load<char,int>(param_1,(UStringBase *)local_30);
    if (local_18 != local_1c) {
      UStringBase<char,int>::operator=
                ((UStringBase<char,int> *)(param_2 + 0x30),(UStringBase *)local_30);
      uVar6 = UStringBaseHash_Internal
                        (*(uchar **)(param_2 + 0x48),
                         *(int *)(param_2 + 0x44) - (int)*(uchar **)(param_2 + 0x48));
      *(undefined4 *)(param_2 + 0x4c) = uVar6;
    }
    UStringBase<char,int>::~UStringBase(local_30);
    FFileBase::Read(param_1,(uchar *)&local_68,4);
    FFileBase::Read(param_1,(uchar *)local_80,2);
    local_81 = false;
    if (2 < uVar2) goto LAB_00062af5;
    local_70[0] = 0;
    if (uVar2 != 2) goto LAB_00062b36;
  }
  else {
    Load(param_1,(FFileHash *)(param_2 + 0x30));
    FFileBase::Read(param_1,(uchar *)&local_68,4);
    FFileBase::Read(param_1,(uchar *)local_80,2);
LAB_00062af5:
    local_81 = false;
    FFileBase::Read(param_1,&local_81,1);
  }
  local_70[0] = 0;
  FFileBase::Read(param_1,(uchar *)local_70,4);
LAB_00062b36:
  GEFont::Allocate(param_2,local_80[0],local_68,local_70[0],local_81);
  if (local_70[0] != 0) {
    FFileBase::Read(param_1,*(uchar **)(param_2 + 0x360),*(ulong *)(param_2 + 0x364));
  }
  if (local_80[0] != 0) {
    uVar7 = 0;
    do {
      iVar8 = (uint)uVar7 * 0x24 + *(int *)(param_2 + 0x58);
      if (uVar2 < 4) {
        FFileBase::Read(param_1,(uchar *)&local_72,2);
        FFileBase::Read(param_1,(uchar *)&local_64,4);
        FFileBase::Read(param_1,(uchar *)&local_60,4);
        FFileBase::Read(param_1,(uchar *)&local_5c,4);
        FFileBase::Read(param_1,(uchar *)&local_58,4);
        FFileBase::Read(param_1,(uchar *)&local_7a,1);
        FFileBase::Read(param_1,(uchar *)&local_78,1);
        FFileBase::Read(param_1,(uchar *)&local_76,1);
        FFileBase::Read(param_1,(uchar *)&local_74,1);
        FFileBase::Read(param_1,(uchar *)&local_54,1);
        FFileBase::Read(param_1,(uchar *)(iVar8 + 0x1c),4);
        iVar8 = (int)(char)local_54;
        iVar3 = (int)(char)local_76;
        iVar4 = (int)(char)local_78;
        iVar5 = (int)(char)local_7a;
        iVar9 = (int)(char)local_74;
        pUVar10 = local_40;
        uVar1 = local_72;
      }
      else {
        FFileBase::Read(param_1,(uchar *)&local_7c,2);
        FFileBase::Read(param_1,(uchar *)&local_64,4);
        FFileBase::Read(param_1,(uchar *)&local_60,4);
        FFileBase::Read(param_1,(uchar *)&local_5c,4);
        FFileBase::Read(param_1,(uchar *)&local_58,4);
        FFileBase::Read(param_1,(uchar *)&local_7a,2);
        FFileBase::Read(param_1,(uchar *)&local_78,2);
        FFileBase::Read(param_1,(uchar *)&local_76,2);
        FFileBase::Read(param_1,(uchar *)&local_74,2);
        FFileBase::Read(param_1,(uchar *)&local_72,2);
        FFileBase::Read(param_1,(uchar *)(iVar8 + 0x1c),4);
        iVar8 = (int)(short)local_72;
        iVar3 = (int)local_76;
        iVar4 = (int)local_78;
        iVar5 = (int)local_7a;
        local_50 = local_64;
        local_4c = local_60;
        iVar9 = (int)local_74;
        local_48 = local_5c;
        local_44 = local_58;
        pUVar10 = (URectangle *)&local_50;
        uVar1 = local_7c;
      }
      GEFont::SetCharData(param_2,uVar7,uVar1,pUVar10,iVar5,iVar4,iVar3,iVar9,(float)iVar8);
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_80[0]);
  }
  GEFont::Finalize(param_2);
  if (local_14 != **(int **)(unaff_EBX + 0x393dd)) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e000();
  }
  return;
}


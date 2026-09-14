/* 00052cdc | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::UPreference_Theme const&) */

void STG::USerialize::Save(FFileBase *param_1,UPreference_Theme *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uchar local_34 [4];
  uchar local_30 [12];
  
  builtin_memcpy(local_30,"PREFTHEM",8);
  FFileBase::Write(param_1,local_30,8);
  iVar6 = 0;
  uVar8 = 0;
  FFileBase::Write(param_1,local_34,4);
  Save<char,int>(param_1,(UStringBase *)(param_2 + 4));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x20));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x3c));
  (**(code **)(*(int *)param_2 + 0x18))(param_2);
  FFileBase::Write(param_1,local_34,4);
  iVar2 = (**(code **)(*(int *)param_2 + 0x18))(param_2);
  if (iVar2 != 0) {
    do {
      iVar5 = *(int *)(param_2 + 0x7c) + iVar6;
      iVar7 = *(int *)(iVar5 + 0x14);
      iVar2 = *(int *)(iVar5 + 0x18);
      FFileBase::Write(param_1,local_34,4);
      if (iVar7 != iVar2) {
        iVar3 = *(int *)(iVar5 + 0x18);
        if (*(int *)(iVar5 + 0x14) == iVar3) {
LAB_00052ec4:
                    /* WARNING: Subroutine does not return */
          std::__stl_throw_out_of_range((char *)(DAT_00052edc + 0x52ed0));
        }
        uVar4 = 0;
        while( true ) {
          puVar1 = (undefined1 *)(iVar3 + uVar4);
          uVar4 = uVar4 + 1;
          local_30[0] = *puVar1;
          FFileBase::Write(param_1,local_30,1);
          if (iVar7 - iVar2 == uVar4) break;
          iVar3 = *(int *)(iVar5 + 0x18);
          if ((uint)(*(int *)(iVar5 + 0x14) - iVar3) <= uVar4) goto LAB_00052ec4;
        }
      }
      iVar5 = *(int *)(param_2 + 0x7c) + iVar6;
      iVar7 = *(int *)(iVar5 + 0x30);
      iVar2 = *(int *)(iVar5 + 0x34);
      FFileBase::Write(param_1,local_34,4);
      if (iVar7 != iVar2) {
        iVar3 = *(int *)(iVar5 + 0x34);
        if (iVar3 == *(int *)(iVar5 + 0x30)) {
LAB_00052ed0:
                    /* WARNING: Subroutine does not return */
          std::__stl_throw_out_of_range((char *)((int)&DAT_00052edc + DAT_00052ee0));
        }
        uVar4 = 0;
        while( true ) {
          puVar1 = (undefined1 *)(iVar3 + uVar4);
          uVar4 = uVar4 + 1;
          local_30[0] = *puVar1;
          FFileBase::Write(param_1,local_30,1);
          if (iVar7 - iVar2 == uVar4) break;
          iVar3 = *(int *)(iVar5 + 0x34);
          if ((uint)(*(int *)(iVar5 + 0x30) - iVar3) <= uVar4) goto LAB_00052ed0;
        }
      }
      uVar8 = uVar8 + 1;
      iVar6 = iVar6 + 0x38;
      uVar4 = (**(code **)(*(int *)param_2 + 0x18))(param_2);
    } while (uVar8 < uVar4);
  }
  return;
}


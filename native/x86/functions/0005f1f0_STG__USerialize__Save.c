/* 0005f1f0 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::UPreference_Theme const&) */

void STG::USerialize::Save(FFileBase *param_1,UPreference_Theme *param_2)

{
  int iVar1;
  uint uVar2;
  int unaff_EBX;
  uint uVar3;
  int iVar4;
  int local_34;
  uint local_30;
  uint local_28;
  uchar local_24 [16];
  undefined4 uStack_14;
  
  uStack_14 = 0x5f1f9;
  FUN_0002e044();
  builtin_memcpy(local_24,"PREFTHEM",8);
  FFileBase::Write(param_1,local_24,8);
  local_28 = 1;
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  uVar2 = *(int *)(param_2 + 0x18) - *(int *)(param_2 + 0x1c);
  local_28 = uVar2;
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  if (uVar2 == 0) {
LAB_0005f2ed:
    uVar2 = *(int *)(param_2 + 0x34) - *(int *)(param_2 + 0x38);
    local_28 = uVar2;
    FFileBase::Write(param_1,(uchar *)&local_28,4);
    if (uVar2 == 0) {
LAB_0005f38d:
      uVar2 = *(int *)(param_2 + 0x50) - *(int *)(param_2 + 0x54);
      local_28 = uVar2;
      FFileBase::Write(param_1,(uchar *)&local_28,4);
      if (uVar2 == 0) {
LAB_0005f42d:
        local_28 = (**(code **)(*(int *)param_2 + 0x18))(param_2);
        FFileBase::Write(param_1,(uchar *)&local_28,4);
        local_34 = 0;
        local_30 = 0;
        do {
          uVar2 = (**(code **)(*(int *)param_2 + 0x18))(param_2);
          if (uVar2 <= local_30) {
            return;
          }
          iVar4 = local_34 + *(int *)(param_2 + 0x7c);
          uVar2 = *(int *)(iVar4 + 0x14) - *(int *)(iVar4 + 0x18);
          local_28 = uVar2;
          FFileBase::Write(param_1,(uchar *)&local_28,4);
          if (uVar2 != 0) {
            iVar1 = *(int *)(iVar4 + 0x18);
            if (*(int *)(iVar4 + 0x14) == iVar1) goto LAB_0005f5ad;
            uVar3 = 0;
            while( true ) {
              local_24[0] = *(undefined1 *)(iVar1 + uVar3);
              uVar3 = uVar3 + 1;
              FFileBase::Write(param_1,local_24,1);
              if (uVar2 == uVar3) break;
              iVar1 = *(int *)(iVar4 + 0x18);
              if ((uint)(*(int *)(iVar4 + 0x14) - iVar1) <= uVar3) goto LAB_0005f5ad;
            }
          }
          iVar4 = local_34 + *(int *)(param_2 + 0x7c);
          uVar2 = *(int *)(iVar4 + 0x30) - *(int *)(iVar4 + 0x34);
          local_28 = uVar2;
          FFileBase::Write(param_1,(uchar *)&local_28,4);
          if (uVar2 != 0) {
            iVar1 = *(int *)(iVar4 + 0x34);
            if (*(int *)(iVar4 + 0x30) == iVar1) goto LAB_0005f5ad;
            uVar3 = 0;
            while( true ) {
              local_24[0] = *(undefined1 *)(iVar1 + uVar3);
              uVar3 = uVar3 + 1;
              FFileBase::Write(param_1,local_24,1);
              if (uVar2 == uVar3) break;
              iVar1 = *(int *)(iVar4 + 0x34);
              if ((uint)(*(int *)(iVar4 + 0x30) - iVar1) <= uVar3) goto LAB_0005f5ad;
            }
          }
          local_30 = local_30 + 1;
          local_34 = local_34 + 0x38;
        } while( true );
      }
      iVar4 = *(int *)(param_2 + 0x54);
      if (*(int *)(param_2 + 0x50) != iVar4) {
        uVar3 = 0;
        do {
          local_24[0] = *(undefined1 *)(iVar4 + uVar3);
          uVar3 = uVar3 + 1;
          FFileBase::Write(param_1,local_24,1);
          if (uVar2 == uVar3) goto LAB_0005f42d;
          iVar4 = *(int *)(param_2 + 0x54);
        } while (uVar3 < (uint)(*(int *)(param_2 + 0x50) - iVar4));
      }
    }
    else {
      iVar4 = *(int *)(param_2 + 0x38);
      if (*(int *)(param_2 + 0x34) != iVar4) {
        uVar3 = 0;
        do {
          local_24[0] = *(undefined1 *)(iVar4 + uVar3);
          uVar3 = uVar3 + 1;
          FFileBase::Write(param_1,local_24,1);
          if (uVar2 == uVar3) goto LAB_0005f38d;
          iVar4 = *(int *)(param_2 + 0x38);
        } while (uVar3 < (uint)(*(int *)(param_2 + 0x34) - iVar4));
      }
    }
  }
  else {
    iVar4 = *(int *)(param_2 + 0x1c);
    if (*(int *)(param_2 + 0x18) != iVar4) {
      uVar3 = 0;
      do {
        local_24[0] = *(undefined1 *)(iVar4 + uVar3);
        uVar3 = uVar3 + 1;
        FFileBase::Write(param_1,local_24,1);
        if (uVar2 == uVar3) goto LAB_0005f2ed;
        iVar4 = *(int *)(param_2 + 0x1c);
      } while (uVar3 < (uint)(*(int *)(param_2 + 0x18) - iVar4));
    }
  }
LAB_0005f5ad:
                    /* WARNING: Subroutine does not return */
  std::__stl_throw_out_of_range((char *)((int)DWORD_ARRAY_00027b38 + unaff_EBX + 0x5db));
}


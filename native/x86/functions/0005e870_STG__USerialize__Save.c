/* 0005e870 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::UPreference_TextureFont const&) */

void STG::USerialize::Save(FFileBase *param_1,UPreference_TextureFont *param_2)

{
  uint uVar1;
  int iVar2;
  int unaff_EBX;
  uint uVar3;
  UPreference_TextureFont local_29;
  uint local_28;
  uchar local_24 [16];
  undefined4 uStack_14;
  
  uStack_14 = 0x5e879;
  FUN_0002e044();
  builtin_memcpy(local_24,"PREFTFNT",8);
  FFileBase::Write(param_1,local_24,8);
  local_28 = 1;
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  uVar1 = *(int *)(param_2 + 0x18) - *(int *)(param_2 + 0x1c);
  local_28 = uVar1;
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  if (uVar1 == 0) {
LAB_0005e96d:
    uVar1 = *(int *)(param_2 + 0x34) - *(int *)(param_2 + 0x38);
    local_28 = uVar1;
    FFileBase::Write(param_1,(uchar *)&local_28,4);
    if (uVar1 == 0) {
LAB_0005ea0d:
      uVar1 = *(int *)(param_2 + 0x50) - *(int *)(param_2 + 0x54);
      local_28 = uVar1;
      FFileBase::Write(param_1,(uchar *)&local_28,4);
      if (uVar1 == 0) {
LAB_0005eaad:
        local_28 = *(uint *)(param_2 + 0x88);
        FFileBase::Write(param_1,(uchar *)&local_28,4);
        local_29 = param_2[0x8c];
        FFileBase::Write(param_1,(uchar *)&local_29,1);
        return;
      }
      iVar2 = *(int *)(param_2 + 0x54);
      if (*(int *)(param_2 + 0x50) != iVar2) {
        uVar3 = 0;
        do {
          local_24[0] = *(undefined1 *)(iVar2 + uVar3);
          uVar3 = uVar3 + 1;
          FFileBase::Write(param_1,local_24,1);
          if (uVar1 == uVar3) goto LAB_0005eaad;
          iVar2 = *(int *)(param_2 + 0x54);
        } while (uVar3 < (uint)(*(int *)(param_2 + 0x50) - iVar2));
      }
    }
    else {
      iVar2 = *(int *)(param_2 + 0x38);
      if (*(int *)(param_2 + 0x34) != iVar2) {
        uVar3 = 0;
        do {
          local_24[0] = *(undefined1 *)(iVar2 + uVar3);
          uVar3 = uVar3 + 1;
          FFileBase::Write(param_1,local_24,1);
          if (uVar1 == uVar3) goto LAB_0005ea0d;
          iVar2 = *(int *)(param_2 + 0x38);
        } while (uVar3 < (uint)(*(int *)(param_2 + 0x34) - iVar2));
      }
    }
  }
  else {
    iVar2 = *(int *)(param_2 + 0x1c);
    if (*(int *)(param_2 + 0x18) != iVar2) {
      uVar3 = 0;
      do {
        local_24[0] = *(undefined1 *)(iVar2 + uVar3);
        uVar3 = uVar3 + 1;
        FFileBase::Write(param_1,local_24,1);
        if (uVar1 == uVar3) goto LAB_0005e96d;
        iVar2 = *(int *)(param_2 + 0x1c);
      } while (uVar3 < (uint)(*(int *)(param_2 + 0x18) - iVar2));
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__stl_throw_out_of_range((char *)((int)DWORD_ARRAY_00027b38 + unaff_EBX + 0xf5b));
}


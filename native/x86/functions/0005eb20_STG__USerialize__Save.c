/* 0005eb20 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::UPreference_TextureSwap const&) */

void STG::USerialize::Save(FFileBase *param_1,UPreference_TextureSwap *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBX;
  uint uVar4;
  int iVar5;
  uint local_34;
  int local_30;
  uint local_28;
  uchar local_24 [16];
  undefined4 uStack_14;
  
  uStack_14 = 0x5eb29;
  FUN_0002e044();
  builtin_memcpy(local_24,"PREFTSWP",8);
  FFileBase::Write(param_1,local_24,8);
  local_28 = 1;
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  uVar2 = *(int *)(param_2 + 0x18) - *(int *)(param_2 + 0x1c);
  local_28 = uVar2;
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  if (uVar2 == 0) {
LAB_0005ec17:
    uVar2 = *(int *)(param_2 + 0x34) - *(int *)(param_2 + 0x38);
    local_28 = uVar2;
    FFileBase::Write(param_1,(uchar *)&local_28,4);
    if (uVar2 == 0) {
LAB_0005ecaf:
      uVar2 = *(int *)(param_2 + 0x50) - *(int *)(param_2 + 0x54);
      local_28 = uVar2;
      FFileBase::Write(param_1,(uchar *)&local_28,4);
      if (uVar2 == 0) {
LAB_0005ed47:
        local_28 = (**(code **)(*(int *)param_2 + 0x18))(param_2);
        FFileBase::Write(param_1,(uchar *)&local_28,4);
        local_28 = *(uint *)(param_2 + 0x88);
        FFileBase::Write(param_1,(uchar *)&local_28,4);
        local_30 = 0;
        local_34 = 0;
        do {
          uVar2 = (**(code **)(*(int *)param_2 + 0x18))(param_2);
          if (uVar2 <= local_34) {
            return;
          }
          iVar5 = local_30 + *(int *)(param_2 + 0x7c);
          uVar2 = *(int *)(iVar5 + 0x14) - *(int *)(iVar5 + 0x18);
          local_28 = uVar2;
          FFileBase::Write(param_1,(uchar *)&local_28,4);
          if (uVar2 != 0) {
            iVar3 = *(int *)(iVar5 + 0x18);
            if (iVar3 == *(int *)(iVar5 + 0x14)) goto LAB_0005ee57;
            uVar4 = 0;
            while( true ) {
              puVar1 = (undefined1 *)(iVar3 + uVar4);
              uVar4 = uVar4 + 1;
              local_24[0] = *puVar1;
              FFileBase::Write(param_1,local_24,1);
              if (uVar2 == uVar4) break;
              iVar3 = *(int *)(iVar5 + 0x18);
              if ((uint)(*(int *)(iVar5 + 0x14) - iVar3) <= uVar4) goto LAB_0005ee57;
            }
          }
          local_34 = local_34 + 1;
          local_30 = local_30 + 0x1c;
        } while( true );
      }
      iVar5 = *(int *)(param_2 + 0x54);
      if (iVar5 != *(int *)(param_2 + 0x50)) {
        uVar4 = 0;
        do {
          puVar1 = (undefined1 *)(iVar5 + uVar4);
          uVar4 = uVar4 + 1;
          local_24[0] = *puVar1;
          FFileBase::Write(param_1,local_24,1);
          if (uVar2 == uVar4) goto LAB_0005ed47;
          iVar5 = *(int *)(param_2 + 0x54);
        } while (uVar4 < (uint)(*(int *)(param_2 + 0x50) - iVar5));
      }
    }
    else {
      iVar5 = *(int *)(param_2 + 0x38);
      if (*(int *)(param_2 + 0x34) != iVar5) {
        uVar4 = 0;
        do {
          puVar1 = (undefined1 *)(iVar5 + uVar4);
          uVar4 = uVar4 + 1;
          local_24[0] = *puVar1;
          FFileBase::Write(param_1,local_24,1);
          if (uVar2 == uVar4) goto LAB_0005ecaf;
          iVar5 = *(int *)(param_2 + 0x38);
        } while (uVar4 < (uint)(*(int *)(param_2 + 0x34) - iVar5));
      }
    }
  }
  else {
    iVar5 = *(int *)(param_2 + 0x1c);
    if (*(int *)(param_2 + 0x18) != iVar5) {
      uVar4 = 0;
      do {
        puVar1 = (undefined1 *)(iVar5 + uVar4);
        uVar4 = uVar4 + 1;
        local_24[0] = *puVar1;
        FFileBase::Write(param_1,local_24,1);
        if (uVar2 == uVar4) goto LAB_0005ec17;
        iVar5 = *(int *)(param_2 + 0x1c);
      } while (uVar4 < (uint)(*(int *)(param_2 + 0x18) - iVar5));
    }
  }
LAB_0005ee57:
                    /* WARNING: Subroutine does not return */
  std::__stl_throw_out_of_range((char *)((int)DWORD_ARRAY_00027b38 + unaff_EBX + 0xcab));
}


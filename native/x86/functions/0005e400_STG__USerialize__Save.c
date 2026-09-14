/* 0005e400 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::UPreference_IAB const&) */

void STG::USerialize::Save(FFileBase *param_1,UPreference_IAB *param_2)

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
  
  uStack_14 = 0x5e409;
  FUN_0002e044();
  builtin_memcpy(local_24,"PREFINAP",8);
  FFileBase::Write(param_1,local_24,8);
  local_28 = 3;
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  uVar2 = *(int *)(param_2 + 0x18) - *(int *)(param_2 + 0x1c);
  local_28 = uVar2;
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  if (uVar2 == 0) {
LAB_0005e4fd:
    uVar2 = *(int *)(param_2 + 0x34) - *(int *)(param_2 + 0x38);
    local_28 = uVar2;
    FFileBase::Write(param_1,(uchar *)&local_28,4);
    if (uVar2 == 0) {
LAB_0005e59d:
      uVar2 = *(int *)(param_2 + 0x50) - *(int *)(param_2 + 0x54);
      local_28 = uVar2;
      FFileBase::Write(param_1,(uchar *)&local_28,4);
      if (uVar2 == 0) {
LAB_0005e63d:
        local_28 = (**(code **)(*(int *)param_2 + 0x18))(param_2);
        FFileBase::Write(param_1,(uchar *)&local_28,4);
        uVar2 = *(int *)(param_2 + 0x6c) - *(int *)(param_2 + 0x70);
        local_28 = uVar2;
        FFileBase::Write(param_1,(uchar *)&local_28,4);
        if (uVar2 == 0) {
LAB_0005e705:
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
              if (*(int *)(iVar4 + 0x14) == iVar1) goto LAB_0005e85d;
              uVar3 = 0;
              while( true ) {
                local_24[0] = *(undefined1 *)(iVar1 + uVar3);
                uVar3 = uVar3 + 1;
                FFileBase::Write(param_1,local_24,1);
                if (uVar2 == uVar3) break;
                iVar1 = *(int *)(iVar4 + 0x18);
                if ((uint)(*(int *)(iVar4 + 0x14) - iVar1) <= uVar3) goto LAB_0005e85d;
              }
            }
            iVar4 = local_34 + *(int *)(param_2 + 0x7c);
            uVar2 = *(int *)(iVar4 + 0x30) - *(int *)(iVar4 + 0x34);
            local_28 = uVar2;
            FFileBase::Write(param_1,(uchar *)&local_28,4);
            if (uVar2 != 0) {
              iVar1 = *(int *)(iVar4 + 0x34);
              if (iVar1 == *(int *)(iVar4 + 0x30)) goto LAB_0005e85d;
              uVar3 = 0;
              while( true ) {
                local_24[0] = *(undefined1 *)(iVar1 + uVar3);
                uVar3 = uVar3 + 1;
                FFileBase::Write(param_1,local_24,1);
                if (uVar2 == uVar3) break;
                iVar1 = *(int *)(iVar4 + 0x34);
                if ((uint)(*(int *)(iVar4 + 0x30) - iVar1) <= uVar3) goto LAB_0005e85d;
              }
            }
            local_30 = local_30 + 1;
            local_34 = local_34 + 0x38;
          } while( true );
        }
        iVar4 = *(int *)(param_2 + 0x70);
        if (*(int *)(param_2 + 0x6c) != iVar4) {
          uVar3 = 0;
          do {
            local_24[0] = *(undefined1 *)(iVar4 + uVar3);
            uVar3 = uVar3 + 1;
            FFileBase::Write(param_1,local_24,1);
            if (uVar2 == uVar3) goto LAB_0005e705;
            iVar4 = *(int *)(param_2 + 0x70);
          } while (uVar3 < (uint)(*(int *)(param_2 + 0x6c) - iVar4));
        }
      }
      else {
        iVar4 = *(int *)(param_2 + 0x54);
        if (*(int *)(param_2 + 0x50) != iVar4) {
          uVar3 = 0;
          do {
            local_24[0] = *(undefined1 *)(iVar4 + uVar3);
            uVar3 = uVar3 + 1;
            FFileBase::Write(param_1,local_24,1);
            if (uVar2 == uVar3) goto LAB_0005e63d;
            iVar4 = *(int *)(param_2 + 0x54);
          } while (uVar3 < (uint)(*(int *)(param_2 + 0x50) - iVar4));
        }
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
          if (uVar2 == uVar3) goto LAB_0005e59d;
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
        if (uVar2 == uVar3) goto LAB_0005e4fd;
        iVar4 = *(int *)(param_2 + 0x1c);
      } while (uVar3 < (uint)(*(int *)(param_2 + 0x18) - iVar4));
    }
  }
LAB_0005e85d:
                    /* WARNING: Subroutine does not return */
  std::__stl_throw_out_of_range((char *)((int)DWORD_ARRAY_00028b54 + unaff_EBX + 0x3af));
}


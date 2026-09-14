/* 000569a0 | STG::LLogicScene_HidePrey::SaveData */

/* STG::LLogicScene_HidePrey::SaveData(STG::FFileBase*) const */

void __thiscall STG::LLogicScene_HidePrey::SaveData(LLogicScene_HidePrey *this,FFileBase *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int unaff_EBX;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint local_38;
  int local_34;
  uint local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x569a9;
  FUN_0002e044();
  local_20[0] = 1;
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(uint *)(this + 0xc);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  if (*(int *)(this + 0xc) != 0) {
    local_34 = 0;
    local_38 = 0;
    do {
      iVar5 = local_34 + *(int *)(this + 8);
      uVar3 = *(int *)(iVar5 + 0x14) - *(int *)(iVar5 + 0x18);
      local_20[0] = uVar3;
      FFileBase::Write(param_1,(uchar *)local_20,4);
      if (uVar3 != 0) {
        iVar2 = *(int *)(iVar5 + 0x18);
        if (*(int *)(iVar5 + 0x14) == iVar2) goto LAB_00056bbb;
        uVar4 = 0;
        while( true ) {
          puVar1 = (undefined1 *)(iVar2 + uVar4);
          uVar4 = uVar4 + 1;
          local_20[0] = CONCAT31(local_20[0]._1_3_,*puVar1);
          FFileBase::Write(param_1,(uchar *)local_20,1);
          if (uVar3 == uVar4) break;
          iVar2 = *(int *)(iVar5 + 0x18);
          if ((uint)(*(int *)(iVar5 + 0x14) - iVar2) <= uVar4) goto LAB_00056bbb;
        }
      }
      local_38 = local_38 + 1;
      local_34 = local_34 + 0x1c;
    } while (local_38 < *(uint *)(this + 0xc));
  }
  local_20[0] = *(uint *)(this + 0x14);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  if (*(int *)(this + 0x14) != 0) {
    local_34 = 0;
    local_38 = 0;
    do {
      iVar5 = local_34 + *(int *)(this + 0x10);
      uVar3 = *(int *)(iVar5 + 0x14) - *(int *)(iVar5 + 0x18);
      local_20[0] = uVar3;
      FFileBase::Write(param_1,(uchar *)local_20,4);
      if (uVar3 != 0) {
        iVar2 = *(int *)(iVar5 + 0x18);
        if (*(int *)(iVar5 + 0x14) == iVar2) {
LAB_00056bbb:
                    /* WARNING: Subroutine does not return */
          std::__stl_throw_out_of_range((char *)(unaff_EBX + 0x30963));
        }
        uVar4 = 0;
        while( true ) {
          puVar1 = (undefined1 *)(iVar2 + uVar4);
          uVar4 = uVar4 + 1;
          local_20[0] = CONCAT31(local_20[0]._1_3_,*puVar1);
          FFileBase::Write(param_1,(uchar *)local_20,1);
          if (uVar3 == uVar4) break;
          iVar2 = *(int *)(iVar5 + 0x18);
          if ((uint)(*(int *)(iVar5 + 0x14) - iVar2) <= uVar4) goto LAB_00056bbb;
        }
      }
      local_38 = local_38 + 1;
      local_34 = local_34 + 0x1c;
    } while (local_38 < *(uint *)(this + 0x14));
  }
  return;
}


/* 0004f8f8 | STG::LLogicScene_HidePrey::SaveData */

/* STG::LLogicScene_HidePrey::SaveData(STG::FFileBase*) const */

void __thiscall STG::LLogicScene_HidePrey::SaveData(LLogicScene_HidePrey *this,FFileBase *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint local_2c [2];
  
  local_2c[0] = 1;
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  local_2c[0] = *(uint *)(this + 0xc);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  if (*(int *)(this + 0xc) != 0) {
    iVar6 = 0;
    uVar7 = 0;
    do {
      iVar4 = *(int *)(this + 8) + iVar6;
      uVar5 = *(int *)(iVar4 + 0x14) - *(int *)(iVar4 + 0x18);
      local_2c[0] = uVar5;
      FFileBase::Write(param_1,(uchar *)local_2c,4);
      if (uVar5 != 0) {
        iVar2 = *(int *)(iVar4 + 0x18);
        if (*(int *)(iVar4 + 0x14) == iVar2) {
LAB_0004fac4:
                    /* WARNING: Subroutine does not return */
          std::__stl_throw_out_of_range((char *)(DAT_0004fadc + 0x4fad0));
        }
        uVar3 = 0;
        while( true ) {
          puVar1 = (undefined1 *)(iVar2 + uVar3);
          uVar3 = uVar3 + 1;
          local_2c[0] = CONCAT31(local_2c[0]._1_3_,*puVar1);
          FFileBase::Write(param_1,(uchar *)local_2c,1);
          if (uVar5 == uVar3) break;
          iVar2 = *(int *)(iVar4 + 0x18);
          if ((uint)(*(int *)(iVar4 + 0x14) - iVar2) <= uVar3) goto LAB_0004fac4;
        }
      }
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + 0x1c;
    } while (uVar7 < *(uint *)(this + 0xc));
  }
  local_2c[0] = *(uint *)(this + 0x14);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  if (*(int *)(this + 0x14) != 0) {
    iVar6 = 0;
    uVar7 = 0;
    do {
      iVar4 = *(int *)(this + 0x10) + iVar6;
      uVar5 = *(int *)(iVar4 + 0x14) - *(int *)(iVar4 + 0x18);
      local_2c[0] = uVar5;
      FFileBase::Write(param_1,(uchar *)local_2c,4);
      if (uVar5 != 0) {
        iVar2 = *(int *)(iVar4 + 0x18);
        if (iVar2 == *(int *)(iVar4 + 0x14)) {
LAB_0004fad0:
                    /* WARNING: Subroutine does not return */
          std::__stl_throw_out_of_range((char *)((int)&DAT_0004fadc + DAT_0004fae0));
        }
        uVar3 = 0;
        while( true ) {
          puVar1 = (undefined1 *)(iVar2 + uVar3);
          uVar3 = uVar3 + 1;
          local_2c[0] = CONCAT31(local_2c[0]._1_3_,*puVar1);
          FFileBase::Write(param_1,(uchar *)local_2c,1);
          if (uVar5 == uVar3) break;
          iVar2 = *(int *)(iVar4 + 0x18);
          if ((uint)(*(int *)(iVar4 + 0x14) - iVar2) <= uVar3) goto LAB_0004fad0;
        }
      }
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + 0x1c;
    } while (uVar7 < *(uint *)(this + 0x14));
  }
  return;
}


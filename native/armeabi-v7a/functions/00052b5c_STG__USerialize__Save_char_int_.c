/* 00052b5c | STG::USerialize::Save<char,int> */

/* void STG::USerialize::Save<char, int>(STG::FFileBase*, STG::UStringBase<char, int> const&) */

void STG::USerialize::Save<char,int>(FFileBase *param_1,UStringBase *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_1c;
  
  uVar4 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
  local_1c = uVar4;
  FFileBase::Write(param_1,(uchar *)&local_1c,4);
  if (uVar4 == 0) {
    return;
  }
  iVar2 = *(int *)(param_2 + 0x18);
  if (*(int *)(param_2 + 0x14) != iVar2) {
    uVar3 = 0;
    do {
      puVar1 = (undefined1 *)(iVar2 + uVar3);
      uVar3 = uVar3 + 1;
      local_1c = CONCAT31(local_1c._1_3_,*puVar1);
      FFileBase::Write(param_1,(uchar *)&local_1c,1);
      if (uVar3 == uVar4) {
        return;
      }
      iVar2 = *(int *)(param_2 + 0x18);
    } while (uVar3 < (uint)(*(int *)(param_2 + 0x14) - iVar2));
  }
                    /* WARNING: Subroutine does not return */
  std::__stl_throw_out_of_range((char *)((int)&DAT_00052bf8 + DAT_00052bf8));
}


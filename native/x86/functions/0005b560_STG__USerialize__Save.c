/* 0005b560 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::MMatrix const&) */

void STG::USerialize::Save(FFileBase *param_1,MMatrix *param_2)

{
  int iVar1;
  undefined4 local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x5b56b;
  FUN_0002e044();
  iVar1 = 0;
  do {
    local_20[0] = *(undefined4 *)(param_2 + iVar1 * 4);
    iVar1 = iVar1 + 1;
    FFileBase::Write(param_1,(uchar *)local_20,4);
  } while (iVar1 != 0x10);
  return;
}


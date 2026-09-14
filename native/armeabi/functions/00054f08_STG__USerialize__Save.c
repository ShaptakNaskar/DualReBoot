/* 00054f08 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::MMatrix const&) */

void STG::USerialize::Save(FFileBase *param_1,MMatrix *param_2)

{
  int iVar1;
  undefined4 local_14;
  
  iVar1 = 0;
  do {
    local_14 = *(undefined4 *)(param_2 + iVar1);
    iVar1 = iVar1 + 4;
    FFileBase::Write(param_1,(uchar *)&local_14,4);
  } while (iVar1 != 0x40);
  return;
}


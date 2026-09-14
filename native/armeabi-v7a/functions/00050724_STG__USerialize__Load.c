/* 00050724 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::MMatrix&) */

void STG::USerialize::Load(FFileBase *param_1,MMatrix *param_2)

{
  int iVar1;
  undefined4 local_14;
  
  iVar1 = 0x10;
  do {
    FFileBase::Read(param_1,(uchar *)&local_14,4);
    iVar1 = iVar1 + -1;
    *(undefined4 *)param_2 = local_14;
    param_2 = param_2 + 4;
  } while (iVar1 != 0);
  return;
}


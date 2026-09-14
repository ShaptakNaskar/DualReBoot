/* 0005b500 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::MMatrix&) */

void STG::USerialize::Load(FFileBase *param_1,MMatrix *param_2)

{
  int iVar1;
  undefined4 local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x5b50b;
  FUN_0002e044();
  iVar1 = 0;
  do {
    FFileBase::Read(param_1,(uchar *)local_20,4);
    *(undefined4 *)(param_2 + iVar1 * 4) = local_20[0];
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x10);
  return;
}


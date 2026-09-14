/* 0002ecd4 | STG::FFileBase::Open */

/* STG::FFileBase::Open(unsigned char const*, unsigned long) */

void STG::FFileBase::Open(uchar *param_1,ulong param_2)

{
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  (**(code **)(*(int *)param_1 + 0x14))();
  (**(code **)(*(int *)param_1 + 0x1c))(param_1);
  return;
}


/* 00061fc8 | STG::UCrypto::Transform */

/* STG::UCrypto::Transform(char*, unsigned int, void const*) */

void STG::UCrypto::Transform(char *param_1,uint param_2,void *param_3)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)param_3;
  if (bVar1 == 0) {
    uVar2 = 0;
  }
  else if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    do {
      param_1[uVar2] = bVar1 ^ (byte)uVar2;
      uVar2 = uVar2 + 1 & 0xff;
      bVar1 = *(byte *)((int)param_3 + uVar2);
      if (bVar1 == 0) break;
    } while (uVar2 < param_2);
  }
  param_1[uVar2] = '\0';
  return;
}


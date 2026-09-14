/* 0006ae30 | STG::UCrypto::Transform */

/* STG::UCrypto::Transform(char*, unsigned int, void const*) */

char * STG::UCrypto::Transform(char *param_1,uint param_2,void *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = 0;
  bVar1 = *(byte *)param_3;
  if (bVar1 != 0) {
    bVar2 = 0;
    if (param_2 != 0) {
      while( true ) {
        bVar1 = bVar1 ^ bVar2;
        bVar2 = bVar2 + 1;
        param_1[uVar3] = bVar1;
        uVar3 = (uint)bVar2;
        bVar1 = *(byte *)((int)param_3 + uVar3);
        if (bVar1 == 0) break;
        if (param_2 <= uVar3) {
          param_1[uVar3] = '\0';
          return param_1;
        }
      }
    }
  }
  param_1[uVar3] = '\0';
  return param_1;
}


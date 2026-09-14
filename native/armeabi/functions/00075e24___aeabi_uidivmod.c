/* 00075e24 | __aeabi_uidivmod */

void __aeabi_uidivmod(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    __udivsi3();
    return;
  }
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = 0xffffffff;
  }
  __aeabi_ldiv0(uVar1);
  return;
}


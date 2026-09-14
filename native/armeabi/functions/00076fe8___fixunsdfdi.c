/* 00076fe8 | __fixunsdfdi */

undefined8 __fixunsdfdi(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  __muldf3(param_1,param_2,0,DAT_0007704c,param_4);
  uVar1 = __fixunsdfsi();
  uVar3 = __aeabi_ui2d();
  uVar3 = __muldf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0,DAT_00077050);
  __aeabi_dsub(param_1,param_2,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  uVar2 = __fixunsdfsi();
  return CONCAT44(uVar1,uVar2);
}


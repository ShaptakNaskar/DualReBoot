/* 000722ac | __fixunssfdi */

undefined8 __fixunssfdi(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = __aeabi_f2d();
  uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
  __muldf3((int)uVar3,uVar2,0,DAT_00072314,in_r3);
  uVar1 = __fixunsdfsi();
  uVar4 = __aeabi_ui2d();
  uVar4 = __muldf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0,DAT_00072318);
  __aeabi_dsub((int)uVar3,uVar2,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
  uVar2 = __fixunsdfsi();
  return CONCAT44(uVar1,uVar2);
}


/* 00083c20 | FUN_00083c20 */

undefined4 FUN_00083c20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int unaff_EBX;
  
  piVar2 = (int *)FUN_0002e044();
  cVar1 = (**(code **)(*piVar2 + 0xc))(piVar2,param_2,param_3,1);
  uVar3 = 1;
  if (cVar1 == '\0') {
    uVar3 = FUN_00081700(param_2,*(undefined4 *)
                                  ("_ZN3STG19FFileMemory_AndroidD1Ev" + unaff_EBX + 0x1c));
  }
  return uVar3;
}


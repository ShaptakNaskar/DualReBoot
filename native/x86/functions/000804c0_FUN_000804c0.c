/* 000804c0 | FUN_000804c0 */

undefined4
FUN_000804c0(uint param_1,undefined4 param_2,int param_3,undefined1 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int local_14;
  undefined4 local_10;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_000803f0(param_7);
  }
  local_14 = ~param_1 + param_3;
  do {
    iVar3 = FUN_00083730(&local_14);
    if (iVar3 == 0) {
      return 1;
    }
    piVar2 = (int *)FUN_00080420(iVar3,0,param_3,param_4,param_7);
    local_10 = param_6;
    cVar1 = (**(code **)(*piVar2 + 8))(piVar2,param_5,&local_10);
  } while (cVar1 == '\0');
  return 0;
}


/* 00084343 | _Unwind_GetGR */

undefined4 * _Unwind_GetGR(int param_1,int param_2)

{
  undefined4 *puVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  if (param_2 < 0x12) {
    puVar1 = *(undefined4 **)(param_1 + param_2 * 4);
    if (((*(byte *)(param_1 + 99) & 0x40) == 0) || (*(char *)(param_1 + 0x6c + param_2) == '\0')) {
      if ("_ZN3STG13UResourceListINS_9GETextureENS_13GETextureListENS_26GETextureList_CreateParamsEED0Ev"
          [param_2 + unaff_EBX + 0x25] != '\x04') goto LAB_00084385;
      puVar1 = (undefined4 *)*puVar1;
    }
    return puVar1;
  }
LAB_00084385:
                    /* WARNING: Subroutine does not return */
  abort();
}


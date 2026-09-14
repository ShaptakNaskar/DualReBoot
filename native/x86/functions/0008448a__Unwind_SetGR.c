/* 0008448a | _Unwind_SetGR */

void _Unwind_SetGR(int param_1,int param_2,undefined4 param_3)

{
  int unaff_EBX;
  
  FUN_0002e044();
  if (param_2 < 0x12) {
    if (((*(byte *)(param_1 + 99) & 0x40) == 0) || (*(char *)(param_1 + 0x6c + param_2) == '\0')) {
      if ("_ZNK3STG10GEMaterial15GetSubFileCountEv"[param_2 + unaff_EBX + 0x14] != '\x04')
      goto LAB_000844d5;
      **(undefined4 **)(param_1 + param_2 * 4) = param_3;
    }
    else {
      *(undefined4 *)(param_1 + param_2 * 4) = param_3;
    }
    return;
  }
LAB_000844d5:
                    /* WARNING: Subroutine does not return */
  abort();
}


/* 0008428d | FUN_0008428d */

undefined4 FUN_0008428d(undefined4 *param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  int unaff_EBX;
  undefined8 uVar2;
  
  uVar2 = FUN_0002e044();
  iVar1 = (int)uVar2;
  if ("_ZN3STG10GEMaterial8LoadSelfERKNS_9FFileHashE"[unaff_EBX + 0x18] != '\x04') {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *param_1 = (int)((ulonglong)uVar2 >> 0x20);
  if ((*(byte *)(iVar1 + 99) & 0x40) != 0) {
    *(undefined1 *)(iVar1 + 0x70) = 0;
  }
  *(undefined4 **)(iVar1 + 0x10) = param_1;
  return extraout_ECX;
}


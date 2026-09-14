/* 0008707e | __deregister_frame_info_bases */

int __deregister_frame_info_bases(int *param_1)

{
  undefined4 *puVar1;
  int unaff_EBX;
  int iVar2;
  
  FUN_0002e044();
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)((int)&__DT_SYMTAB[0x6a8].st_name + unaff_EBX + 3));
  puVar1 = (undefined4 *)((int)&__DT_SYMTAB[0x6a8].st_value + unaff_EBX + 3);
  for (iVar2 = *(int *)((int)&__DT_SYMTAB[0x6a8].st_value + unaff_EBX + 3); iVar2 != 0;
      iVar2 = *(int *)(iVar2 + 0x14)) {
    if (*(int **)(iVar2 + 0xc) == param_1) goto LAB_0008710b;
    puVar1 = (undefined4 *)(iVar2 + 0x14);
  }
  puVar1 = (undefined4 *)((int)&__DT_SYMTAB[0x6a8].st_size + unaff_EBX + 3);
  for (iVar2 = *(int *)((int)&__DT_SYMTAB[0x6a8].st_size + unaff_EBX + 3); iVar2 != 0;
      iVar2 = *(int *)(iVar2 + 0x14)) {
    if ((*(byte *)(iVar2 + 0x10) & 1) == 0) {
      if (*(int **)(iVar2 + 0xc) == param_1) goto LAB_0008710b;
    }
    else if ((int *)**(undefined4 **)(iVar2 + 0xc) == param_1) {
      *puVar1 = *(undefined4 *)(iVar2 + 0x14);
      free(*(void **)(iVar2 + 0xc));
      break;
    }
    puVar1 = (undefined4 *)(iVar2 + 0x14);
  }
LAB_0008711c:
  pthread_mutex_unlock((pthread_mutex_t *)((int)&__DT_SYMTAB[0x6a8].st_name + unaff_EBX + 3));
  if (iVar2 != 0) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  abort();
LAB_0008710b:
  *puVar1 = *(undefined4 *)(iVar2 + 0x14);
  goto LAB_0008711c;
}


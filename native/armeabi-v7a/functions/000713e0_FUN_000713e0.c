/* 000713e0 | FUN_000713e0 */

void FUN_000713e0(undefined4 *param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (0x80 < param_2) {
    (*(code *)(DAT_000765d4 + 0x765d8))();
    return;
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_3 + 0x44));
  iVar1 = (param_2 + 7 >> 3) - 1;
  *param_1 = *(undefined4 *)(param_3 + iVar1 * 4);
  *(undefined4 **)(param_3 + iVar1 * 4) = param_1;
  (*(code *)(DAT_000765e4 + 0x765e8))((pthread_mutex_t *)(param_3 + 0x44));
  return;
}


/* 00075330 | FUN_00075330 */

undefined4 * FUN_00075330(uint *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = *param_1 + 7 & 0xfffffff8;
  *param_1 = uVar2;
  pthread_mutex_lock((pthread_mutex_t *)(DAT_0007537c + 0x75346));
  iVar1 = (uVar2 - 1 >> 3) * 4;
  puVar3 = *(undefined4 **)(iVar1 + DAT_00075380 + 0x75350);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_000752e4(*param_1);
  }
  else {
    *(undefined4 *)(iVar1 + DAT_00075380 + 0x75350) = *puVar3;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_00075384 + 0x75360));
  return puVar3;
}


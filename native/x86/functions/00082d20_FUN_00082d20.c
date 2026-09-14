/* 00082d20 | FUN_00082d20 */

undefined4 * FUN_00082d20(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int unaff_EBX;
  undefined4 *puVar4;
  bool bVar5;
  byte bVar6;
  
  bVar6 = 0;
  FUN_0002e044();
  puVar1 = *(undefined4 **)("_ZN3STG10GERenderer11SetFogStateERKNS_7GEColorEff" + unaff_EBX + 0x1e);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = operator_new(0x48);
    puVar1[0x10] = 0;
    pthread_mutex_init((pthread_mutex_t *)(puVar1 + 0x11),(pthread_mutexattr_t *)0x0);
    bVar5 = ((uint)puVar1 & 1) != 0;
    uVar3 = 0x40;
    puVar4 = puVar1;
    if (bVar5) {
      *(undefined1 *)puVar1 = 0;
      puVar4 = (undefined4 *)((int)puVar1 + 1);
      uVar3 = 0x3f;
    }
    if (((uint)puVar4 & 2) != 0) {
      *(undefined2 *)puVar4 = 0;
      uVar3 = uVar3 - 2;
      puVar4 = (undefined4 *)((int)puVar4 + 2);
    }
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    }
    if ((uVar3 & 2) != 0) {
      *(undefined2 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 2);
    }
    if (bVar5) {
      *(undefined1 *)puVar4 = 0;
    }
  }
  else {
    *(undefined4 *)("_ZN3STG10GERenderer11SetFogStateERKNS_7GEColorEff" + unaff_EBX + 0x1e) =
         puVar1[0x10];
  }
  return puVar1;
}


/* 00082740 | FUN_00082740 */

void FUN_00082740(int param_1)

{
  undefined4 uVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  pthread_mutex_lock((pthread_mutex_t *)("_ZN3STG5UTimeD1Ev" + unaff_EBX + 0xe));
  uVar1 = *(undefined4 *)("_ZNK3STG10GERenderer6GetFPSEv" + unaff_EBX + 4);
  *(int *)("_ZNK3STG10GERenderer6GetFPSEv" + unaff_EBX + 4) = param_1;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  pthread_mutex_unlock((pthread_mutex_t *)("_ZN3STG5UTimeD1Ev" + unaff_EBX + 0xe));
  return;
}


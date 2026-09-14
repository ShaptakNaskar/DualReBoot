/* 0007f6c0 | FUN_0007f6c0 */

void FUN_0007f6c0(undefined4 *param_1)

{
  int unaff_EBX;
  
  FUN_0002e044();
  if (param_1 != (undefined4 *)0x0) {
    pthread_mutex_lock((pthread_mutex_t *)("_ZN3STG9GETexture4LoadEPKhRPh" + unaff_EBX + 2));
    *param_1 = *(undefined4 *)("_ZN3STG9GETexture4LoadEPKhRPh" + unaff_EBX + 10);
    *(undefined4 **)("_ZN3STG9GETexture4LoadEPKhRPh" + unaff_EBX + 10) = param_1;
    pthread_mutex_unlock((pthread_mutex_t *)("_ZN3STG9GETexture4LoadEPKhRPh" + unaff_EBX + 2));
  }
  return;
}


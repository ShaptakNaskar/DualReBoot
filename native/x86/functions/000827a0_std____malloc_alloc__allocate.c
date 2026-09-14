/* 000827a0 | std::__malloc_alloc::allocate */

/* std::__malloc_alloc::allocate(unsigned int) */

void std::__malloc_alloc::allocate(uint param_1)

{
  code *pcVar1;
  void *pvVar2;
  undefined4 uVar3;
  int unaff_EBX;
  
  FUN_0002e044();
  pvVar2 = malloc(param_1);
  if (pvVar2 == (void *)0x0) {
    do {
      pthread_mutex_lock((pthread_mutex_t *)
                         (
                         "_ZN3STG10GERenderer17CaptureScreenShotERKNS_10URectangleImEERNS_11GEPixelDataE"
                         + unaff_EBX + 5));
      pcVar1 = *(code **)(
                         "_ZN3STG10GERenderer17CaptureScreenShotERKNS_10URectangleImEERNS_11GEPixelDataE"
                         + unaff_EBX + 9);
      pthread_mutex_unlock
                ((pthread_mutex_t *)
                 ("_ZN3STG10GERenderer17CaptureScreenShotERKNS_10URectangleImEERNS_11GEPixelDataE" +
                 unaff_EBX + 5));
      if (pcVar1 == (code *)0x0) {
        uVar3 = FUN_0007fa60(4);
        FUN_00080cd0(uVar3);
                    /* WARNING: Subroutine does not return */
        FUN_0007fb60(uVar3,*(undefined4 *)
                            (
                            "_ZN3STG13UResourceListINS_9GETextureENS_13GETextureListENS_26GETextureList_CreateParamsEED2Ev"
                            + unaff_EBX + 0x3c),
                     *(undefined4 *)
                      (
                      "_ZN3STG13UResourceListINS_9GETextureENS_13GETextureListENS_26GETextureList_CreateParamsEED2Ev"
                      + unaff_EBX + 0x38));
      }
      (*pcVar1)();
      pvVar2 = malloc(param_1);
    } while (pvVar2 == (void *)0x0);
  }
  return;
}


/* 0007f720 | FUN_0007f720 */

void FUN_0007f720(void)

{
  pthread_mutex_t *__mutex;
  void *__addr;
  int unaff_EBX;
  
  FUN_0002e044();
  __mutex = (pthread_mutex_t *)
            (
            "_ZN3STG9GETexture13CompositeTextEPKNS_6GEFontERKNS_11UStringBaseIttEERKNS_13GEPixelFormat7EFormatEmmPKhRPh"
            + unaff_EBX + 0x1e);
  pthread_mutex_lock(__mutex);
  __addr = *(void **)(
                     "_ZN3STG9GETexture13CompositeTextEPKNS_6GEFontERKNS_11UStringBaseIttEERKNS_13GEPixelFormat7EFormatEmmPKhRPh"
                     + unaff_EBX + 0x22);
  while (__addr != (void *)0x0) {
    *(undefined4 *)
     (
     "_ZN3STG9GETexture13CompositeTextEPKNS_6GEFontERKNS_11UStringBaseIttEERKNS_13GEPixelFormat7EFormatEmmPKhRPh"
     + unaff_EBX + 0x22) =
         *(undefined4 *)
          ((int)__addr +
          *(int *)(
                  "_ZN3STG9GETexture13CompositeTextEPKNS_6GEFontERKNS_11UStringBaseIttEERKNS_13GEPixelFormat7EFormatEmmPKhRPh"
                  + unaff_EBX + 0x1a));
    munmap(__addr,0x1000);
    __addr = *(void **)(
                       "_ZN3STG9GETexture13CompositeTextEPKNS_6GEFontERKNS_11UStringBaseIttEERKNS_13GEPixelFormat7EFormatEmmPKhRPh"
                       + unaff_EBX + 0x22);
  }
  pthread_mutex_unlock(__mutex);
  pthread_mutex_destroy(__mutex);
  pthread_key_delete(*(pthread_key_t *)
                      (
                      "_ZN3STG9GETexture13CompositeTextEPKNS_6GEFontERKNS_11UStringBaseIttEERKNS_13GEPixelFormat7EFormatEmmPKhRPh"
                      + unaff_EBX + 0xe));
  return;
}


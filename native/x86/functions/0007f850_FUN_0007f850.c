/* 0007f850 | FUN_0007f850 */

undefined4 * FUN_0007f850(void)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  size_t __n;
  int unaff_EBX;
  char *pcVar5;
  char *pcVar6;
  
  FUN_0002e044();
  puVar2 = pthread_getspecific(*(pthread_key_t *)
                                (
                                "_ZN3STG9GETexture18CompositeUserImageERKNS_11UStringBaseIciEERKNS_13GEPixelFormat7EFormatEmmNS_16GETextureShading7EEffectERPh"
                                + unaff_EBX + 0x32));
  if (puVar2 != (undefined4 *)0x0) {
    return puVar2;
  }
  pthread_mutex_lock((pthread_mutex_t *)
                     (
                     "_ZN3STG9GETexture18CompositeUserImageERKNS_11UStringBaseIciEERKNS_13GEPixelFormat7EFormatEmmNS_16GETextureShading7EEffectERPh"
                     + unaff_EBX + 0x42));
  puVar2 = *(undefined4 **)
            (
            "_ZN3STG9GETexture18CompositeUserImageERKNS_11UStringBaseIciEERKNS_13GEPixelFormat7EFormatEmmNS_16GETextureShading7EEffectERPh"
            + unaff_EBX + 0x4a);
  __n = *(size_t *)
         (
         "_ZN3STG9GETexture18CompositeUserImageERKNS_11UStringBaseIciEERKNS_13GEPixelFormat7EFormatEmmNS_16GETextureShading7EEffectERPh"
         + unaff_EBX + 0x36);
  if (puVar2 == (undefined4 *)0x0) {
    pcVar3 = mmap((void *)0x0,0x1000,3,0x22,-1,0);
    if (pcVar3 == (char *)0xffffffff) goto LAB_0007f8da;
    iVar1 = *(int *)(
                    "_ZN3STG9GETexture18CompositeUserImageERKNS_11UStringBaseIciEERKNS_13GEPixelFormat7EFormatEmmNS_16GETextureShading7EEffectERPh"
                    + unaff_EBX + 0x3a);
    pcVar6 = "_ZN3STG9GETexture18CompositeUserImageERKNS_11UStringBaseIciEERKNS_13GEPixelFormat7EFormatEmmNS_16GETextureShading7EEffectERPh"
             + unaff_EBX + 0x4a;
    *(undefined4 *)
     (pcVar3 + *(int *)(
                       "_ZN3STG9GETexture18CompositeUserImageERKNS_11UStringBaseIciEERKNS_13GEPixelFormat7EFormatEmmNS_16GETextureShading7EEffectERPh"
                       + unaff_EBX + 0x3e)) =
         *(undefined4 *)
          (
          "_ZN3STG9GETexture18CompositeUserImageERKNS_11UStringBaseIciEERKNS_13GEPixelFormat7EFormatEmmNS_16GETextureShading7EEffectERPh"
          + unaff_EBX + 0x46);
    *(char **)(
              "_ZN3STG9GETexture18CompositeUserImageERKNS_11UStringBaseIciEERKNS_13GEPixelFormat7EFormatEmmNS_16GETextureShading7EEffectERPh"
              + unaff_EBX + 0x46) = pcVar3;
    __n = *(size_t *)
           (
           "_ZN3STG9GETexture18CompositeUserImageERKNS_11UStringBaseIciEERKNS_13GEPixelFormat7EFormatEmmNS_16GETextureShading7EEffectERPh"
           + unaff_EBX + 0x36);
    if (iVar1 != 0) {
      iVar4 = 0;
      pcVar5 = "_ZN3STG9GETexture18CompositeUserImageERKNS_11UStringBaseIciEERKNS_13GEPixelFormat7EFormatEmmNS_16GETextureShading7EEffectERPh"
               + unaff_EBX + 0x4a;
      do {
        pcVar6 = pcVar3;
        iVar4 = iVar4 + 1;
        *(char **)pcVar5 = pcVar6;
        pcVar3 = pcVar6 + __n;
        pcVar5 = pcVar6;
      } while (iVar4 != iVar1);
    }
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    puVar2 = *(undefined4 **)
              (
              "_ZN3STG9GETexture18CompositeUserImageERKNS_11UStringBaseIciEERKNS_13GEPixelFormat7EFormatEmmNS_16GETextureShading7EEffectERPh"
              + unaff_EBX + 0x4a);
  }
  *(undefined4 *)
   (
   "_ZN3STG9GETexture18CompositeUserImageERKNS_11UStringBaseIciEERKNS_13GEPixelFormat7EFormatEmmNS_16GETextureShading7EEffectERPh"
   + unaff_EBX + 0x4a) = *puVar2;
  memset(puVar2,0,__n);
LAB_0007f8da:
  pthread_mutex_unlock
            ((pthread_mutex_t *)
             (
             "_ZN3STG9GETexture18CompositeUserImageERKNS_11UStringBaseIciEERKNS_13GEPixelFormat7EFormatEmmNS_16GETextureShading7EEffectERPh"
             + unaff_EBX + 0x42));
  if (puVar2 != (undefined4 *)0x0) {
    pthread_setspecific(*(pthread_key_t *)
                         (
                         "_ZN3STG9GETexture18CompositeUserImageERKNS_11UStringBaseIciEERKNS_13GEPixelFormat7EFormatEmmNS_16GETextureShading7EEffectERPh"
                         + unaff_EBX + 0x32),puVar2);
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00080360(unaff_EBX + 0x82d7);
}


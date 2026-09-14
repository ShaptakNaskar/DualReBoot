/* 00082f40 | FUN_00082f40 */

undefined4 * FUN_00082f40(uint param_1,uint *param_2,int param_3)

{
  pthread_mutex_t *__mutex;
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBX;
  uint uVar4;
  
  FUN_0002e044();
  __mutex = (pthread_mutex_t *)
            ("_ZN3STG10GERenderer4DrawERKNS_14GEVertexBufferERKNS_13GEIndexBufferE" +
            unaff_EBX + 0x22);
  do {
    pthread_mutex_lock(__mutex);
    puVar1 = *(undefined4 **)
              ("_ZN3STG10GERenderer4DrawERKNS_14GEVertexBufferERKNS_13GEIndexBufferE" +
              unaff_EBX + 0x1a);
    uVar4 = param_1 * *param_2;
    uVar3 = *(int *)("_ZN3STG10GERenderer4DrawERKNS_14GEVertexBufferERKNS_13GEIndexBufferE" +
                    unaff_EBX + 0x16) - (int)puVar1;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      *(undefined4 **)
       ("_ZN3STG10GERenderer4DrawERKNS_14GEVertexBufferERKNS_13GEIndexBufferE" + unaff_EBX + 0x1a) =
           (undefined4 *)(uVar4 + (int)puVar1);
LAB_00082ff6:
      pthread_mutex_unlock(__mutex);
      return puVar1;
    }
    if (param_1 <= uVar3) {
      *param_2 = uVar3 / param_1;
      *(undefined4 **)
       ("_ZN3STG10GERenderer4DrawERKNS_14GEVertexBufferERKNS_13GEIndexBufferE" + unaff_EBX + 0x1a) =
           (undefined4 *)((uVar3 / param_1) * param_1 + (int)puVar1);
      goto LAB_00082ff6;
    }
    uVar4 = (*(int *)("_ZN3STG10GERenderer4DrawERKNS_14GEVertexBufferERKNS_13GEIndexBufferE" +
                     unaff_EBX + 0x12) + 7U & 0xfffffff8) + uVar4 * 2;
    if (uVar3 != 0) {
      iVar2 = (uVar3 + 7 >> 3) - 1;
      *puVar1 = *(undefined4 *)(param_3 + iVar2 * 4);
      *(undefined4 *)(param_3 + iVar2 * 4) =
           *(undefined4 *)
            ("_ZN3STG10GERenderer4DrawERKNS_14GEVertexBufferERKNS_13GEIndexBufferE" +
            unaff_EBX + 0x1a);
    }
    iVar2 = std::__malloc_alloc::allocate(uVar4);
    *(int *)("_ZN3STG10GERenderer4DrawERKNS_14GEVertexBufferERKNS_13GEIndexBufferE" +
            unaff_EBX + 0x1a) = iVar2;
    *(uint *)("_ZN3STG10GERenderer4DrawERKNS_14GEVertexBufferERKNS_13GEIndexBufferE" +
             unaff_EBX + 0x12) =
         *(int *)("_ZN3STG10GERenderer4DrawERKNS_14GEVertexBufferERKNS_13GEIndexBufferE" +
                 unaff_EBX + 0x12) + (uVar4 >> 4);
    *(uint *)("_ZN3STG10GERenderer4DrawERKNS_14GEVertexBufferERKNS_13GEIndexBufferE" +
             unaff_EBX + 0x16) = uVar4 + iVar2;
    pthread_mutex_unlock(__mutex);
  } while( true );
}


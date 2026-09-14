/* 00034a60 | STG::FFileManagerScoped::FFileManagerScoped */

/* STG::FFileManagerScoped::FFileManagerScoped(_JNIEnv*, _jobject*) */

void __thiscall
STG::FFileManagerScoped::FFileManagerScoped
          (FFileManagerScoped *this,_JNIEnv *param_1,_jobject *param_2)

{
  void *pvVar1;
  int iVar2;
  uint *puVar3;
  FFileManager *this_00;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint local_44;
  int local_40;
  int local_3c [4];
  int *local_2c;
  int *local_28;
  int local_24;
  
  iVar4 = DAT_00034c10 + 0x34a80;
  piVar5 = *(int **)(iVar4 + DAT_00034c14);
  local_24 = *piVar5;
  *(_JNIEnv **)this = param_1;
  puVar3 = *(uint **)(iVar4 + DAT_00034c18);
  if (((*puVar3 & 1) == 0) && (iVar2 = thunk_FUN_0007004c(puVar3), iVar2 != 0)) {
    this_00 = *(FFileManager **)(iVar4 + DAT_00034c1c);
    iVar6 = *(int *)(iVar4 + DAT_00034c20);
    *(FFileManager **)(this_00 + 0x34) = this_00 + 0x24;
    *(FFileManager **)(this_00 + 0x38) = this_00 + 0x24;
    iVar2 = DAT_00034c28;
    *(FFileManager **)(this_00 + 0x18) = this_00 + 8;
    *(int *)(this_00 + 4) = iVar6 + 8;
    *(FFileManager **)(this_00 + 0x1c) = this_00 + 8;
    *(int *)(this_00 + 0x20) = iVar6 + 8;
    this_00[8] = (FFileManager)0x0;
    this_00[0x24] = (FFileManager)0x0;
    iVar2 = *(int *)(iVar4 + iVar2);
    *(int *)(this_00 + 0x3c) = 0;
    *(int *)(this_00 + 0x40) = 0;
    *(int *)this_00 = iVar2 + 8;
    thunk_FUN_000700b0(puVar3);
    __aeabi_atexit(this_00,*(undefined4 *)(iVar4 + DAT_00034c2c),
                   *(undefined4 *)(iVar4 + DAT_00034c30));
  }
  else {
    this_00 = *(FFileManager **)(iVar4 + DAT_00034c1c);
    iVar6 = *(int *)(iVar4 + DAT_00034c20);
  }
  iVar6 = iVar6 + 8;
  local_44 = 0x11;
  local_40 = iVar6;
  local_2c = local_3c;
  local_28 = local_3c;
  local_2c = (int *)std::__node_alloc::_M_allocate(&local_44);
  local_3c[0] = (int)local_2c + local_44;
  local_28 = local_2c;
  pvVar1 = memcpy(local_2c,(void *)(DAT_00034c24 + 0x34aec),0x10);
  local_2c = (int *)((int)pvVar1 + 0x10);
  *(undefined1 *)((int)pvVar1 + 0x10) = 0;
  FFileManager::ClearBasePath(this_00);
  FFileManager::AddBasePath(this_00,(UStringBase *)&local_40);
  local_40 = iVar6;
  if ((local_28 != local_3c) && (local_28 != (int *)0x0)) {
    if ((uint)(local_3c[0] - (int)local_28) < 0x81) {
      std::__node_alloc::_M_deallocate(local_28,local_3c[0] - (int)local_28);
    }
    else {
      operator_delete(local_28);
    }
  }
  FFileManager_Android::SetAssetManager((_JNIEnv *)this_00,*(_jobject **)this);
  if (local_24 == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


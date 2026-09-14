/* 00035270 | STG::FFileManagerScoped::FFileManagerScoped */

/* STG::FFileManagerScoped::FFileManagerScoped(_JNIEnv*, _jobject*) */

void __thiscall
STG::FFileManagerScoped::FFileManagerScoped
          (FFileManagerScoped *this,_JNIEnv *param_1,_jobject *param_2)

{
  void *pvVar1;
  int iVar2;
  FFileManager *this_00;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  uint local_4c;
  int local_48;
  int local_44 [4];
  int *local_34;
  int *local_30;
  int local_2c;
  
  iVar3 = DAT_00035420 + 0x35288;
  piVar5 = *(int **)(iVar3 + DAT_00035424);
  local_2c = *piVar5;
  *(_JNIEnv **)this = param_1;
  puVar4 = *(uint **)(iVar3 + DAT_00035428);
  if ((*puVar4 & 1) == 0) {
    iVar2 = thunk_FUN_00074338(puVar4);
    this_00 = *(FFileManager **)(iVar3 + DAT_0003542c);
    iVar6 = *(int *)(iVar3 + DAT_00035430);
    if (iVar2 != 0) {
      *(FFileManager **)(this_00 + 0x34) = this_00 + 0x24;
      *(FFileManager **)(this_00 + 0x38) = this_00 + 0x24;
      iVar2 = DAT_00035438;
      *(int *)(this_00 + 4) = iVar6 + 8;
      *(FFileManager **)(this_00 + 0x18) = this_00 + 8;
      *(FFileManager **)(this_00 + 0x1c) = this_00 + 8;
      *(int *)(this_00 + 0x20) = iVar6 + 8;
      this_00[8] = (FFileManager)0x0;
      this_00[0x24] = (FFileManager)0x0;
      iVar2 = *(int *)(iVar3 + iVar2);
      *(int *)(this_00 + 0x3c) = 0;
      *(int *)this_00 = iVar2 + 8;
      *(int *)(this_00 + 0x40) = 0;
      thunk_FUN_000743a0(puVar4);
      __aeabi_atexit(this_00,*(undefined4 *)(iVar3 + DAT_0003543c),
                     *(undefined4 *)(iVar3 + DAT_00035440));
    }
  }
  else {
    this_00 = *(FFileManager **)(iVar3 + DAT_0003542c);
    iVar6 = *(int *)(iVar3 + DAT_00035430);
  }
  iVar6 = iVar6 + 8;
  local_4c = 0x11;
  local_48 = iVar6;
  local_34 = local_44;
  local_30 = local_44;
  local_34 = (int *)std::__node_alloc::_M_allocate(&local_4c);
  local_44[0] = (int)local_34 + local_4c;
  local_30 = local_34;
  pvVar1 = memcpy(local_34,(void *)(DAT_00035434 + 0x35300),0x10);
  local_34 = (int *)((int)pvVar1 + 0x10);
  *(undefined1 *)((int)pvVar1 + 0x10) = 0;
  FFileManager::ClearBasePath(this_00);
  FFileManager::AddBasePath(this_00,(UStringBase *)&local_48);
  local_48 = iVar6;
  if ((local_30 != local_44) && (local_30 != (int *)0x0)) {
    if ((uint)(local_44[0] - (int)local_30) < 0x81) {
      std::__node_alloc::_M_deallocate(local_30,local_44[0] - (int)local_30);
    }
    else {
      operator_delete(local_30);
    }
  }
  FFileManager_Android::SetAssetManager((_JNIEnv *)this_00,*(_jobject **)this);
  if (local_2c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


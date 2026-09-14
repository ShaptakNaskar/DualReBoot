/* 00035c80 | STG::FFileManagerScoped::FFileManagerScoped */

/* STG::FFileManagerScoped::FFileManagerScoped(_JNIEnv*, _jobject*) */

void __thiscall
STG::FFileManagerScoped::FFileManagerScoped
          (FFileManagerScoped *this,_JNIEnv *param_1,_jobject *param_2)

{
  char *pcVar1;
  int iVar2;
  int unaff_EBX;
  FFileManager *this_00;
  int iVar3;
  _jobject *p_Var4;
  uint local_34;
  int local_30;
  int local_2c [4];
  int *local_1c;
  int *local_18;
  int local_14;
  
  local_14 = 0x35c8b;
  FUN_0002e044();
  local_14 = **(int **)(unaff_EBX + 0x661ad);
  *(_JNIEnv **)this = param_1;
  pcVar1 = *(char **)(unaff_EBX + 0x661d1);
  if (*pcVar1 == '\0') {
    iVar2 = FUN_00080eb0(pcVar1);
    this_00 = *(FFileManager **)(unaff_EBX + 0x661d5);
    iVar3 = *(int *)(unaff_EBX + 0x661b1);
    if (iVar2 != 0) {
      *(int *)(this_00 + 4) = iVar3 + 8;
      *(int *)(this_00 + 0x20) = iVar3 + 8;
      *(FFileManager **)(this_00 + 0x34) = this_00 + 0x24;
      *(FFileManager **)(this_00 + 0x38) = this_00 + 0x24;
      iVar2 = *(int *)(unaff_EBX + 0x661d9);
      *(FFileManager **)(this_00 + 0x18) = this_00 + 8;
      *(int *)this_00 = iVar2 + 8;
      *(FFileManager **)(this_00 + 0x1c) = this_00 + 8;
      this_00[8] = (FFileManager)0x0;
      this_00[0x24] = (FFileManager)0x0;
      *(int *)(this_00 + 0x3c) = 0;
      *(int *)(this_00 + 0x40) = 0;
      FUN_00080f40(pcVar1);
      __cxa_atexit(*(undefined4 *)(unaff_EBX + 0x661e1),this_00,*(undefined4 *)(unaff_EBX + 0x661dd)
                  );
    }
  }
  else {
    this_00 = *(FFileManager **)(unaff_EBX + 0x661d5);
    iVar3 = *(int *)(unaff_EBX + 0x661b1);
  }
  iVar3 = iVar3 + 8;
  local_34 = 0x11;
  local_30 = iVar3;
  local_1c = local_2c;
  local_18 = local_2c;
  local_18 = (int *)std::__node_alloc::_M_allocate(&local_34);
  local_2c[0] = local_34 + (int)local_18;
  *local_18 = 0x72646e61;
  local_18[1] = 0x3a64696f;
  local_18[2] = 0x7373612f;
  local_18[3] = 0x2f737465;
  local_1c = local_18 + 4;
  *(undefined1 *)(local_18 + 4) = 0;
  FFileManager::ClearBasePath(this_00);
  FFileManager::AddBasePath(this_00,(UStringBase *)&local_30);
  local_30 = iVar3;
  if ((local_18 != local_2c) && (local_18 != (int *)0x0)) {
    if ((uint)(local_2c[0] - (int)local_18) < 0x81) {
      std::__node_alloc::_M_deallocate(local_18,local_2c[0] - (int)local_18);
    }
    else {
      operator_delete(local_18);
    }
  }
  p_Var4 = *(_jobject **)this;
  FFileManager_Android::SetAssetManager((_JNIEnv *)this_00,p_Var4);
  if (local_14 == **(int **)(unaff_EBX + 0x661ad)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000(this_00,p_Var4,param_2);
}


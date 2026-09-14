/* 00030898 | STG::FFileManager::GetBasePath */

/* STG::FFileManager::GetBasePath() const */

void STG::FFileManager::GetBasePath(void)

{
  string *psVar1;
  string *__src;
  int *in_r0;
  string *__dest;
  int in_r1;
  uint uVar2;
  size_t sVar3;
  string *this;
  int *piVar4;
  int iVar5;
  void *pvVar6;
  char *__s;
  void *pvVar7;
  uint local_4c;
  int local_48;
  string *local_44 [4];
  string *local_34;
  string *local_30;
  int local_2c;
  
  pvVar6 = *(void **)(in_r1 + 0x1c);
  pvVar7 = *(void **)(in_r1 + 0x18);
  piVar4 = *(int **)(DAT_00030a88 + 0x308b4);
  local_2c = *piVar4;
  iVar5 = *(int *)(DAT_00030a8c + 0x308c4);
  sVar3 = (int)pvVar7 - (int)pvVar6;
  local_48 = iVar5 + 8;
  uVar2 = sVar3 + 1;
  local_34 = (string *)local_44;
  local_30 = (string *)local_44;
  if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__stl_throw_length_error((char *)(DAT_00030a98 + 0x30a5c));
  }
  if (0x10 < uVar2) {
    local_4c = uVar2;
    if (uVar2 < 0x81) {
      local_34 = (string *)std::__node_alloc::_M_allocate(&local_4c);
    }
    else {
      local_34 = operator_new(uVar2);
    }
    local_44[0] = local_34 + local_4c;
  }
  local_30 = local_34;
  if (pvVar6 != pvVar7) {
    pvVar6 = memcpy(local_34,pvVar6,sVar3);
    local_34 = (string *)((int)pvVar6 + sVar3);
  }
  *local_34 = (string)0x0;
  std::string::_M_append
            ((string *)local_44,(char *)(DAT_00030a90 + 0x30948),(char *)(DAT_00030a90 + 0x30949));
  __src = local_30;
  psVar1 = local_34;
  sVar3 = (int)local_34 - (int)local_30;
  this = (string *)(in_r0 + 1);
  *in_r0 = iVar5 + 8;
  uVar2 = sVar3 + 1;
  in_r0[5] = (int)this;
  in_r0[6] = (int)this;
  if (uVar2 != 0) {
    __dest = this;
    if (0x10 < uVar2) {
      local_4c = uVar2;
      if (uVar2 < 0x81) {
        __dest = (string *)std::__node_alloc::_M_allocate(&local_4c);
      }
      else {
        __dest = operator_new(uVar2);
      }
      in_r0[6] = (int)__dest;
      in_r0[5] = (int)__dest;
      in_r0[1] = (int)(__dest + local_4c);
    }
    if (__src != psVar1) {
      pvVar6 = memcpy(__dest,__src,sVar3);
      __dest = (string *)((int)pvVar6 + sVar3);
    }
    in_r0[5] = (int)__dest;
    *__dest = (string)0x0;
    __s = *(char **)(in_r1 + 0x38);
    iVar5 = iVar5 + 8;
    sVar3 = strlen(__s);
    std::string::_M_append(this,__s,__s + sVar3);
    local_48 = iVar5;
    if ((local_30 != (string *)local_44) && (local_30 != (string *)0x0)) {
      if ((uint)((int)local_44[0] - (int)local_30) < 0x81) {
        std::__node_alloc::_M_deallocate(local_30,(int)local_44[0] - (int)local_30);
      }
      else {
        operator_delete(local_30);
      }
    }
    if (local_2c == *piVar4) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  std::__stl_throw_length_error((char *)(DAT_00030a94 + 0x30a50));
}


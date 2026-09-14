/* 0002fdd0 | STG::FFileManager::GetBasePath */

/* STG::FFileManager::GetBasePath() const */

int * STG::FFileManager::GetBasePath(void)

{
  string *this;
  void *__src;
  char *__s;
  string *psVar1;
  string *__src_00;
  void *pvVar2;
  string *__dest;
  size_t sVar3;
  uint uVar4;
  int unaff_EBX;
  int *in_stack_00000004;
  int in_stack_00000008;
  uint local_40 [4];
  int local_30;
  string *local_2c [4];
  string *local_1c;
  string *local_18;
  int local_14;
  
  local_14 = 0x2fddb;
  FUN_0002e044();
  local_14 = **(int **)(unaff_EBX + 0x6c05d);
  local_30 = *(int *)(unaff_EBX + 0x6c061) + 8;
  pvVar2 = *(void **)(in_stack_00000008 + 0x18);
  __src = *(void **)(in_stack_00000008 + 0x1c);
  sVar3 = (int)pvVar2 - (int)__src;
  uVar4 = sVar3 + 1;
  local_1c = (string *)local_2c;
  local_18 = (string *)local_2c;
  if (uVar4 != 0) {
    if (0x10 < uVar4) {
      local_40[0] = uVar4;
      if (uVar4 < 0x81) {
        local_1c = (string *)std::__node_alloc::_M_allocate(local_40);
      }
      else {
        local_1c = operator_new(uVar4);
      }
      local_2c[0] = local_1c + local_40[0];
    }
    local_18 = local_1c;
    if (pvVar2 != __src) {
      pvVar2 = memcpy(local_1c,__src,sVar3);
      local_1c = (string *)((int)pvVar2 + sVar3);
    }
    *local_1c = (string)0x0;
    std::string::_M_append
              ((string *)local_2c,(char *)(unaff_EBX + 0x5753e),(char *)(unaff_EBX + 0x5753f));
    __src_00 = local_18;
    psVar1 = local_1c;
    sVar3 = (int)local_1c - (int)local_18;
    uVar4 = sVar3 + 1;
    this = (string *)(in_stack_00000004 + 1);
    *in_stack_00000004 = *(int *)(unaff_EBX + 0x6c061) + 8;
    in_stack_00000004[5] = (int)this;
    in_stack_00000004[6] = (int)this;
    if (uVar4 != 0) {
      __dest = this;
      if (0x10 < uVar4) {
        local_40[0] = uVar4;
        if (uVar4 < 0x81) {
          __dest = (string *)std::__node_alloc::_M_allocate(local_40);
        }
        else {
          __dest = operator_new(uVar4);
        }
        in_stack_00000004[6] = (int)__dest;
        in_stack_00000004[5] = (int)__dest;
        in_stack_00000004[1] = (int)(__dest + local_40[0]);
      }
      if (psVar1 != __src_00) {
        pvVar2 = memcpy(__dest,__src_00,sVar3);
        __dest = (string *)((int)pvVar2 + sVar3);
      }
      in_stack_00000004[5] = (int)__dest;
      *__dest = (string)0x0;
      __s = *(char **)(in_stack_00000008 + 0x38);
      sVar3 = strlen(__s);
      std::string::_M_append(this,__s,__s + sVar3);
      local_30 = *(int *)(unaff_EBX + 0x6c061) + 8;
      if ((local_18 != (string *)local_2c) && (local_18 != (string *)0x0)) {
        if ((uint)((int)local_2c[0] - (int)local_18) < 0x81) {
          std::__node_alloc::_M_deallocate(local_18,(int)local_2c[0] - (int)local_18);
        }
        else {
          operator_delete(local_18);
        }
      }
      if (local_14 == **(int **)(unaff_EBX + 0x6c05d)) {
        return in_stack_00000004;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0002e000();
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__stl_throw_length_error((char *)(unaff_EBX + 0x57531));
}


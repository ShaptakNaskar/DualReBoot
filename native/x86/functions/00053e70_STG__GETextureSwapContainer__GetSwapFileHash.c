/* 00053e70 | STG::GETextureSwapContainer::GetSwapFileHash */

/* STG::GETextureSwapContainer::GetSwapFileHash(unsigned long) const */

ulong STG::GETextureSwapContainer::GetSwapFileHash(ulong param_1)

{
  int iVar1;
  char *__s;
  size_t sVar2;
  string *this;
  undefined4 uVar3;
  uint uVar4;
  int unaff_EBX;
  int in_stack_00000008;
  int in_stack_0000000c;
  int local_2c;
  undefined1 local_28;
  string local_27 [11];
  string *local_1c;
  string *local_18;
  int local_14;
  
  local_14 = 0x53e7b;
  FUN_0002e044();
  local_2c = 0x70617773;
  local_28 = 0x2f;
  local_14 = **(int **)(unaff_EBX + 0x47fbd);
  iVar1 = *(int *)(unaff_EBX + 0x47fc1);
  local_27[0] = (string)0x0;
  local_1c = local_27;
  __s = *(char **)(in_stack_0000000c * 0x34 + *(int *)(in_stack_00000008 + 4) + 0x18);
  local_18 = (string *)&local_2c;
  sVar2 = strlen(__s);
  std::string::_M_append((string *)&local_2c,__s,__s + sVar2);
  this = (string *)(param_1 + 4);
  uVar4 = 0;
  *(int *)param_1 = iVar1 + 8;
  *(string **)(param_1 + 0x14) = this;
  *(string **)(param_1 + 0x18) = this;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  if (this != (string *)&local_2c) {
    if (local_1c != local_18) {
      std::string::_M_append(this,(char *)local_18,(char *)local_1c);
      this = *(string **)(param_1 + 0x18);
      uVar4 = *(int *)(param_1 + 0x14) - (int)this;
    }
  }
  uVar3 = UStringBaseHash_Internal((uchar *)this,uVar4);
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  if ((local_18 != (string *)&local_2c) && (local_18 != (string *)0x0)) {
    if ((uint)(local_2c - (int)local_18) < 0x81) {
      std::__node_alloc::_M_deallocate(local_18,local_2c - (int)local_18);
    }
    else {
      operator_delete(local_18);
    }
  }
  if (local_14 == **(int **)(unaff_EBX + 0x47fbd)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}


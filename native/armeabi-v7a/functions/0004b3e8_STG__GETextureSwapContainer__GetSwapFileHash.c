/* 0004b3e8 | STG::GETextureSwapContainer::GetSwapFileHash */

/* STG::GETextureSwapContainer::GetSwapFileHash(unsigned long) const */

void STG::GETextureSwapContainer::GetSwapFileHash(ulong param_1)

{
  size_t sVar1;
  string *this;
  undefined4 uVar2;
  int in_r1;
  uint uVar3;
  int in_r2;
  int *piVar4;
  int iVar5;
  char *__s;
  int local_3c;
  undefined1 local_38;
  string local_37 [11];
  string *local_2c;
  string *local_28;
  int local_24;
  
  piVar4 = *(int **)(DAT_0004b518 + 0x4b408);
  local_24 = *piVar4;
  iVar5 = *(int *)(DAT_0004b520 + 0x4b42c);
  local_3c = *(int *)(DAT_0004b51c + 0x4b420);
  local_2c = local_37;
  local_37[0] = (string)0x0;
  __s = *(char **)(in_r2 * 0x34 + *(int *)(in_r1 + 4) + 0x18);
  local_38 = (undefined1)*(undefined4 *)(DAT_0004b51c + 0x4b424);
  local_28 = (string *)&local_3c;
  sVar1 = strlen(__s);
  std::string::_M_append((string *)&local_3c,__s,__s + sVar1);
  this = (string *)(param_1 + 4);
  *(int *)param_1 = iVar5 + 8;
  *(string **)(param_1 + 0x14) = this;
  *(string **)(param_1 + 0x18) = this;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  if (this != (string *)&local_3c) {
    if (local_28 != local_2c) {
      std::string::_M_append(this,(char *)local_28,(char *)local_2c);
      this = *(string **)(param_1 + 0x18);
      uVar3 = *(int *)(param_1 + 0x14) - (int)this;
      goto LAB_0004b4a0;
    }
  }
  uVar3 = 0;
LAB_0004b4a0:
  uVar2 = UStringBaseHash_Internal((uchar *)this,uVar3);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  if ((local_28 != (string *)&local_3c) && (local_28 != (string *)0x0)) {
    if ((uint)(local_3c - (int)local_28) < 0x81) {
      std::__node_alloc::_M_deallocate(local_28,local_3c - (int)local_28);
    }
    else {
      operator_delete(local_28);
    }
  }
  if (local_24 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


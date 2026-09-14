/* 000307a0 | STG::FFileManager::NormalizePath */

/* STG::FFileManager::NormalizePath(STG::UStringBase<char, int> const&, STG::UStringBase<char,
   int>&) const */

void __thiscall
STG::FFileManager::NormalizePath(FFileManager *this,UStringBase *param_1,UStringBase *param_2)

{
  string *this_00;
  void *__src;
  uint *puVar1;
  char cVar2;
  char *__dest;
  size_t sVar3;
  uint __n;
  uint __n_00;
  char *pcVar4;
  int iVar5;
  int unaff_EBX;
  char *pcVar6;
  int local_90;
  undefined4 local_8c;
  int local_7c;
  undefined4 *local_78;
  int local_70;
  undefined4 local_6c;
  int local_5c;
  char *local_58;
  int local_50;
  uint local_4c [4];
  uint *local_3c;
  uint *local_38;
  int local_30;
  uint local_2c [4];
  uint *local_1c;
  uint *local_18;
  int local_14;
  
  local_14 = 0x307ab;
  FUN_0002e044();
  local_14 = **(int **)(unaff_EBX + 0x6b68d);
  this_00 = (string *)(param_2 + 4);
  if (this_00 != (string *)(param_1 + 4)) {
    pcVar4 = *(char **)(param_1 + 0x14);
    pcVar6 = *(char **)(param_2 + 0x14);
    __src = *(void **)(param_1 + 0x18);
    __n_00 = (int)pcVar4 - (int)__src;
    __dest = *(char **)(param_2 + 0x18);
    __n = (int)pcVar6 - (int)__dest;
    if (__n_00 <= __n) {
      if (__n_00 != 0) {
        memmove(__dest,__src,__n_00);
        pcVar6 = *(char **)(param_2 + 0x14);
        __dest = *(char **)(param_2 + 0x18);
      }
      pcVar4 = __dest + __n_00;
      if (pcVar4 != pcVar6) {
        *pcVar4 = *pcVar6;
        __dest = *(char **)(param_2 + 0x18);
        pcVar6 = pcVar4 + (*(int *)(param_2 + 0x14) - (int)pcVar6);
        *(char **)(param_2 + 0x14) = pcVar6;
      }
      goto joined_r0x0003087a;
    }
    iVar5 = 0;
    if (__n != 0) {
      memmove(__dest,__src,__n);
      iVar5 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
    }
    std::string::_M_append(this_00,(char *)(iVar5 + (int)__src),pcVar4);
  }
  __dest = *(char **)(param_2 + 0x18);
  pcVar6 = *(char **)(param_2 + 0x14);
joined_r0x0003087a:
  for (; __dest != pcVar6; __dest = __dest + 1) {
    cVar2 = *__dest;
    if ((uint)(int)cVar2 < 0x100) {
      cVar2 = (char)*(undefined2 *)(**(int **)(unaff_EBX + 0x6b6a9) + 2 + cVar2 * 2);
    }
    *__dest = cVar2;
  }
  local_6c = CONCAT22(local_6c._2_2_,0x2f);
  local_90 = *(int *)(unaff_EBX + 0x6b691) + 8;
  local_8c = CONCAT22(local_8c._2_2_,0x5c);
  local_5c = (int)&local_6c + 1;
  local_7c = (int)&local_8c + 1;
  local_4c[0] = local_4c[0] & 0xffffff00;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_78 = &local_8c;
  local_70 = local_90;
  local_58 = (char *)&local_6c;
  local_50 = local_90;
  local_3c = local_4c;
  local_38 = local_4c;
  local_30 = local_90;
  local_1c = local_2c;
  local_18 = local_2c;
  while (cVar2 = UStringBase<char,int>::Find_FromEnd
                           ((UStringBase<char,int> *)param_2,(UStringBase *)&local_90,
                            (UStringBase *)&local_50,(UStringBase *)&local_30), puVar1 = local_38,
        cVar2 != '\0') {
    if (*(undefined1 **)(param_2 + 0x18) != *(undefined1 **)(param_2 + 0x14)) {
      **(undefined1 **)(param_2 + 0x18) = 0;
      *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_2 + 0x18);
    }
    sVar3 = strlen((char *)local_38);
    std::string::_M_append(this_00,(char *)puVar1,(char *)((int)puVar1 + sVar3));
    pcVar4 = local_58;
    sVar3 = strlen(local_58);
    std::string::_M_append(this_00,pcVar4,pcVar4 + sVar3);
    puVar1 = local_18;
    sVar3 = strlen((char *)local_18);
    std::string::_M_append(this_00,(char *)puVar1,(char *)((int)puVar1 + sVar3));
  }
  local_30 = *(int *)(unaff_EBX + 0x6b691) + 8;
  if ((local_18 != local_2c) && (local_18 != (uint *)0x0)) {
    if (local_2c[0] - (int)local_18 < 0x81) {
      std::__node_alloc::_M_deallocate(local_18,local_2c[0] - (int)local_18);
    }
    else {
      operator_delete(local_18);
    }
  }
  local_50 = *(int *)(unaff_EBX + 0x6b691) + 8;
  if ((local_38 != local_4c) && (local_38 != (uint *)0x0)) {
    if (local_4c[0] - (int)local_38 < 0x81) {
      std::__node_alloc::_M_deallocate(local_38,local_4c[0] - (int)local_38);
    }
    else {
      operator_delete(local_38);
    }
  }
  local_90 = *(int *)(unaff_EBX + 0x6b691) + 8;
  if ((local_78 != &local_8c) && (local_78 != (undefined4 *)0x0)) {
    if ((uint)(local_8c - (int)local_78) < 0x81) {
      std::__node_alloc::_M_deallocate(local_78,local_8c - (int)local_78);
    }
    else {
      operator_delete(local_78);
    }
  }
  local_70 = *(int *)(unaff_EBX + 0x6b691) + 8;
  if ((local_58 != (char *)&local_6c) && (local_58 != (char *)0x0)) {
    if ((uint)(local_6c - (int)local_58) < 0x81) {
      std::__node_alloc::_M_deallocate(local_58,local_6c - (int)local_58);
    }
    else {
      operator_delete(local_58);
    }
  }
  if (local_14 != **(int **)(unaff_EBX + 0x6b68d)) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e000();
  }
  return;
}


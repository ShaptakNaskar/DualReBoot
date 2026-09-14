/* 000308e0 | STG::FFileManager::NormalizePath */

/* STG::FFileManager::NormalizePath(STG::UStringBase<char, int> const&, STG::UStringBase<char,
   int>&) const */

void __thiscall
STG::FFileManager::NormalizePath(FFileManager *this,UStringBase *param_1,UStringBase *param_2)

{
  uint *puVar1;
  byte *__dest;
  int iVar2;
  byte *pbVar3;
  size_t sVar4;
  byte *pbVar5;
  string *this_00;
  uint __n;
  void *__src;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  int local_9c;
  undefined4 local_98;
  int local_88;
  undefined4 *local_84;
  int local_80;
  undefined4 local_7c;
  int local_6c;
  char *local_68;
  int local_64;
  uint local_60 [4];
  uint *local_50;
  uint *local_4c;
  int local_48;
  uint local_44 [4];
  uint *local_34;
  uint *local_30;
  int local_2c;
  
  this_00 = (string *)(param_2 + 4);
  piVar7 = *(int **)(DAT_00030bf0 + 0x30900);
  local_2c = *piVar7;
  if (this_00 != (string *)(param_1 + 4)) {
    __src = *(void **)(param_1 + 0x18);
    pcVar8 = *(char **)(param_1 + 0x14);
    __dest = *(byte **)(param_2 + 0x18);
    pbVar3 = *(byte **)(param_2 + 0x14);
    __n = (int)pcVar8 - (int)__src;
    sVar4 = (int)pbVar3 - (int)__dest;
    if (__n <= sVar4) {
      if (__n != 0) {
        memmove(__dest,__src,__n);
        __dest = *(byte **)(param_2 + 0x18);
        pbVar3 = *(byte **)(param_2 + 0x14);
      }
      pbVar5 = __dest + __n;
      if (pbVar5 != pbVar3) {
        __dest[__n] = *pbVar3;
        __dest = *(byte **)(param_2 + 0x18);
        pbVar3 = pbVar5 + (*(int *)(param_2 + 0x14) - (int)pbVar3);
        *(byte **)(param_2 + 0x14) = pbVar3;
      }
      goto LAB_00030994;
    }
    iVar6 = 0;
    if (sVar4 != 0) {
      memmove(__dest,__src,sVar4);
      iVar6 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
    }
    std::string::_M_append(this_00,(char *)((int)__src + iVar6),pcVar8);
  }
  __dest = *(byte **)(param_2 + 0x18);
  pbVar3 = *(byte **)(param_2 + 0x14);
LAB_00030994:
  if (pbVar3 != __dest) {
    piVar9 = *(int **)(DAT_00030bf4 + 0x309a8);
    do {
      pbVar5 = __dest + 1;
      *__dest = (byte)*(undefined2 *)(*piVar9 + (uint)*__dest * 2 + 2);
      __dest = pbVar5;
    } while (pbVar5 != pbVar3);
  }
  iVar6 = *(int *)(DAT_00030bf8 + 0x309d8);
  local_9c = iVar6 + 8;
  local_88 = (int)&local_98 + 1;
  local_98 = CONCAT22(local_98._2_2_,0x5c);
  local_68 = (char *)&local_7c;
  local_7c = (uint)local_7c._2_2_ << 0x10;
  local_7c = CONCAT31(local_7c._1_3_,0x2f);
  local_6c = (int)&local_7c + 1;
  local_60[0] = local_60[0] & 0xffffff00;
  local_44[0] = local_44[0] & 0xffffff00;
  local_84 = &local_98;
  local_80 = local_9c;
  local_64 = local_9c;
  local_50 = local_60;
  local_4c = local_60;
  local_48 = local_9c;
  local_34 = local_44;
  local_30 = local_44;
  while (iVar2 = UStringBase<char,int>::Find_FromEnd
                           ((UStringBase<char,int> *)param_2,(UStringBase *)&local_9c,
                            (UStringBase *)&local_64,(UStringBase *)&local_48), puVar1 = local_4c,
        iVar2 != 0) {
    if (*(undefined1 **)(param_2 + 0x18) != *(undefined1 **)(param_2 + 0x14)) {
      **(undefined1 **)(param_2 + 0x18) = 0;
      *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_2 + 0x18);
    }
    sVar4 = strlen((char *)local_4c);
    std::string::_M_append(this_00,(char *)puVar1,(char *)((int)puVar1 + sVar4));
    pcVar8 = local_68;
    sVar4 = strlen(local_68);
    std::string::_M_append(this_00,pcVar8,pcVar8 + sVar4);
    puVar1 = local_30;
    sVar4 = strlen((char *)local_30);
    std::string::_M_append(this_00,(char *)puVar1,(char *)((int)puVar1 + sVar4));
  }
  local_48 = iVar6 + 8;
  if ((local_30 != local_44) && (local_30 != (uint *)0x0)) {
    if (local_44[0] - (int)local_30 < 0x81) {
      std::__node_alloc::_M_deallocate(local_30,local_44[0] - (int)local_30);
    }
    else {
      operator_delete(local_30);
    }
  }
  local_64 = iVar6 + 8;
  if ((local_4c != local_60) && (local_4c != (uint *)0x0)) {
    if (local_60[0] - (int)local_4c < 0x81) {
      std::__node_alloc::_M_deallocate(local_4c,local_60[0] - (int)local_4c);
    }
    else {
      operator_delete(local_4c);
    }
  }
  local_80 = iVar6 + 8;
  if ((local_68 != (char *)&local_7c) && (local_68 != (char *)0x0)) {
    if ((uint)(local_7c - (int)local_68) < 0x81) {
      std::__node_alloc::_M_deallocate(local_68,local_7c - (int)local_68);
    }
    else {
      operator_delete(local_68);
    }
  }
  local_9c = iVar6 + 8;
  if ((local_84 != &local_98) && (local_84 != (undefined4 *)0x0)) {
    if ((uint)(local_98 - (int)local_84) < 0x81) {
      std::__node_alloc::_M_deallocate(local_84,local_98 - (int)local_84);
    }
    else {
      operator_delete(local_84);
    }
  }
  if (local_2c == *piVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


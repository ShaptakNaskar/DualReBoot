/* 00035070 | STG::FFileManager::BuildFileHash */

/* STG::FFileManager::BuildFileHash(STG::UStringBase<char, int> const&, STG::FFileHash&) const */

undefined1 STG::FFileManager::BuildFileHash(UStringBase *param_1,FFileHash *param_2)

{
  UStringBase *pUVar1;
  FFileManager *this;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  string *psVar5;
  string *psVar6;
  char cVar7;
  uint __n;
  undefined4 *extraout_ECX;
  uint __n_00;
  undefined1 *puVar8;
  int iVar9;
  int unaff_EBX;
  undefined1 *local_fc;
  void *local_f8;
  int local_cc [5];
  int *local_b8;
  int local_b0;
  uint local_ac [4];
  uint *local_9c;
  uint *local_98;
  int local_90;
  uint local_8c [4];
  uint *local_7c;
  uint *local_78;
  int local_70;
  uint local_6c [4];
  uint *local_5c;
  uint *local_58;
  int local_50;
  uint local_4c [4];
  string *local_3c;
  string *local_38;
  undefined4 local_34;
  int local_24;
  undefined4 local_18;
  
  local_18 = 0x3508b;
  FUN_0002e044();
  pUVar1 = (UStringBase *)extraout_ECX[1];
  this = (FFileManager *)*extraout_ECX;
  iVar2 = extraout_ECX[2];
  local_24 = **(int **)(unaff_EBX + 0x66dad);
  GetBasePath();
  iVar3 = *(int *)(unaff_EBX + 0x66db1);
  local_ac[0] = local_ac[0] & 0xffffff00;
  iVar9 = iVar3 + 8;
  local_b0 = iVar9;
  local_9c = local_ac;
  local_98 = local_ac;
  cVar7 = BuildPath(this,pUVar1,(UStringBase *)&local_b0);
  uVar4 = 0;
  if (cVar7 == '\0') goto LAB_00035132;
  local_8c[0] = local_8c[0] & 0xffffff00;
  local_6c[0] = local_6c[0] & 0xffffff00;
  local_90 = iVar9;
  local_7c = local_8c;
  local_78 = local_8c;
  local_70 = iVar9;
  local_5c = local_6c;
  local_58 = local_6c;
  cVar7 = FUN_00030b60(&local_90,&local_70);
  if (((cVar7 != '\0') && (local_78 == local_7c)) && (local_58 != local_5c)) {
    local_4c[0] = local_4c[0] & 0xffffff00;
    local_34 = 0xffffffff;
    local_50 = iVar9;
    local_3c = (string *)local_4c;
    local_38 = (string *)local_4c;
    std::string::_M_append((string *)local_4c,(char *)local_58,(char *)local_5c);
    local_34 = UStringBaseHash_Internal((uchar *)local_38,(int)local_3c - (int)local_38);
    psVar6 = local_38;
    psVar5 = local_3c;
    local_fc = *(undefined1 **)(iVar2 + 0x14);
    __n_00 = (int)local_3c - (int)local_38;
    local_f8 = *(void **)(iVar2 + 0x18);
    __n = (int)local_fc - (int)local_f8;
    if (__n < __n_00) {
      iVar9 = 0;
      if (__n != 0) {
        memmove(local_f8,local_38,__n);
        iVar9 = *(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 0x18);
      }
      std::string::_M_append((string *)(iVar2 + 4),(char *)(psVar6 + iVar9),(char *)psVar5);
    }
    else {
      if (__n_00 != 0) {
        memmove(local_f8,local_38,__n_00);
        local_fc = *(undefined1 **)(iVar2 + 0x14);
        local_f8 = *(void **)(iVar2 + 0x18);
      }
      puVar8 = (undefined1 *)(__n_00 + (int)local_f8);
      if (puVar8 != local_fc) {
        *puVar8 = *local_fc;
        *(int *)(iVar2 + 0x14) = (int)(puVar8 + (*(int *)(iVar2 + 0x14) - (int)local_fc));
      }
    }
    *(undefined4 *)(iVar2 + 0x1c) = local_34;
    local_50 = iVar3 + 8;
    if ((local_38 != (string *)local_4c) && (local_38 != (string *)0x0)) {
      if (0x80 < local_4c[0] - (int)local_38) {
        operator_delete(local_38);
        uVar4 = 1;
        goto LAB_0003525b;
      }
      std::__node_alloc::_M_deallocate(local_38,local_4c[0] - (int)local_38);
    }
    uVar4 = 1;
  }
LAB_0003525b:
  local_70 = iVar3 + 8;
  if ((local_58 != local_6c) && (local_58 != (uint *)0x0)) {
    if (local_6c[0] - (int)local_58 < 0x81) {
      std::__node_alloc::_M_deallocate(local_58,local_6c[0] - (int)local_58);
    }
    else {
      operator_delete(local_58);
    }
  }
  local_90 = iVar3 + 8;
  if ((local_78 != local_8c) && (local_78 != (uint *)0x0)) {
    if (local_8c[0] - (int)local_78 < 0x81) {
      std::__node_alloc::_M_deallocate(local_78,local_8c[0] - (int)local_78);
    }
    else {
      operator_delete(local_78);
    }
  }
LAB_00035132:
  local_b0 = iVar3 + 8;
  if ((local_98 != local_ac) && (local_98 != (uint *)0x0)) {
    if (local_ac[0] - (int)local_98 < 0x81) {
      std::__node_alloc::_M_deallocate(local_98,local_ac[0] - (int)local_98);
    }
    else {
      operator_delete(local_98);
    }
  }
  if ((local_b8 != local_cc) && (local_b8 != (int *)0x0)) {
    if ((uint)(local_cc[0] - (int)local_b8) < 0x81) {
      std::__node_alloc::_M_deallocate(local_b8,local_cc[0] - (int)local_b8);
    }
    else {
      operator_delete(local_b8);
    }
  }
  if (local_24 != **(int **)(unaff_EBX + 0x66dad)) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e000();
  }
  return uVar4;
}


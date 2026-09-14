/* 00066060 | STG::UPreferenceBase::GenerateDefaultKey */

/* STG::UPreferenceBase::GenerateDefaultKey() */

void __thiscall STG::UPreferenceBase::GenerateDefaultKey(UPreferenceBase *this)

{
  uint *puVar1;
  uint *__src;
  string *psVar2;
  string *psVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  size_t sVar14;
  UStringBase<char,int> *this_00;
  string *this_01;
  char *__s;
  byte *pbVar15;
  uint local_f4;
  int local_f0;
  uint local_ec [4];
  uint *local_dc;
  uint *local_d8;
  int local_d4;
  string *local_d0 [4];
  string *local_c0;
  string *local_bc;
  int local_b8;
  uint local_b4 [4];
  uint *local_a4;
  uint *local_a0;
  int local_9c;
  undefined4 local_98;
  int local_88;
  undefined4 *local_84;
  int local_80;
  undefined4 local_7c;
  int local_6c;
  undefined4 *local_68;
  int local_64;
  undefined4 local_60;
  int local_50;
  undefined4 *local_4c;
  int local_48;
  undefined4 local_44;
  int local_34;
  undefined4 *local_30;
  int local_2c;
  
  piVar12 = *(int **)(DAT_00066530 + 0x66078);
  local_2c = *piVar12;
  iVar11 = *(int *)(DAT_00066534 + 0x66088);
  iVar13 = iVar11 + 8;
  local_ec[0] = local_ec[0] & 0xffffff00;
  local_f0 = iVar13;
  local_dc = local_ec;
  local_d8 = local_ec;
  (**(code **)(*(int *)this + 0x10))();
  __src = local_d8;
  puVar1 = local_dc;
  sVar14 = (int)local_dc - (int)local_d8;
  uVar4 = sVar14 + 1;
  local_c0 = (string *)local_d0;
  local_d4 = iVar13;
  local_bc = (string *)local_d0;
  if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__stl_throw_length_error((char *)(DAT_00066540 + 0x664ac));
  }
  if (0x10 < uVar4) {
    local_f4 = uVar4;
    if (uVar4 < 0x81) {
      local_c0 = (string *)std::__node_alloc::_M_allocate(&local_f4);
    }
    else {
      local_c0 = operator_new(uVar4);
    }
    local_d0[0] = local_c0 + local_f4;
  }
  local_bc = local_c0;
  if (__src != puVar1) {
    pvVar5 = memcpy(local_c0,__src,sVar14);
    local_c0 = (string *)((int)pvVar5 + sVar14);
  }
  this_00 = (UStringBase<char,int> *)(this + 4);
  *local_c0 = (string)0x0;
  this_01 = (string *)(this + 8);
  std::string::_M_append
            ((string *)local_d0,(char *)(DAT_00066538 + 0x66140),(char *)(DAT_00066538 + 0x66141));
  psVar3 = local_bc;
  psVar2 = local_c0;
  if (this_01 != (string *)local_d0) {
    puVar8 = *(undefined1 **)(this + 0x18);
    pvVar5 = *(void **)(this + 0x1c);
    uVar4 = (int)local_c0 - (int)local_bc;
    sVar14 = (int)puVar8 - (int)pvVar5;
    if (sVar14 < uVar4) {
      iVar13 = 0;
      if (sVar14 != 0) {
        memmove(pvVar5,local_bc,sVar14);
        iVar13 = *(int *)(this + 0x18) - *(int *)(this + 0x1c);
      }
      std::string::_M_append(this_01,(char *)(psVar3 + iVar13),(char *)psVar2);
    }
    else {
      if (uVar4 != 0) {
        memmove(pvVar5,local_bc,uVar4);
        pvVar5 = *(void **)(this + 0x1c);
        puVar8 = *(undefined1 **)(this + 0x18);
      }
      if ((undefined1 *)((int)pvVar5 + uVar4) != puVar8) {
        *(undefined1 *)((int)pvVar5 + uVar4) = *puVar8;
        *(undefined1 **)(this + 0x18) =
             (undefined1 *)((int)pvVar5 + uVar4) + (*(int *)(this + 0x18) - (int)puVar8);
      }
    }
  }
  local_d4 = iVar11 + 8;
  if ((local_bc != (string *)local_d0) && (local_bc != (string *)0x0)) {
    if ((uint)((int)local_d0[0] - (int)local_bc) < 0x81) {
      std::__node_alloc::_M_deallocate(local_bc,(int)local_d0[0] - (int)local_bc);
    }
    else {
      operator_delete(local_bc);
    }
  }
  uVar6 = (**(code **)(*(int *)this + 8))(this,1);
  __s = *(char **)(this + 0x38);
  sVar14 = strlen(__s);
  std::string::_M_append(this_01,__s,__s + sVar14);
  (**(code **)(*(int *)this + 8))(this,uVar6);
  local_b8 = iVar11 + 8;
  local_b4[0] = local_b4[0] & 0xffffff00;
  local_a4 = local_b4;
  local_a0 = local_b4;
  (**(code **)(*(int *)this + 0x14))(this);
  puVar1 = local_a0;
  sVar14 = strlen((char *)local_a0);
  std::string::_M_append(this_01,(char *)puVar1,(char *)((int)puVar1 + sVar14));
  UStringBase<char,int>::Trim(this_00);
  pbVar15 = *(byte **)(this + 0x18);
  if (*(byte **)(this + 0x1c) != pbVar15) {
    piVar7 = *(int **)(DAT_0006653c + 0x662a4);
    pbVar9 = *(byte **)(this + 0x1c);
    do {
      pbVar10 = pbVar9 + 1;
      *pbVar9 = (byte)*(undefined2 *)(*piVar7 + (uint)*pbVar9 * 2 + 2);
      pbVar9 = pbVar10;
    } while (pbVar10 != pbVar15);
  }
  iVar13 = iVar11 + 8;
  local_98 = (uint)local_98._2_2_ << 0x10;
  local_98 = CONCAT31(local_98._1_3_,0x20);
  local_88 = (int)&local_98 + 1;
  local_6c = (int)&local_7c + 1;
  local_7c = CONCAT22(local_7c._2_2_,0x5f);
  local_9c = iVar13;
  local_84 = &local_98;
  local_80 = iVar13;
  local_68 = &local_7c;
  UStringBase<char,int>::Replace(this_00,(UStringBase *)&local_9c,(UStringBase *)&local_80);
  local_80 = iVar13;
  if ((local_68 != &local_7c) && (local_68 != (undefined4 *)0x0)) {
    if ((uint)(local_7c - (int)local_68) < 0x81) {
      std::__node_alloc::_M_deallocate(local_68,local_7c - (int)local_68);
    }
    else {
      operator_delete(local_68);
    }
  }
  local_9c = iVar11 + 8;
  if ((local_84 != &local_98) && (local_84 != (undefined4 *)0x0)) {
    if ((uint)(local_98 - (int)local_84) < 0x81) {
      std::__node_alloc::_M_deallocate(local_84,local_98 - (int)local_84);
    }
    else {
      operator_delete(local_84);
    }
  }
  iVar13 = iVar11 + 8;
  local_60 = (uint)local_60._2_2_ << 0x10;
  local_60 = CONCAT31(local_60._1_3_,0x2c);
  local_50 = (int)&local_60 + 1;
  local_34 = (int)&local_44 + 1;
  local_44 = CONCAT22(local_44._2_2_,0x5f);
  local_64 = iVar13;
  local_4c = &local_60;
  local_48 = iVar13;
  local_30 = &local_44;
  UStringBase<char,int>::Replace(this_00,(UStringBase *)&local_64,(UStringBase *)&local_48);
  local_48 = iVar13;
  if ((local_30 != &local_44) && (local_30 != (undefined4 *)0x0)) {
    if ((uint)(local_44 - (int)local_30) < 0x81) {
      std::__node_alloc::_M_deallocate(local_30,local_44 - (int)local_30);
    }
    else {
      operator_delete(local_30);
    }
  }
  local_64 = iVar11 + 8;
  if ((local_4c != &local_60) && (local_4c != (undefined4 *)0x0)) {
    if ((uint)(local_60 - (int)local_4c) < 0x81) {
      std::__node_alloc::_M_deallocate(local_4c,local_60 - (int)local_4c);
    }
    else {
      operator_delete(local_4c);
    }
  }
  local_b8 = iVar11 + 8;
  if ((local_a0 != local_b4) && (local_a0 != (uint *)0x0)) {
    if (local_b4[0] - (int)local_a0 < 0x81) {
      std::__node_alloc::_M_deallocate(local_a0,local_b4[0] - (int)local_a0);
    }
    else {
      operator_delete(local_a0);
    }
  }
  local_f0 = iVar11 + 8;
  if ((local_d8 != local_ec) && (local_d8 != (uint *)0x0)) {
    if (local_ec[0] - (int)local_d8 < 0x81) {
      std::__node_alloc::_M_deallocate(local_d8,local_ec[0] - (int)local_d8);
    }
    else {
      operator_delete(local_d8);
    }
  }
  if (local_2c == *piVar12) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


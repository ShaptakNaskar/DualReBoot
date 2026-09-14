/* 00033ab0 | STG::FFileManager::AddBasePath */

/* STG::FFileManager::AddBasePath(STG::UStringBase<char, int> const&) */

undefined1 __thiscall STG::FFileManager::AddBasePath(FFileManager *this,UStringBase *param_1)

{
  int iVar1;
  string *psVar2;
  string *psVar3;
  char cVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  void *pvVar8;
  size_t sVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  int iVar13;
  int unaff_EBX;
  int local_90;
  uint local_8c [4];
  string *local_7c;
  string *local_78;
  int local_70;
  uint local_6c [4];
  string *local_5c;
  string *local_58;
  int local_50;
  uint local_4c [4];
  uint *local_3c;
  uint *local_38;
  int local_30;
  uint local_2c [4];
  uint *local_1c;
  uint *local_18;
  int local_14;
  
  local_14 = 0x33abb;
  FUN_0002e044();
  iVar1 = *(int *)(unaff_EBX + 0x68381);
  local_8c[0] = local_8c[0] & 0xffffff00;
  local_14 = **(int **)(&DAT_0006837d + unaff_EBX);
  local_90 = iVar1 + 8;
  local_6c[0] = local_6c[0] & 0xffffff00;
  local_4c[0] = local_4c[0] & 0xffffff00;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_7c = (string *)local_8c;
  local_78 = (string *)local_8c;
  local_70 = local_90;
  local_5c = (string *)local_6c;
  local_58 = (string *)local_6c;
  local_50 = local_90;
  local_3c = local_4c;
  local_38 = local_4c;
  local_30 = local_90;
  local_1c = local_2c;
  local_18 = local_2c;
  GetPathComponents(this,param_1,(UStringBase *)&local_90,(UStringBase *)&local_70,
                    (UStringBase *)&local_50,(UStringBase *)&local_30);
  uVar6 = GetPathFlags(this,(UStringBase *)&local_90,(UStringBase *)&local_70,
                       (UStringBase *)&local_50,(UStringBase *)&local_30);
  cVar4 = HasValidBasePath(this);
  if (cVar4 == '\0') {
    cVar4 = GetIsPathAbsolute(this,uVar6);
    psVar3 = local_78;
    psVar2 = local_7c;
    uVar5 = 0;
    if (cVar4 == '\0') goto LAB_00033c04;
    if ((string *)(this + 8) != (string *)local_8c) {
      uVar11 = (int)local_7c - (int)local_78;
      puVar12 = *(undefined1 **)(this + 0x18);
      pvVar8 = *(void **)(this + 0x1c);
      uVar10 = (int)puVar12 - (int)pvVar8;
      if (uVar10 < uVar11) {
        iVar13 = 0;
        if (uVar10 != 0) {
          memmove(pvVar8,local_78,uVar10);
          iVar13 = *(int *)(this + 0x18) - *(int *)(this + 0x1c);
        }
        std::string::_M_append((string *)(this + 8),(char *)(psVar3 + iVar13),(char *)psVar2);
      }
      else {
        if (uVar11 != 0) {
          memmove(pvVar8,local_78,uVar11);
          puVar12 = *(undefined1 **)(this + 0x18);
          pvVar8 = *(void **)(this + 0x1c);
        }
        puVar7 = (undefined1 *)((int)pvVar8 + uVar11);
        if (puVar7 != puVar12) {
          *puVar7 = *puVar12;
          *(undefined1 **)(this + 0x18) = puVar7 + (*(int *)(this + 0x18) - (int)puVar12);
        }
      }
    }
    psVar3 = local_58;
    psVar2 = local_5c;
    if ((string *)(this + 0x24) != (string *)local_6c) {
      uVar10 = (int)local_5c - (int)local_58;
      puVar12 = *(undefined1 **)(this + 0x34);
      pvVar8 = *(void **)(this + 0x38);
      uVar11 = (int)puVar12 - (int)pvVar8;
      if (uVar11 < uVar10) {
        iVar13 = 0;
        if (uVar11 != 0) {
          memmove(pvVar8,local_58,uVar11);
          iVar13 = *(int *)(this + 0x34) - *(int *)(this + 0x38);
        }
        std::string::_M_append((string *)(this + 0x24),(char *)(psVar3 + iVar13),(char *)psVar2);
      }
      else {
        if (uVar10 != 0) {
          memmove(pvVar8,local_58,uVar10);
          puVar12 = *(undefined1 **)(this + 0x34);
          pvVar8 = *(void **)(this + 0x38);
        }
        puVar7 = (undefined1 *)((int)pvVar8 + uVar10);
        if (puVar12 != puVar7) {
          *puVar7 = *puVar12;
          *(undefined1 **)(this + 0x34) = puVar7 + (*(int *)(this + 0x34) - (int)puVar12);
        }
      }
    }
  }
  else {
    cVar4 = GetIsPathRelative(this,uVar6);
    psVar2 = local_58;
    uVar5 = 0;
    if (cVar4 == '\0') goto LAB_00033c04;
    sVar9 = strlen((char *)local_58);
    std::string::_M_append((string *)(this + 0x24),(char *)psVar2,(char *)(psVar2 + sVar9));
  }
  uVar5 = HasValidBasePath(this);
LAB_00033c04:
  local_30 = iVar1 + 8;
  if ((local_18 != local_2c) && (local_18 != (uint *)0x0)) {
    if (local_2c[0] - (int)local_18 < 0x81) {
      std::__node_alloc::_M_deallocate(local_18,local_2c[0] - (int)local_18);
    }
    else {
      operator_delete(local_18);
    }
  }
  local_50 = iVar1 + 8;
  if ((local_38 != local_4c) && (local_38 != (uint *)0x0)) {
    if (local_4c[0] - (int)local_38 < 0x81) {
      std::__node_alloc::_M_deallocate(local_38,local_4c[0] - (int)local_38);
    }
    else {
      operator_delete(local_38);
    }
  }
  local_70 = iVar1 + 8;
  if ((local_58 != (string *)local_6c) && (local_58 != (string *)0x0)) {
    if (local_6c[0] - (int)local_58 < 0x81) {
      std::__node_alloc::_M_deallocate(local_58,local_6c[0] - (int)local_58);
    }
    else {
      operator_delete(local_58);
    }
  }
  local_90 = iVar1 + 8;
  if ((local_78 != (string *)local_8c) && (local_78 != (string *)0x0)) {
    if (local_8c[0] - (int)local_78 < 0x81) {
      std::__node_alloc::_M_deallocate(local_78,local_8c[0] - (int)local_78);
    }
    else {
      operator_delete(local_78);
    }
  }
  if (local_14 == **(int **)(&DAT_0006837d + unaff_EBX)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}


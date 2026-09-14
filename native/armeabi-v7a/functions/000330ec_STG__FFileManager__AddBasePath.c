/* 000330ec | STG::FFileManager::AddBasePath */

/* STG::FFileManager::AddBasePath(STG::UStringBase<char, int> const&) */

void __thiscall STG::FFileManager::AddBasePath(FFileManager *this,UStringBase *param_1)

{
  string *psVar1;
  string *psVar2;
  ulong uVar3;
  int iVar4;
  void *pvVar5;
  size_t sVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int local_9c;
  uint local_98 [4];
  string *local_88;
  string *local_84;
  int local_80;
  uint local_7c [4];
  string *local_6c;
  string *local_68;
  int local_64;
  uint local_60 [4];
  uint *local_50;
  uint *local_4c;
  int local_48;
  uint local_44 [4];
  uint *local_34;
  uint *local_30;
  int local_2c;
  
  piVar11 = *(int **)(DAT_00033478 + 0x3310c);
  local_2c = *piVar11;
  iVar9 = *(int *)(DAT_0003347c + 0x33120);
  local_9c = iVar9 + 8;
  local_98[0] = local_98[0] & 0xffffff00;
  local_7c[0] = local_7c[0] & 0xffffff00;
  local_60[0] = local_60[0] & 0xffffff00;
  local_44[0] = local_44[0] & 0xffffff00;
  local_88 = (string *)local_98;
  local_50 = local_60;
  local_34 = local_44;
  local_84 = local_88;
  local_80 = local_9c;
  local_6c = (string *)local_7c;
  local_68 = (string *)local_7c;
  local_64 = local_9c;
  local_4c = local_50;
  local_48 = local_9c;
  local_30 = local_34;
  GetPathComponents(this,param_1,(UStringBase *)&local_9c,(UStringBase *)&local_80,
                    (UStringBase *)&local_64,(UStringBase *)&local_48);
  uVar3 = GetPathFlags(this,(UStringBase *)&local_9c,(UStringBase *)&local_80,
                       (UStringBase *)&local_64,(UStringBase *)&local_48);
  iVar4 = HasValidBasePath(this);
  if (iVar4 == 0) {
    iVar4 = GetIsPathAbsolute(this,uVar3);
    psVar2 = local_84;
    psVar1 = local_88;
    if (iVar4 != 0) {
      if ((string *)(this + 8) != (string *)local_98) {
        puVar8 = *(undefined1 **)(this + 0x18);
        pvVar5 = *(void **)(this + 0x1c);
        uVar10 = (int)local_88 - (int)local_84;
        sVar6 = (int)puVar8 - (int)pvVar5;
        if (sVar6 < uVar10) {
          iVar4 = 0;
          if (sVar6 != 0) {
            memmove(pvVar5,local_84,sVar6);
            iVar4 = *(int *)(this + 0x18) - *(int *)(this + 0x1c);
          }
          std::string::_M_append((string *)(this + 8),(char *)(psVar2 + iVar4),(char *)psVar1);
        }
        else {
          if (uVar10 != 0) {
            memmove(pvVar5,local_84,uVar10);
            pvVar5 = *(void **)(this + 0x1c);
            puVar8 = *(undefined1 **)(this + 0x18);
          }
          if ((undefined1 *)((int)pvVar5 + uVar10) != puVar8) {
            *(undefined1 *)((int)pvVar5 + uVar10) = *puVar8;
            *(undefined1 **)(this + 0x18) =
                 (undefined1 *)((int)pvVar5 + uVar10) + (*(int *)(this + 0x18) - (int)puVar8);
          }
        }
      }
      psVar2 = local_68;
      psVar1 = local_6c;
      if ((string *)(this + 0x24) != (string *)local_7c) {
        puVar8 = *(undefined1 **)(this + 0x34);
        pvVar5 = *(void **)(this + 0x38);
        uVar10 = (int)local_6c - (int)local_68;
        sVar6 = (int)puVar8 - (int)pvVar5;
        if (sVar6 < uVar10) {
          iVar4 = 0;
          if (sVar6 != 0) {
            memmove(pvVar5,local_68,sVar6);
            iVar4 = *(int *)(this + 0x34) - *(int *)(this + 0x38);
          }
          std::string::_M_append((string *)(this + 0x24),(char *)(psVar2 + iVar4),(char *)psVar1);
        }
        else {
          if (uVar10 != 0) {
            memmove(pvVar5,local_68,uVar10);
            pvVar5 = *(void **)(this + 0x38);
            puVar8 = *(undefined1 **)(this + 0x34);
          }
          if (puVar8 != (undefined1 *)((int)pvVar5 + uVar10)) {
            *(undefined1 *)((int)pvVar5 + uVar10) = *puVar8;
            *(undefined1 **)(this + 0x34) =
                 (undefined1 *)((int)pvVar5 + uVar10) + (*(int *)(this + 0x34) - (int)puVar8);
          }
        }
      }
      goto LAB_000333fc;
    }
  }
  else {
    iVar4 = GetIsPathRelative(this,uVar3);
    psVar1 = local_68;
    if (iVar4 != 0) {
      sVar6 = strlen((char *)local_68);
      std::string::_M_append((string *)(this + 0x24),(char *)psVar1,(char *)(psVar1 + sVar6));
LAB_000333fc:
      uVar7 = HasValidBasePath(this);
      goto LAB_000331ec;
    }
  }
  uVar7 = 0;
LAB_000331ec:
  local_48 = iVar9 + 8;
  if ((local_30 != local_44) && (local_30 != (uint *)0x0)) {
    if (local_44[0] - (int)local_30 < 0x81) {
      std::__node_alloc::_M_deallocate(local_30,local_44[0] - (int)local_30);
    }
    else {
      operator_delete(local_30);
    }
  }
  local_64 = iVar9 + 8;
  if ((local_4c != local_60) && (local_4c != (uint *)0x0)) {
    if (local_60[0] - (int)local_4c < 0x81) {
      std::__node_alloc::_M_deallocate(local_4c,local_60[0] - (int)local_4c);
    }
    else {
      operator_delete(local_4c);
    }
  }
  local_80 = iVar9 + 8;
  if ((local_68 != (string *)local_7c) && (local_68 != (string *)0x0)) {
    if (local_7c[0] - (int)local_68 < 0x81) {
      std::__node_alloc::_M_deallocate(local_68,local_7c[0] - (int)local_68);
    }
    else {
      operator_delete(local_68);
    }
  }
  local_9c = iVar9 + 8;
  if ((local_84 != (string *)local_98) && (local_84 != (string *)0x0)) {
    if (local_98[0] - (int)local_84 < 0x81) {
      std::__node_alloc::_M_deallocate(local_84,local_98[0] - (int)local_84);
    }
    else {
      operator_delete(local_84);
    }
  }
  if (local_2c == *piVar11) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


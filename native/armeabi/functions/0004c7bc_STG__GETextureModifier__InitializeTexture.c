/* 0004c7bc | STG::GETextureModifier::InitializeTexture */

/* STG::GETextureModifier::InitializeTexture(unsigned long, STG::FFileHash const&, unsigned long) */

void __thiscall
STG::GETextureModifier::InitializeTexture
          (GETextureModifier *this,ulong param_1,FFileHash *param_2,ulong param_3)

{
  string *psVar1;
  STextureInfo SVar2;
  void *pvVar3;
  int iVar4;
  size_t sVar5;
  undefined1 *puVar6;
  STextureInfo *this_00;
  int *piVar7;
  void *pvVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  string *this_01;
  int local_4c;
  int local_48 [4];
  char *local_38;
  string *local_34;
  undefined4 local_30;
  int local_2c;
  
  iVar11 = *(int *)(this + 0x1c);
  piVar7 = *(int **)(DAT_0004caf0 + 0x4c7e8);
  local_2c = *piVar7;
  this_00 = (STextureInfo *)(iVar11 + param_1 * 0x68);
  this_01 = (string *)(this_00 + 0x2c);
  STextureInfo::Initialize(this_00);
  if (this_01 != (string *)(param_2 + 4)) {
    pvVar8 = *(void **)(param_2 + 0x18);
    pcVar10 = *(char **)(param_2 + 0x14);
    puVar6 = *(undefined1 **)(this_00 + 0x3c);
    pvVar3 = *(void **)(this_00 + 0x40);
    uVar9 = (int)pcVar10 - (int)pvVar8;
    sVar5 = (int)puVar6 - (int)pvVar3;
    if (sVar5 < uVar9) {
      iVar4 = 0;
      if (sVar5 != 0) {
        memmove(pvVar3,pvVar8,sVar5);
        iVar4 = *(int *)(this_00 + 0x3c) - *(int *)(this_00 + 0x40);
      }
      std::string::_M_append(this_01,(char *)((int)pvVar8 + iVar4),pcVar10);
    }
    else {
      if (uVar9 != 0) {
        memmove(pvVar3,pvVar8,uVar9);
        pvVar3 = *(void **)(this_00 + 0x40);
        puVar6 = *(undefined1 **)(this_00 + 0x3c);
      }
      if ((undefined1 *)((int)pvVar3 + uVar9) != puVar6) {
        *(undefined1 *)((int)pvVar3 + uVar9) = *puVar6;
        *(undefined1 **)(this_00 + 0x3c) =
             (undefined1 *)((int)pvVar3 + uVar9) + (*(int *)(this_00 + 0x3c) - (int)puVar6);
      }
    }
  }
  *(undefined4 *)(this_00 + 0x44) = *(undefined4 *)(param_2 + 0x1c);
  if (param_2 + 4 != (FFileHash *)(this_00 + 0x4c)) {
    pvVar8 = *(void **)(param_2 + 0x18);
    pcVar10 = *(char **)(param_2 + 0x14);
    puVar6 = *(undefined1 **)(this_00 + 0x5c);
    pvVar3 = *(void **)(this_00 + 0x60);
    uVar9 = (int)pcVar10 - (int)pvVar8;
    sVar5 = (int)puVar6 - (int)pvVar3;
    if (sVar5 < uVar9) {
      iVar4 = 0;
      if (sVar5 != 0) {
        memmove(pvVar3,pvVar8,sVar5);
        iVar4 = *(int *)(this_00 + 0x5c) - *(int *)(this_00 + 0x60);
      }
      std::string::_M_append((string *)(this_00 + 0x4c),(char *)((int)pvVar8 + iVar4),pcVar10);
    }
    else {
      if (uVar9 != 0) {
        memmove(pvVar3,pvVar8,uVar9);
        pvVar3 = *(void **)(this_00 + 0x60);
        puVar6 = *(undefined1 **)(this_00 + 0x5c);
      }
      if ((undefined1 *)((int)pvVar3 + uVar9) != puVar6) {
        *(undefined1 *)((int)pvVar3 + uVar9) = *puVar6;
        *(undefined1 **)(this_00 + 0x5c) =
             (undefined1 *)((int)pvVar3 + uVar9) + (*(int *)(this_00 + 0x5c) - (int)puVar6);
      }
    }
  }
  *(undefined4 *)(this_00 + 100) = *(undefined4 *)(param_2 + 0x1c);
  iVar4 = GETextureSwapContainer::FindByFileHash
                    ((GETextureSwapContainer *)this,param_2,(ulong *)(this_00 + 4),
                     (ulong *)(this_00 + 8),(bool *)(this_00 + 0x1c),(bool *)(this_00 + 0x24),
                     (GETimeOfDay *)(this_00 + 0x14),(ulong *)(this_00 + 0x20));
  *(char *)(iVar11 + param_1 * 0x68) = (char)iVar4;
  if (iVar4 != 0) {
    GETextureSwapContainer::GetSwapFileHash((ulong)&local_4c);
    psVar1 = local_34;
    if (this_01 != (string *)local_48) {
      puVar6 = *(undefined1 **)(this_00 + 0x3c);
      pvVar3 = *(void **)(this_00 + 0x40);
      uVar9 = (int)local_38 - (int)local_34;
      sVar5 = (int)puVar6 - (int)pvVar3;
      if (sVar5 < uVar9) {
        iVar11 = 0;
        if (sVar5 != 0) {
          memmove(pvVar3,local_34,sVar5);
          iVar11 = *(int *)(this_00 + 0x3c) - *(int *)(this_00 + 0x40);
        }
        std::string::_M_append(this_01,(char *)(psVar1 + iVar11),local_38);
      }
      else {
        if (uVar9 != 0) {
          memmove(pvVar3,local_34,uVar9);
          pvVar3 = *(void **)(this_00 + 0x40);
          puVar6 = *(undefined1 **)(this_00 + 0x3c);
        }
        if (puVar6 != (undefined1 *)((int)pvVar3 + uVar9)) {
          *(undefined1 *)((int)pvVar3 + uVar9) = *puVar6;
          *(undefined1 **)(this_00 + 0x3c) =
               (undefined1 *)((int)pvVar3 + uVar9) + (*(int *)(this_00 + 0x3c) - (int)puVar6);
        }
      }
    }
    local_4c = *(int *)(DAT_0004caf4 + 0x4ca08) + 8;
    *(undefined4 *)(this_00 + 0x44) = local_30;
    if ((local_34 != (string *)local_48) && (local_34 != (string *)0x0)) {
      if ((uint)(local_48[0] - (int)local_34) < 0x81) {
        std::__node_alloc::_M_deallocate(local_34,local_48[0] - (int)local_34);
      }
      else {
        operator_delete(local_34);
      }
    }
  }
  SVar2 = (STextureInfo)
          GETextureFontContainer::FindByFileHash
                    ((GETextureFontContainer *)(this + 0xc),param_2,(ulong *)(this_00 + 0xc));
  iVar11 = *piVar7;
  this_00[1] = SVar2;
  *(ulong *)(this_00 + 0x10) = param_3;
  this_00[2] = (STextureInfo)(param_3 != 0xffffffff);
  if (local_2c == iVar11) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


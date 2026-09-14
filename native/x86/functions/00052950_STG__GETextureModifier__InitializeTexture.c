/* 00052950 | STG::GETextureModifier::InitializeTexture */

/* STG::GETextureModifier::InitializeTexture(unsigned long, STG::FFileHash const&, unsigned long) */

void STG::GETextureModifier::InitializeTexture(ulong param_1,FFileHash *param_2,ulong param_3)

{
  string *this;
  GETextureSwapContainer *this_00;
  FFileHash *pFVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  string *psVar5;
  STextureInfo SVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined4 *extraout_ECX;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  void *pvVar12;
  void *pvVar13;
  int unaff_EBX;
  STextureInfo *this_01;
  int local_50;
  int local_4c [4];
  char *local_3c;
  string *local_38;
  undefined4 local_34;
  int local_24;
  undefined4 local_18;
  
  local_18 = 0x52965;
  FUN_0002e044();
  this_00 = (GETextureSwapContainer *)*extraout_ECX;
  pFVar1 = (FFileHash *)extraout_ECX[2];
  iVar2 = extraout_ECX[3];
  this_01 = (STextureInfo *)(extraout_ECX[1] * 0x68 + *(int *)(this_00 + 0x1c));
  local_24 = **(int **)(&DAT_000494d3 + unaff_EBX);
  STextureInfo::Initialize(this_01);
  this = (string *)(this_01 + 0x2c);
  if ((string *)(pFVar1 + 4) != this) {
    pvVar13 = *(void **)(pFVar1 + 0x18);
    pcVar3 = *(char **)(pFVar1 + 0x14);
    puVar7 = *(undefined1 **)(this_01 + 0x3c);
    uVar10 = (int)pcVar3 - (int)pvVar13;
    pvVar12 = *(void **)(this_01 + 0x40);
    uVar9 = (int)puVar7 - (int)pvVar12;
    if (uVar9 < uVar10) {
      iVar8 = 0;
      if (uVar9 != 0) {
        memmove(pvVar12,pvVar13,uVar9);
        iVar8 = *(int *)(this_01 + 0x3c) - *(int *)(this_01 + 0x40);
      }
      std::string::_M_append(this,(char *)(iVar8 + (int)pvVar13),pcVar3);
    }
    else {
      if (uVar10 != 0) {
        memmove(pvVar12,pvVar13,uVar10);
        puVar7 = *(undefined1 **)(this_01 + 0x3c);
        pvVar12 = *(void **)(this_01 + 0x40);
      }
      puVar11 = (undefined1 *)((int)pvVar12 + uVar10);
      if (puVar11 != puVar7) {
        *puVar11 = *puVar7;
        *(undefined1 **)(this_01 + 0x3c) = puVar11 + (*(int *)(this_01 + 0x3c) - (int)puVar7);
      }
    }
  }
  *(undefined4 *)(this_01 + 0x44) = *(undefined4 *)(pFVar1 + 0x1c);
  if ((string *)(pFVar1 + 4) != (string *)(this_01 + 0x4c)) {
    pvVar13 = *(void **)(pFVar1 + 0x18);
    pcVar3 = *(char **)(pFVar1 + 0x14);
    puVar7 = *(undefined1 **)(this_01 + 0x5c);
    uVar9 = (int)pcVar3 - (int)pvVar13;
    pvVar12 = *(void **)(this_01 + 0x60);
    uVar10 = (int)puVar7 - (int)pvVar12;
    if (uVar10 < uVar9) {
      iVar8 = 0;
      if (uVar10 != 0) {
        memmove(pvVar12,pvVar13,uVar10);
        iVar8 = *(int *)(this_01 + 0x5c) - *(int *)(this_01 + 0x60);
      }
      std::string::_M_append((string *)(this_01 + 0x4c),(char *)(iVar8 + (int)pvVar13),pcVar3);
    }
    else {
      if (uVar9 != 0) {
        memmove(pvVar12,pvVar13,uVar9);
        puVar7 = *(undefined1 **)(this_01 + 0x5c);
        pvVar12 = *(void **)(this_01 + 0x60);
      }
      puVar11 = (undefined1 *)((int)pvVar12 + uVar9);
      if (puVar11 != puVar7) {
        *puVar11 = *puVar7;
        *(undefined1 **)(this_01 + 0x5c) = puVar11 + (*(int *)(this_01 + 0x5c) - (int)puVar7);
      }
    }
  }
  *(undefined4 *)(this_01 + 100) = *(undefined4 *)(pFVar1 + 0x1c);
  SVar6 = (STextureInfo)
          GETextureSwapContainer::FindByFileHash
                    (this_00,pFVar1,(ulong *)(this_01 + 4),(ulong *)(this_01 + 8),
                     (bool *)(this_01 + 0x1c),(bool *)(this_01 + 0x24),
                     (GETimeOfDay *)(this_01 + 0x14),(ulong *)(this_01 + 0x20));
  *this_01 = SVar6;
  if (SVar6 != (STextureInfo)0x0) {
    GETextureSwapContainer::GetSwapFileHash((ulong)&local_50);
    psVar5 = local_38;
    if (this != (string *)local_4c) {
      puVar7 = *(undefined1 **)(this_01 + 0x3c);
      uVar9 = (int)local_3c - (int)local_38;
      pvVar13 = *(void **)(this_01 + 0x40);
      uVar10 = (int)puVar7 - (int)pvVar13;
      if (uVar10 < uVar9) {
        iVar8 = 0;
        if (uVar10 != 0) {
          memmove(pvVar13,local_38,uVar10);
          iVar8 = *(int *)(this_01 + 0x3c) - *(int *)(this_01 + 0x40);
        }
        std::string::_M_append(this,(char *)(psVar5 + iVar8),local_3c);
      }
      else {
        if (uVar9 != 0) {
          memmove(pvVar13,local_38,uVar9);
          puVar7 = *(undefined1 **)(this_01 + 0x3c);
          pvVar13 = *(void **)(this_01 + 0x40);
        }
        puVar11 = (undefined1 *)((int)pvVar13 + uVar9);
        if (puVar7 != puVar11) {
          *puVar11 = *puVar7;
          *(undefined1 **)(this_01 + 0x3c) = puVar11 + (*(int *)(this_01 + 0x3c) - (int)puVar7);
        }
      }
    }
    *(undefined4 *)(this_01 + 0x44) = local_34;
    local_50 = *(int *)(&DAT_000494d7 + unaff_EBX) + 8;
    if ((local_38 != (string *)local_4c) && (local_38 != (string *)0x0)) {
      if ((uint)(local_4c[0] - (int)local_38) < 0x81) {
        std::__node_alloc::_M_deallocate(local_38,local_4c[0] - (int)local_38);
      }
      else {
        operator_delete(local_38);
      }
    }
  }
  SVar6 = (STextureInfo)
          GETextureFontContainer::FindByFileHash
                    ((GETextureFontContainer *)(this_00 + 0xc),pFVar1,(ulong *)(this_01 + 0xc));
  piVar4 = *(int **)(&DAT_000494d3 + unaff_EBX);
  this_01[1] = SVar6;
  *(int *)(this_01 + 0x10) = iVar2;
  this_01[2] = (STextureInfo)(iVar2 != -1);
  if (local_24 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}


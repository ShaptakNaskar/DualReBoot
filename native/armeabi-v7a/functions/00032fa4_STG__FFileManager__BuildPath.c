/* 00032fa4 | STG::FFileManager::BuildPath */

/* STG::FFileManager::BuildPath(STG::UStringBase<char, int> const&, STG::UStringBase<char, int>&)
   const */

void __thiscall
STG::FFileManager::BuildPath(FFileManager *this,UStringBase *param_1,UStringBase *param_2)

{
  uint *puVar1;
  string *psVar2;
  int *piVar3;
  void *__dest;
  int iVar4;
  int iVar5;
  size_t sVar6;
  string *this_00;
  undefined1 *puVar7;
  size_t sVar8;
  uint uVar9;
  int iVar10;
  size_t sVar11;
  undefined4 uVar12;
  int *piVar13;
  int iStack_128;
  uint auStack_124 [4];
  uint *puStack_114;
  uint *puStack_110;
  int iStack_10c;
  uint auStack_108 [4];
  uint *puStack_f8;
  uint *puStack_f4;
  int iStack_f0;
  uint auStack_ec [4];
  uint *puStack_dc;
  uint *puStack_d8;
  int iStack_d4;
  uint auStack_d0 [4];
  uint *puStack_c0;
  uint *puStack_bc;
  int iStack_b8;
  uint auStack_b4 [4];
  uint *puStack_a4;
  uint *puStack_a0;
  int iStack_9c;
  uint auStack_98 [4];
  uint *puStack_88;
  uint *puStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_6c;
  string *psStack_68;
  int iStack_64;
  undefined4 uStack_60;
  int iStack_50;
  string *psStack_4c;
  int iStack_48;
  int aiStack_44 [4];
  char *pcStack_34;
  int *piStack_30;
  int iStack_2c;
  
  if (*(undefined1 **)(param_2 + 0x18) != *(undefined1 **)(param_2 + 0x14)) {
    **(undefined1 **)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_2 + 0x18);
  }
  iVar5 = HasValidBasePath(this);
  if (iVar5 == 0) {
    return;
  }
  this_00 = (string *)(param_2 + 4);
  piVar13 = *(int **)(DAT_00032f9c + 0x32994);
  iStack_2c = *piVar13;
  GetBasePath();
  piVar3 = piStack_30;
  puVar7 = *(undefined1 **)(param_2 + 0x14);
  __dest = *(void **)(param_2 + 0x18);
  uVar9 = (int)pcStack_34 - (int)piStack_30;
  sVar6 = (int)puVar7 - (int)__dest;
  if (sVar6 < uVar9) {
    iVar5 = 0;
    if (sVar6 != 0) {
      memmove(__dest,piStack_30,sVar6);
      iVar5 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
    }
    std::string::_M_append(this_00,(char *)((int)piVar3 + iVar5),pcStack_34);
  }
  else {
    if (uVar9 != 0) {
      memmove(__dest,piStack_30,uVar9);
      __dest = *(void **)(param_2 + 0x18);
      puVar7 = *(undefined1 **)(param_2 + 0x14);
    }
    if ((undefined1 *)((int)__dest + uVar9) != puVar7) {
      *(undefined1 *)((int)__dest + uVar9) = *puVar7;
      *(undefined1 **)(param_2 + 0x14) =
           (undefined1 *)((int)__dest + uVar9) + (*(int *)(param_2 + 0x14) - (int)puVar7);
    }
  }
  iVar5 = *(int *)(DAT_00032fa0 + 0x32a10);
  iStack_48 = iVar5 + 8;
  if ((piStack_30 != aiStack_44) && (piStack_30 != (int *)0x0)) {
    if ((uint)(aiStack_44[0] - (int)piStack_30) < 0x81) {
      std::__node_alloc::_M_deallocate(piStack_30,aiStack_44[0] - (int)piStack_30);
    }
    else {
      operator_delete(piStack_30);
    }
  }
  iVar10 = iVar5 + 8;
  auStack_124[0] = auStack_124[0] & 0xffffff00;
  auStack_108[0] = auStack_108[0] & 0xffffff00;
  auStack_ec[0] = auStack_ec[0] & 0xffffff00;
  auStack_d0[0] = auStack_d0[0] & 0xffffff00;
  puStack_114 = auStack_124;
  puStack_f8 = auStack_108;
  puStack_dc = auStack_ec;
  puStack_c0 = auStack_d0;
  iStack_128 = iVar10;
  puStack_110 = puStack_114;
  iStack_10c = iVar10;
  puStack_f4 = puStack_f8;
  iStack_f0 = iVar10;
  puStack_d8 = puStack_dc;
  iStack_d4 = iVar10;
  puStack_bc = puStack_c0;
  GetPathComponents(this,param_1,(UStringBase *)&iStack_128,(UStringBase *)&iStack_10c,
                    (UStringBase *)&iStack_f0,(UStringBase *)&iStack_d4);
  uVar9 = GetPathFlags(this,(UStringBase *)&iStack_128,(UStringBase *)&iStack_10c,
                       (UStringBase *)&iStack_f0,(UStringBase *)&iStack_d4);
  iVar4 = GetIsPathRelative(this,uVar9);
  puVar1 = puStack_f4;
  if (iVar4 == 0) {
    iVar4 = GetIsPathAbsolute(this,uVar9);
    if (iVar4 != 0) {
      sVar8 = *(int *)(this + 0x18) - (int)*(void **)(this + 0x1c);
      sVar11 = (int)puStack_114 - (int)puStack_110;
      sVar6 = sVar11;
      if ((int)sVar8 <= (int)sVar11) {
        sVar6 = sVar8;
      }
      iVar4 = memcmp(*(void **)(this + 0x1c),puStack_110,sVar6);
      uVar12 = 0;
      if (iVar4 != 0) goto LAB_00032b34;
      if (((int)sVar8 < (int)sVar11) || ((int)sVar11 < (int)sVar8)) {
        uVar12 = 0;
        goto LAB_00032b34;
      }
      auStack_b4[0] = auStack_b4[0] & 0xffffff00;
      auStack_98[0] = auStack_98[0] & 0xffffff00;
      iStack_b8 = iVar10;
      puStack_a4 = auStack_b4;
      puStack_a0 = auStack_b4;
      iStack_9c = iVar10;
      puStack_88 = auStack_98;
      puStack_84 = auStack_98;
      iVar4 = FUN_00030bfc((UStringBase *)&iStack_10c,this + 0x20);
      puVar1 = puStack_84;
      if ((iVar4 == 0) || (puStack_a0 != puStack_a4)) {
        iStack_9c = iVar5 + 8;
        if ((puStack_84 != auStack_98) && (puStack_84 != (uint *)0x0)) {
          if (auStack_98[0] - (int)puStack_84 < 0x81) {
            std::__node_alloc::_M_deallocate(puStack_84,auStack_98[0] - (int)puStack_84);
          }
          else {
            operator_delete(puStack_84);
          }
        }
        iStack_b8 = iVar5 + 8;
        if (puStack_a0 == auStack_b4) {
          uVar12 = 0;
        }
        else if (puStack_a0 == (uint *)0x0) {
          uVar12 = 0;
        }
        else if (auStack_b4[0] - (int)puStack_a0 < 0x81) {
          std::__node_alloc::_M_deallocate(puStack_a0,auStack_b4[0] - (int)puStack_a0);
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          operator_delete(puStack_a0);
        }
        goto LAB_00032b34;
      }
      sVar6 = strlen((char *)puStack_84);
      std::string::_M_append(this_00,(char *)puVar1,(char *)((int)puVar1 + sVar6));
      iStack_9c = iVar10;
      if ((puStack_84 != auStack_98) && (puStack_84 != (uint *)0x0)) {
        if (auStack_98[0] - (int)puStack_84 < 0x81) {
          std::__node_alloc::_M_deallocate(puStack_84,auStack_98[0] - (int)puStack_84);
        }
        else {
          operator_delete(puStack_84);
        }
      }
      iStack_b8 = iVar5 + 8;
      if ((puStack_a0 != auStack_b4) && (puStack_a0 != (uint *)0x0)) {
        if (auStack_b4[0] - (int)puStack_a0 < 0x81) {
          std::__node_alloc::_M_deallocate(puStack_a0,auStack_b4[0] - (int)puStack_a0);
        }
        else {
          operator_delete(puStack_a0);
        }
      }
    }
  }
  else {
    sVar6 = strlen((char *)puStack_f4);
    std::string::_M_append(this_00,(char *)puVar1,(char *)((int)puVar1 + sVar6));
  }
  puVar1 = puStack_d8;
  if ((uVar9 & 4) != 0) {
    iVar4 = iVar5 + 8;
    iStack_50 = (int)&uStack_60 + 1;
    uStack_60 = CONCAT22(uStack_60._2_2_,0x2f);
    iStack_64 = iVar4;
    psStack_4c = (string *)&uStack_60;
    sVar6 = strlen((char *)puStack_d8);
    std::string::_M_append((string *)&uStack_60,(char *)puVar1,(char *)((int)puVar1 + sVar6));
    psVar2 = psStack_4c;
    sVar6 = strlen((char *)psStack_4c);
    std::string::_M_append(this_00,(char *)psVar2,(char *)(psVar2 + sVar6));
    iStack_64 = iVar4;
    if ((psStack_4c != (string *)&uStack_60) && (psStack_4c != (string *)0x0)) {
      if ((uint)(uStack_60 - (int)psStack_4c) < 0x81) {
        std::__node_alloc::_M_deallocate(psStack_4c,uStack_60 - (int)psStack_4c);
      }
      else {
        operator_delete(psStack_4c);
      }
    }
  }
  puVar1 = puStack_bc;
  if ((uVar9 & 8) != 0) {
    iVar4 = iVar5 + 8;
    iStack_6c = (int)&uStack_7c + 1;
    uStack_7c = CONCAT22(uStack_7c._2_2_,0x2e);
    iStack_80 = iVar4;
    psStack_68 = (string *)&uStack_7c;
    sVar6 = strlen((char *)puStack_bc);
    std::string::_M_append((string *)&uStack_7c,(char *)puVar1,(char *)((int)puVar1 + sVar6));
    psVar2 = psStack_68;
    sVar6 = strlen((char *)psStack_68);
    std::string::_M_append(this_00,(char *)psVar2,(char *)(psVar2 + sVar6));
    iStack_80 = iVar4;
    if ((psStack_68 != (string *)&uStack_7c) && (psStack_68 != (string *)0x0)) {
      if ((uint)(uStack_7c - (int)psStack_68) < 0x81) {
        std::__node_alloc::_M_deallocate(psStack_68,uStack_7c - (int)psStack_68);
        uVar12 = 1;
      }
      else {
        uVar12 = 1;
        operator_delete(psStack_68);
      }
      goto LAB_00032b34;
    }
  }
  uVar12 = 1;
LAB_00032b34:
  iStack_d4 = iVar5 + 8;
  if ((puStack_bc != auStack_d0) && (puStack_bc != (uint *)0x0)) {
    if (auStack_d0[0] - (int)puStack_bc < 0x81) {
      std::__node_alloc::_M_deallocate(puStack_bc,auStack_d0[0] - (int)puStack_bc);
    }
    else {
      operator_delete(puStack_bc);
    }
  }
  iStack_f0 = iVar5 + 8;
  if ((puStack_d8 != auStack_ec) && (puStack_d8 != (uint *)0x0)) {
    if (auStack_ec[0] - (int)puStack_d8 < 0x81) {
      std::__node_alloc::_M_deallocate(puStack_d8,auStack_ec[0] - (int)puStack_d8);
    }
    else {
      operator_delete(puStack_d8);
    }
  }
  iStack_10c = iVar5 + 8;
  if ((puStack_f4 != auStack_108) && (puStack_f4 != (uint *)0x0)) {
    if (auStack_108[0] - (int)puStack_f4 < 0x81) {
      std::__node_alloc::_M_deallocate(puStack_f4,auStack_108[0] - (int)puStack_f4);
    }
    else {
      operator_delete(puStack_f4);
    }
  }
  iStack_128 = iVar5 + 8;
  if ((puStack_110 != auStack_124) && (puStack_110 != (uint *)0x0)) {
    if (auStack_124[0] - (int)puStack_110 < 0x81) {
      std::__node_alloc::_M_deallocate(puStack_110,auStack_124[0] - (int)puStack_110);
    }
    else {
      operator_delete(puStack_110);
    }
  }
  if (iStack_2c == *piVar13) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar12);
}


/* 000776a0 | STG::UPreference_Scene::ReflectToFile */

/* STG::UPreference_Scene::ReflectToFile(char const*) const */

void __thiscall STG::UPreference_Scene::ReflectToFile(UPreference_Scene *this,char *param_1)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  UPreference_ModelToggle *pUVar5;
  UPreference_TextureFont *pUVar6;
  UPreference_FileChooser_Texture *pUVar7;
  int iVar8;
  int unaff_EBX;
  UPreference_ModelToggle *pUVar9;
  UPreference_TextureFont *pUVar10;
  UPreference_FileChooser_Texture *pUVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  UPreference_FileChooser_Texture *pUVar15;
  UPreference_TextureFont *pUVar16;
  UPreference_ModelToggle *pUVar17;
  uint *puVar18;
  uint *puVar19;
  char *local_140;
  char *local_13c;
  int local_138;
  int local_130;
  int local_128;
  int local_120;
  int local_118;
  int local_110;
  uint local_10c [4];
  uint *local_fc;
  uint *local_f8;
  int local_f0;
  uint local_ec [4];
  uint *local_dc;
  uint *local_d8;
  int local_d0;
  uint local_cc [4];
  uint *local_bc;
  uint *local_b8;
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
  int local_48 [13];
  int local_14;
  
  local_14 = 0x776ab;
  FUN_0002e044();
  local_14 = **(int **)("_ZNK3STG15UPreference_IAB10PrintValueEmRNS_11UStringBaseIciEE" +
                       unaff_EBX + 0x10);
  FFileDisk::FFileDisk((FFileDisk *)local_48,param_1,1);
  cVar2 = (**(code **)(local_48[0] + 0x1c))((FFileDisk *)local_48);
  if (cVar2 != '\0') {
    FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfdfe));
    piVar13 = *(int **)(this + 4);
    piVar4 = piVar13 + *(int *)(this + 8) * 0x22;
    if (piVar13 < piVar4) {
      local_118 = 0;
      piVar12 = piVar13;
      do {
        cVar2 = (**(code **)(*piVar12 + 4))(piVar12);
        piVar12 = piVar12 + 0x22;
        local_118 = (local_118 + 1) - (uint)(cVar2 == '\0');
      } while (piVar12 < piVar4);
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,unaff_EBX + 0xfdd4);
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,unaff_EBX + 0xfdd7,unaff_EBX + 0xfe02);
      if (local_118 != 0) {
        (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,unaff_EBX + 0xfde1);
        local_130 = 0;
LAB_00078010:
        do {
          cVar2 = (**(code **)(*piVar13 + 4))(piVar13);
          if (cVar2 != '\0') {
            iVar8 = (**(code **)(*piVar13 + 0x18))(piVar13);
            FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd14),piVar13[7]);
            FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd29),piVar13[0xe]);
            puVar18 = (uint *)piVar13[0x15];
            FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd3e),puVar18);
            puVar19 = (uint *)piVar13[0x1c];
            if (puVar19 != (uint *)piVar13[0x1b]) {
              FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd53),puVar19);
              puVar18 = puVar19;
            }
            FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd68),puVar18);
            if (iVar8 == 0) {
              FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd84),puVar18);
            }
            else {
              FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd76),puVar18);
              local_10c[0] = local_10c[0] & 0xffffff00;
              local_110 = *(int *)("_ZNK3STG15UPreference_IAB10PrintValueEmRNS_11UStringBaseIciEE" +
                                  unaff_EBX + 0x14) + 8;
              iVar14 = 0;
              local_fc = local_10c;
              local_f8 = local_10c;
              do {
                (**(code **)(*piVar13 + 0x28))(piVar13,iVar14,&local_110);
                iVar14 = iVar14 + 1;
                puVar18 = local_f8;
                FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd79),local_f8);
                if (iVar8 != iVar14) {
                  FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfde6),puVar18);
                }
              } while (iVar14 != iVar8);
              FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd7e),puVar18);
              local_110 = *(int *)("_ZNK3STG15UPreference_IAB10PrintValueEmRNS_11UStringBaseIciEE" +
                                  unaff_EBX + 0x14) + 8;
              if ((local_f8 != local_10c) && (local_f8 != (uint *)0x0)) {
                if (local_10c[0] - (int)local_f8 < 0x81) {
                  std::__node_alloc::_M_deallocate(local_f8,local_10c[0] - (int)local_f8);
                }
                else {
                  operator_delete(local_f8);
                }
              }
            }
            FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd81),puVar18);
            local_130 = local_130 + 1;
            if (local_130 != local_118) {
              piVar13 = piVar13 + 0x22;
              (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,unaff_EBX + 0xfdf1);
              if (piVar4 <= piVar13) break;
              goto LAB_00078010;
            }
          }
          piVar13 = piVar13 + 0x22;
        } while (piVar13 < piVar4);
        (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,unaff_EBX + 0xfc86);
      }
    }
    else {
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,unaff_EBX + 0xfdd4);
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,unaff_EBX + 0xfdd7,unaff_EBX + 0xfe02);
    }
    local_13c = (char *)(unaff_EBX + 0xfdd4);
    local_140 = (char *)(unaff_EBX + 0xfdd7);
    pcVar1 = (char *)(unaff_EBX + 0xfdf7);
    (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,pcVar1);
    piVar13 = *(int **)(this + 0x5c);
    piVar4 = piVar13 + *(int *)(this + 0x60) * 0x23;
    if (piVar13 < piVar4) {
      local_118 = 0;
      piVar12 = piVar13;
      do {
        cVar2 = (**(code **)(*piVar12 + 4))(piVar12);
        piVar12 = piVar12 + 0x23;
        local_118 = (local_118 + 1) - (uint)(cVar2 == '\0');
      } while (piVar12 < piVar4);
      FFileBase::Print((FFileBase *)local_48,local_13c);
      puVar18 = (uint *)(unaff_EBX + 0xfe0c);
      FFileBase::Print((FFileBase *)local_48,local_140,puVar18);
      if (local_118 != 0) {
        FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfde1),puVar18);
        local_138 = 0;
LAB_00077dc0:
        do {
          cVar2 = (**(code **)(*piVar13 + 4))(piVar13);
          if (cVar2 != '\0') {
            iVar8 = (**(code **)(*piVar13 + 0x18))(piVar13);
            FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd14),piVar13[7]);
            FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd29),piVar13[0xe]);
            puVar18 = (uint *)piVar13[0x15];
            FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd3e),puVar18);
            puVar19 = (uint *)piVar13[0x1c];
            if (puVar19 != (uint *)piVar13[0x1b]) {
              FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd53),puVar19);
              puVar18 = puVar19;
            }
            FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd68),puVar18);
            if (iVar8 == 0) {
              FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd84),puVar18);
            }
            else {
              FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd76),puVar18);
              local_ec[0] = local_ec[0] & 0xffffff00;
              local_f0 = *(int *)("_ZNK3STG15UPreference_IAB10PrintValueEmRNS_11UStringBaseIciEE" +
                                 unaff_EBX + 0x14) + 8;
              iVar14 = 0;
              local_dc = local_ec;
              local_d8 = local_ec;
              do {
                (**(code **)(*piVar13 + 0x28))(piVar13,iVar14,&local_f0);
                iVar14 = iVar14 + 1;
                puVar18 = local_d8;
                FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd79),local_d8);
                if (iVar8 != iVar14) {
                  FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfde6),puVar18);
                }
              } while (iVar14 != iVar8);
              FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd7e),puVar18);
              local_f0 = *(int *)("_ZNK3STG15UPreference_IAB10PrintValueEmRNS_11UStringBaseIciEE" +
                                 unaff_EBX + 0x14) + 8;
              if ((local_d8 != local_ec) && (local_d8 != (uint *)0x0)) {
                if (local_ec[0] - (int)local_d8 < 0x81) {
                  std::__node_alloc::_M_deallocate(local_d8,local_ec[0] - (int)local_d8);
                }
                else {
                  operator_delete(local_d8);
                }
              }
            }
            FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd81),puVar18);
            local_138 = local_138 + 1;
            if (local_138 != local_118) {
              piVar13 = piVar13 + 0x23;
              FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfdf1));
              if (piVar4 <= piVar13) break;
              goto LAB_00077dc0;
            }
          }
          piVar13 = piVar13 + 0x23;
        } while (piVar13 < piVar4);
        FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfc86));
      }
    }
    else {
      FFileBase::Print((FFileBase *)local_48,local_13c);
      puVar18 = (uint *)(unaff_EBX + 0xfe0c);
      FFileBase::Print((FFileBase *)local_48,local_140,puVar18);
    }
    FFileBase::Print((FFileBase *)local_48,pcVar1,puVar18);
    piVar13 = *(int **)(this + 0xc);
    piVar4 = piVar13 + *(int *)(this + 0x10) * 0x22;
    if (piVar13 < piVar4) {
      local_118 = 0;
      piVar12 = piVar13;
      do {
        cVar2 = (**(code **)(*piVar12 + 4))(piVar12);
        piVar12 = piVar12 + 0x22;
        local_118 = (local_118 + 1) - (uint)(cVar2 == '\0');
      } while (piVar12 < piVar4);
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,local_13c);
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,local_140,unaff_EBX + 0xfe1a);
      if (local_118 != 0) {
        (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,unaff_EBX + 0xfde1);
        local_138 = 0;
LAB_00078b58:
        do {
          cVar2 = (**(code **)(*piVar13 + 4))(piVar13);
          if (cVar2 != '\0') {
            iVar8 = (**(code **)(*piVar13 + 0x18))(piVar13);
            FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd14),piVar13[7]);
            FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd29),piVar13[0xe]);
            puVar18 = (uint *)piVar13[0x15];
            FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd3e),puVar18);
            puVar19 = (uint *)piVar13[0x1c];
            if (puVar19 != (uint *)piVar13[0x1b]) {
              FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd53),puVar19);
              puVar18 = puVar19;
            }
            FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd68),puVar18);
            if (iVar8 == 0) {
              FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd84),puVar18);
            }
            else {
              FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd76),puVar18);
              local_cc[0] = local_cc[0] & 0xffffff00;
              local_d0 = *(int *)("_ZNK3STG15UPreference_IAB10PrintValueEmRNS_11UStringBaseIciEE" +
                                 unaff_EBX + 0x14) + 8;
              iVar14 = 0;
              local_bc = local_cc;
              local_b8 = local_cc;
              do {
                (**(code **)(*piVar13 + 0x28))(piVar13,iVar14,&local_d0);
                iVar14 = iVar14 + 1;
                puVar18 = local_b8;
                FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd79),local_b8);
                if (iVar8 != iVar14) {
                  FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfde6),puVar18);
                }
              } while (iVar14 != iVar8);
              FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd7e),puVar18);
              local_d0 = *(int *)("_ZNK3STG15UPreference_IAB10PrintValueEmRNS_11UStringBaseIciEE" +
                                 unaff_EBX + 0x14) + 8;
              if ((local_b8 != local_cc) && (local_b8 != (uint *)0x0)) {
                if (local_cc[0] - (int)local_b8 < 0x81) {
                  std::__node_alloc::_M_deallocate(local_b8,local_cc[0] - (int)local_b8);
                }
                else {
                  operator_delete(local_b8);
                }
              }
            }
            FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd81),puVar18);
            local_138 = local_138 + 1;
            if (local_138 != local_118) {
              piVar13 = piVar13 + 0x22;
              (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,unaff_EBX + 0xfdf1);
              if (piVar4 <= piVar13) break;
              goto LAB_00078b58;
            }
          }
          piVar13 = piVar13 + 0x22;
        } while (piVar13 < piVar4);
        (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,unaff_EBX + 0xfc86);
      }
    }
    else {
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,local_13c);
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,local_140,unaff_EBX + 0xfe1a);
    }
    (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,pcVar1);
    piVar13 = *(int **)(this + 0x2c);
    piVar4 = piVar13 + *(int *)(this + 0x30) * 0x26;
    if (piVar13 < piVar4) {
      local_118 = 0;
      piVar12 = piVar13;
      do {
        cVar2 = (**(code **)(*piVar12 + 4))(piVar12);
        piVar12 = piVar12 + 0x26;
        local_118 = (local_118 + 1) - (uint)(cVar2 == '\0');
      } while (piVar12 < piVar4);
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,local_13c);
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,local_140,unaff_EBX + 0xfe25);
      if (local_118 != 0) {
        (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,unaff_EBX + 0xfde1);
        local_138 = 0;
LAB_000788f0:
        do {
          cVar2 = (**(code **)(*piVar13 + 4))(piVar13);
          if (cVar2 != '\0') {
            iVar8 = (**(code **)(*piVar13 + 0x18))(piVar13);
            FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd14),piVar13[7]);
            FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd29),piVar13[0xe]);
            puVar18 = (uint *)piVar13[0x15];
            FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd3e),puVar18);
            puVar19 = (uint *)piVar13[0x1c];
            if (puVar19 != (uint *)piVar13[0x1b]) {
              FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd53),puVar19);
              puVar18 = puVar19;
            }
            FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd68),puVar18);
            if (iVar8 == 0) {
              FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd84),puVar18);
            }
            else {
              FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd76),puVar18);
              local_ac[0] = local_ac[0] & 0xffffff00;
              local_b0 = *(int *)("_ZNK3STG15UPreference_IAB10PrintValueEmRNS_11UStringBaseIciEE" +
                                 unaff_EBX + 0x14) + 8;
              iVar14 = 0;
              local_9c = local_ac;
              local_98 = local_ac;
              do {
                (**(code **)(*piVar13 + 0x28))(piVar13,iVar14,&local_b0);
                iVar14 = iVar14 + 1;
                puVar18 = local_98;
                FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd79),local_98);
                if (iVar8 != iVar14) {
                  FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfde6),puVar18);
                }
              } while (iVar14 != iVar8);
              FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd7e),puVar18);
              local_b0 = *(int *)("_ZNK3STG15UPreference_IAB10PrintValueEmRNS_11UStringBaseIciEE" +
                                 unaff_EBX + 0x14) + 8;
              if ((local_98 != local_ac) && (local_98 != (uint *)0x0)) {
                if (local_ac[0] - (int)local_98 < 0x81) {
                  std::__node_alloc::_M_deallocate(local_98,local_ac[0] - (int)local_98);
                }
                else {
                  operator_delete(local_98);
                }
              }
            }
            FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd81),puVar18);
            local_138 = local_138 + 1;
            if (local_138 != local_118) {
              piVar13 = piVar13 + 0x26;
              (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,unaff_EBX + 0xfdf1);
              if (piVar4 <= piVar13) break;
              goto LAB_000788f0;
            }
          }
          piVar13 = piVar13 + 0x26;
        } while (piVar13 < piVar4);
        (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,unaff_EBX + 0xfc86);
      }
    }
    else {
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,local_13c);
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,local_140,unaff_EBX + 0xfe25);
    }
    (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,pcVar1);
    pUVar17 = *(UPreference_ModelToggle **)(this + 0x1c);
    pUVar5 = pUVar17 + *(int *)(this + 0x20) * 0x90;
    if (pUVar17 < pUVar5) {
      local_118 = 0;
      pUVar9 = pUVar17;
      do {
        cVar2 = (**(code **)(*(int *)pUVar9 + 4))(pUVar9);
        pUVar9 = pUVar9 + 0x90;
        local_118 = (local_118 + 1) - (uint)(cVar2 == '\0');
      } while (pUVar9 < pUVar5);
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,local_13c);
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,local_140,unaff_EBX + 0xfe33);
      if (local_118 != 0) {
        (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,unaff_EBX + 0xfde1);
        local_120 = 0;
        do {
          bVar3 = ReflectPreference<STG::UPreference_ModelToggle>
                            ((FFileBase *)local_48,pUVar17,false);
          if ((bVar3) && (local_120 = local_120 + 1, local_120 != local_118)) {
            (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,unaff_EBX + 0xfdf1);
          }
          pUVar17 = pUVar17 + 0x90;
        } while (pUVar17 < pUVar5);
        (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,unaff_EBX + 0xfc86);
      }
    }
    else {
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,local_13c);
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,local_140,unaff_EBX + 0xfe33);
    }
    (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,pcVar1);
    pUVar16 = *(UPreference_TextureFont **)(this + 0x24);
    pUVar6 = pUVar16 + *(int *)(this + 0x28) * 0x90;
    if (pUVar16 < pUVar6) {
      local_118 = 0;
      pUVar10 = pUVar16;
      do {
        cVar2 = (**(code **)(*(int *)pUVar10 + 4))(pUVar10);
        pUVar10 = pUVar10 + 0x90;
        local_118 = (local_118 + 1) - (uint)(cVar2 == '\0');
      } while (pUVar10 < pUVar6);
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,local_13c);
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,local_140,unaff_EBX + 0xfe40);
      if (local_118 != 0) {
        (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,unaff_EBX + 0xfde1);
        local_120 = 0;
        do {
          bVar3 = ReflectPreference<STG::UPreference_TextureFont>
                            ((FFileBase *)local_48,pUVar16,false);
          if ((bVar3) && (local_120 = local_120 + 1, local_118 != local_120)) {
            (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,unaff_EBX + 0xfdf1);
          }
          pUVar16 = pUVar16 + 0x90;
        } while (pUVar16 < pUVar6);
        (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,unaff_EBX + 0xfc86);
      }
    }
    else {
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,local_13c);
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,local_140,unaff_EBX + 0xfe40);
    }
    (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,pcVar1);
    pUVar15 = *(UPreference_FileChooser_Texture **)(this + 0x34);
    pUVar7 = pUVar15 + *(int *)(this + 0x38) * 0x94;
    if (pUVar15 < pUVar7) {
      local_118 = 0;
      pUVar11 = pUVar15;
      do {
        cVar2 = (**(code **)(*(int *)pUVar11 + 4))(pUVar11);
        pUVar11 = pUVar11 + 0x94;
        local_118 = (local_118 + 1) - (uint)(cVar2 == '\0');
      } while (pUVar11 < pUVar7);
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,local_13c);
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,local_140,unaff_EBX + 0xfe4d);
      if (local_118 != 0) {
        (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,unaff_EBX + 0xfde1);
        local_120 = 0;
        do {
          bVar3 = ReflectPreference<STG::UPreference_FileChooser_Texture>
                            ((FFileBase *)local_48,pUVar15,false);
          if ((bVar3) && (local_120 = local_120 + 1, local_118 != local_120)) {
            (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,unaff_EBX + 0xfdf1);
          }
          pUVar15 = pUVar15 + 0x94;
        } while (pUVar15 < pUVar7);
        (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,unaff_EBX + 0xfc86);
      }
    }
    else {
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,local_13c);
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,local_140,unaff_EBX + 0xfe4d);
    }
    (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,pcVar1);
    ReflectPreferenceArray<STG::UPreference_Theme>
              ((FFileBase *)local_48,*(UPreference_Theme **)(this + 0x3c),
               *(UPreference_Theme **)(this + 0x3c) + *(int *)(this + 0x40) * 0x88,
               (char *)(unaff_EBX + 0xfe5a),true);
    piVar13 = *(int **)(this + 0x44);
    piVar4 = piVar13 + *(int *)(this + 0x48) * 0x28;
    if (piVar13 < piVar4) {
      local_118 = 0;
      piVar12 = piVar13;
      do {
        cVar2 = (**(code **)(*piVar12 + 4))(piVar12);
        piVar12 = piVar12 + 0x28;
        local_118 = (local_118 + 1) - (uint)(cVar2 == '\0');
      } while (piVar12 < piVar4);
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,local_13c);
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,local_140,unaff_EBX + 0xfe61);
      if (local_118 != 0) {
        (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,unaff_EBX + 0xfde1);
        local_138 = 0;
LAB_000784c0:
        do {
          cVar2 = (**(code **)(*piVar13 + 4))(piVar13);
          if (cVar2 != '\0') {
            iVar8 = (**(code **)(*piVar13 + 0x18))(piVar13);
            FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd14),piVar13[7]);
            FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd29),piVar13[0xe]);
            puVar18 = (uint *)piVar13[0x15];
            FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd3e),puVar18);
            puVar19 = (uint *)piVar13[0x1c];
            if (puVar19 != (uint *)piVar13[0x1b]) {
              FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd53),puVar19);
              puVar18 = puVar19;
            }
            FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd68),puVar18);
            if (iVar8 == 0) {
              FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd84),puVar18);
            }
            else {
              FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd76),puVar18);
              local_8c[0] = local_8c[0] & 0xffffff00;
              local_90 = *(int *)("_ZNK3STG15UPreference_IAB10PrintValueEmRNS_11UStringBaseIciEE" +
                                 unaff_EBX + 0x14) + 8;
              iVar14 = 0;
              local_7c = local_8c;
              local_78 = local_8c;
              do {
                (**(code **)(*piVar13 + 0x28))(piVar13,iVar14,&local_90);
                iVar14 = iVar14 + 1;
                puVar18 = local_78;
                FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd79),local_78);
                if (iVar8 != iVar14) {
                  FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfde6),puVar18);
                }
              } while (iVar14 != iVar8);
              FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd7e),puVar18);
              local_90 = *(int *)("_ZNK3STG15UPreference_IAB10PrintValueEmRNS_11UStringBaseIciEE" +
                                 unaff_EBX + 0x14) + 8;
              if ((local_78 != local_8c) && (local_78 != (uint *)0x0)) {
                if (local_8c[0] - (int)local_78 < 0x81) {
                  std::__node_alloc::_M_deallocate(local_78,local_8c[0] - (int)local_78);
                }
                else {
                  operator_delete(local_78);
                }
              }
            }
            FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd81),puVar18);
            local_138 = local_138 + 1;
            if (local_138 != local_118) {
              piVar13 = piVar13 + 0x28;
              (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,unaff_EBX + 0xfdf1);
              if (piVar4 <= piVar13) break;
              goto LAB_000784c0;
            }
          }
          piVar13 = piVar13 + 0x28;
        } while (piVar13 < piVar4);
        (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,unaff_EBX + 0xfc86);
      }
    }
    else {
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,local_13c);
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,local_140,unaff_EBX + 0xfe61);
    }
    (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,pcVar1);
    ReflectPreferenceArray<STG::UPreference_IAB>
              ((FFileBase *)local_48,*(UPreference_IAB **)(this + 0x4c),
               *(UPreference_IAB **)(this + 0x4c) + *(int *)(this + 0x50) * 0x8c,
               (char *)(unaff_EBX + 0xfdc4),true);
    piVar13 = *(int **)(this + 0x54);
    piVar4 = piVar13 + *(int *)(this + 0x58) * 0x22;
    if (piVar13 < piVar4) {
      local_128 = 0;
      piVar12 = piVar13;
      do {
        cVar2 = (**(code **)(*piVar12 + 4))(piVar12);
        piVar12 = piVar12 + 0x22;
        local_128 = (local_128 + 1) - (uint)(cVar2 == '\0');
      } while (piVar12 < piVar4);
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,local_13c);
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,local_140,unaff_EBX + 0xfe6c);
      if (local_128 != 0) {
        (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,unaff_EBX + 0xfde1);
        local_140 = (char *)0x0;
LAB_00078258:
        do {
          cVar2 = (**(code **)(*piVar13 + 4))(piVar13);
          if (cVar2 != '\0') {
            iVar8 = (**(code **)(*piVar13 + 0x18))(piVar13);
            FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd14),piVar13[7]);
            FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd29),piVar13[0xe]);
            puVar18 = (uint *)piVar13[0x15];
            FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd3e),puVar18);
            puVar19 = (uint *)piVar13[0x1c];
            if (puVar19 != (uint *)piVar13[0x1b]) {
              FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd53),puVar19);
              puVar18 = puVar19;
            }
            FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd68),puVar18);
            if (iVar8 == 0) {
              FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd84),puVar18);
            }
            else {
              FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd76),puVar18);
              local_6c[0] = local_6c[0] & 0xffffff00;
              local_70 = *(int *)("_ZNK3STG15UPreference_IAB10PrintValueEmRNS_11UStringBaseIciEE" +
                                 unaff_EBX + 0x14) + 8;
              iVar14 = 0;
              local_5c = local_6c;
              local_58 = local_6c;
              do {
                (**(code **)(*piVar13 + 0x28))(piVar13,iVar14,&local_70);
                iVar14 = iVar14 + 1;
                puVar18 = local_58;
                FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd79),local_58);
                if (iVar8 != iVar14) {
                  FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfde6),puVar18);
                }
              } while (iVar14 != iVar8);
              FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd7e),puVar18);
              local_70 = *(int *)("_ZNK3STG15UPreference_IAB10PrintValueEmRNS_11UStringBaseIciEE" +
                                 unaff_EBX + 0x14) + 8;
              if ((local_58 != local_6c) && (local_58 != (uint *)0x0)) {
                if (local_6c[0] - (int)local_58 < 0x81) {
                  std::__node_alloc::_M_deallocate(local_58,local_6c[0] - (int)local_58);
                }
                else {
                  operator_delete(local_58);
                }
              }
            }
            FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfd81),puVar18);
            local_140 = (char *)((int)local_140 + 1);
            if (local_140 != (char *)local_128) {
              piVar13 = piVar13 + 0x22;
              (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,unaff_EBX + 0xfdf1);
              if (piVar4 <= piVar13) break;
              goto LAB_00078258;
            }
          }
          piVar13 = piVar13 + 0x22;
        } while (piVar13 < piVar4);
        (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,unaff_EBX + 0xfc86);
      }
    }
    else {
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,local_13c);
      (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,local_140,unaff_EBX + 0xfe6c);
    }
    (**(code **)(local_48[0] + 0xc))((FFileDisk *)local_48,pcVar1);
    FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfe79));
    FFileBase::Print((FFileBase *)local_48,(char *)(unaff_EBX + 0xfe87));
    FFileBase::Close((FFileBase *)local_48);
  }
  FFileDisk::~FFileDisk((FFileDisk *)local_48);
  if (local_14 ==
      **(int **)("_ZNK3STG15UPreference_IAB10PrintValueEmRNS_11UStringBaseIciEE" + unaff_EBX + 0x10)
     ) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}


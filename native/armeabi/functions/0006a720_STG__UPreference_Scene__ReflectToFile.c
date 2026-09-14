/* 0006a720 | STG::UPreference_Scene::ReflectToFile */

/* STG::UPreference_Scene::ReflectToFile(char const*) const */

void __thiscall STG::UPreference_Scene::ReflectToFile(UPreference_Scene *this,char *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 uVar8;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  undefined4 extraout_r3_04;
  UPreference_ModelToggle *pUVar9;
  FFileBase *pFVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  UPreference_ModelToggle *pUVar14;
  FFileBase *pFVar15;
  int *piVar16;
  UPreference_ModelToggle *pUVar17;
  UPreference_ModelToggle *pUVar18;
  FFileBase *pFVar19;
  FFileBase *pFVar20;
  int *piVar21;
  int iVar22;
  int *piVar23;
  int iVar24;
  int local_168;
  int local_164;
  int local_140;
  uint local_13c [4];
  uint *local_12c;
  uint *local_128;
  int local_124;
  uint local_120 [4];
  uint *local_110;
  uint *local_10c;
  int local_108;
  uint local_104 [4];
  uint *local_f4;
  uint *local_f0;
  int local_ec;
  uint local_e8 [4];
  uint *local_d8;
  uint *local_d4;
  int local_d0;
  uint local_cc [4];
  uint *local_bc;
  uint *local_b8;
  int local_b4;
  uint local_b0 [4];
  uint *local_a0;
  uint *local_9c;
  int local_98;
  uint local_94 [4];
  uint *local_84;
  uint *local_80;
  int local_7c;
  uint local_78 [4];
  uint *local_68;
  uint *local_64;
  int local_60 [13];
  int local_2c;
  
  iVar6 = DAT_0006b690 + 0x6a734;
  piVar7 = *(int **)(iVar6 + DAT_0006b694);
  local_2c = *piVar7;
  FFileDisk::FFileDisk((FFileDisk *)local_60,param_1,1);
  iVar2 = (**(code **)(local_60[0] + 0x1c))(local_60);
  if (iVar2 != 0) {
    FFileBase::Print((char *)local_60,DAT_0006b698 + 0x6a7ac);
    piVar21 = *(int **)(this + 4);
    piVar16 = piVar21 + *(int *)(this + 8) * 0x22;
    if (piVar21 < piVar16) {
      iVar2 = 0;
      piVar13 = piVar21;
      do {
        piVar23 = piVar13 + 0x22;
        iVar3 = (**(code **)(*piVar13 + 4))(piVar13);
        if (iVar3 != 0) {
          iVar2 = iVar2 + 1;
        }
        piVar13 = piVar23;
      } while (piVar23 < piVar16);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b69c + 0x6a808);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b6a0 + 0x6a824,DAT_0006b6a4 + 0x6a828);
      if (iVar2 != 0) {
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b754 + 0x6aecc);
        local_168 = 0;
        iVar3 = DAT_0006b758 + 0x6aee8;
        piVar23 = piVar21 + 0x1c;
        iVar24 = DAT_0006b75c + 0x6aef4;
        piVar13 = piVar21;
        do {
          while (iVar4 = (**(code **)(*piVar13 + 4))(piVar13), iVar4 == 0) {
LAB_0006aef8:
            piVar13 = piVar13 + 0x22;
            piVar23 = piVar23 + 0x22;
            if (piVar16 <= piVar13) goto LAB_0006b0e8;
          }
          piVar11 = piVar21 + 0x17;
          iVar4 = (**(code **)(*piVar13 + 0x18))(piVar13);
          FFileBase::Print((char *)local_60,DAT_0006b760 + 0x6af4c,
                           *(undefined4 *)((int)piVar21 + (int)piVar23 + (8 - (int)piVar11)));
          FFileBase::Print((char *)local_60,DAT_0006b764 + 0x6af6c,
                           *(undefined4 *)((int)piVar21 + (int)piVar23 + (0x24 - (int)piVar11)));
          FFileBase::Print((char *)local_60,DAT_0006b768 + 0x6af84,
                           *(undefined4 *)((int)piVar21 + (int)piVar23 + (0x40 - (int)piVar11)));
          if (*piVar23 != piVar23[-1]) {
            FFileBase::Print((char *)local_60,DAT_0006b76c + 0x6afa4);
          }
          FFileBase::Print((char *)local_60,DAT_0006b770 + 0x6afb4);
          if (iVar4 == 0) {
            FFileBase::Print((char *)local_60,DAT_0006b788 + 0x6b110);
          }
          else {
            FFileBase::Print((char *)local_60,DAT_0006b774 + 0x6afd4);
            local_12c = local_13c;
            iVar5 = *(int *)(iVar6 + DAT_0006b938);
            iVar12 = 0;
            local_140 = iVar5 + 8;
            local_13c[0] = local_13c[0] & 0xffffff00;
            local_128 = local_12c;
            do {
              (**(code **)(*piVar13 + 0x28))(piVar13,iVar12,&local_140);
              iVar12 = iVar12 + 1;
              FFileBase::Print((char *)local_60,iVar24,local_128);
              if (iVar4 != iVar12) {
                FFileBase::Print((char *)local_60,iVar3);
              }
            } while (iVar12 != iVar4);
            FFileBase::Print((char *)local_60,DAT_0006b778 + 0x6b05c);
            local_140 = iVar5 + 8;
            if ((local_128 != local_13c) && (local_128 != (uint *)0x0)) {
              if (local_13c[0] - (int)local_128 < 0x81) {
                std::__node_alloc::_M_deallocate(local_128,local_13c[0] - (int)local_128);
              }
              else {
                operator_delete(local_128);
              }
            }
          }
          local_168 = local_168 + 1;
          FFileBase::Print((char *)local_60,DAT_0006b77c + 0x6b0ac);
          if (local_168 == iVar2) goto LAB_0006aef8;
          piVar13 = piVar13 + 0x22;
          (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b780 + 0x6b0d8);
          piVar23 = piVar23 + 0x22;
        } while (piVar13 < piVar16);
LAB_0006b0e8:
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b784 + 0x6b100);
      }
    }
    else {
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b9a0 + 0x6c978);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b9a4 + 0x6c994,DAT_0006b9a8 + 0x6c998);
    }
    (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b6a8 + 0x6a848);
    piVar21 = *(int **)(this + 0x5c);
    piVar16 = piVar21 + *(int *)(this + 0x60) * 0x23;
    if (piVar21 < piVar16) {
      iVar2 = 0;
      piVar13 = piVar21;
      do {
        piVar23 = piVar13 + 0x23;
        iVar3 = (**(code **)(*piVar13 + 4))(piVar13);
        if (iVar3 != 0) {
          iVar2 = iVar2 + 1;
        }
        piVar13 = piVar23;
      } while (piVar23 < piVar16);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b6ac + 0x6a8a8);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b6b0 + 0x6a8c4,DAT_0006b6b4 + 0x6a8c8);
      if (iVar2 != 0) {
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b8a0 + 0x6c014);
        local_168 = 0;
        iVar3 = DAT_0006b8a4 + 0x6c030;
        piVar23 = piVar21 + 0x1c;
        iVar24 = DAT_0006b8a8 + 0x6c03c;
        piVar13 = piVar21;
        do {
          while (iVar4 = (**(code **)(*piVar13 + 4))(piVar13), iVar4 == 0) {
LAB_0006c040:
            piVar13 = piVar13 + 0x23;
            piVar23 = piVar23 + 0x23;
            if (piVar16 <= piVar13) goto LAB_0006c230;
          }
          piVar11 = piVar21 + 0x17;
          iVar4 = (**(code **)(*piVar13 + 0x18))(piVar13);
          FFileBase::Print((char *)local_60,DAT_0006b8ac + 0x6c094,
                           *(undefined4 *)((int)piVar21 + (int)piVar23 + (8 - (int)piVar11)));
          FFileBase::Print((char *)local_60,DAT_0006b8b0 + 0x6c0b4,
                           *(undefined4 *)((int)piVar21 + (int)piVar23 + (0x24 - (int)piVar11)));
          FFileBase::Print((char *)local_60,DAT_0006b8b4 + 0x6c0cc,
                           *(undefined4 *)((int)piVar21 + (int)piVar23 + (0x40 - (int)piVar11)));
          if (*piVar23 != piVar23[-1]) {
            FFileBase::Print((char *)local_60,DAT_0006b8b8 + 0x6c0ec);
          }
          FFileBase::Print((char *)local_60,DAT_0006b8bc + 0x6c0fc);
          if (iVar4 == 0) {
            FFileBase::Print((char *)local_60,DAT_0006b8d4 + 0x6c258);
          }
          else {
            FFileBase::Print((char *)local_60,DAT_0006b8c0 + 0x6c11c);
            local_110 = local_120;
            iVar5 = *(int *)(iVar6 + DAT_0006b938);
            iVar12 = 0;
            local_124 = iVar5 + 8;
            local_120[0] = local_120[0] & 0xffffff00;
            local_10c = local_110;
            do {
              (**(code **)(*piVar13 + 0x28))(piVar13,iVar12,&local_124);
              iVar12 = iVar12 + 1;
              FFileBase::Print((char *)local_60,iVar24,local_10c);
              if (iVar4 != iVar12) {
                FFileBase::Print((char *)local_60,iVar3);
              }
            } while (iVar12 != iVar4);
            FFileBase::Print((char *)local_60,DAT_0006b8c4 + 0x6c1a4);
            local_124 = iVar5 + 8;
            if ((local_10c != local_120) && (local_10c != (uint *)0x0)) {
              if (local_120[0] - (int)local_10c < 0x81) {
                std::__node_alloc::_M_deallocate(local_10c,local_120[0] - (int)local_10c);
              }
              else {
                operator_delete(local_10c);
              }
            }
          }
          local_168 = local_168 + 1;
          FFileBase::Print((char *)local_60,DAT_0006b8c8 + 0x6c1f4);
          if (local_168 == iVar2) goto LAB_0006c040;
          piVar13 = piVar13 + 0x23;
          (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b8cc + 0x6c220);
          piVar23 = piVar23 + 0x23;
        } while (piVar13 < piVar16);
LAB_0006c230:
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b8d0 + 0x6c248);
      }
    }
    else {
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006cad4 + 0x6c9f0);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006cad8 + 0x6ca0c,DAT_0006cadc + 0x6ca10);
    }
    (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b6b8 + 0x6a8e8);
    piVar21 = *(int **)(this + 0xc);
    piVar16 = piVar21 + *(int *)(this + 0x10) * 0x22;
    if (piVar21 < piVar16) {
      iVar2 = 0;
      piVar13 = piVar21;
      do {
        piVar23 = piVar13 + 0x22;
        iVar3 = (**(code **)(*piVar13 + 4))(piVar13);
        if (iVar3 != 0) {
          iVar2 = iVar2 + 1;
        }
        piVar13 = piVar23;
      } while (piVar23 < piVar16);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b6bc + 0x6a948);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b6c0 + 0x6a964,DAT_0006b6c4 + 0x6a968);
      if (iVar2 != 0) {
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b868 + 0x6bdb4);
        local_168 = 0;
        iVar3 = DAT_0006b86c + 0x6bdd0;
        piVar23 = piVar21 + 0x1c;
        iVar24 = DAT_0006b870 + 0x6bddc;
        piVar13 = piVar21;
        do {
          while (iVar4 = (**(code **)(*piVar13 + 4))(piVar13), iVar4 == 0) {
LAB_0006bde0:
            piVar13 = piVar13 + 0x22;
            piVar23 = piVar23 + 0x22;
            if (piVar16 <= piVar13) goto LAB_0006bfd0;
          }
          piVar11 = piVar21 + 0x17;
          iVar4 = (**(code **)(*piVar13 + 0x18))(piVar13);
          FFileBase::Print((char *)local_60,DAT_0006b874 + 0x6be34,
                           *(undefined4 *)((int)piVar21 + (int)piVar23 + (8 - (int)piVar11)));
          FFileBase::Print((char *)local_60,DAT_0006b878 + 0x6be54,
                           *(undefined4 *)((int)piVar21 + (int)piVar23 + (0x24 - (int)piVar11)));
          FFileBase::Print((char *)local_60,DAT_0006b87c + 0x6be6c,
                           *(undefined4 *)((int)piVar21 + (int)piVar23 + (0x40 - (int)piVar11)));
          if (*piVar23 != piVar23[-1]) {
            FFileBase::Print((char *)local_60,DAT_0006b880 + 0x6be8c);
          }
          FFileBase::Print((char *)local_60,DAT_0006b884 + 0x6be9c);
          if (iVar4 == 0) {
            FFileBase::Print((char *)local_60,DAT_0006b89c + 0x6bff8);
          }
          else {
            FFileBase::Print((char *)local_60,DAT_0006b888 + 0x6bebc);
            local_f4 = local_104;
            iVar5 = *(int *)(iVar6 + DAT_0006b938);
            iVar12 = 0;
            local_108 = iVar5 + 8;
            local_104[0] = local_104[0] & 0xffffff00;
            local_f0 = local_f4;
            do {
              (**(code **)(*piVar13 + 0x28))(piVar13,iVar12,&local_108);
              iVar12 = iVar12 + 1;
              FFileBase::Print((char *)local_60,iVar24,local_f0);
              if (iVar4 != iVar12) {
                FFileBase::Print((char *)local_60,iVar3);
              }
            } while (iVar12 != iVar4);
            FFileBase::Print((char *)local_60,DAT_0006b88c + 0x6bf44);
            local_108 = iVar5 + 8;
            if ((local_f0 != local_104) && (local_f0 != (uint *)0x0)) {
              if (local_104[0] - (int)local_f0 < 0x81) {
                std::__node_alloc::_M_deallocate(local_f0,local_104[0] - (int)local_f0);
              }
              else {
                operator_delete(local_f0);
              }
            }
          }
          local_168 = local_168 + 1;
          FFileBase::Print((char *)local_60,DAT_0006b890 + 0x6bf94);
          if (local_168 == iVar2) goto LAB_0006bde0;
          piVar13 = piVar13 + 0x22;
          (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b894 + 0x6bfc0);
          piVar23 = piVar23 + 0x22;
        } while (piVar13 < piVar16);
LAB_0006bfd0:
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b898 + 0x6bfe8);
      }
    }
    else {
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b9ac + 0x6c9b4);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006cacc + 0x6c9d0,DAT_0006cad0 + 0x6c9d4);
    }
    (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b6c8 + 0x6a988);
    piVar21 = *(int **)(this + 0x2c);
    piVar16 = piVar21 + *(int *)(this + 0x30) * 0x26;
    if (piVar21 < piVar16) {
      iVar2 = 0;
      piVar13 = piVar21;
      do {
        piVar23 = piVar13 + 0x26;
        iVar3 = (**(code **)(*piVar13 + 4))(piVar13);
        if (iVar3 != 0) {
          iVar2 = iVar2 + 1;
        }
        piVar13 = piVar23;
      } while (piVar23 < piVar16);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b6cc + 0x6a9e8);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b6d0 + 0x6aa04,DAT_0006b6d4 + 0x6aa08);
      if (iVar2 != 0) {
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b830 + 0x6bb54);
        local_168 = 0;
        iVar3 = DAT_0006b834 + 0x6bb70;
        piVar23 = piVar21 + 0x1c;
        iVar24 = DAT_0006b838 + 0x6bb7c;
        piVar13 = piVar21;
        do {
          while (iVar4 = (**(code **)(*piVar13 + 4))(piVar13), iVar4 == 0) {
LAB_0006bb80:
            piVar13 = piVar13 + 0x26;
            piVar23 = piVar23 + 0x26;
            if (piVar16 <= piVar13) goto LAB_0006bd70;
          }
          piVar11 = piVar21 + 0x17;
          iVar4 = (**(code **)(*piVar13 + 0x18))(piVar13);
          FFileBase::Print((char *)local_60,DAT_0006b83c + 0x6bbd4,
                           *(undefined4 *)((int)piVar21 + (int)piVar23 + (8 - (int)piVar11)));
          FFileBase::Print((char *)local_60,DAT_0006b840 + 0x6bbf4,
                           *(undefined4 *)((int)piVar21 + (int)piVar23 + (0x24 - (int)piVar11)));
          FFileBase::Print((char *)local_60,DAT_0006b844 + 0x6bc0c,
                           *(undefined4 *)((int)piVar21 + (int)piVar23 + (0x40 - (int)piVar11)));
          if (*piVar23 != piVar23[-1]) {
            FFileBase::Print((char *)local_60,DAT_0006b848 + 0x6bc2c);
          }
          FFileBase::Print((char *)local_60,DAT_0006b84c + 0x6bc3c);
          if (iVar4 == 0) {
            FFileBase::Print((char *)local_60,DAT_0006b864 + 0x6bd98);
          }
          else {
            FFileBase::Print((char *)local_60,DAT_0006b850 + 0x6bc5c);
            local_d8 = local_e8;
            iVar5 = *(int *)(iVar6 + DAT_0006b938);
            iVar12 = 0;
            local_ec = iVar5 + 8;
            local_e8[0] = local_e8[0] & 0xffffff00;
            local_d4 = local_d8;
            do {
              (**(code **)(*piVar13 + 0x28))(piVar13,iVar12,&local_ec);
              iVar12 = iVar12 + 1;
              FFileBase::Print((char *)local_60,iVar24,local_d4);
              if (iVar4 != iVar12) {
                FFileBase::Print((char *)local_60,iVar3);
              }
            } while (iVar12 != iVar4);
            FFileBase::Print((char *)local_60,DAT_0006b854 + 0x6bce4);
            local_ec = iVar5 + 8;
            if ((local_d4 != local_e8) && (local_d4 != (uint *)0x0)) {
              if (local_e8[0] - (int)local_d4 < 0x81) {
                std::__node_alloc::_M_deallocate(local_d4,local_e8[0] - (int)local_d4);
              }
              else {
                operator_delete(local_d4);
              }
            }
          }
          local_168 = local_168 + 1;
          FFileBase::Print((char *)local_60,DAT_0006b858 + 0x6bd34);
          if (local_168 == iVar2) goto LAB_0006bb80;
          piVar13 = piVar13 + 0x26;
          (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b85c + 0x6bd60);
          piVar23 = piVar23 + 0x26;
        } while (piVar13 < piVar16);
LAB_0006bd70:
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b860 + 0x6bd88);
      }
    }
    else {
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b988 + 0x6c900);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b98c + 0x6c91c,DAT_0006b990 + 0x6c920);
    }
    (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b6d8 + 0x6aa28);
    pUVar9 = *(UPreference_ModelToggle **)(this + 0x1c);
    pUVar14 = pUVar9 + *(int *)(this + 0x20) * 0x90;
    if (pUVar9 < pUVar14) {
      iVar2 = 0;
      pUVar17 = pUVar9;
      do {
        pUVar18 = pUVar17 + 0x90;
        iVar3 = (**(code **)(*(int *)pUVar17 + 4))(pUVar17);
        if (iVar3 != 0) {
          iVar2 = iVar2 + 1;
        }
        pUVar17 = pUVar18;
      } while (pUVar18 < pUVar14);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b6dc + 0x6aa88);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b6e0 + 0x6aaa4,DAT_0006b6e4 + 0x6aaa8);
      if (iVar2 != 0) {
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b824 + 0x6bad0);
        iVar3 = 0;
        iVar24 = DAT_0006b828 + 0x6bae0;
        do {
          bVar1 = ReflectPreference<STG::UPreference_ModelToggle>
                            ((FFileBase *)local_60,pUVar9,false);
          if ((bVar1) && (iVar3 = iVar3 + 1, iVar3 != iVar2)) {
            (**(code **)(local_60[0] + 0xc))(local_60,iVar24);
          }
          pUVar9 = pUVar9 + 0x90;
        } while (pUVar9 < pUVar14);
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b82c + 0x6bb38);
      }
    }
    else {
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b970 + 0x6c888);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b974 + 0x6c8a4,DAT_0006b978 + 0x6c8a8);
    }
    (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b6e8 + 0x6aac8);
    pFVar10 = *(FFileBase **)(this + 0x24);
    pFVar15 = pFVar10 + *(int *)(this + 0x28) * 0x90;
    if (pFVar10 < pFVar15) {
      iVar2 = 0;
      pFVar20 = pFVar10;
      do {
        pFVar19 = pFVar20 + 0x90;
        iVar3 = (**(code **)(*(int *)pFVar20 + 4))(pFVar20);
        if (iVar3 != 0) {
          iVar2 = iVar2 + 1;
        }
        pFVar20 = pFVar19;
      } while (pFVar19 < pFVar15);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b6ec + 0x6ab28);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b6f0 + 0x6ab44,DAT_0006b6f4 + 0x6ab48);
      if (iVar2 != 0) {
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b818 + 0x6ba4c);
        iVar3 = 0;
        iVar24 = DAT_0006b81c + 0x6ba5c;
        uVar8 = extraout_r3_02;
        do {
          bVar1 = ReflectPreference<STG::UPreference_TextureFont>
                            ((STG *)local_60,pFVar10,(UPreference_TextureFont *)0x0,SUB41(uVar8,0));
          uVar8 = extraout_r3_03;
          if ((bVar1) && (iVar3 = iVar3 + 1, iVar3 != iVar2)) {
            (**(code **)(local_60[0] + 0xc))(local_60,iVar24);
            uVar8 = extraout_r3_04;
          }
          pFVar10 = pFVar10 + 0x90;
        } while (pFVar10 < pFVar15);
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b820 + 0x6bab4);
      }
    }
    else {
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b97c + 0x6c8c4);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b980 + 0x6c8e0,DAT_0006b984 + 0x6c8e4);
    }
    (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b6f8 + 0x6ab68);
    pFVar10 = *(FFileBase **)(this + 0x34);
    pFVar15 = pFVar10 + *(int *)(this + 0x38) * 0x94;
    if (pFVar10 < pFVar15) {
      iVar2 = 0;
      pFVar20 = pFVar10;
      do {
        pFVar19 = pFVar20 + 0x94;
        iVar3 = (**(code **)(*(int *)pFVar20 + 4))(pFVar20);
        if (iVar3 != 0) {
          iVar2 = iVar2 + 1;
        }
        pFVar20 = pFVar19;
      } while (pFVar19 < pFVar15);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b6fc + 0x6abc8);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b700 + 0x6abe4,DAT_0006b704 + 0x6abe8);
      if (iVar2 != 0) {
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b80c + 0x6b9c8);
        iVar3 = 0;
        iVar24 = DAT_0006b810 + 0x6b9d8;
        uVar8 = extraout_r3;
        do {
          bVar1 = ReflectPreference<STG::UPreference_FileChooser_Texture>
                            ((STG *)local_60,pFVar10,(UPreference_FileChooser_Texture *)0x0,
                             SUB41(uVar8,0));
          uVar8 = extraout_r3_00;
          if ((bVar1) && (iVar3 = iVar3 + 1, iVar2 != iVar3)) {
            (**(code **)(local_60[0] + 0xc))(local_60,iVar24);
            uVar8 = extraout_r3_01;
          }
          pFVar10 = pFVar10 + 0x94;
        } while (pFVar10 < pFVar15);
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b814 + 0x6ba30);
      }
    }
    else {
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006cae0 + 0x6ca2c);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006cae4 + 0x6ca48,DAT_0006cae8 + 0x6ca4c);
    }
    (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b708 + 0x6ac08);
    piVar21 = *(int **)(this + 0x3c);
    piVar16 = piVar21 + *(int *)(this + 0x40) * 0x22;
    if (piVar21 < piVar16) {
      iVar2 = 0;
      piVar13 = piVar21;
      do {
        piVar23 = piVar13 + 0x22;
        iVar3 = (**(code **)(*piVar13 + 4))(piVar13);
        if (iVar3 != 0) {
          iVar2 = iVar2 + 1;
        }
        piVar13 = piVar23;
      } while (piVar23 < piVar16);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b70c + 0x6ac68);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b710 + 0x6ac84,DAT_0006b714 + 0x6ac88);
      if (iVar2 != 0) {
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b7c4 + 0x6b38c);
        local_168 = 0;
        piVar23 = piVar21 + 0x1c;
        iVar3 = DAT_0006b7c8 + 0x6b3a8;
        iVar24 = DAT_0006b7cc + 0x6b3bc;
        piVar13 = piVar21;
        do {
          while (iVar4 = (**(code **)(*piVar13 + 4))(piVar13), iVar4 == 0) {
LAB_0006b3c0:
            piVar13 = piVar13 + 0x22;
            piVar23 = piVar23 + 0x22;
            if (piVar16 <= piVar13) goto LAB_0006b664;
          }
          piVar11 = piVar21 + 0x17;
          iVar4 = (**(code **)(*piVar13 + 0x18))(piVar13);
          FFileBase::Print((char *)local_60,DAT_0006b7d0 + 0x6b418,
                           *(undefined4 *)((int)piVar21 + (int)piVar23 + (8 - (int)piVar11)));
          FFileBase::Print((char *)local_60,DAT_0006b7d4 + 0x6b438,
                           *(undefined4 *)((int)piVar21 + (int)piVar23 + (0x24 - (int)piVar11)));
          FFileBase::Print((char *)local_60,DAT_0006b7d8 + 0x6b450,
                           *(undefined4 *)((int)piVar21 + (int)piVar23 + (0x40 - (int)piVar11)));
          if (*piVar23 != piVar23[-1]) {
            FFileBase::Print((char *)local_60,DAT_0006b7dc + 0x6b470);
          }
          FFileBase::Print((char *)local_60,DAT_0006b7e0 + 0x6b480);
          if (iVar4 == 0) {
            FFileBase::Print((char *)local_60,DAT_0006b808 + 0x6b68c);
          }
          else {
            if (iVar4 == 1) {
              FFileBase::Print((char *)local_60,DAT_0006b960 + 0x6c7f0);
            }
            else {
              FFileBase::Print((char *)local_60,DAT_0006b7e4 + 0x6b4a4);
              FFileBase::Print((char *)local_60,DAT_0006b7e8 + 0x6b4b4);
            }
            iVar5 = *(int *)(iVar6 + DAT_0006b938);
            local_bc = local_cc;
            local_d0 = iVar5 + 8;
            local_cc[0] = local_cc[0] & 0xffffff00;
            local_b8 = local_bc;
            if (iVar4 == 1) {
              iVar12 = DAT_0006b7ec + 0x6b504;
              iVar22 = DAT_0006b7f0 + 0x6b508;
              iVar4 = 0;
              while( true ) {
                (**(code **)(*piVar13 + 0x28))(piVar13,iVar4,&local_d0);
                iVar4 = iVar4 + 1;
                FFileBase::Print((char *)local_60,iVar12,local_b8);
                if (iVar4 == 1) break;
                FFileBase::Print((char *)local_60,iVar22);
              }
            }
            else {
              iVar12 = 0;
              iVar22 = DAT_0006b7f4 + 0x6b56c;
              do {
                FFileBase::Print((char *)local_60,iVar3);
                (**(code **)(*piVar13 + 0x28))(piVar13,iVar12,&local_d0);
                iVar12 = iVar12 + 1;
                FFileBase::Print((char *)local_60,iVar24,local_b8);
                if (iVar4 != iVar12) {
                  FFileBase::Print((char *)local_60,iVar22);
                }
              } while (iVar12 != iVar4);
            }
            FFileBase::Print((char *)local_60,DAT_0006b7f8 + 0x6b5d4);
            local_d0 = iVar5 + 8;
            if ((local_b8 != local_cc) && (local_b8 != (uint *)0x0)) {
              if (local_cc[0] - (int)local_b8 < 0x81) {
                std::__node_alloc::_M_deallocate(local_b8,local_cc[0] - (int)local_b8);
              }
              else {
                operator_delete(local_b8);
              }
            }
          }
          local_168 = local_168 + 1;
          FFileBase::Print((char *)local_60,DAT_0006b7fc + 0x6b624);
          if (iVar2 == local_168) goto LAB_0006b3c0;
          (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b800 + 0x6b650);
          piVar13 = piVar13 + 0x22;
          piVar23 = piVar23 + 0x22;
        } while (piVar13 < piVar16);
LAB_0006b664:
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b804 + 0x6b67c);
      }
    }
    else {
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b994 + 0x6c93c);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b998 + 0x6c958,DAT_0006b99c + 0x6c95c);
    }
    (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b718 + 0x6aca8);
    piVar21 = *(int **)(this + 0x44);
    piVar16 = piVar21 + *(int *)(this + 0x48) * 0x28;
    if (piVar21 < piVar16) {
      iVar2 = 0;
      piVar13 = piVar21;
      do {
        piVar23 = piVar13 + 0x28;
        iVar3 = (**(code **)(*piVar13 + 4))(piVar13);
        if (iVar3 != 0) {
          iVar2 = iVar2 + 1;
        }
        piVar13 = piVar23;
      } while (piVar23 < piVar16);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b71c + 0x6ad08);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b720 + 0x6ad24,DAT_0006b724 + 0x6ad28);
      if (iVar2 != 0) {
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b78c + 0x6b12c);
        local_168 = 0;
        iVar3 = DAT_0006b790 + 0x6b148;
        piVar23 = piVar21 + 0x1c;
        iVar24 = DAT_0006b794 + 0x6b154;
        piVar13 = piVar21;
        do {
          while (iVar4 = (**(code **)(*piVar13 + 4))(piVar13), iVar4 == 0) {
LAB_0006b158:
            piVar13 = piVar13 + 0x28;
            piVar23 = piVar23 + 0x28;
            if (piVar16 <= piVar13) goto LAB_0006b348;
          }
          piVar11 = piVar21 + 0x17;
          iVar4 = (**(code **)(*piVar13 + 0x18))(piVar13);
          FFileBase::Print((char *)local_60,DAT_0006b798 + 0x6b1ac,
                           *(undefined4 *)((int)piVar21 + (int)piVar23 + (8 - (int)piVar11)));
          FFileBase::Print((char *)local_60,DAT_0006b79c + 0x6b1cc,
                           *(undefined4 *)((int)piVar21 + (int)piVar23 + (0x24 - (int)piVar11)));
          FFileBase::Print((char *)local_60,DAT_0006b7a0 + 0x6b1e4,
                           *(undefined4 *)((int)piVar21 + (int)piVar23 + (0x40 - (int)piVar11)));
          if (*piVar23 != piVar23[-1]) {
            FFileBase::Print((char *)local_60,DAT_0006b7a4 + 0x6b204);
          }
          FFileBase::Print((char *)local_60,DAT_0006b7a8 + 0x6b214);
          if (iVar4 == 0) {
            FFileBase::Print((char *)local_60,DAT_0006b7c0 + 0x6b370);
          }
          else {
            FFileBase::Print((char *)local_60,DAT_0006b7ac + 0x6b234);
            local_a0 = local_b0;
            iVar5 = *(int *)(iVar6 + DAT_0006b938);
            iVar12 = 0;
            local_b4 = iVar5 + 8;
            local_b0[0] = local_b0[0] & 0xffffff00;
            local_9c = local_a0;
            do {
              (**(code **)(*piVar13 + 0x28))(piVar13,iVar12,&local_b4);
              iVar12 = iVar12 + 1;
              FFileBase::Print((char *)local_60,iVar24,local_9c);
              if (iVar4 != iVar12) {
                FFileBase::Print((char *)local_60,iVar3);
              }
            } while (iVar12 != iVar4);
            FFileBase::Print((char *)local_60,DAT_0006b7b0 + 0x6b2bc);
            local_b4 = iVar5 + 8;
            if ((local_9c != local_b0) && (local_9c != (uint *)0x0)) {
              if (local_b0[0] - (int)local_9c < 0x81) {
                std::__node_alloc::_M_deallocate(local_9c,local_b0[0] - (int)local_9c);
              }
              else {
                operator_delete(local_9c);
              }
            }
          }
          local_168 = local_168 + 1;
          FFileBase::Print((char *)local_60,DAT_0006b7b4 + 0x6b30c);
          if (iVar2 == local_168) goto LAB_0006b158;
          piVar13 = piVar13 + 0x28;
          (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b7b8 + 0x6b338);
          piVar23 = piVar23 + 0x28;
        } while (piVar13 < piVar16);
LAB_0006b348:
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b7bc + 0x6b360);
      }
    }
    else {
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006caf8 + 0x6caa4);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006cafc + 0x6cac0,DAT_0006cb00 + 0x6cac4);
    }
    (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b728 + 0x6ad48);
    piVar21 = *(int **)(this + 0x4c);
    piVar16 = piVar21 + *(int *)(this + 0x50) * 0x23;
    if (piVar21 < piVar16) {
      iVar2 = 0;
      piVar13 = piVar21;
      do {
        piVar23 = piVar13 + 0x23;
        iVar3 = (**(code **)(*piVar13 + 4))(piVar13);
        if (iVar3 != 0) {
          iVar2 = iVar2 + 1;
        }
        piVar13 = piVar23;
      } while (piVar23 < piVar16);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b72c + 0x6ada8);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b730 + 0x6adc4,DAT_0006b734 + 0x6adc8);
      if (iVar2 != 0) {
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b910 + 0x6c4d4);
        local_168 = 0;
        piVar23 = piVar21 + 0x1c;
        iVar3 = DAT_0006b914 + 0x6c4f0;
        iVar24 = DAT_0006b918 + 0x6c504;
        piVar13 = piVar21;
        do {
          while (iVar4 = (**(code **)(*piVar13 + 4))(piVar13), iVar4 == 0) {
LAB_0006c508:
            piVar13 = piVar13 + 0x23;
            piVar23 = piVar23 + 0x23;
            if (piVar16 <= piVar13) goto LAB_0006c7a0;
          }
          piVar11 = piVar21 + 0x17;
          iVar4 = (**(code **)(*piVar13 + 0x18))(piVar13);
          FFileBase::Print((char *)local_60,DAT_0006b91c + 0x6c560,
                           *(undefined4 *)((int)piVar21 + (int)piVar23 + (8 - (int)piVar11)));
          FFileBase::Print((char *)local_60,DAT_0006b920 + 0x6c580,
                           *(undefined4 *)((int)piVar21 + (int)piVar23 + (0x24 - (int)piVar11)));
          FFileBase::Print((char *)local_60,DAT_0006b924 + 0x6c598,
                           *(undefined4 *)((int)piVar21 + (int)piVar23 + (0x40 - (int)piVar11)));
          if (*piVar23 != piVar23[-1]) {
            FFileBase::Print((char *)local_60,DAT_0006b928 + 0x6c5b8);
          }
          FFileBase::Print((char *)local_60,DAT_0006b92c + 0x6c5c8);
          if (iVar4 == 0) {
            FFileBase::Print((char *)local_60,DAT_0006b958 + 0x6c7c8);
          }
          else {
            if (iVar4 == 1) {
              FFileBase::Print((char *)local_60,DAT_0006b95c + 0x6c7dc);
            }
            else {
              FFileBase::Print((char *)local_60,DAT_0006b930 + 0x6c5ec);
              FFileBase::Print((char *)local_60,DAT_0006b934 + 0x6c5fc);
            }
            iVar5 = *(int *)(iVar6 + DAT_0006b938);
            local_84 = local_94;
            local_98 = iVar5 + 8;
            local_94[0] = local_94[0] & 0xffffff00;
            local_80 = local_84;
            if (iVar4 == 1) {
              iVar12 = DAT_0006b93c + 0x6c64c;
              iVar22 = DAT_0006b940 + 0x6c650;
              iVar4 = 0;
              while( true ) {
                (**(code **)(*piVar13 + 0x28))(piVar13,iVar4,&local_98);
                iVar4 = iVar4 + 1;
                FFileBase::Print((char *)local_60,iVar12,local_80);
                if (iVar4 == 1) break;
                FFileBase::Print((char *)local_60,iVar22);
              }
            }
            else {
              iVar12 = 0;
              iVar22 = DAT_0006b944 + 0x6c6ac;
              do {
                FFileBase::Print((char *)local_60,iVar3);
                (**(code **)(*piVar13 + 0x28))(piVar13,iVar12,&local_98);
                iVar12 = iVar12 + 1;
                FFileBase::Print((char *)local_60,iVar22,local_80);
                if (iVar4 != iVar12) {
                  FFileBase::Print((char *)local_60,iVar24);
                }
              } while (iVar12 != iVar4);
            }
            FFileBase::Print((char *)local_60,DAT_0006b948 + 0x6c710);
            local_98 = iVar5 + 8;
            if ((local_80 != local_94) && (local_80 != (uint *)0x0)) {
              if (local_94[0] - (int)local_80 < 0x81) {
                std::__node_alloc::_M_deallocate(local_80,local_94[0] - (int)local_80);
              }
              else {
                operator_delete(local_80);
              }
            }
          }
          local_168 = local_168 + 1;
          FFileBase::Print((char *)local_60,DAT_0006b94c + 0x6c760);
          if (local_168 == iVar2) goto LAB_0006c508;
          (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b950 + 0x6c78c);
          piVar13 = piVar13 + 0x23;
          piVar23 = piVar23 + 0x23;
        } while (piVar13 < piVar16);
LAB_0006c7a0:
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b954 + 0x6c7b8);
      }
    }
    else {
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006caec + 0x6ca68);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006caf0 + 0x6ca84,DAT_0006caf4 + 0x6ca88);
    }
    (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b738 + 0x6ade8);
    piVar21 = *(int **)(this + 0x54);
    piVar16 = piVar21 + *(int *)(this + 0x58) * 0x22;
    if (piVar21 < piVar16) {
      iVar2 = 0;
      piVar13 = piVar21;
      do {
        piVar23 = piVar13 + 0x22;
        iVar3 = (**(code **)(*piVar13 + 4))(piVar13);
        if (iVar3 != 0) {
          iVar2 = iVar2 + 1;
        }
        piVar13 = piVar23;
      } while (piVar23 < piVar16);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b73c + 0x6ae48);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b740 + 0x6ae64,DAT_0006b744 + 0x6ae68);
      if (iVar2 != 0) {
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b8d8 + 0x6c274);
        local_164 = 0;
        iVar3 = DAT_0006b8dc + 0x6c290;
        piVar23 = piVar21 + 0x1c;
        iVar24 = DAT_0006b8e0 + 0x6c29c;
        piVar13 = piVar21;
        do {
          while (iVar4 = (**(code **)(*piVar13 + 4))(piVar13), iVar4 == 0) {
LAB_0006c2a0:
            piVar13 = piVar13 + 0x22;
            piVar23 = piVar23 + 0x22;
            if (piVar16 <= piVar13) goto LAB_0006c490;
          }
          piVar11 = piVar21 + 0x17;
          iVar4 = (**(code **)(*piVar13 + 0x18))(piVar13);
          FFileBase::Print((char *)local_60,DAT_0006b8e4 + 0x6c2f4,
                           *(undefined4 *)((int)piVar21 + (int)piVar23 + (8 - (int)piVar11)));
          FFileBase::Print((char *)local_60,DAT_0006b8e8 + 0x6c314,
                           *(undefined4 *)((int)piVar21 + (int)piVar23 + (0x24 - (int)piVar11)));
          FFileBase::Print((char *)local_60,DAT_0006b8ec + 0x6c32c,
                           *(undefined4 *)((int)piVar21 + (int)piVar23 + (0x40 - (int)piVar11)));
          if (*piVar23 != piVar23[-1]) {
            FFileBase::Print((char *)local_60,DAT_0006b8f0 + 0x6c34c);
          }
          FFileBase::Print((char *)local_60,DAT_0006b8f4 + 0x6c35c);
          if (iVar4 == 0) {
            FFileBase::Print((char *)local_60,DAT_0006b90c + 0x6c4b8);
          }
          else {
            FFileBase::Print((char *)local_60,DAT_0006b8f8 + 0x6c37c);
            local_68 = local_78;
            iVar5 = *(int *)(iVar6 + DAT_0006b938);
            iVar12 = 0;
            local_7c = iVar5 + 8;
            local_78[0] = local_78[0] & 0xffffff00;
            local_64 = local_68;
            do {
              (**(code **)(*piVar13 + 0x28))(piVar13,iVar12,&local_7c);
              iVar12 = iVar12 + 1;
              FFileBase::Print((char *)local_60,iVar24,local_64);
              if (iVar4 != iVar12) {
                FFileBase::Print((char *)local_60,iVar3);
              }
            } while (iVar12 != iVar4);
            FFileBase::Print((char *)local_60,DAT_0006b8fc + 0x6c404);
            local_7c = iVar5 + 8;
            if ((local_64 != local_78) && (local_64 != (uint *)0x0)) {
              if (local_78[0] - (int)local_64 < 0x81) {
                std::__node_alloc::_M_deallocate(local_64,local_78[0] - (int)local_64);
              }
              else {
                operator_delete(local_64);
              }
            }
          }
          local_164 = local_164 + 1;
          FFileBase::Print((char *)local_60,DAT_0006b900 + 0x6c454);
          if (local_164 == iVar2) goto LAB_0006c2a0;
          piVar13 = piVar13 + 0x22;
          (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b904 + 0x6c480);
          piVar23 = piVar23 + 0x22;
        } while (piVar13 < piVar16);
LAB_0006c490:
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b908 + 0x6c4a8);
      }
    }
    else {
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b964 + 0x6c84c);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b968 + 0x6c868,DAT_0006b96c + 0x6c86c);
    }
    (**(code **)(local_60[0] + 0xc))(local_60,DAT_0006b748 + 0x6ae88);
    FFileBase::Print((char *)local_60,DAT_0006b74c + 0x6ae98);
    FFileBase::Print((char *)local_60,DAT_0006b750 + 0x6aea8);
    FFileBase::Close((FFileBase *)local_60);
  }
  FFileDisk::~FFileDisk((FFileDisk *)local_60);
  if (local_2c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


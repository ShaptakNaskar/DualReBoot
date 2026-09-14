/* 00065c1c | STG::UPreference_Scene::ReflectToFile */

/* STG::UPreference_Scene::ReflectToFile(char const*) const */

void __thiscall STG::UPreference_Scene::ReflectToFile(UPreference_Scene *this,char *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 uVar9;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  undefined4 extraout_r3_04;
  int iVar10;
  UPreference_ModelToggle *pUVar11;
  FFileBase *pFVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  UPreference_ModelToggle *pUVar16;
  FFileBase *pFVar17;
  int iVar18;
  int *piVar19;
  UPreference_ModelToggle *pUVar20;
  UPreference_ModelToggle *pUVar21;
  FFileBase *pFVar22;
  FFileBase *pFVar23;
  int *piVar24;
  int *piVar25;
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
  
  iVar7 = DAT_00066b88 + 0x65c3c;
  piVar8 = *(int **)(iVar7 + DAT_00066b8c);
  local_2c = *piVar8;
  FFileDisk::FFileDisk((FFileDisk *)local_60,param_1,1);
  iVar2 = (**(code **)(local_60[0] + 0x1c))(local_60);
  if (iVar2 != 0) {
    FFileBase::Print((char *)local_60,DAT_00066b90 + 0x65ca4);
    piVar24 = *(int **)(this + 4);
    piVar19 = piVar24 + *(int *)(this + 8) * 0x22;
    if (piVar24 < piVar19) {
      iVar2 = 0;
      piVar15 = piVar24;
      do {
        piVar25 = piVar15 + 0x22;
        iVar3 = (**(code **)(*piVar15 + 4))(piVar15);
        if (iVar3 != 0) {
          iVar2 = iVar2 + 1;
        }
        piVar15 = piVar25;
      } while (piVar25 < piVar19);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066b94 + 0x65d04);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066b98 + 0x65d20,DAT_00066b9c + 0x65d24);
      if (iVar2 != 0) {
        local_168 = 0;
        piVar25 = piVar24 + 0x1c;
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066c4c + 0x663d4);
        iVar3 = DAT_00066c50 + 0x663e8;
        iVar10 = DAT_00066c54 + 0x663f0;
        piVar15 = piVar24;
        do {
          while (iVar4 = (**(code **)(*piVar15 + 4))(piVar15), iVar4 == 0) {
LAB_000663f4:
            piVar15 = piVar15 + 0x22;
            piVar25 = piVar25 + 0x22;
            if (piVar19 <= piVar15) goto LAB_000665e4;
          }
          piVar13 = piVar24 + 0x17;
          iVar4 = (**(code **)(*piVar15 + 0x18))(piVar15);
          FFileBase::Print((char *)local_60,DAT_00066c58 + 0x66448,
                           *(undefined4 *)((int)piVar24 + (int)piVar25 + (8 - (int)piVar13)));
          FFileBase::Print((char *)local_60,DAT_00066c5c + 0x66468,
                           *(undefined4 *)((int)piVar24 + (int)piVar25 + (0x24 - (int)piVar13)));
          FFileBase::Print((char *)local_60,DAT_00066c60 + 0x66480,
                           *(undefined4 *)((int)piVar24 + (int)piVar25 + (0x40 - (int)piVar13)));
          if (*piVar25 != piVar25[-1]) {
            FFileBase::Print((char *)local_60,DAT_00066c64 + 0x664a0);
          }
          FFileBase::Print((char *)local_60,DAT_00066c68 + 0x664b0);
          if (iVar4 == 0) {
            FFileBase::Print((char *)local_60,DAT_00066c80 + 0x6660c);
          }
          else {
            FFileBase::Print((char *)local_60,DAT_00066c6c + 0x664d0);
            local_12c = local_13c;
            iVar5 = *(int *)(iVar7 + DAT_00066e30);
            local_140 = iVar5 + 8;
            local_13c[0] = local_13c[0] & 0xffffff00;
            iVar6 = 0;
            local_128 = local_12c;
            do {
              iVar14 = iVar6 + 1;
              (**(code **)(*piVar15 + 0x28))(piVar15,iVar6,&local_140);
              FFileBase::Print((char *)local_60,iVar10,local_128);
              if (iVar4 != iVar14) {
                FFileBase::Print((char *)local_60,iVar3);
              }
              iVar6 = iVar14;
            } while (iVar14 != iVar4);
            FFileBase::Print((char *)local_60,DAT_00066c70 + 0x66558);
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
          FFileBase::Print((char *)local_60,DAT_00066c74 + 0x665a4);
          if (local_168 == iVar2) goto LAB_000663f4;
          piVar15 = piVar15 + 0x22;
          piVar25 = piVar25 + 0x22;
          (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066c78 + 0x665dc);
        } while (piVar15 < piVar19);
LAB_000665e4:
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066c7c + 0x665fc);
      }
    }
    else {
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066e98 + 0x67e74);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066e9c + 0x67e90,DAT_00066ea0 + 0x67e94);
    }
    (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066ba0 + 0x65d48);
    piVar24 = *(int **)(this + 0x5c);
    piVar19 = piVar24 + *(int *)(this + 0x60) * 0x23;
    if (piVar24 < piVar19) {
      iVar2 = 0;
      piVar15 = piVar24;
      do {
        piVar25 = piVar15 + 0x23;
        iVar3 = (**(code **)(*piVar15 + 4))(piVar15);
        if (iVar3 != 0) {
          iVar2 = iVar2 + 1;
        }
        piVar15 = piVar25;
      } while (piVar25 < piVar19);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066ba4 + 0x65da4);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066ba8 + 0x65dc0,DAT_00066bac + 0x65dc4);
      if (iVar2 != 0) {
        local_168 = 0;
        piVar25 = piVar24 + 0x1c;
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066d98 + 0x67514);
        iVar3 = DAT_00066d9c + 0x67528;
        iVar10 = DAT_00066da0 + 0x67530;
        piVar15 = piVar24;
        do {
          while (iVar4 = (**(code **)(*piVar15 + 4))(piVar15), iVar4 == 0) {
LAB_00067534:
            piVar15 = piVar15 + 0x23;
            piVar25 = piVar25 + 0x23;
            if (piVar19 <= piVar15) goto LAB_00067724;
          }
          piVar13 = piVar24 + 0x17;
          iVar4 = (**(code **)(*piVar15 + 0x18))(piVar15);
          FFileBase::Print((char *)local_60,DAT_00066da4 + 0x67588,
                           *(undefined4 *)((int)piVar24 + (int)piVar25 + (8 - (int)piVar13)));
          FFileBase::Print((char *)local_60,DAT_00066da8 + 0x675a8,
                           *(undefined4 *)((int)piVar24 + (int)piVar25 + (0x24 - (int)piVar13)));
          FFileBase::Print((char *)local_60,DAT_00066dac + 0x675c0,
                           *(undefined4 *)((int)piVar24 + (int)piVar25 + (0x40 - (int)piVar13)));
          if (*piVar25 != piVar25[-1]) {
            FFileBase::Print((char *)local_60,DAT_00066db0 + 0x675e0);
          }
          FFileBase::Print((char *)local_60,DAT_00066db4 + 0x675f0);
          if (iVar4 == 0) {
            FFileBase::Print((char *)local_60,DAT_00066dcc + 0x6774c);
          }
          else {
            FFileBase::Print((char *)local_60,DAT_00066db8 + 0x67610);
            local_110 = local_120;
            iVar5 = *(int *)(iVar7 + DAT_00066e30);
            local_124 = iVar5 + 8;
            local_120[0] = local_120[0] & 0xffffff00;
            iVar6 = 0;
            local_10c = local_110;
            do {
              iVar14 = iVar6 + 1;
              (**(code **)(*piVar15 + 0x28))(piVar15,iVar6,&local_124);
              FFileBase::Print((char *)local_60,iVar10,local_10c);
              if (iVar4 != iVar14) {
                FFileBase::Print((char *)local_60,iVar3);
              }
              iVar6 = iVar14;
            } while (iVar14 != iVar4);
            FFileBase::Print((char *)local_60,DAT_00066dbc + 0x67698);
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
          FFileBase::Print((char *)local_60,DAT_00066dc0 + 0x676e4);
          if (local_168 == iVar2) goto LAB_00067534;
          piVar15 = piVar15 + 0x23;
          piVar25 = piVar25 + 0x23;
          (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066dc4 + 0x6771c);
        } while (piVar15 < piVar19);
LAB_00067724:
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066dc8 + 0x6773c);
      }
    }
    else {
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00067fd4 + 0x67eec);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00067fd8 + 0x67f08,DAT_00067fdc + 0x67f0c);
    }
    (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066bb0 + 0x65de4);
    piVar24 = *(int **)(this + 0xc);
    piVar19 = piVar24 + *(int *)(this + 0x10) * 0x22;
    if (piVar24 < piVar19) {
      iVar2 = 0;
      piVar15 = piVar24;
      do {
        piVar25 = piVar15 + 0x22;
        iVar3 = (**(code **)(*piVar15 + 4))(piVar15);
        if (iVar3 != 0) {
          iVar2 = iVar2 + 1;
        }
        piVar15 = piVar25;
      } while (piVar25 < piVar19);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066bb4 + 0x65e44);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066bb8 + 0x65e60,DAT_00066bbc + 0x65e64);
      if (iVar2 != 0) {
        local_168 = 0;
        piVar25 = piVar24 + 0x1c;
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066d60 + 0x672b4);
        iVar3 = DAT_00066d64 + 0x672c8;
        iVar10 = DAT_00066d68 + 0x672d0;
        piVar15 = piVar24;
        do {
          while (iVar4 = (**(code **)(*piVar15 + 4))(piVar15), iVar4 == 0) {
LAB_000672d4:
            piVar15 = piVar15 + 0x22;
            piVar25 = piVar25 + 0x22;
            if (piVar19 <= piVar15) goto LAB_000674c4;
          }
          piVar13 = piVar24 + 0x17;
          iVar4 = (**(code **)(*piVar15 + 0x18))(piVar15);
          FFileBase::Print((char *)local_60,DAT_00066d6c + 0x67328,
                           *(undefined4 *)((int)piVar24 + (int)piVar25 + (8 - (int)piVar13)));
          FFileBase::Print((char *)local_60,DAT_00066d70 + 0x67348,
                           *(undefined4 *)((int)piVar24 + (int)piVar25 + (0x24 - (int)piVar13)));
          FFileBase::Print((char *)local_60,DAT_00066d74 + 0x67360,
                           *(undefined4 *)((int)piVar24 + (int)piVar25 + (0x40 - (int)piVar13)));
          if (*piVar25 != piVar25[-1]) {
            FFileBase::Print((char *)local_60,DAT_00066d78 + 0x67380);
          }
          FFileBase::Print((char *)local_60,DAT_00066d7c + 0x67390);
          if (iVar4 == 0) {
            FFileBase::Print((char *)local_60,DAT_00066d94 + 0x674ec);
          }
          else {
            FFileBase::Print((char *)local_60,DAT_00066d80 + 0x673b0);
            local_f4 = local_104;
            iVar5 = *(int *)(iVar7 + DAT_00066e30);
            local_108 = iVar5 + 8;
            local_104[0] = local_104[0] & 0xffffff00;
            iVar6 = 0;
            local_f0 = local_f4;
            do {
              iVar14 = iVar6 + 1;
              (**(code **)(*piVar15 + 0x28))(piVar15,iVar6,&local_108);
              FFileBase::Print((char *)local_60,iVar10,local_f0);
              if (iVar4 != iVar14) {
                FFileBase::Print((char *)local_60,iVar3);
              }
              iVar6 = iVar14;
            } while (iVar14 != iVar4);
            FFileBase::Print((char *)local_60,DAT_00066d84 + 0x67438);
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
          FFileBase::Print((char *)local_60,DAT_00066d88 + 0x67484);
          if (local_168 == iVar2) goto LAB_000672d4;
          piVar15 = piVar15 + 0x22;
          piVar25 = piVar25 + 0x22;
          (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066d8c + 0x674bc);
        } while (piVar15 < piVar19);
LAB_000674c4:
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066d90 + 0x674dc);
      }
    }
    else {
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00067fc8 + 0x67eb0);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00067fcc + 0x67ecc,DAT_00067fd0 + 0x67ed0);
    }
    (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066bc0 + 0x65e88);
    piVar24 = *(int **)(this + 0x2c);
    piVar19 = piVar24 + *(int *)(this + 0x30) * 0x26;
    if (piVar24 < piVar19) {
      iVar2 = 0;
      piVar15 = piVar24;
      do {
        piVar25 = piVar15 + 0x26;
        iVar3 = (**(code **)(*piVar15 + 4))(piVar15);
        if (iVar3 != 0) {
          iVar2 = iVar2 + 1;
        }
        piVar15 = piVar25;
      } while (piVar25 < piVar19);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066bc4 + 0x65ee4);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066bc8 + 0x65f00,DAT_00066bcc + 0x65f04);
      if (iVar2 != 0) {
        local_168 = 0;
        piVar25 = piVar24 + 0x1c;
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066d28 + 0x67054);
        iVar3 = DAT_00066d2c + 0x67068;
        iVar10 = DAT_00066d30 + 0x67070;
        piVar15 = piVar24;
        do {
          while (iVar4 = (**(code **)(*piVar15 + 4))(piVar15), iVar4 == 0) {
LAB_00067074:
            piVar15 = piVar15 + 0x26;
            piVar25 = piVar25 + 0x26;
            if (piVar19 <= piVar15) goto LAB_00067264;
          }
          piVar13 = piVar24 + 0x17;
          iVar4 = (**(code **)(*piVar15 + 0x18))(piVar15);
          FFileBase::Print((char *)local_60,DAT_00066d34 + 0x670c8,
                           *(undefined4 *)((int)piVar24 + (int)piVar25 + (8 - (int)piVar13)));
          FFileBase::Print((char *)local_60,DAT_00066d38 + 0x670e8,
                           *(undefined4 *)((int)piVar24 + (int)piVar25 + (0x24 - (int)piVar13)));
          FFileBase::Print((char *)local_60,DAT_00066d3c + 0x67100,
                           *(undefined4 *)((int)piVar24 + (int)piVar25 + (0x40 - (int)piVar13)));
          if (*piVar25 != piVar25[-1]) {
            FFileBase::Print((char *)local_60,DAT_00066d40 + 0x67120);
          }
          FFileBase::Print((char *)local_60,DAT_00066d44 + 0x67130);
          if (iVar4 == 0) {
            FFileBase::Print((char *)local_60,DAT_00066d5c + 0x6728c);
          }
          else {
            FFileBase::Print((char *)local_60,DAT_00066d48 + 0x67150);
            local_d8 = local_e8;
            iVar5 = *(int *)(iVar7 + DAT_00066e30);
            local_ec = iVar5 + 8;
            local_e8[0] = local_e8[0] & 0xffffff00;
            iVar6 = 0;
            local_d4 = local_d8;
            do {
              iVar14 = iVar6 + 1;
              (**(code **)(*piVar15 + 0x28))(piVar15,iVar6,&local_ec);
              FFileBase::Print((char *)local_60,iVar10,local_d4);
              if (iVar4 != iVar14) {
                FFileBase::Print((char *)local_60,iVar3);
              }
              iVar6 = iVar14;
            } while (iVar14 != iVar4);
            FFileBase::Print((char *)local_60,DAT_00066d4c + 0x671d8);
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
          FFileBase::Print((char *)local_60,DAT_00066d50 + 0x67224);
          if (local_168 == iVar2) goto LAB_00067074;
          piVar15 = piVar15 + 0x26;
          piVar25 = piVar25 + 0x26;
          (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066d54 + 0x6725c);
        } while (piVar15 < piVar19);
LAB_00067264:
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066d58 + 0x6727c);
      }
    }
    else {
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066e80 + 0x67dfc);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066e84 + 0x67e18,DAT_00066e88 + 0x67e1c);
    }
    (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066bd0 + 0x65f24);
    pUVar11 = *(UPreference_ModelToggle **)(this + 0x1c);
    pUVar16 = pUVar11 + *(int *)(this + 0x20) * 0x90;
    if (pUVar11 < pUVar16) {
      iVar2 = 0;
      pUVar20 = pUVar11;
      do {
        pUVar21 = pUVar20 + 0x90;
        iVar3 = (**(code **)(*(int *)pUVar20 + 4))(pUVar20);
        if (iVar3 != 0) {
          iVar2 = iVar2 + 1;
        }
        pUVar20 = pUVar21;
      } while (pUVar21 < pUVar16);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066bd4 + 0x65f84);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066bd8 + 0x65fa0,DAT_00066bdc + 0x65fa4);
      iVar3 = DAT_00066d20;
      if (iVar2 != 0) {
        iVar10 = 0;
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066d1c + 0x66fcc);
        do {
          bVar1 = ReflectPreference<STG::UPreference_ModelToggle>
                            ((FFileBase *)local_60,pUVar11,false);
          if ((bVar1) && (iVar10 = iVar10 + 1, iVar10 != iVar2)) {
            (**(code **)(local_60[0] + 0xc))(local_60,iVar3 + 0x66fd4);
          }
          pUVar11 = pUVar11 + 0x90;
        } while (pUVar11 < pUVar16);
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066d24 + 0x6702c);
      }
    }
    else {
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066e68 + 0x67d84);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066e6c + 0x67da0,DAT_00066e70 + 0x67da4);
    }
    (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066be0 + 0x65fc4);
    pFVar12 = *(FFileBase **)(this + 0x24);
    pFVar17 = pFVar12 + *(int *)(this + 0x28) * 0x90;
    if (pFVar12 < pFVar17) {
      iVar2 = 0;
      pFVar23 = pFVar12;
      do {
        pFVar22 = pFVar23 + 0x90;
        iVar3 = (**(code **)(*(int *)pFVar23 + 4))(pFVar23);
        if (iVar3 != 0) {
          iVar2 = iVar2 + 1;
        }
        pFVar23 = pFVar22;
      } while (pFVar22 < pFVar17);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066be4 + 0x66024);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066be8 + 0x66040,DAT_00066bec + 0x66044);
      iVar3 = DAT_00066d14;
      if (iVar2 != 0) {
        iVar10 = 0;
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066d10 + 0x66f48);
        uVar9 = extraout_r3_02;
        do {
          bVar1 = ReflectPreference<STG::UPreference_TextureFont>
                            ((STG *)local_60,pFVar12,(UPreference_TextureFont *)0x0,SUB41(uVar9,0));
          uVar9 = extraout_r3_03;
          if ((bVar1) && (iVar10 = iVar10 + 1, iVar10 != iVar2)) {
            (**(code **)(local_60[0] + 0xc))(local_60,iVar3 + 0x66f50);
            uVar9 = extraout_r3_04;
          }
          pFVar12 = pFVar12 + 0x90;
        } while (pFVar12 < pFVar17);
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066d18 + 0x66fa8);
      }
    }
    else {
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066e74 + 0x67dc0);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066e78 + 0x67ddc,DAT_00066e7c + 0x67de0);
    }
    (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066bf0 + 0x66068);
    pFVar12 = *(FFileBase **)(this + 0x34);
    pFVar17 = pFVar12 + *(int *)(this + 0x38) * 0x94;
    if (pFVar12 < pFVar17) {
      iVar2 = 0;
      pFVar23 = pFVar12;
      do {
        pFVar22 = pFVar23 + 0x94;
        iVar3 = (**(code **)(*(int *)pFVar23 + 4))(pFVar23);
        if (iVar3 != 0) {
          iVar2 = iVar2 + 1;
        }
        pFVar23 = pFVar22;
      } while (pFVar22 < pFVar17);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066bf4 + 0x660c4);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066bf8 + 0x660e0,DAT_00066bfc + 0x660e4);
      iVar3 = DAT_00066d08;
      if (iVar2 != 0) {
        iVar10 = 0;
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066d04 + 0x66ec4);
        uVar9 = extraout_r3;
        do {
          bVar1 = ReflectPreference<STG::UPreference_FileChooser_Texture>
                            ((STG *)local_60,pFVar12,(UPreference_FileChooser_Texture *)0x0,
                             SUB41(uVar9,0));
          uVar9 = extraout_r3_00;
          if ((bVar1) && (iVar10 = iVar10 + 1, iVar2 != iVar10)) {
            (**(code **)(local_60[0] + 0xc))(local_60,iVar3 + 0x66ecc);
            uVar9 = extraout_r3_01;
          }
          pFVar12 = pFVar12 + 0x94;
        } while (pFVar12 < pFVar17);
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066d0c + 0x66f24);
      }
    }
    else {
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00067fe0 + 0x67f28);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00067fe4 + 0x67f44,DAT_00067fe8 + 0x67f48);
    }
    (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066c00 + 0x66104);
    piVar24 = *(int **)(this + 0x3c);
    piVar19 = piVar24 + *(int *)(this + 0x40) * 0x22;
    if (piVar24 < piVar19) {
      iVar2 = 0;
      piVar15 = piVar24;
      do {
        piVar25 = piVar15 + 0x22;
        iVar3 = (**(code **)(*piVar15 + 4))(piVar15);
        if (iVar3 != 0) {
          iVar2 = iVar2 + 1;
        }
        piVar15 = piVar25;
      } while (piVar25 < piVar19);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066c04 + 0x66164);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066c08 + 0x66180,DAT_00066c0c + 0x66184);
      if (iVar2 != 0) {
        local_168 = 0;
        piVar25 = piVar24 + 0x1c;
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066cbc + 0x66898);
        iVar3 = DAT_00066cc0 + 0x668a8;
        iVar10 = DAT_00066cc4 + 0x668b8;
        piVar15 = piVar24;
        do {
          while (iVar4 = (**(code **)(*piVar15 + 4))(piVar15), iVar4 == 0) {
LAB_000668bc:
            piVar15 = piVar15 + 0x22;
            piVar25 = piVar25 + 0x22;
            if (piVar19 <= piVar15) goto LAB_00066b5c;
          }
          piVar13 = piVar24 + 0x17;
          iVar4 = (**(code **)(*piVar15 + 0x18))(piVar15);
          FFileBase::Print((char *)local_60,DAT_00066cc8 + 0x66914,
                           *(undefined4 *)((int)piVar24 + (int)piVar25 + (8 - (int)piVar13)));
          FFileBase::Print((char *)local_60,DAT_00066ccc + 0x66934,
                           *(undefined4 *)((int)piVar24 + (int)piVar25 + (0x24 - (int)piVar13)));
          FFileBase::Print((char *)local_60,DAT_00066cd0 + 0x6694c,
                           *(undefined4 *)((int)piVar24 + (int)piVar25 + (0x40 - (int)piVar13)));
          if (*piVar25 != piVar25[-1]) {
            FFileBase::Print((char *)local_60,DAT_00066cd4 + 0x6696c);
          }
          FFileBase::Print((char *)local_60,DAT_00066cd8 + 0x6697c);
          if (iVar4 == 0) {
            FFileBase::Print((char *)local_60,DAT_00066d00 + 0x66b84);
          }
          else {
            if (iVar4 == 1) {
              FFileBase::Print((char *)local_60,DAT_00066e58 + 0x67cec);
            }
            else {
              FFileBase::Print((char *)local_60,DAT_00066cdc + 0x669a0);
              FFileBase::Print((char *)local_60,DAT_00066ce0 + 0x669b0);
            }
            local_bc = local_cc;
            iVar6 = *(int *)(iVar7 + DAT_00066e30);
            local_d0 = iVar6 + 8;
            local_cc[0] = local_cc[0] & 0xffffff00;
            local_b8 = local_bc;
            if (iVar4 == 1) {
              iVar5 = DAT_00066ce4 + 0x66a00;
              iVar14 = DAT_00066ce8 + 0x66a04;
              iVar4 = 0;
              while( true ) {
                (**(code **)(*piVar15 + 0x28))(piVar15,iVar4,&local_d0);
                FFileBase::Print((char *)local_60,iVar5,local_b8);
                if (iVar4 + 1 == 1) break;
                FFileBase::Print((char *)local_60,iVar14);
                iVar4 = iVar4 + 1;
              }
            }
            else {
              iVar14 = DAT_00066cec + 0x66a60;
              iVar5 = 0;
              do {
                FFileBase::Print((char *)local_60,iVar3);
                iVar18 = iVar5 + 1;
                (**(code **)(*piVar15 + 0x28))(piVar15,iVar5,&local_d0);
                FFileBase::Print((char *)local_60,iVar10,local_b8);
                if (iVar4 != iVar18) {
                  FFileBase::Print((char *)local_60,iVar14);
                }
                iVar5 = iVar18;
              } while (iVar18 != iVar4);
            }
            FFileBase::Print((char *)local_60,DAT_00066cf0 + 0x66acc);
            local_d0 = iVar6 + 8;
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
          FFileBase::Print((char *)local_60,DAT_00066cf4 + 0x66b18);
          if (iVar2 == local_168) goto LAB_000668bc;
          piVar15 = piVar15 + 0x22;
          piVar25 = piVar25 + 0x22;
          (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066cf8 + 0x66b50);
        } while (piVar15 < piVar19);
LAB_00066b5c:
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066cfc + 0x66b74);
      }
    }
    else {
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066e8c + 0x67e38);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066e90 + 0x67e54,DAT_00066e94 + 0x67e58);
    }
    (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066c10 + 0x661a4);
    piVar24 = *(int **)(this + 0x44);
    piVar19 = piVar24 + *(int *)(this + 0x48) * 0x28;
    if (piVar24 < piVar19) {
      iVar2 = 0;
      piVar15 = piVar24;
      do {
        piVar25 = piVar15 + 0x28;
        iVar3 = (**(code **)(*piVar15 + 4))(piVar15);
        if (iVar3 != 0) {
          iVar2 = iVar2 + 1;
        }
        piVar15 = piVar25;
      } while (piVar25 < piVar19);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066c14 + 0x66204);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066c18 + 0x66220,DAT_00066c1c + 0x66224);
      iVar3 = DAT_00066c88;
      if (iVar2 != 0) {
        local_168 = 0;
        piVar25 = piVar24 + 0x1c;
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066c84 + 0x6663c);
        iVar10 = DAT_00066c8c + 0x66650;
        piVar15 = piVar24;
        do {
          while (iVar4 = (**(code **)(*piVar15 + 4))(piVar15), iVar4 == 0) {
LAB_00066654:
            piVar15 = piVar15 + 0x28;
            piVar25 = piVar25 + 0x28;
            if (piVar19 <= piVar15) goto LAB_00066844;
          }
          piVar13 = piVar24 + 0x17;
          iVar4 = (**(code **)(*piVar15 + 0x18))(piVar15);
          FFileBase::Print((char *)local_60,DAT_00066c90 + 0x666a8,
                           *(undefined4 *)((int)piVar24 + (int)piVar25 + (8 - (int)piVar13)));
          FFileBase::Print((char *)local_60,DAT_00066c94 + 0x666c8,
                           *(undefined4 *)((int)piVar24 + (int)piVar25 + (0x24 - (int)piVar13)));
          FFileBase::Print((char *)local_60,DAT_00066c98 + 0x666e0,
                           *(undefined4 *)((int)piVar24 + (int)piVar25 + (0x40 - (int)piVar13)));
          if (*piVar25 != piVar25[-1]) {
            FFileBase::Print((char *)local_60,DAT_00066c9c + 0x66700);
          }
          FFileBase::Print((char *)local_60,DAT_00066ca0 + 0x66710);
          if (iVar4 == 0) {
            FFileBase::Print((char *)local_60,DAT_00066cb8 + 0x6686c);
          }
          else {
            FFileBase::Print((char *)local_60,DAT_00066ca4 + 0x66730);
            local_a0 = local_b0;
            iVar5 = *(int *)(iVar7 + DAT_00066e30);
            local_b4 = iVar5 + 8;
            local_b0[0] = local_b0[0] & 0xffffff00;
            iVar6 = 0;
            local_9c = local_a0;
            do {
              iVar14 = iVar6 + 1;
              (**(code **)(*piVar15 + 0x28))(piVar15,iVar6,&local_b4);
              FFileBase::Print((char *)local_60,iVar3 + 0x6664c,local_9c);
              if (iVar4 != iVar14) {
                FFileBase::Print((char *)local_60,iVar10);
              }
              iVar6 = iVar14;
            } while (iVar14 != iVar4);
            FFileBase::Print((char *)local_60,DAT_00066ca8 + 0x667b8);
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
          FFileBase::Print((char *)local_60,DAT_00066cac + 0x66804);
          if (iVar2 == local_168) goto LAB_00066654;
          piVar15 = piVar15 + 0x28;
          piVar25 = piVar25 + 0x28;
          (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066cb0 + 0x6683c);
        } while (piVar15 < piVar19);
LAB_00066844:
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066cb4 + 0x6685c);
      }
    }
    else {
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00067ff8 + 0x67fa0);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00067ffc + 0x67fbc,DAT_00068000 + 0x67fc0);
    }
    (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066c20 + 0x66248);
    piVar24 = *(int **)(this + 0x4c);
    piVar19 = piVar24 + *(int *)(this + 0x50) * 0x23;
    if (piVar24 < piVar19) {
      iVar2 = 0;
      piVar15 = piVar24;
      do {
        piVar25 = piVar15 + 0x23;
        iVar3 = (**(code **)(*piVar15 + 4))(piVar15);
        if (iVar3 != 0) {
          iVar2 = iVar2 + 1;
        }
        piVar15 = piVar25;
      } while (piVar25 < piVar19);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066c24 + 0x662a4);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066c28 + 0x662c0,DAT_00066c2c + 0x662c4);
      if (iVar2 != 0) {
        local_168 = 0;
        piVar25 = piVar24 + 0x1c;
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066e08 + 0x679d4);
        iVar3 = DAT_00066e0c + 0x679e8;
        iVar10 = DAT_00066e10 + 0x679f8;
        piVar15 = piVar24;
        do {
          while (iVar4 = (**(code **)(*piVar15 + 4))(piVar15), iVar4 == 0) {
LAB_000679fc:
            piVar15 = piVar15 + 0x23;
            piVar25 = piVar25 + 0x23;
            if (piVar19 <= piVar15) goto LAB_00067c9c;
          }
          piVar13 = piVar24 + 0x17;
          iVar4 = (**(code **)(*piVar15 + 0x18))(piVar15);
          FFileBase::Print((char *)local_60,DAT_00066e14 + 0x67a54,
                           *(undefined4 *)((int)piVar24 + (int)piVar25 + (8 - (int)piVar13)));
          FFileBase::Print((char *)local_60,DAT_00066e18 + 0x67a74,
                           *(undefined4 *)((int)piVar24 + (int)piVar25 + (0x24 - (int)piVar13)));
          FFileBase::Print((char *)local_60,DAT_00066e1c + 0x67a8c,
                           *(undefined4 *)((int)piVar24 + (int)piVar25 + (0x40 - (int)piVar13)));
          if (*piVar25 != piVar25[-1]) {
            FFileBase::Print((char *)local_60,DAT_00066e20 + 0x67aac);
          }
          FFileBase::Print((char *)local_60,DAT_00066e24 + 0x67abc);
          if (iVar4 == 0) {
            FFileBase::Print((char *)local_60,DAT_00066e50 + 0x67cc4);
          }
          else {
            if (iVar4 == 1) {
              FFileBase::Print((char *)local_60,DAT_00066e54 + 0x67cd8);
            }
            else {
              FFileBase::Print((char *)local_60,DAT_00066e28 + 0x67ae0);
              FFileBase::Print((char *)local_60,DAT_00066e2c + 0x67af0);
            }
            local_84 = local_94;
            iVar6 = *(int *)(iVar7 + DAT_00066e30);
            local_98 = iVar6 + 8;
            local_94[0] = local_94[0] & 0xffffff00;
            local_80 = local_84;
            if (iVar4 == 1) {
              iVar5 = DAT_00066e34 + 0x67b40;
              iVar14 = DAT_00066e38 + 0x67b44;
              iVar4 = 0;
              while( true ) {
                (**(code **)(*piVar15 + 0x28))(piVar15,iVar4,&local_98);
                FFileBase::Print((char *)local_60,iVar5,local_80);
                if (iVar4 + 1 == 1) break;
                FFileBase::Print((char *)local_60,iVar14);
                iVar4 = iVar4 + 1;
              }
            }
            else {
              iVar14 = DAT_00066e3c + 0x67ba0;
              iVar5 = 0;
              do {
                FFileBase::Print((char *)local_60,iVar3);
                iVar18 = iVar5 + 1;
                (**(code **)(*piVar15 + 0x28))(piVar15,iVar5,&local_98);
                FFileBase::Print((char *)local_60,iVar10,local_80);
                if (iVar4 != iVar18) {
                  FFileBase::Print((char *)local_60,iVar14);
                }
                iVar5 = iVar18;
              } while (iVar18 != iVar4);
            }
            FFileBase::Print((char *)local_60,DAT_00066e40 + 0x67c0c);
            local_98 = iVar6 + 8;
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
          FFileBase::Print((char *)local_60,DAT_00066e44 + 0x67c58);
          if (local_168 == iVar2) goto LAB_000679fc;
          piVar15 = piVar15 + 0x23;
          piVar25 = piVar25 + 0x23;
          (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066e48 + 0x67c90);
        } while (piVar15 < piVar19);
LAB_00067c9c:
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066e4c + 0x67cb4);
      }
    }
    else {
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00067fec + 0x67f64);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00067ff0 + 0x67f80,DAT_00067ff4 + 0x67f84);
    }
    (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066c30 + 0x662e4);
    piVar24 = *(int **)(this + 0x54);
    piVar19 = piVar24 + *(int *)(this + 0x58) * 0x22;
    if (piVar24 < piVar19) {
      iVar2 = 0;
      piVar15 = piVar24;
      do {
        piVar25 = piVar15 + 0x22;
        iVar3 = (**(code **)(*piVar15 + 4))(piVar15);
        if (iVar3 != 0) {
          iVar2 = iVar2 + 1;
        }
        piVar15 = piVar25;
      } while (piVar25 < piVar19);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066c34 + 0x66344);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066c38 + 0x66360,DAT_00066c3c + 0x66364);
      iVar3 = DAT_00066dd4;
      if (iVar2 != 0) {
        local_164 = 0;
        piVar25 = piVar24 + 0x1c;
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066dd0 + 0x6777c);
        iVar10 = DAT_00066dd8 + 0x67790;
        piVar15 = piVar24;
        do {
          while (iVar4 = (**(code **)(*piVar15 + 4))(piVar15), iVar4 == 0) {
LAB_00067794:
            piVar15 = piVar15 + 0x22;
            piVar25 = piVar25 + 0x22;
            if (piVar19 <= piVar15) goto LAB_00067984;
          }
          piVar13 = piVar24 + 0x17;
          iVar4 = (**(code **)(*piVar15 + 0x18))(piVar15);
          FFileBase::Print((char *)local_60,DAT_00066ddc + 0x677e8,
                           *(undefined4 *)((int)piVar24 + (int)piVar25 + (8 - (int)piVar13)));
          FFileBase::Print((char *)local_60,DAT_00066de0 + 0x67808,
                           *(undefined4 *)((int)piVar24 + (int)piVar25 + (0x24 - (int)piVar13)));
          FFileBase::Print((char *)local_60,DAT_00066de4 + 0x67820,
                           *(undefined4 *)((int)piVar24 + (int)piVar25 + (0x40 - (int)piVar13)));
          if (*piVar25 != piVar25[-1]) {
            FFileBase::Print((char *)local_60,DAT_00066de8 + 0x67840);
          }
          FFileBase::Print((char *)local_60,DAT_00066dec + 0x67850);
          if (iVar4 == 0) {
            FFileBase::Print((char *)local_60,DAT_00066e04 + 0x679ac);
          }
          else {
            FFileBase::Print((char *)local_60,DAT_00066df0 + 0x67870);
            local_68 = local_78;
            iVar5 = *(int *)(iVar7 + DAT_00066e30);
            local_7c = iVar5 + 8;
            local_78[0] = local_78[0] & 0xffffff00;
            iVar6 = 0;
            local_64 = local_68;
            do {
              iVar14 = iVar6 + 1;
              (**(code **)(*piVar15 + 0x28))(piVar15,iVar6,&local_7c);
              FFileBase::Print((char *)local_60,iVar3 + 0x6778c,local_64);
              if (iVar4 != iVar14) {
                FFileBase::Print((char *)local_60,iVar10);
              }
              iVar6 = iVar14;
            } while (iVar14 != iVar4);
            FFileBase::Print((char *)local_60,DAT_00066df4 + 0x678f8);
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
          FFileBase::Print((char *)local_60,DAT_00066df8 + 0x67944);
          if (local_164 == iVar2) goto LAB_00067794;
          piVar15 = piVar15 + 0x22;
          piVar25 = piVar25 + 0x22;
          (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066dfc + 0x6797c);
        } while (piVar15 < piVar19);
LAB_00067984:
        (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066e00 + 0x6799c);
      }
    }
    else {
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066e5c + 0x67d48);
      (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066e60 + 0x67d64,DAT_00066e64 + 0x67d68);
    }
    (**(code **)(local_60[0] + 0xc))(local_60,DAT_00066c40 + 0x66384);
    FFileBase::Print((char *)local_60,DAT_00066c44 + 0x66394);
    FFileBase::Print((char *)local_60,DAT_00066c48 + 0x663a4);
    FFileBase::Close((FFileBase *)local_60);
  }
  FFileDisk::~FFileDisk((FFileDisk *)local_60);
  if (local_2c != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


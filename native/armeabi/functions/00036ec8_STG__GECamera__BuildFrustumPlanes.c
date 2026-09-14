/* 00036ec8 | STG::GECamera::BuildFrustumPlanes */

/* STG::GECamera::BuildFrustumPlanes() */

void STG::GECamera::BuildFrustumPlanes(void)

{
  GECamera *in_r0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 extraout_r0;
  undefined4 extraout_r0_00;
  undefined4 extraout_r0_01;
  undefined4 extraout_r0_02;
  undefined4 extraout_r0_03;
  undefined4 extraout_r0_04;
  undefined4 extraout_r0_05;
  undefined4 extraout_r0_06;
  undefined4 extraout_r0_07;
  undefined4 extraout_r0_08;
  undefined4 extraout_r0_09;
  undefined4 extraout_r0_10;
  undefined4 extraout_r0_11;
  undefined4 extraout_r0_12;
  undefined4 extraout_r0_13;
  undefined4 extraout_r0_14;
  undefined4 extraout_r0_15;
  undefined4 extraout_r0_16;
  float in_s0;
  float __x;
  float __x_00;
  float __x_01;
  float __x_02;
  float __x_03;
  float __x_04;
  float __x_05;
  float __x_06;
  float __x_07;
  float __x_08;
  float __x_09;
  float __x_10;
  float __x_11;
  float __x_12;
  float __x_13;
  float __x_14;
  float __x_15;
  float __x_16;
  float in_s1;
  undefined8 uVar10;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar10 = ConvertClipToWorld(in_r0,in_s0,in_s1,(MVector3 *)0xbf800000,(MVector3 *)0x3f800000);
  uVar10 = ConvertClipToWorld(in_r0,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20),
                              (MVector3 *)0x3f800000,(MVector3 *)0x3f800000);
  uVar10 = ConvertClipToWorld(in_r0,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20),
                              (MVector3 *)0xbf800000,(MVector3 *)0xbf800000);
  ConvertClipToWorld(in_r0,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20),(MVector3 *)0x3f800000,
                     (MVector3 *)0xbf800000);
  uVar1 = __subsf3(local_88,local_7c);
  uVar2 = __subsf3(local_84,local_78);
  uVar3 = __subsf3(local_80,local_74);
  uVar4 = __subsf3(local_7c,local_4c);
  uVar5 = __subsf3(local_78,local_48);
  uVar6 = __subsf3(local_74,local_44);
  uVar7 = __mulsf3(uVar2,uVar2);
  uVar8 = __mulsf3(uVar1,uVar1);
  uVar7 = __addsf3(uVar7,uVar8);
  uVar8 = __mulsf3(uVar3,uVar3);
  uVar7 = __addsf3(uVar7,uVar8);
  iVar9 = __aeabi_fcmpgt(uVar7,0);
  if (iVar9 == 0) {
    uVar2 = 0;
    local_c8 = 0;
    uVar1 = uVar2;
  }
  else {
    sqrtf(__x);
    uVar7 = __divsf3(0x3f800000,extraout_r0);
    local_c8 = __mulsf3(uVar7,uVar1);
    uVar2 = __mulsf3(uVar7,uVar2);
    uVar1 = __mulsf3(uVar7,uVar3);
  }
  uVar3 = __mulsf3(uVar5,uVar5);
  uVar7 = __mulsf3(uVar4,uVar4);
  uVar3 = __addsf3(uVar3,uVar7);
  uVar7 = __mulsf3(uVar6,uVar6);
  uVar3 = __addsf3(uVar3,uVar7);
  iVar9 = __aeabi_fcmpgt(uVar3,0);
  if (iVar9 == 0) {
    *(undefined4 *)(in_r0 + 4) = 0;
    *(undefined4 *)(in_r0 + 8) = 0;
    *(undefined4 *)(in_r0 + 0xc) = 0;
LAB_000382a8:
    uVar1 = 0;
    *(undefined4 *)(in_r0 + 4) = 0;
    *(undefined4 *)(in_r0 + 8) = 0;
    *(undefined4 *)(in_r0 + 0xc) = 0;
  }
  else {
    sqrtf(__x_00);
    uVar3 = __divsf3(0x3f800000,extraout_r0_00);
    uVar4 = __mulsf3(uVar3,uVar4);
    uVar5 = __mulsf3(uVar3,uVar5);
    uVar3 = __mulsf3(uVar3,uVar6);
    uVar6 = __mulsf3(uVar5,uVar1);
    uVar7 = __mulsf3(uVar3,uVar2);
    uVar6 = __subsf3(uVar6,uVar7);
    uVar3 = __mulsf3(uVar3,local_c8);
    uVar1 = __mulsf3(uVar4,uVar1);
    uVar1 = __subsf3(uVar3,uVar1);
    uVar2 = __mulsf3(uVar4,uVar2);
    uVar3 = __mulsf3(uVar5,local_c8);
    uVar2 = __subsf3(uVar2,uVar3);
    uVar3 = __mulsf3(uVar6,uVar6);
    uVar4 = __mulsf3(uVar1,uVar1);
    uVar3 = __addsf3(uVar4,uVar3);
    uVar4 = __mulsf3(uVar2,uVar2);
    uVar3 = __addsf3(uVar3,uVar4);
    *(undefined4 *)(in_r0 + 4) = uVar6;
    *(undefined4 *)(in_r0 + 8) = uVar1;
    *(undefined4 *)(in_r0 + 0xc) = uVar2;
    iVar9 = __aeabi_fcmpgt(uVar3,0);
    if (iVar9 == 0) goto LAB_000382a8;
    sqrtf(__x_01);
    uVar3 = __divsf3(0x3f800000,extraout_r0_01);
    uVar4 = __mulsf3(uVar6,uVar3);
    *(undefined4 *)(in_r0 + 4) = uVar4;
    uVar1 = __mulsf3(uVar1,uVar3);
    *(undefined4 *)(in_r0 + 8) = uVar1;
    uVar2 = __mulsf3(uVar3,uVar2);
    *(undefined4 *)(in_r0 + 0xc) = uVar2;
    uVar3 = __mulsf3(uVar4,local_88);
    uVar1 = __mulsf3(uVar1,local_84);
    uVar1 = __addsf3(uVar1,uVar3);
    uVar2 = __mulsf3(uVar2,local_80);
    uVar1 = __addsf3(uVar1,uVar2);
  }
  *(undefined4 *)(in_r0 + 0x10) = uVar1;
  uVar1 = __subsf3(local_64,local_70);
  uVar2 = __subsf3(local_60,local_6c);
  uVar3 = __subsf3(local_5c,local_68);
  uVar4 = __subsf3(local_70,local_40);
  uVar5 = __subsf3(local_6c,local_3c);
  uVar6 = __subsf3(local_68,local_38);
  uVar7 = __mulsf3(uVar2,uVar2);
  uVar8 = __mulsf3(uVar1,uVar1);
  uVar7 = __addsf3(uVar7,uVar8);
  uVar8 = __mulsf3(uVar3,uVar3);
  uVar7 = __addsf3(uVar7,uVar8);
  iVar9 = __aeabi_fcmpgt(uVar7,0);
  if (iVar9 == 0) {
    uVar2 = 0;
    local_c0 = 0;
    uVar1 = uVar2;
  }
  else {
    sqrtf(__x_02);
    uVar7 = __divsf3(0x3f800000,extraout_r0_02);
    local_c0 = __mulsf3(uVar7,uVar1);
    uVar2 = __mulsf3(uVar7,uVar2);
    uVar1 = __mulsf3(uVar7,uVar3);
  }
  uVar3 = __mulsf3(uVar5,uVar5);
  uVar7 = __mulsf3(uVar4,uVar4);
  uVar3 = __addsf3(uVar3,uVar7);
  uVar7 = __mulsf3(uVar6,uVar6);
  uVar3 = __addsf3(uVar3,uVar7);
  iVar9 = __aeabi_fcmpgt(uVar3,0);
  if (iVar9 == 0) {
    *(undefined4 *)(in_r0 + 0x14) = 0;
    *(undefined4 *)(in_r0 + 0x18) = 0;
    *(undefined4 *)(in_r0 + 0x1c) = 0;
LAB_00038348:
    uVar1 = 0;
    *(undefined4 *)(in_r0 + 0x14) = 0;
    *(undefined4 *)(in_r0 + 0x18) = 0;
    *(undefined4 *)(in_r0 + 0x1c) = 0;
  }
  else {
    sqrtf(__x_03);
    uVar3 = __divsf3(0x3f800000,extraout_r0_03);
    uVar4 = __mulsf3(uVar3,uVar4);
    uVar5 = __mulsf3(uVar3,uVar5);
    uVar3 = __mulsf3(uVar3,uVar6);
    uVar6 = __mulsf3(uVar5,uVar1);
    uVar7 = __mulsf3(uVar3,uVar2);
    uVar6 = __subsf3(uVar6,uVar7);
    uVar3 = __mulsf3(uVar3,local_c0);
    uVar1 = __mulsf3(uVar4,uVar1);
    uVar1 = __subsf3(uVar3,uVar1);
    uVar2 = __mulsf3(uVar4,uVar2);
    uVar3 = __mulsf3(uVar5,local_c0);
    uVar2 = __subsf3(uVar2,uVar3);
    uVar3 = __mulsf3(uVar6,uVar6);
    uVar4 = __mulsf3(uVar1,uVar1);
    uVar3 = __addsf3(uVar4,uVar3);
    uVar4 = __mulsf3(uVar2,uVar2);
    uVar3 = __addsf3(uVar3,uVar4);
    *(undefined4 *)(in_r0 + 0x14) = uVar6;
    *(undefined4 *)(in_r0 + 0x18) = uVar1;
    *(undefined4 *)(in_r0 + 0x1c) = uVar2;
    iVar9 = __aeabi_fcmpgt(uVar3,0);
    if (iVar9 == 0) goto LAB_00038348;
    sqrtf(__x_04);
    uVar3 = __divsf3(0x3f800000,extraout_r0_04);
    uVar4 = __mulsf3(uVar3,uVar6);
    *(undefined4 *)(in_r0 + 0x14) = uVar4;
    uVar1 = __mulsf3(uVar3,uVar1);
    *(undefined4 *)(in_r0 + 0x18) = uVar1;
    uVar2 = __mulsf3(uVar3,uVar2);
    *(undefined4 *)(in_r0 + 0x1c) = uVar2;
    uVar3 = __mulsf3(uVar4,local_64);
    uVar1 = __mulsf3(uVar1,local_60);
    uVar1 = __addsf3(uVar1,uVar3);
    uVar2 = __mulsf3(uVar2,local_5c);
    uVar1 = __addsf3(uVar1,uVar2);
  }
  *(undefined4 *)(in_r0 + 0x20) = uVar1;
  uVar1 = __subsf3(local_88,local_70);
  uVar2 = __subsf3(local_84,local_6c);
  uVar3 = __subsf3(local_80,local_68);
  uVar4 = __subsf3(local_70,local_64);
  uVar5 = __subsf3(local_6c,local_60);
  uVar6 = __subsf3(local_68,local_5c);
  uVar7 = __mulsf3(uVar2,uVar2);
  uVar8 = __mulsf3(uVar1,uVar1);
  uVar7 = __addsf3(uVar7,uVar8);
  uVar8 = __mulsf3(uVar3,uVar3);
  uVar7 = __addsf3(uVar7,uVar8);
  iVar9 = __aeabi_fcmpgt(uVar7,0);
  if (iVar9 == 0) {
    uVar2 = 0;
    local_c0 = 0;
    uVar1 = uVar2;
  }
  else {
    sqrtf(__x_05);
    uVar7 = __divsf3(0x3f800000,extraout_r0_05);
    local_c0 = __mulsf3(uVar7,uVar1);
    uVar2 = __mulsf3(uVar7,uVar2);
    uVar1 = __mulsf3(uVar7,uVar3);
  }
  uVar3 = __mulsf3(uVar5,uVar5);
  uVar7 = __mulsf3(uVar4,uVar4);
  uVar3 = __addsf3(uVar3,uVar7);
  uVar7 = __mulsf3(uVar6,uVar6);
  uVar3 = __addsf3(uVar3,uVar7);
  iVar9 = __aeabi_fcmpgt(uVar3,0);
  if (iVar9 == 0) {
    *(undefined4 *)(in_r0 + 0x24) = 0;
    *(undefined4 *)(in_r0 + 0x28) = 0;
    *(undefined4 *)(in_r0 + 0x2c) = 0;
LAB_00038328:
    uVar1 = 0;
    *(undefined4 *)(in_r0 + 0x24) = 0;
    *(undefined4 *)(in_r0 + 0x28) = 0;
    *(undefined4 *)(in_r0 + 0x2c) = 0;
  }
  else {
    sqrtf(__x_06);
    uVar3 = __divsf3(0x3f800000,extraout_r0_06);
    uVar4 = __mulsf3(uVar3,uVar4);
    uVar5 = __mulsf3(uVar3,uVar5);
    uVar3 = __mulsf3(uVar3,uVar6);
    uVar6 = __mulsf3(uVar5,uVar1);
    uVar7 = __mulsf3(uVar3,uVar2);
    uVar6 = __subsf3(uVar6,uVar7);
    uVar3 = __mulsf3(uVar3,local_c0);
    uVar1 = __mulsf3(uVar4,uVar1);
    uVar1 = __subsf3(uVar3,uVar1);
    uVar2 = __mulsf3(uVar4,uVar2);
    uVar3 = __mulsf3(uVar5,local_c0);
    uVar2 = __subsf3(uVar2,uVar3);
    uVar3 = __mulsf3(uVar6,uVar6);
    uVar4 = __mulsf3(uVar1,uVar1);
    uVar3 = __addsf3(uVar4,uVar3);
    uVar4 = __mulsf3(uVar2,uVar2);
    uVar3 = __addsf3(uVar3,uVar4);
    *(undefined4 *)(in_r0 + 0x24) = uVar6;
    *(undefined4 *)(in_r0 + 0x28) = uVar1;
    *(undefined4 *)(in_r0 + 0x2c) = uVar2;
    iVar9 = __aeabi_fcmpgt(uVar3,0);
    if (iVar9 == 0) goto LAB_00038328;
    sqrtf(__x_07);
    uVar3 = __divsf3(0x3f800000,extraout_r0_07);
    uVar4 = __mulsf3(uVar3,uVar6);
    *(undefined4 *)(in_r0 + 0x24) = uVar4;
    uVar1 = __mulsf3(uVar3,uVar1);
    *(undefined4 *)(in_r0 + 0x28) = uVar1;
    uVar2 = __mulsf3(uVar3,uVar2);
    *(undefined4 *)(in_r0 + 0x2c) = uVar2;
    uVar3 = __mulsf3(uVar4,local_88);
    uVar1 = __mulsf3(uVar1,local_84);
    uVar1 = __addsf3(uVar1,uVar3);
    uVar2 = __mulsf3(uVar2,local_80);
    uVar1 = __addsf3(uVar1,uVar2);
  }
  *(undefined4 *)(in_r0 + 0x30) = uVar1;
  uVar1 = __subsf3(local_4c,local_34);
  uVar2 = __subsf3(local_48,local_30);
  uVar3 = __subsf3(local_44,local_2c);
  uVar4 = __subsf3(local_34,local_40);
  uVar5 = __subsf3(local_30,local_3c);
  uVar6 = __subsf3(local_2c,local_38);
  uVar7 = __mulsf3(uVar2,uVar2);
  uVar8 = __mulsf3(uVar1,uVar1);
  uVar7 = __addsf3(uVar7,uVar8);
  uVar8 = __mulsf3(uVar3,uVar3);
  uVar7 = __addsf3(uVar7,uVar8);
  iVar9 = __aeabi_fcmpgt(uVar7,0);
  if (iVar9 == 0) {
    uVar2 = 0;
    local_8c = 0;
    uVar1 = uVar2;
  }
  else {
    sqrtf(__x_08);
    uVar7 = __divsf3(0x3f800000,extraout_r0_08);
    local_8c = __mulsf3(uVar7,uVar1);
    uVar1 = __mulsf3(uVar7,uVar2);
    uVar2 = __mulsf3(uVar7,uVar3);
  }
  uVar3 = __mulsf3(uVar5,uVar5);
  uVar7 = __mulsf3(uVar4,uVar4);
  uVar3 = __addsf3(uVar3,uVar7);
  uVar7 = __mulsf3(uVar6,uVar6);
  uVar3 = __addsf3(uVar3,uVar7);
  iVar9 = __aeabi_fcmpgt(uVar3,0);
  if (iVar9 == 0) {
    *(undefined4 *)(in_r0 + 0x34) = 0;
    *(undefined4 *)(in_r0 + 0x38) = 0;
    *(undefined4 *)(in_r0 + 0x3c) = 0;
LAB_00038308:
    uVar1 = 0;
    *(undefined4 *)(in_r0 + 0x34) = 0;
    *(undefined4 *)(in_r0 + 0x38) = 0;
    *(undefined4 *)(in_r0 + 0x3c) = 0;
  }
  else {
    sqrtf(__x_09);
    uVar3 = __divsf3(0x3f800000,extraout_r0_09);
    uVar4 = __mulsf3(uVar3,uVar4);
    uVar5 = __mulsf3(uVar3,uVar5);
    uVar3 = __mulsf3(uVar3,uVar6);
    uVar6 = __mulsf3(uVar5,uVar2);
    uVar7 = __mulsf3(uVar3,uVar1);
    uVar6 = __subsf3(uVar6,uVar7);
    uVar3 = __mulsf3(uVar3,local_8c);
    uVar2 = __mulsf3(uVar4,uVar2);
    uVar2 = __subsf3(uVar3,uVar2);
    uVar1 = __mulsf3(uVar4,uVar1);
    uVar3 = __mulsf3(uVar5,local_8c);
    uVar1 = __subsf3(uVar1,uVar3);
    uVar3 = __mulsf3(uVar6,uVar6);
    uVar4 = __mulsf3(uVar2,uVar2);
    uVar3 = __addsf3(uVar4,uVar3);
    uVar4 = __mulsf3(uVar1,uVar1);
    uVar3 = __addsf3(uVar3,uVar4);
    *(undefined4 *)(in_r0 + 0x34) = uVar6;
    *(undefined4 *)(in_r0 + 0x38) = uVar2;
    *(undefined4 *)(in_r0 + 0x3c) = uVar1;
    iVar9 = __aeabi_fcmpgt(uVar3,0);
    if (iVar9 == 0) goto LAB_00038308;
    sqrtf(__x_10);
    uVar3 = __divsf3(0x3f800000,extraout_r0_10);
    uVar4 = __mulsf3(uVar3,uVar6);
    *(undefined4 *)(in_r0 + 0x34) = uVar4;
    uVar2 = __mulsf3(uVar3,uVar2);
    *(undefined4 *)(in_r0 + 0x38) = uVar2;
    uVar1 = __mulsf3(uVar3,uVar1);
    *(undefined4 *)(in_r0 + 0x3c) = uVar1;
    uVar3 = __mulsf3(uVar4,local_4c);
    uVar2 = __mulsf3(uVar2,local_48);
    uVar2 = __addsf3(uVar2,uVar3);
    uVar1 = __mulsf3(uVar1,local_44);
    uVar1 = __addsf3(uVar2,uVar1);
  }
  *(undefined4 *)(in_r0 + 0x40) = uVar1;
  uVar1 = __subsf3(local_70,local_88);
  uVar2 = __subsf3(local_6c,local_84);
  uVar3 = __subsf3(local_68,local_80);
  uVar4 = __subsf3(local_88,local_58);
  uVar5 = __subsf3(local_84,local_54);
  uVar6 = __subsf3(local_80,local_50);
  uVar7 = __mulsf3(uVar2,uVar2);
  uVar8 = __mulsf3(uVar1,uVar1);
  uVar7 = __addsf3(uVar7,uVar8);
  uVar8 = __mulsf3(uVar3,uVar3);
  uVar7 = __addsf3(uVar7,uVar8);
  iVar9 = __aeabi_fcmpgt(uVar7,0);
  if (iVar9 == 0) {
    uVar2 = 0;
    local_c4 = 0;
    uVar1 = uVar2;
  }
  else {
    sqrtf(__x_11);
    uVar7 = __divsf3(0x3f800000,extraout_r0_11);
    local_c4 = __mulsf3(uVar7,uVar1);
    uVar2 = __mulsf3(uVar7,uVar2);
    uVar1 = __mulsf3(uVar7,uVar3);
  }
  uVar3 = __mulsf3(uVar5,uVar5);
  uVar7 = __mulsf3(uVar4,uVar4);
  uVar3 = __addsf3(uVar3,uVar7);
  uVar7 = __mulsf3(uVar6,uVar6);
  uVar3 = __addsf3(uVar3,uVar7);
  iVar9 = __aeabi_fcmpgt(uVar3,0);
  if (iVar9 == 0) {
    *(undefined4 *)(in_r0 + 0x44) = 0;
    *(undefined4 *)(in_r0 + 0x48) = 0;
    *(undefined4 *)(in_r0 + 0x4c) = 0;
LAB_000382e8:
    uVar1 = 0;
    *(undefined4 *)(in_r0 + 0x44) = 0;
    *(undefined4 *)(in_r0 + 0x48) = 0;
    *(undefined4 *)(in_r0 + 0x4c) = 0;
  }
  else {
    sqrtf(__x_12);
    uVar3 = __divsf3(0x3f800000,extraout_r0_12);
    uVar4 = __mulsf3(uVar3,uVar4);
    uVar5 = __mulsf3(uVar3,uVar5);
    uVar3 = __mulsf3(uVar3,uVar6);
    uVar6 = __mulsf3(uVar5,uVar1);
    uVar7 = __mulsf3(uVar3,uVar2);
    uVar6 = __subsf3(uVar6,uVar7);
    uVar3 = __mulsf3(uVar3,local_c4);
    uVar1 = __mulsf3(uVar4,uVar1);
    uVar1 = __subsf3(uVar3,uVar1);
    uVar2 = __mulsf3(uVar4,uVar2);
    uVar3 = __mulsf3(uVar5,local_c4);
    uVar2 = __subsf3(uVar2,uVar3);
    uVar3 = __mulsf3(uVar6,uVar6);
    uVar4 = __mulsf3(uVar1,uVar1);
    uVar3 = __addsf3(uVar4,uVar3);
    uVar4 = __mulsf3(uVar2,uVar2);
    uVar3 = __addsf3(uVar3,uVar4);
    *(undefined4 *)(in_r0 + 0x44) = uVar6;
    *(undefined4 *)(in_r0 + 0x48) = uVar1;
    *(undefined4 *)(in_r0 + 0x4c) = uVar2;
    iVar9 = __aeabi_fcmpgt(uVar3,0);
    if (iVar9 == 0) goto LAB_000382e8;
    sqrtf(__x_13);
    uVar3 = __divsf3(0x3f800000,extraout_r0_13);
    uVar4 = __mulsf3(uVar3,uVar6);
    *(undefined4 *)(in_r0 + 0x44) = uVar4;
    uVar1 = __mulsf3(uVar3,uVar1);
    *(undefined4 *)(in_r0 + 0x48) = uVar1;
    uVar2 = __mulsf3(uVar3,uVar2);
    *(undefined4 *)(in_r0 + 0x4c) = uVar2;
    uVar3 = __mulsf3(uVar4,local_70);
    uVar1 = __mulsf3(uVar1,local_6c);
    uVar1 = __addsf3(uVar1,uVar3);
    uVar2 = __mulsf3(uVar2,local_68);
    uVar1 = __addsf3(uVar1,uVar2);
  }
  *(undefined4 *)(in_r0 + 0x50) = uVar1;
  uVar1 = __subsf3(local_7c,local_64);
  uVar2 = __subsf3(local_78,local_60);
  uVar3 = __subsf3(local_74,local_5c);
  uVar4 = __subsf3(local_64,local_34);
  uVar5 = __subsf3(local_60,local_30);
  uVar6 = __subsf3(local_5c,local_2c);
  uVar7 = __mulsf3(uVar2,uVar2);
  uVar8 = __mulsf3(uVar1,uVar1);
  uVar7 = __addsf3(uVar7,uVar8);
  uVar8 = __mulsf3(uVar3,uVar3);
  uVar7 = __addsf3(uVar7,uVar8);
  iVar9 = __aeabi_fcmpgt(uVar7,0);
  if (iVar9 == 0) {
    uVar2 = 0;
    local_c8 = 0;
    uVar1 = uVar2;
  }
  else {
    sqrtf(__x_14);
    uVar7 = __divsf3(0x3f800000,extraout_r0_14);
    local_c8 = __mulsf3(uVar7,uVar1);
    uVar2 = __mulsf3(uVar7,uVar2);
    uVar1 = __mulsf3(uVar7,uVar3);
  }
  uVar3 = __mulsf3(uVar5,uVar5);
  uVar7 = __mulsf3(uVar4,uVar4);
  uVar3 = __addsf3(uVar3,uVar7);
  uVar7 = __mulsf3(uVar6,uVar6);
  uVar3 = __addsf3(uVar3,uVar7);
  iVar9 = __aeabi_fcmpgt(uVar3,0);
  if (iVar9 == 0) {
    *(undefined4 *)(in_r0 + 0x54) = 0;
    *(undefined4 *)(in_r0 + 0x58) = 0;
    *(undefined4 *)(in_r0 + 0x5c) = 0;
  }
  else {
    sqrtf(__x_15);
    uVar3 = __divsf3(0x3f800000,extraout_r0_15);
    uVar4 = __mulsf3(uVar3,uVar4);
    uVar5 = __mulsf3(uVar3,uVar5);
    uVar3 = __mulsf3(uVar3,uVar6);
    uVar6 = __mulsf3(uVar5,uVar1);
    uVar7 = __mulsf3(uVar3,uVar2);
    uVar6 = __subsf3(uVar6,uVar7);
    uVar3 = __mulsf3(uVar3,local_c8);
    uVar1 = __mulsf3(uVar4,uVar1);
    uVar1 = __subsf3(uVar3,uVar1);
    uVar2 = __mulsf3(uVar4,uVar2);
    uVar3 = __mulsf3(uVar5,local_c8);
    uVar2 = __subsf3(uVar2,uVar3);
    uVar3 = __mulsf3(uVar6,uVar6);
    uVar4 = __mulsf3(uVar1,uVar1);
    uVar3 = __addsf3(uVar4,uVar3);
    uVar4 = __mulsf3(uVar2,uVar2);
    uVar3 = __addsf3(uVar3,uVar4);
    *(undefined4 *)(in_r0 + 0x54) = uVar6;
    *(undefined4 *)(in_r0 + 0x58) = uVar1;
    *(undefined4 *)(in_r0 + 0x5c) = uVar2;
    iVar9 = __aeabi_fcmpgt(uVar3,0);
    if (iVar9 != 0) {
      sqrtf(__x_16);
      uVar3 = __divsf3(0x3f800000,extraout_r0_16);
      uVar4 = __mulsf3(uVar3,uVar6);
      *(undefined4 *)(in_r0 + 0x54) = uVar4;
      uVar1 = __mulsf3(uVar3,uVar1);
      *(undefined4 *)(in_r0 + 0x58) = uVar1;
      uVar2 = __mulsf3(uVar3,uVar2);
      *(undefined4 *)(in_r0 + 0x5c) = uVar2;
      uVar3 = __mulsf3(uVar4,local_7c);
      uVar1 = __mulsf3(uVar1,local_78);
      uVar1 = __addsf3(uVar1,uVar3);
      uVar2 = __mulsf3(uVar2,local_74);
      uVar1 = __addsf3(uVar1,uVar2);
      goto LAB_00038290;
    }
  }
  uVar1 = 0;
  *(undefined4 *)(in_r0 + 0x54) = 0;
  *(undefined4 *)(in_r0 + 0x58) = 0;
  *(undefined4 *)(in_r0 + 0x5c) = 0;
LAB_00038290:
  *(undefined4 *)(in_r0 + 0x60) = uVar1;
  return;
}


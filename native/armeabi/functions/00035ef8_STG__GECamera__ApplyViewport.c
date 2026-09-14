/* 00035ef8 | STG::GECamera::ApplyViewport */

/* STG::GECamera::ApplyViewport(STG::GEViewport const&) */

void STG::GECamera::ApplyViewport(GEViewport *param_1)

{
  GEViewport *in_r1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float in_s0;
  float __x;
  float __x_00;
  
  *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(in_r1 + 0x30);
  uVar1 = *(undefined4 *)(in_r1 + 4);
  uVar2 = *(undefined4 *)(in_r1 + 8);
  uVar3 = *(undefined4 *)(in_r1 + 0xc);
  *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)in_r1;
  *(undefined4 *)(param_1 + 0x1fc) = uVar1;
  *(undefined4 *)(param_1 + 0x200) = uVar2;
  *(undefined4 *)(param_1 + 0x204) = uVar3;
  if (param_1[0x20c] != (GEViewport)0x0) {
    uVar1 = GEViewport::GetAspectRatioInterval(in_r1,in_s0);
    uVar2 = __mulsf3(*(undefined4 *)(param_1 + 0x1e4),DAT_00035fbc);
    tanf(__x);
    __x_00 = (float)__mulsf3();
    atanf(__x_00);
    uVar3 = __subsf3();
    uVar1 = __mulsf3(uVar3,uVar1);
    uVar1 = __addsf3(uVar1,uVar2);
    uVar1 = __mulsf3(uVar1,DAT_00035fc0);
    *(undefined4 *)(param_1 + 0x1e8) = uVar1;
  }
  uVar1 = *(undefined4 *)(in_r1 + 0x20);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(in_r1 + 0x24);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
  uVar1 = *(undefined4 *)(in_r1 + 0x28);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(in_r1 + 0x2c);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return;
}


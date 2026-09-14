/* 00039050 | STG::GEFont::SetCharData */

/* STG::GEFont::SetCharData(unsigned short, unsigned short, STG::URectangle<float> const&, long,
   long, long, long, float) */

void __thiscall
STG::GEFont::SetCharData
          (GEFont *this,ushort param_1,ushort param_2,URectangle *param_3,long param_4,long param_5,
          long param_6,long param_7,float param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined4 in_stack_00000010;
  
  if (param_4 < 0x7fff) {
    uVar9 = (undefined2)param_4;
  }
  else {
    uVar9 = 0x7fff;
  }
  if (param_5 < 0x7fff) {
    iVar6 = param_5 << 0x10;
  }
  else {
    iVar6 = 0x7f00;
  }
  if (param_5 < 0x7fff) {
    sVar5 = (short)((uint)iVar6 >> 0x10);
  }
  else {
    sVar5 = (short)iVar6 + 0xff;
  }
  iVar7 = *(int *)(this + 0x58);
  iVar6 = param_6;
  if (param_6 < 0x7fff) {
    iVar6 = param_6 << 0x10;
  }
  uVar8 = 0;
  if (param_6 < 0x7fff) {
    uVar4 = (undefined2)((uint)iVar6 >> 0x10);
  }
  else {
    uVar4 = 0x7fff;
  }
  if (param_7 < 0x7fff) {
    uVar8 = (undefined2)param_7;
  }
  iVar6 = iVar7 + (uint)param_1 * 0x24;
  *(ushort *)(this + (uint)param_2 * 2 + 0x5e) = param_1;
  *(ushort *)(iVar6 + 0x20) = param_2;
  uVar2 = *(undefined4 *)(param_3 + 8);
  uVar1 = *(undefined4 *)param_3;
  uVar3 = *(undefined4 *)(param_3 + 0xc);
  if (0x7ffe < param_7) {
    uVar8 = 0x7fff;
  }
  *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(iVar7 + (uint)param_1 * 0x24) = uVar1;
  *(undefined4 *)(iVar6 + 8) = uVar2;
  *(undefined4 *)(iVar6 + 0xc) = uVar3;
  *(undefined2 *)(iVar6 + 0x10) = uVar9;
  *(undefined2 *)(iVar6 + 0x16) = uVar8;
  *(short *)(iVar6 + 0x12) = sVar5;
  *(undefined2 *)(iVar6 + 0x14) = uVar4;
  iVar7 = __aeabi_fcmple(in_stack_00000010,0x46fffe00,uVar2,uVar3,param_3);
  if (iVar7 == 0) {
    in_stack_00000010 = 0x46fffe00;
  }
  uVar9 = __fixsfsi(in_stack_00000010);
  *(undefined2 *)(iVar6 + 0x18) = uVar9;
  return;
}


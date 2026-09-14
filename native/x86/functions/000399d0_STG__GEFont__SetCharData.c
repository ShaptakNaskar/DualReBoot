/* 000399d0 | STG::GEFont::SetCharData */

/* STG::GEFont::SetCharData(unsigned short, unsigned short, STG::URectangle<float> const&, long,
   long, long, long, float) */

void __thiscall
STG::GEFont::SetCharData
          (GEFont *this,ushort param_1,ushort param_2,URectangle *param_3,long param_4,long param_5,
          long param_6,long param_7,float param_8)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long extraout_EDX;
  long lVar3;
  int unaff_EBX;
  
  FUN_0002e044();
  if (0x7ffe < param_4) {
    param_4 = extraout_EDX;
  }
  if (0x7ffe < param_5) {
    param_5 = extraout_EDX;
  }
  if (0x7ffe < param_6) {
    param_6 = extraout_EDX;
  }
  lVar3 = extraout_EDX;
  if (param_7 < 0x7fff) {
    lVar3 = param_7;
  }
  if (*(float *)(unaff_EBX + 0x4dcde) <= param_8) {
    param_8 = *(float *)(unaff_EBX + 0x4dcde);
  }
  *(ushort *)(this + (uint)param_2 * 2 + 0x5e) = param_1;
  puVar1 = (undefined4 *)(*(int *)(this + 0x58) + (uint)param_1 * 0x24);
  *(ushort *)(puVar1 + 8) = param_2;
  *puVar1 = *(undefined4 *)param_3;
  puVar1[1] = *(undefined4 *)(param_3 + 4);
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  puVar1[2] = *(undefined4 *)(param_3 + 8);
  puVar1[3] = uVar2;
  *(short *)((int)puVar1 + 0x12) = (short)param_5;
  *(short *)(puVar1 + 4) = (short)param_4;
  *(short *)(puVar1 + 5) = (short)param_6;
  *(short *)((int)puVar1 + 0x16) = (short)lVar3;
  *(short *)(puVar1 + 6) = (short)(int)param_8;
  return;
}


/* 000372e0 | STG::GEFont::SetCharData */

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
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  float fVar9;
  
  if (param_4 < 0x7fff) {
    uVar8 = (undefined2)param_4;
  }
  else {
    uVar8 = 0x7fff;
  }
  if (param_5 < 0x7fff) {
    uVar6 = (undefined2)param_5;
  }
  else {
    uVar6 = 0x7fff;
  }
  if (param_6 < 0x7fff) {
    uVar5 = (undefined2)param_6;
  }
  else {
    uVar5 = 0x7fff;
  }
  if (param_7 < 0x7fff) {
    uVar7 = (undefined2)param_7;
  }
  else {
    uVar7 = 0x7fff;
  }
  fVar9 = DAT_000373a0;
  if (param_8 <= DAT_000373a0) {
    fVar9 = param_8;
  }
  puVar4 = (undefined4 *)(*(int *)(this + 0x58) + (uint)param_1 * 0x24);
  *(ushort *)(this + (uint)param_2 * 2 + 0x5e) = param_1;
  *(ushort *)(puVar4 + 8) = param_2;
  uVar1 = *(undefined4 *)(param_3 + 4);
  uVar2 = *(undefined4 *)(param_3 + 8);
  uVar3 = *(undefined4 *)(param_3 + 0xc);
  *puVar4 = *(undefined4 *)param_3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  *(undefined2 *)(puVar4 + 4) = uVar8;
  *(undefined2 *)((int)puVar4 + 0x12) = uVar6;
  *(undefined2 *)(puVar4 + 5) = uVar5;
  *(undefined2 *)((int)puVar4 + 0x16) = uVar7;
  *(short *)(puVar4 + 6) = (short)(int)fVar9;
  return;
}


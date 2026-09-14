/* 00039ac0 | STG::GEFont::CopyBitmapData */

/* STG::GEFont::CopyBitmapData(unsigned short, unsigned char const*, unsigned long) */

void __thiscall
STG::GEFont::CopyBitmapData(GEFont *this,ushort param_1,uchar *param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0002e044();
  iVar1 = *(int *)((int)uVar2 + 0x58) + (int)((ulonglong)uVar2 >> 0x20) * 0x24;
  memcpy((void *)(*(int *)((int)uVar2 + 0x360) + param_3),param_2,
         (int)*(short *)(iVar1 + 0x16) * (int)*(short *)(iVar1 + 0x14));
  *(ulong *)(iVar1 + 0x1c) = param_3;
  return;
}


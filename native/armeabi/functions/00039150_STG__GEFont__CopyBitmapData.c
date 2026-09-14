/* 00039150 | STG::GEFont::CopyBitmapData */

/* STG::GEFont::CopyBitmapData(unsigned short, unsigned char const*, unsigned long) */

void __thiscall
STG::GEFont::CopyBitmapData(GEFont *this,ushort param_1,uchar *param_2,ulong param_3)

{
  int iVar1;
  
  iVar1 = (uint)param_1 * 0x24 + *(int *)(this + 0x58);
  memcpy((void *)(*(int *)(this + 0x360) + param_3),param_2,
         (int)*(short *)(iVar1 + 0x16) * (int)*(short *)(iVar1 + 0x14));
  *(ulong *)(iVar1 + 0x1c) = param_3;
  return;
}


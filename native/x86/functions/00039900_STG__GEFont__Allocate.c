/* 00039900 | STG::GEFont::Allocate */

/* STG::GEFont::Allocate(unsigned short, float, unsigned long, bool) */

void __thiscall
STG::GEFont::Allocate(GEFont *this,ushort param_1,float param_2,ulong param_3,bool param_4)

{
  uint uVar1;
  GEFontChar *pGVar2;
  void *__s;
  GEFontChar *this_00;
  
  FUN_0002e044();
  *(float *)(this + 0x50) = param_2;
  *(ushort *)(this + 0x5c) = param_1;
  uVar1 = (uint)param_1;
  this[0x54] = (GEFont)param_4;
  pGVar2 = operator_new__(uVar1 * 0x24);
  this_00 = pGVar2;
  while (uVar1 = uVar1 - 1, uVar1 != 0xffffffff) {
    GEFontChar::GEFontChar(this_00);
    this_00 = this_00 + 0x24;
  }
  *(GEFontChar **)(this + 0x58) = pGVar2;
  *(ulong *)(this + 0x364) = param_3;
  if (param_3 != 0) {
    __s = operator_new__(param_3);
    *(void **)(this + 0x360) = __s;
    memset(__s,0,*(size_t *)(this + 0x364));
  }
  return;
}


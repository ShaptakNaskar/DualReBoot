/* 00037250 | STG::GEFont::Allocate */

/* STG::GEFont::Allocate(unsigned short, float, unsigned long, bool) */

void __thiscall
STG::GEFont::Allocate(GEFont *this,ushort param_1,float param_2,ulong param_3,bool param_4)

{
  GEFontChar *pGVar1;
  void *__s;
  uint uVar2;
  GEFontChar *this_00;
  
  uVar2 = (uint)param_1;
  *(float *)(this + 0x50) = param_2;
  *(ushort *)(this + 0x5c) = param_1;
  this[0x54] = (GEFont)param_4;
  pGVar1 = operator_new__(uVar2 * 0x24);
  this_00 = pGVar1;
  while (uVar2 = uVar2 - 1, uVar2 != 0xffffffff) {
    GEFontChar::GEFontChar(this_00);
    this_00 = this_00 + 0x24;
  }
  *(GEFontChar **)(this + 0x58) = pGVar1;
  *(ulong *)(this + 0x364) = param_3;
  if (param_3 == 0) {
    return;
  }
  __s = operator_new__(param_3);
  *(void **)(this + 0x360) = __s;
  memset(__s,0,*(size_t *)(this + 0x364));
  return;
}


/* 0007ca60 | EngineInterface::AddBitmapData */

/* EngineInterface::AddBitmapData(char const*, unsigned char*, unsigned long, unsigned short,
   unsigned short) */

uint __thiscall
EngineInterface::AddBitmapData
          (EngineInterface *this,char *param_1,uchar *param_2,ulong param_3,ushort param_4,
          ushort param_5)

{
  int iVar1;
  char cVar2;
  EngineBitmapData *this_00;
  uint extraout_ECX;
  uint uVar3;
  
  FUN_0002e044();
  uVar3 = extraout_ECX;
  if ((*(uint *)(this + 0x18) < *(uint *)(this + 0x14)) && (*(int *)(this + 0x10) != 0)) {
    this_00 = operator_new(0x28);
    EngineBitmapData::EngineBitmapData(this_00,param_1,param_2,param_3,param_4,param_5);
    cVar2 = EngineBitmapData::GetIsValid(this_00);
    uVar3 = extraout_ECX & 0xff;
    if (cVar2 == '\0') {
      if (this_00 != (EngineBitmapData *)0x0) {
        EngineBitmapData::~EngineBitmapData(this_00);
        operator_delete(this_00);
        uVar3 = extraout_ECX & 0xff;
      }
    }
    else {
      iVar1 = *(int *)(this + 0x18);
      *(EngineBitmapData **)(*(int *)(this + 0x10) + iVar1 * 4) = this_00;
      *(int *)(this + 0x18) = iVar1 + 1;
      uVar3 = (uint)(this_00 != (EngineBitmapData *)0x0);
    }
  }
  return uVar3;
}


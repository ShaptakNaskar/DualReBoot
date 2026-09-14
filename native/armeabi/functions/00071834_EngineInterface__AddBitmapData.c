/* 00071834 | EngineInterface::AddBitmapData */

/* EngineInterface::AddBitmapData(char const*, unsigned char*, unsigned long, unsigned short,
   unsigned short) */

EngineBitmapData * __thiscall
EngineInterface::AddBitmapData
          (EngineInterface *this,char *param_1,uchar *param_2,ulong param_3,ushort param_4,
          ushort param_5)

{
  EngineBitmapData *this_00;
  int iVar1;
  
  if (*(uint *)(this + 0x18) < *(uint *)(this + 0x14)) {
    this_00 = (EngineBitmapData *)0x0;
    if (*(int *)(this + 0x10) != 0) {
      this_00 = operator_new(0x28);
      EngineBitmapData::EngineBitmapData(this_00,param_1,param_2,param_3,param_4,param_5);
      iVar1 = EngineBitmapData::GetIsValid(this_00);
      if (iVar1 == 0) {
        if (this_00 != (EngineBitmapData *)0x0) {
          EngineBitmapData::~EngineBitmapData(this_00);
          operator_delete(this_00);
          this_00 = (EngineBitmapData *)0x0;
        }
      }
      else {
        iVar1 = *(int *)(this + 0x18);
        *(EngineBitmapData **)(*(int *)(this + 0x10) + iVar1 * 4) = this_00;
        if (this_00 != (EngineBitmapData *)0x0) {
          this_00 = (EngineBitmapData *)0x1;
        }
        *(int *)(this + 0x18) = iVar1 + 1;
      }
    }
  }
  else {
    this_00 = (EngineBitmapData *)0x0;
  }
  return this_00;
}


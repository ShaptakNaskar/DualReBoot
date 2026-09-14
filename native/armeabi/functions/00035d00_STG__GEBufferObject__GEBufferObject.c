/* 00035d00 | STG::GEBufferObject::GEBufferObject */

/* STG::GEBufferObject::GEBufferObject(STG::GEBufferObject::EType, STG::GEBufferObject::EUsage) */

void __thiscall
STG::GEBufferObject::GEBufferObject(GEBufferObject *this,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = DAT_00035d30;
  *(undefined4 *)(this + 4) = param_2;
  *(undefined4 *)(this + 8) = param_3;
  *(undefined4 *)(this + 0xc) = 0;
  *(int *)this = *(int *)(iVar1 + 0x35d18) + 8;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  this[0x18] = (GEBufferObject)0x0;
  return;
}


/* 000354a4 | STG::GEBufferObject::GEBufferObject */

/* STG::GEBufferObject::GEBufferObject(STG::GEBufferObject::EType, STG::GEBufferObject::EUsage) */

void __thiscall
STG::GEBufferObject::GEBufferObject(GEBufferObject *this,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = DAT_000354dc;
  *(undefined4 *)(this + 4) = param_2;
  iVar1 = *(int *)(iVar1 + 0x354bc);
  *(undefined4 *)(this + 8) = param_3;
  *(undefined4 *)(this + 0xc) = 0;
  *(int *)this = iVar1 + 8;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  this[0x18] = (GEBufferObject)0x0;
  return;
}


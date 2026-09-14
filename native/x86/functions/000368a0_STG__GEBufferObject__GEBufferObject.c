/* 000368a0 | STG::GEBufferObject::GEBufferObject */

/* STG::GEBufferObject::GEBufferObject(STG::GEBufferObject::EType, STG::GEBufferObject::EUsage) */

void __thiscall
STG::GEBufferObject::GEBufferObject(GEBufferObject *this,undefined4 param_2,undefined4 param_3)

{
  int extraout_ECX;
  
  FUN_0002e915();
  *(int *)this = *(int *)(extraout_ECX + 0x655cf) + 8;
  *(undefined4 *)(this + 4) = param_2;
  *(undefined4 *)(this + 8) = param_3;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  this[0x18] = (GEBufferObject)0x0;
  return;
}


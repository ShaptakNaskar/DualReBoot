/* 00071178 | EngineBitmapData::~EngineBitmapData */

/* EngineBitmapData::~EngineBitmapData() */

EngineBitmapData * __thiscall EngineBitmapData::~EngineBitmapData(EngineBitmapData *this)

{
  EngineBitmapData *pEVar1;
  int iVar2;
  
  if (*(void **)(this + 0x1c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x1c));
  }
  pEVar1 = *(EngineBitmapData **)(this + 0x18);
  iVar2 = *(int *)(DAT_000711e8 + 0x711a4);
  *(undefined4 *)(this + 0x1c) = 0;
  *(int *)this = iVar2 + 8;
  if ((pEVar1 != this + 4) && (pEVar1 != (EngineBitmapData *)0x0)) {
    if ((uint)(*(int *)(this + 4) - (int)pEVar1) < 0x81) {
      std::__node_alloc::_M_deallocate(pEVar1,*(int *)(this + 4) - (int)pEVar1);
      return this;
    }
    operator_delete(pEVar1);
  }
  return this;
}


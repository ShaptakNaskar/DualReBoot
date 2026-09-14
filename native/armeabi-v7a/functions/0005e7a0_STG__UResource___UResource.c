/* 0005e7a0 | STG::UResource::~UResource */

/* STG::UResource::~UResource() */

UResource * __thiscall STG::UResource::~UResource(UResource *this)

{
  UResource *pUVar1;
  int iVar2;
  
  pUVar1 = *(UResource **)(this + 0x20);
  iVar2 = *(int *)(DAT_0005e820 + 0x5e7c8);
  *(int *)this = *(int *)(DAT_0005e81c + 0x5e7c4) + 8;
  *(int *)(this + 8) = iVar2 + 8;
  if ((pUVar1 != this + 0xc) && (pUVar1 != (UResource *)0x0)) {
    if ((uint)(*(int *)(this + 0xc) - (int)pUVar1) < 0x81) {
      std::__node_alloc::_M_deallocate(pUVar1,*(int *)(this + 0xc) - (int)pUVar1);
    }
    else {
      operator_delete(pUVar1);
    }
  }
  *(int *)this = *(int *)(DAT_0005e824 + 0x5e804) + 8;
  operator_delete(this);
  return this;
}


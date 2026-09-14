/* 0006c560 | STG::UResource::~UResource */

/* STG::UResource::~UResource() */

void __thiscall STG::UResource::~UResource(UResource *this)

{
  UResource *pUVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x2f91d) + 8;
  *(int *)(this + 8) = *(int *)(unaff_EBX + 0x2f8d5) + 8;
  pUVar1 = *(UResource **)(this + 0x20);
  if ((pUVar1 != this + 0xc) && (pUVar1 != (UResource *)0x0)) {
    if ((uint)(*(int *)(this + 0xc) - (int)pUVar1) < 0x81) {
      std::__node_alloc::_M_deallocate(pUVar1,*(int *)(this + 0xc) - (int)pUVar1);
    }
    else {
      operator_delete(pUVar1);
    }
  }
  *(int *)this = *(int *)(unaff_EBX + 0x2f915) + 8;
  operator_delete(this);
  return;
}


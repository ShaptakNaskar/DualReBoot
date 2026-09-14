/* 0003c8a0 | STG::GEPixelData::Allocate */

/* STG::GEPixelData::Allocate() */

bool __thiscall STG::GEPixelData::Allocate(GEPixelData *this)

{
  void *pvVar1;
  uint uVar2;
  
  FUN_0002e044();
  *(int *)(this + 0x14) = *(int *)(this + 0x18) * *(int *)(this + 4);
  uVar2 = *(int *)(this + 0x18) * *(int *)(this + 4) * *(int *)(this + 0x1c);
  if (uVar2 - *(int *)(this + 0x10) != 0) {
    if (*(int *)(this + 0x10) != 0) {
      if (*(void **)(this + 0xc) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0xc));
      }
      *(undefined4 *)(this + 0xc) = 0;
    }
    *(uint *)(this + 0x10) = uVar2;
    if (uVar2 != 0) {
      pvVar1 = operator_new__(uVar2);
      *(void **)(this + 0xc) = pvVar1;
    }
  }
  return uVar2 != 0;
}


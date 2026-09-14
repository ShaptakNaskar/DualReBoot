/* 0003bb64 | STG::GEPixelData::Deallocate */

/* STG::GEPixelData::Deallocate() */

void __thiscall STG::GEPixelData::Deallocate(GEPixelData *this)

{
  *(undefined4 *)(this + 0x14) = 0;
  if (*(int *)(this + 0x10) != 0) {
    if (*(void **)(this + 0xc) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0xc));
    }
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
  }
  return;
}


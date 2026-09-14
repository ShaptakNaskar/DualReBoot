/* 00039294 | STG::GEIndexBuffer::Deallocate */

/* STG::GEIndexBuffer::Deallocate() */

void __thiscall STG::GEIndexBuffer::Deallocate(GEIndexBuffer *this)

{
  if (this[0x14] != (GEIndexBuffer)0x0) {
    if (*(int *)(this + 0x10) != 0) {
      free(*(void **)(*(int *)(this + 0x10) + -4));
    }
    if (*(int **)(this + 4) != (int *)0x0) {
      (**(code **)(**(int **)(this + 4) + 4))();
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0x14] = (GEIndexBuffer)0x0;
  return;
}


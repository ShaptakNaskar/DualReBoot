/* 00048574 | STG::GEVertexBuffer::Deallocate */

/* STG::GEVertexBuffer::Deallocate() */

void __thiscall STG::GEVertexBuffer::Deallocate(GEVertexBuffer *this)

{
  if (this[0xa8] != (GEVertexBuffer)0x0) {
    if (*(int *)(this + 0x14) != 0) {
      free(*(void **)(*(int *)(this + 0x14) + -4));
    }
    if (*(int **)(this + 4) != (int *)0x0) {
      (**(code **)(**(int **)(this + 4) + 4))();
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  this[0xa8] = (GEVertexBuffer)0x0;
  return;
}


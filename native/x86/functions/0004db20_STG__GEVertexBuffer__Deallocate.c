/* 0004db20 | STG::GEVertexBuffer::Deallocate */

/* STG::GEVertexBuffer::Deallocate() */

void __thiscall STG::GEVertexBuffer::Deallocate(GEVertexBuffer *this)

{
  int *piVar1;
  
  FUN_0002e044();
  if (this[0xa8] != (GEVertexBuffer)0x0) {
    if (*(int *)(this + 0x14) != 0) {
      free(*(void **)(*(int *)(this + 0x14) + -4));
    }
    piVar1 = *(int **)(this + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  this[0xa8] = (GEVertexBuffer)0x0;
  return;
}


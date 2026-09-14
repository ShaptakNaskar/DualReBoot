/* 00039c80 | STG::GEIndexBuffer::Deallocate */

/* STG::GEIndexBuffer::Deallocate() */

void __thiscall STG::GEIndexBuffer::Deallocate(GEIndexBuffer *this)

{
  int *piVar1;
  
  FUN_0002e044();
  if (this[0x14] != (GEIndexBuffer)0x0) {
    if (*(int *)(this + 0x10) != 0) {
      free(*(void **)(*(int *)(this + 0x10) + -4));
    }
    piVar1 = *(int **)(this + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0x14] = (GEIndexBuffer)0x0;
  return;
}


/* 00039c10 | STG::GEIndexBuffer::Allocate */

/* STG::GEIndexBuffer::Allocate(unsigned long) */

void STG::GEIndexBuffer::Allocate(ulong param_1)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  
  iVar1 = FUN_0002e044();
  *(int *)(param_1 + 0xc) = iVar1;
  *(int *)(param_1 + 8) = iVar1 * 3;
  if (iVar1 * 3 == 0) {
    return;
  }
  pvVar2 = malloc(iVar1 * 6 + 0x13);
  uVar3 = 0;
  if (pvVar2 != (void *)0x0) {
    uVar3 = (int)pvVar2 + 0x13U & 0xfffffff0;
    *(void **)(uVar3 - 4) = pvVar2;
  }
  *(uint *)(param_1 + 0x10) = uVar3;
  *(undefined1 *)(param_1 + 0x14) = 1;
  return;
}


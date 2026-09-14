/* 00071320 | FUN_00071320 */

undefined4 * FUN_00071320(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  uVar1 = *param_1;
  if (0x80 < uVar1) {
    puVar4 = (undefined4 *)std::__malloc_alloc::allocate(uVar1);
    return puVar4;
  }
  *param_1 = uVar1 + 7 & 0xfffffff8;
  iVar2 = FUN_000710e4();
  iVar3 = (*param_1 + 7 >> 3) - 1;
  puVar4 = *(undefined4 **)(iVar2 + iVar3 * 4);
  if (puVar4 != (undefined4 *)0x0) {
    *(undefined4 *)(iVar2 + iVar3 * 4) = *puVar4;
    return puVar4;
  }
  puVar4 = (undefined4 *)FUN_000712cc();
  return puVar4;
}


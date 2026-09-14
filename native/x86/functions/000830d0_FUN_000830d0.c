/* 000830d0 | FUN_000830d0 */

undefined4 * FUN_000830d0(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  FUN_0002e044();
  uVar2 = *param_1;
  if (uVar2 < 0x81) {
    *param_1 = uVar2 + 7 & 0xfffffff8;
    iVar3 = FUN_00082e00();
    iVar1 = (*param_1 + 7 >> 3) - 1;
    puVar4 = *(undefined4 **)(iVar3 + iVar1 * 4);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)FUN_00083040(iVar3,*param_1);
    }
    else {
      *(undefined4 *)(iVar3 + iVar1 * 4) = *puVar4;
    }
    return puVar4;
  }
  puVar4 = (undefined4 *)std::__malloc_alloc::allocate(uVar2);
  return puVar4;
}


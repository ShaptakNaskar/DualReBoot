/* 00082260 | FUN_00082260 */

void FUN_00082260(int *param_1)

{
  int *piVar1;
  
  FUN_0002e044();
  piVar1 = (int *)param_1[5];
  if ((piVar1 != param_1) && (piVar1 != (int *)0x0)) {
    if (0x80 < (uint)(*param_1 - (int)piVar1)) {
      operator_delete(piVar1);
      return;
    }
    std::__node_alloc::_M_deallocate(piVar1,*param_1 - (int)piVar1);
  }
  return;
}


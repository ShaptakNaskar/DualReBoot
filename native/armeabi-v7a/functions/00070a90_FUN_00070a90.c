/* 00070a90 | FUN_00070a90 */

int * FUN_00070a90(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[5];
  if ((piVar1 != param_1) && (piVar1 != (int *)0x0)) {
    if (0x80 < (uint)(*param_1 - (int)piVar1)) {
      operator_delete(piVar1);
      return param_1;
    }
    std::__node_alloc::_M_deallocate(piVar1,*param_1 - (int)piVar1);
  }
  return param_1;
}


/* 00074d84 | FUN_00074d84 */

int * FUN_00074d84(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[5];
  if ((piVar1 != param_1) && (piVar1 != (int *)0x0)) {
    if ((uint)(*param_1 - (int)piVar1) < 0x81) {
      std::__node_alloc::_M_deallocate(piVar1,*param_1 - (int)piVar1);
    }
    else {
      operator_delete(piVar1);
    }
  }
  return param_1;
}


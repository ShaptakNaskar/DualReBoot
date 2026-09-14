/* 00074da8 | FUN_00074da8 */

void FUN_00074da8(int *param_1,uint param_2)

{
  void *pvVar1;
  uint local_c;
  
  if (param_2 != 0) {
    if (0x10 < param_2) {
      local_c = param_2;
      if (param_2 < 0x81) {
        pvVar1 = (void *)std::__node_alloc::_M_allocate(&local_c);
      }
      else {
        pvVar1 = operator_new(param_2);
      }
      param_1[5] = (int)pvVar1;
      param_1[4] = (int)pvVar1;
      *param_1 = (int)pvVar1 + local_c;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__stl_throw_length_error((char *)(DAT_00074de0 + 0x74dd6));
}


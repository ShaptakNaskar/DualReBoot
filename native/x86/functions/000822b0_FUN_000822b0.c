/* 000822b0 | FUN_000822b0 */

void FUN_000822b0(int *param_1)

{
  void *pvVar1;
  int unaff_EBX;
  uint local_10 [2];
  
  local_10[0] = FUN_0002e044();
  if (local_10[0] != 0) {
    if (0x10 < local_10[0]) {
      if (local_10[0] < 0x81) {
        pvVar1 = (void *)std::__node_alloc::_M_allocate(local_10);
      }
      else {
        pvVar1 = operator_new(local_10[0]);
      }
      param_1[5] = (int)pvVar1;
      param_1[4] = (int)pvVar1;
      *param_1 = (int)pvVar1 + local_10[0];
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__stl_throw_length_error((char *)(unaff_EBX + 0x504b));
}


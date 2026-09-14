/* 00071478 | std::priv::_Pthread_alloc::reallocate */

/* std::priv::_Pthread_alloc::reallocate(void*, unsigned int, unsigned int&) */

void * std::priv::_Pthread_alloc::reallocate(void *param_1,uint param_2,uint *param_3)

{
  void *pvVar1;
  uint __n;
  
  if ((0x80 < param_2) && (0x80 < *param_3)) {
    pvVar1 = (void *)(*(__cxa_begin_cleanup + DAT_00076604))();
    return pvVar1;
  }
  pvVar1 = param_1;
  if ((param_2 + 7 & 0xfffffff8) != (*param_3 + 7 & 0xfffffff8)) {
    pvVar1 = (void *)FUN_00071320(param_3);
    __n = *param_3;
    if (param_2 < *param_3) {
      __n = param_2;
    }
    memcpy(pvVar1,param_1,__n);
    FUN_00071360(param_1,param_2);
  }
  return pvVar1;
}


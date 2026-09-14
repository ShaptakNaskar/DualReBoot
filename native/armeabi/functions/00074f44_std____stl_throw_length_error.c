/* 00074f44 | std::__stl_throw_length_error */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__stl_throw_length_error(char const*) */

void std::__stl_throw_length_error(char *param_1)

{
  __Named_exception *this;
  string asStack_28 [28];
  
  this = (__Named_exception *)FUN_00073768(0x108);
  FUN_00074de4(asStack_28,param_1);
  __Named_exception::__Named_exception(this,asStack_28);
  *(int *)this = *(int *)(DAT_00074f98 + 0x74f6c) + 8;
  FUN_00074d84(asStack_28);
  FUN_000737e8(this,*(undefined4 *)(DAT_00074f9c + 0x74f7c),*(undefined4 *)(DAT_00074fa0 + 0x74f7e))
  ;
  do {
    FUN_0007379c(this);
    __cxa_end_cleanup();
    FUN_00074d84(asStack_28);
  } while( true );
}


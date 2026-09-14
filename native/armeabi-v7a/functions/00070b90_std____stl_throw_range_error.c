/* 00070b90 | std::__stl_throw_range_error */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__stl_throw_range_error(char const*) */

void std::__stl_throw_range_error(char *param_1)

{
  __Named_exception *this;
  string asStack_28 [28];
  
  this = (__Named_exception *)FUN_0006f4f4(0x108);
  FUN_00070af0(asStack_28,param_1);
  __Named_exception::__Named_exception(this,asStack_28);
  *(int *)this = *(int *)(DAT_00070be4 + 0x70bb8) + 8;
  FUN_00070a90(asStack_28);
  FUN_0006f570(this,*(undefined4 *)(DAT_00070be8 + 0x70bca),*(undefined4 *)(DAT_00070bec + 0x70bce))
  ;
  do {
    FUN_0006f528(this);
    __cxa_end_cleanup();
    FUN_00070a90(asStack_28);
  } while( true );
}


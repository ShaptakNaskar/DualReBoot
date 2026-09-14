/* 000823b0 | std::__stl_throw_runtime_error */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__stl_throw_runtime_error(char const*) */

void std::__stl_throw_runtime_error(char *param_1)

{
  __Named_exception *this;
  int unaff_EBX;
  string local_24 [20];
  undefined4 uStack_10;
  
  uStack_10 = 0x823b8;
  FUN_0002e044();
  this = (__Named_exception *)FUN_0007fa60(0x108);
  FUN_00082330();
  __Named_exception::__Named_exception(this,local_24);
  *(int *)this = *(int *)("_ZN3STG10GEMaterialD0Ev" + unaff_EBX + 7) + 8;
  FUN_00082260(local_24);
                    /* WARNING: Subroutine does not return */
  FUN_0007fb60(this,*(undefined4 *)("_ZN3STG10GEMaterialD1Ev" + unaff_EBX + 0x17),
               *(undefined4 *)("_ZN3STG10GEMaterialD1Ev" + unaff_EBX + 0x13));
}


/* 00082440 | std::__stl_throw_range_error */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__stl_throw_range_error(char const*) */

void std::__stl_throw_range_error(char *param_1)

{
  __Named_exception *this;
  int unaff_EBX;
  string local_24 [20];
  undefined4 uStack_10;
  
  uStack_10 = 0x82448;
  FUN_0002e044();
  this = (__Named_exception *)FUN_0007fa60(0x108);
  FUN_00082330();
  __Named_exception::__Named_exception(this,local_24);
  *(int *)this = *(int *)("_ZN3STG10GEMaterial10SetDefaultEv" + unaff_EBX + 0xc) + 8;
  FUN_00082260(local_24);
                    /* WARNING: Subroutine does not return */
  FUN_0007fb60(this,*(undefined4 *)("_ZN3STG7MMatrix12MakeIdentityEv" + unaff_EBX + 0xe),
               *(undefined4 *)("_ZN3STG7MMatrix12MakeIdentityEv" + unaff_EBX + 10));
}


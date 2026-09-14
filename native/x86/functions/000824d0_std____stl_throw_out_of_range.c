/* 000824d0 | std::__stl_throw_out_of_range */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__stl_throw_out_of_range(char const*) */

void std::__stl_throw_out_of_range(char *param_1)

{
  __Named_exception *this;
  int unaff_EBX;
  string local_24 [20];
  undefined4 uStack_10;
  
  uStack_10 = 0x824d8;
  FUN_0002e044();
  this = (__Named_exception *)FUN_0007fa60(0x108);
  FUN_00082330();
  __Named_exception::__Named_exception(this,local_24);
  *(int *)this = *(int *)("_ZNK3STG10GEMaterial10GetIsEqualEPKS0_" + unaff_EBX + 0x1b) + 8;
  FUN_00082260(local_24);
                    /* WARNING: Subroutine does not return */
  FUN_0007fb60(this,*(undefined4 *)
                     ("_ZNK3STG10GEMaterial37GetIsSuitableForMultiPassTransparencyEv" +
                     unaff_EBX + 0x18),
               *(undefined4 *)
                ("_ZNK3STG10GEMaterial37GetIsSuitableForMultiPassTransparencyEv" + unaff_EBX + 0x14)
              );
}


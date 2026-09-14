/* 0006c658 | StringHelperBase<STG::UStringBase<unsigned_short,unsigned_short>,unsigned_short>::ReleaseString */

/* StringHelperBase<STG::UStringBase<unsigned short, unsigned short>, unsigned
   short>::ReleaseString() */

void StringHelperBase<STG::UStringBase<unsigned_short,unsigned_short>,unsigned_short>::ReleaseString
               (void)

{
  int *in_r0;
  int *piVar1;
  
  piVar1 = (int *)*in_r0;
  if (piVar1 == (int *)0x0) {
    return;
  }
  if (in_r0[1] == 0) {
    return;
  }
  (**(code **)(*piVar1 + 0x298))(piVar1,in_r0[1],in_r0[2]);
  return;
}


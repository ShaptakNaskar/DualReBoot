/* 0006c624 | StringHelperBase<STG::UStringBase<char,int>,char>::ReleaseString */

/* StringHelperBase<STG::UStringBase<char, int>, char>::ReleaseString() */

void StringHelperBase<STG::UStringBase<char,int>,char>::ReleaseString(void)

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
  (**(code **)(*piVar1 + 0x2a8))(piVar1,in_r0[1],in_r0[2]);
  return;
}


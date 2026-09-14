/* 00035ff0 | STG::GECamera::BuildProjectionXfm */

/* STG::GECamera::BuildProjectionXfm() */

void STG::GECamera::BuildProjectionXfm(void)

{
  int in_r0;
  int iVar1;
  float in_s0;
  float __x;
  float extraout_s0;
  float in_s1;
  float extraout_s1;
  float in_s2;
  float extraout_s2;
  float in_s3;
  float extraout_s3;
  MMatrix aMStack_90 [64];
  MMatrix aMStack_50 [68];
  
  iVar1 = *(int *)(in_r0 + 100);
  if (iVar1 == 1) {
    MMatrix::MakePerspectiveTransform(aMStack_50,in_s0,in_s1,in_s2,in_s3);
    MMatrix::Transform(aMStack_50,(MMatrix *)(in_r0 + 0x80),(MMatrix *)(in_r0 + 0xc0));
  }
  else if (iVar1 == 2) {
    MMatrix::MakeScreenTransform((MMatrix *)(in_r0 + 0xc0),(URectangle *)(in_r0 + 0x1f8));
  }
  else if (iVar1 == 0) {
    __x = (float)__mulsf3(*(undefined4 *)(in_r0 + 0x1e8),DAT_000360a4);
    tanf(__x);
    __mulsf3();
    MMatrix::MakeOrthographicTransform(aMStack_90,extraout_s0,extraout_s1,extraout_s2,extraout_s3);
    MMatrix::Transform(aMStack_90,(MMatrix *)(in_r0 + 0x80),(MMatrix *)(in_r0 + 0xc0));
  }
  return;
}


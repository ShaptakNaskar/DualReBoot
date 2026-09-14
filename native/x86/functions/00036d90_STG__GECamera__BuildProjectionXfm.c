/* 00036d90 | STG::GECamera::BuildProjectionXfm */

/* STG::GECamera::BuildProjectionXfm() */

void __thiscall STG::GECamera::BuildProjectionXfm(GECamera *this)

{
  int iVar1;
  int unaff_EBX;
  MMatrix *this_00;
  float fVar2;
  MMatrix local_8c [64];
  MMatrix local_4c [64];
  
  FUN_0002e044();
  iVar1 = *(int *)(this + 100);
  if (iVar1 == 1) {
    this_00 = local_4c;
    MMatrix::MakePerspectiveTransform
              (this_00,*(float *)(this + 0x1e8),*(float *)(this + 0x1ec),*(float *)(this + 0x1f0),
               *(float *)(this + 500));
  }
  else {
    if (iVar1 == 2) {
      MMatrix::MakeScreenTransform((URectangle *)(this + 0xc0));
      return;
    }
    if (iVar1 != 0) {
      return;
    }
    this_00 = local_8c;
    fVar2 = tanf(*(float *)(this + 0x1e8) * *(float *)(unaff_EBX + 0x508fc));
    MMatrix::MakeOrthographicTransform
              (this_00,fVar2 * *(float *)(this + 500),*(float *)(this + 0x1ec),
               *(float *)(this + 0x1f0),*(float *)(this + 500));
  }
  MMatrix::Transform(this_00,(MMatrix *)(this + 0x80),(MMatrix *)(this + 0xc0));
  return;
}


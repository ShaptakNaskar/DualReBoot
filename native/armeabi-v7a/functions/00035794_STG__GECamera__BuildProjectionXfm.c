/* 00035794 | STG::GECamera::BuildProjectionXfm */

/* STG::GECamera::BuildProjectionXfm() */

void __thiscall STG::GECamera::BuildProjectionXfm(GECamera *this)

{
  int iVar1;
  float fVar2;
  MMatrix aMStack_88 [64];
  MMatrix aMStack_48 [64];
  
  iVar1 = *(int *)(this + 100);
  if (iVar1 == 1) {
    MMatrix::MakePerspectiveTransform
              (aMStack_48,*(float *)(this + 0x1e8),*(float *)(this + 0x1ec),*(float *)(this + 0x1f0)
               ,*(float *)(this + 500));
    MMatrix::Transform(aMStack_48,(MMatrix *)(this + 0x80),(MMatrix *)(this + 0xc0));
  }
  else if (iVar1 == 2) {
    MMatrix::MakeScreenTransform((MMatrix *)(this + 0xc0),(URectangle *)(this + 0x1f8));
  }
  else if (iVar1 == 0) {
    fVar2 = tanf(*(float *)(this + 0x1e8) * DAT_00035838);
    MMatrix::MakeOrthographicTransform
              (aMStack_88,fVar2 * *(float *)(this + 500),*(float *)(this + 0x1ec),
               *(float *)(this + 0x1f0),*(float *)(this + 500));
    MMatrix::Transform(aMStack_88,(MMatrix *)(this + 0x80),(MMatrix *)(this + 0xc0));
  }
  return;
}


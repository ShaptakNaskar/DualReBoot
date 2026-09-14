/* 00035768 | STG::GECamera::BuildCameraXfm */

/* STG::GECamera::BuildCameraXfm() */

void __thiscall STG::GECamera::BuildCameraXfm(GECamera *this)

{
  MMatrix::MakeLookAtTransform
            ((MMatrix *)(this + 0x100),(MVector3 *)(this + 0x1c0),(MVector3 *)(this + 0x1cc),
             (MVector3 *)(this + 0x1d8));
  return;
}


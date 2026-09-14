/* 00036690 | STG::GECamera::BuildTransforms */

/* STG::GECamera::BuildTransforms() */

void __thiscall STG::GECamera::BuildTransforms(GECamera *this)

{
  BuildCameraXfm(this);
  BuildScaleXfm(this);
  BuildProjectionXfm(this);
  BuildWorldToClipXfm(this);
  BuildFrustumPlanes(this);
  return;
}


/* 000388e0 | STG::GECamera::BuildTransforms */

/* STG::GECamera::BuildTransforms() */

void __thiscall STG::GECamera::BuildTransforms(GECamera *this)

{
  FUN_0002e044();
  BuildCameraXfm(this);
  BuildScaleXfm(this);
  BuildProjectionXfm(this);
  BuildWorldToClipXfm(this);
  BuildFrustumPlanes(this);
  return;
}


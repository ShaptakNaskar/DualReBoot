/* 0003835c | STG::GECamera::BuildTransforms */

/* STG::GECamera::BuildTransforms() */

void __thiscall STG::GECamera::BuildTransforms(GECamera *this)

{
  BuildCameraXfm(this);
  BuildScaleXfm(this);
  BuildProjectionXfm();
  BuildWorldToClipXfm(this);
  BuildFrustumPlanes();
  return;
}


/* 0003838c | STG::GECamera::GECamera */

/* STG::GECamera::GECamera() */

GECamera * __thiscall STG::GECamera::GECamera(GECamera *this)

{
  *(int *)this = *(int *)(DAT_00038444 + 0x3839c) + 8;
  *(undefined4 *)(this + 100) = 1;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x1c0) = 0;
  *(undefined4 *)(this + 0x1c4) = 0;
  *(undefined4 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1cc) = 0;
  *(undefined4 *)(this + 0x1d0) = 0;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x68) = 0x3f800000;
  *(undefined4 *)(this + 0x6c) = 0x3f800000;
  *(undefined4 *)(this + 0x70) = 0x3f800000;
  *(undefined4 *)(this + 0x1d4) = 0xbf800000;
  *(undefined4 *)(this + 0x1dc) = 0x3f800000;
  *(undefined4 *)(this + 0x1e4) = 0x41f00000;
  *(undefined4 *)(this + 0x1e8) = 0x41f00000;
  *(undefined4 *)(this + 0x1ec) = 0x3f800000;
  *(undefined4 *)(this + 0x1f0) = 0x3f800000;
  *(undefined4 *)(this + 500) = 0x41200000;
  *(undefined4 *)(this + 0x1f8) = 0;
  *(undefined4 *)(this + 0x1fc) = 0;
  *(undefined4 *)(this + 0x200) = 0;
  *(undefined4 *)(this + 0x204) = 0;
  *(undefined4 *)(this + 0x208) = 0x3f800000;
  this[0x20c] = (GECamera)0x0;
  BuildTransforms(this);
  return this;
}


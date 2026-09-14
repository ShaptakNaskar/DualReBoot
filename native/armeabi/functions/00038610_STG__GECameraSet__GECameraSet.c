/* 00038610 | STG::GECameraSet::GECameraSet */

/* STG::GECameraSet::GECameraSet() */

GECameraSet * __thiscall STG::GECameraSet::GECameraSet(GECameraSet *this)

{
  GECamera::GECamera((GECamera *)this);
  *(int *)(this + 0x210) = *(int *)(DAT_00038664 + 0x38630) + 8;
  *(GECameraSet **)(this + 0x224) = this + 0x214;
  *(GECameraSet **)(this + 0x228) = this + 0x214;
  this[0x214] = (GECameraSet)0x0;
  *(undefined4 *)(this + 0x22c) = 0;
  *(undefined4 *)(this + 0x230) = 0;
  *(undefined4 *)(this + 0x234) = 0;
  *(undefined4 *)(this + 0x238) = 0;
  *(undefined4 *)(this + 0x23c) = 0;
  *(undefined4 *)(this + 0x240) = 0;
  *(undefined4 *)(this + 0x244) = 0;
  return this;
}


/* 00036894 | STG::GECameraSet::GECameraSet */

/* STG::GECameraSet::GECameraSet() */

GECameraSet * __thiscall STG::GECameraSet::GECameraSet(GECameraSet *this)

{
  int iVar1;
  
  GECamera::GECamera((GECamera *)this);
  iVar1 = DAT_000368e8;
  this[0x214] = (GECameraSet)0x0;
  iVar1 = *(int *)(iVar1 + 0x368b8);
  *(GECameraSet **)(this + 0x224) = this + 0x214;
  *(GECameraSet **)(this + 0x228) = this + 0x214;
  *(int *)(this + 0x210) = iVar1 + 8;
  *(undefined4 *)(this + 0x22c) = 0;
  *(undefined4 *)(this + 0x230) = 0;
  *(undefined4 *)(this + 0x234) = 0;
  *(undefined4 *)(this + 0x238) = 0;
  *(undefined4 *)(this + 0x23c) = 0;
  *(undefined4 *)(this + 0x240) = 0;
  *(undefined4 *)(this + 0x244) = 0;
  return this;
}


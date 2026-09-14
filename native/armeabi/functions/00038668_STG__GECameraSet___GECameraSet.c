/* 00038668 | STG::GECameraSet::~GECameraSet */

/* STG::GECameraSet::~GECameraSet() */

GECameraSet * __thiscall STG::GECameraSet::~GECameraSet(GECameraSet *this)

{
  GECameraSet *pGVar1;
  int iVar2;
  
  if (*(void **)(this + 0x22c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x22c));
  }
  *(undefined4 *)(this + 0x22c) = 0;
  if (*(void **)(this + 0x230) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x230));
  }
  *(undefined4 *)(this + 0x230) = 0;
  if (*(void **)(this + 0x238) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x238));
  }
  *(undefined4 *)(this + 0x238) = 0;
  if (*(void **)(this + 0x23c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x23c));
  }
  pGVar1 = *(GECameraSet **)(this + 0x228);
  iVar2 = *(int *)(DAT_00038730 + 0x386dc);
  *(undefined4 *)(this + 0x23c) = 0;
  *(int *)(this + 0x210) = iVar2 + 8;
  if ((pGVar1 != this + 0x214) && (pGVar1 != (GECameraSet *)0x0)) {
    if ((uint)(*(int *)(this + 0x214) - (int)pGVar1) < 0x81) {
      std::__node_alloc::_M_deallocate(pGVar1,*(int *)(this + 0x214) - (int)pGVar1);
      GECamera::~GECamera((GECamera *)this);
      return this;
    }
    operator_delete(pGVar1);
  }
  GECamera::~GECamera((GECamera *)this);
  return this;
}


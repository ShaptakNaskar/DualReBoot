/* 00038c40 | STG::GECameraSet::~GECameraSet */

/* STG::GECameraSet::~GECameraSet() */

void __thiscall STG::GECameraSet::~GECameraSet(GECameraSet *this)

{
  int iVar1;
  GECameraSet *pGVar2;
  int unaff_EBX;
  
  FUN_0002e044();
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
  iVar1 = *(int *)(unaff_EBX + 0x631f5);
  *(undefined4 *)(this + 0x23c) = 0;
  *(int *)(this + 0x210) = iVar1 + 8;
  pGVar2 = *(GECameraSet **)(this + 0x228);
  if ((pGVar2 != this + 0x214) && (pGVar2 != (GECameraSet *)0x0)) {
    if (0x80 < (uint)(*(int *)(this + 0x214) - (int)pGVar2)) {
      operator_delete(pGVar2);
      GECamera::~GECamera((GECamera *)this);
      return;
    }
    std::__node_alloc::_M_deallocate(pGVar2,*(int *)(this + 0x214) - (int)pGVar2);
  }
  GECamera::~GECamera((GECamera *)this);
  return;
}


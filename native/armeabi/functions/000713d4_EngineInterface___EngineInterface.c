/* 000713d4 | EngineInterface::~EngineInterface */

/* EngineInterface::~EngineInterface() */

EngineInterface * __thiscall EngineInterface::~EngineInterface(EngineInterface *this)

{
  int *piVar1;
  GERenderer *this_00;
  int iVar2;
  
  ReserveBitmapData(this,0);
  piVar1 = *(int **)(this + 4);
  if (piVar1 != (int *)0x0) {
    iVar2 = piVar1[1];
    piVar1[1] = iVar2 + -1;
    if (iVar2 == 1) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  piVar1 = *(int **)(this + 8);
  *(undefined4 *)(this + 4) = 0;
  if (piVar1 != (int *)0x0) {
    iVar2 = piVar1[1];
    piVar1[1] = iVar2 + -1;
    if (iVar2 == 1) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  this_00 = *(GERenderer **)this;
  *(undefined4 *)(this + 8) = 0;
  if (this_00[0x378] != (GERenderer)0x0) {
    STG::GERenderer::Uninitialize(this_00);
    this_00 = *(GERenderer **)this;
  }
  if (this_00 != (GERenderer *)0x0) {
    (**(code **)(*(int *)this_00 + 4))();
  }
  *(undefined4 *)this = 0;
  return this;
}


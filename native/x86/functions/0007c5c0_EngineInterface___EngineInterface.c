/* 0007c5c0 | EngineInterface::~EngineInterface */

/* EngineInterface::~EngineInterface() */

void __thiscall EngineInterface::~EngineInterface(EngineInterface *this)

{
  int *piVar1;
  int iVar2;
  GERenderer *this_00;
  
  FUN_0002e044();
  ReserveBitmapData(this,0);
  piVar1 = *(int **)(this + 4);
  if ((piVar1 != (int *)0x0) && (iVar2 = piVar1[1], piVar1[1] = iVar2 + -1, iVar2 == 1)) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  piVar1 = *(int **)(this + 8);
  *(undefined4 *)(this + 4) = 0;
  if ((piVar1 != (int *)0x0) && (iVar2 = piVar1[1], piVar1[1] = iVar2 + -1, iVar2 == 1)) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  this_00 = *(GERenderer **)this;
  *(undefined4 *)(this + 8) = 0;
  if (this_00[0x378] != (GERenderer)0x0) {
    STG::GERenderer::Uninitialize(this_00);
    this_00 = *(GERenderer **)this;
  }
  if (this_00 != (GERenderer *)0x0) {
    (**(code **)(*(int *)this_00 + 4))(this_00);
  }
  *(undefined4 *)this = 0;
  return;
}


/* 00036be0 | STG::GECamera::ApplyViewport */

/* STG::GECamera::ApplyViewport(STG::GEViewport const&) */

void __thiscall STG::GECamera::ApplyViewport(GECamera *this,GEViewport *param_1)

{
  undefined4 uVar1;
  int unaff_EBX;
  longdouble lVar2;
  float __x;
  float fVar3;
  float fVar4;
  
  FUN_0002e044();
  *(undefined4 *)(this + 0x1ec) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x1f8) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x1fc) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x200) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x204) = *(undefined4 *)(param_1 + 0xc);
  if (this[0x20c] != (GECamera)0x0) {
    fVar4 = *(float *)(this + 0x208);
    lVar2 = (longdouble)GEViewport::GetAspectRatioInterval(param_1,fVar4);
    __x = *(float *)(unaff_EBX + 0x50ab7) * *(float *)(this + 0x1e4);
    fVar3 = tanf(__x);
    fVar4 = atanf(fVar3 * fVar4);
    *(float *)(this + 0x1e8) =
         ((fVar4 - __x) * (float)lVar2 + __x) * *(float *)(unaff_EBX + 0x50abb);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x6c) = uVar1;
  *(undefined4 *)(this + 0x70) = 0x3f800000;
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x74) = uVar1;
  *(undefined4 *)(this + 0x7c) = 0;
  return;
}


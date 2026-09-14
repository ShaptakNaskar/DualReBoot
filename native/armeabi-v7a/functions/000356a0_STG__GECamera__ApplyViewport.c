/* 000356a0 | STG::GECamera::ApplyViewport */

/* STG::GECamera::ApplyViewport(STG::GEViewport const&) */

void __thiscall STG::GECamera::ApplyViewport(GECamera *this,GEViewport *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float __x;
  float fVar6;
  
  *(undefined4 *)(this + 0x1ec) = *(undefined4 *)(param_1 + 0x30);
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x1f8) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x1fc) = uVar1;
  *(undefined4 *)(this + 0x200) = uVar2;
  *(undefined4 *)(this + 0x204) = uVar3;
  if (this[0x20c] != (GECamera)0x0) {
    fVar6 = *(float *)(this + 0x208);
    fVar4 = (float)GEViewport::GetAspectRatioInterval(param_1,fVar6);
    __x = *(float *)(this + 0x1e4) * DAT_00035760;
    fVar5 = tanf(__x);
    fVar5 = atanf(fVar5 * fVar6);
    *(float *)(this + 0x1e8) = (__x + (fVar5 - __x) * fVar4) * DAT_00035764;
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


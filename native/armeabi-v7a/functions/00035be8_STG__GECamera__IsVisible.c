/* 00035be8 | STG::GECamera::IsVisible */

/* STG::GECamera::IsVisible(STG::MMatrix const&, STG::MVector3 const&, float) const */

bool __thiscall
STG::GECamera::IsVisible(GECamera *this,MMatrix *param_1,MVector3 *param_2,float param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = *(float *)(param_2 + 4);
  fVar5 = *(float *)param_2;
  fVar6 = *(float *)(param_2 + 8);
  fVar2 = fVar3 * *(float *)(param_1 + 0x10) + fVar5 * *(float *)param_1 +
          *(float *)(param_1 + 0x30) + fVar6 * *(float *)(param_1 + 0x20);
  fVar4 = fVar3 * *(float *)(param_1 + 0x14) + fVar5 * *(float *)(param_1 + 4) +
          *(float *)(param_1 + 0x34) + fVar6 * *(float *)(param_1 + 0x24);
  fVar3 = fVar3 * *(float *)(param_1 + 0x18) + fVar5 * *(float *)(param_1 + 8) +
          *(float *)(param_1 + 0x38) + fVar6 * *(float *)(param_1 + 0x28);
  if ((((((param_3 + fVar2 * *(float *)(this + 4)) - *(float *)(this + 0x10)) +
         fVar4 * *(float *)(this + 8) + fVar3 * *(float *)(this + 0xc) < 0.0) ||
       (((param_3 + fVar2 * *(float *)(this + 0x14)) - *(float *)(this + 0x20)) +
        fVar4 * *(float *)(this + 0x18) + fVar3 * *(float *)(this + 0x1c) < 0.0)) ||
      (((param_3 + fVar2 * *(float *)(this + 0x24)) - *(float *)(this + 0x30)) +
       fVar4 * *(float *)(this + 0x28) + fVar3 * *(float *)(this + 0x2c) < 0.0)) ||
     ((((param_3 + fVar2 * *(float *)(this + 0x34)) - *(float *)(this + 0x40)) +
       fVar4 * *(float *)(this + 0x38) + fVar3 * *(float *)(this + 0x3c) < 0.0 ||
      (((param_3 + fVar2 * *(float *)(this + 0x44)) - *(float *)(this + 0x50)) +
       fVar4 * *(float *)(this + 0x48) + fVar3 * *(float *)(this + 0x4c) < 0.0)))) {
    bVar1 = false;
  }
  else {
    bVar1 = 0.0 <= ((param_3 + fVar2 * *(float *)(this + 0x54)) - *(float *)(this + 0x60)) +
                   fVar4 * *(float *)(this + 0x58) + fVar3 * *(float *)(this + 0x5c);
  }
  return bVar1;
}


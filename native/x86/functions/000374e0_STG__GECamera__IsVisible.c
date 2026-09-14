/* 000374e0 | STG::GECamera::IsVisible */

/* STG::GECamera::IsVisible(STG::MMatrix const&, STG::MVector3 const&, float) const */

bool __thiscall
STG::GECamera::IsVisible(GECamera *this,MMatrix *param_1,MVector3 *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = *(float *)param_2;
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_2 + 8);
  fVar6 = *(float *)param_1 * fVar4 + *(float *)(param_1 + 0x10) * fVar1 +
          *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x20) * fVar2;
  bVar3 = false;
  fVar5 = *(float *)(param_1 + 4) * fVar4 + *(float *)(param_1 + 0x14) * fVar1 +
          *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x24) * fVar2;
  fVar4 = fVar4 * *(float *)(param_1 + 8) + fVar1 * *(float *)(param_1 + 0x18) +
          *(float *)(param_1 + 0x38) + fVar2 * *(float *)(param_1 + 0x28);
  if ((((0.0 <= (param_3 - *(float *)(this + 0x10)) + *(float *)(this + 4) * fVar6 +
                *(float *)(this + 8) * fVar5 + *(float *)(this + 0xc) * fVar4) &&
       (0.0 <= (param_3 - *(float *)(this + 0x20)) + *(float *)(this + 0x14) * fVar6 +
               *(float *)(this + 0x18) * fVar5 + *(float *)(this + 0x1c) * fVar4)) &&
      (0.0 <= (param_3 - *(float *)(this + 0x30)) + *(float *)(this + 0x24) * fVar6 +
              *(float *)(this + 0x28) * fVar5 + *(float *)(this + 0x2c) * fVar4)) &&
     ((0.0 <= (param_3 - *(float *)(this + 0x40)) + *(float *)(this + 0x34) * fVar6 +
              *(float *)(this + 0x38) * fVar5 + *(float *)(this + 0x3c) * fVar4 &&
      (0.0 <= (param_3 - *(float *)(this + 0x50)) + *(float *)(this + 0x44) * fVar6 +
              *(float *)(this + 0x48) * fVar5 + *(float *)(this + 0x4c) * fVar4)))) {
    bVar3 = 0.0 <= (param_3 - *(float *)(this + 0x60)) + fVar6 * *(float *)(this + 0x54) +
                   fVar5 * *(float *)(this + 0x58) + fVar4 * *(float *)(this + 0x5c);
  }
  return bVar3;
}


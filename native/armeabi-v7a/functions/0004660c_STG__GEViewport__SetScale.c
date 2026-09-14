/* 0004660c | STG::GEViewport::SetScale */

/* STG::GEViewport::SetScale(STG::MVector2 const&, STG::MVector2 const&) */

void __thiscall STG::GEViewport::SetScale(GEViewport *this,MVector2 *param_1,MVector2 *param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)param_1;
  fVar2 = *(float *)param_2;
  *(undefined4 *)(this + 0x24) = uVar1;
  fVar3 = (*(float *)(param_2 + 4) - *(float *)(this + 0x1c)) / *(float *)(this + 0x40);
  fVar2 = (fVar2 - *(float *)(this + 0x10)) / *(float *)(this + 0x3c);
  *(float *)(this + 0x2c) = (fVar3 + fVar3) - 1.0;
  *(float *)(this + 0x28) = (fVar2 + fVar2) - 1.0;
  return;
}


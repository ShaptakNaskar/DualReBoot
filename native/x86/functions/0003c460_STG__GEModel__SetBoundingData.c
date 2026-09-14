/* 0003c460 | STG::GEModel::SetBoundingData */

/* STG::GEModel::SetBoundingData(STG::MVector3 const&, STG::MVector3 const&, STG::MVector3 const&,
   float) */

void __thiscall
STG::GEModel::SetBoundingData
          (GEModel *this,MVector3 *param_1,MVector3 *param_2,MVector3 *param_3,float param_4)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0x54) = *(undefined4 *)param_1;
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x5c) = uVar1;
  *(undefined4 *)(this + 0x60) = *(undefined4 *)param_2;
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(this + 0x68) = uVar1;
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)param_3;
  uVar1 = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(this + 0x74) = uVar1;
  *(float *)(this + 0x78) = param_4;
  return;
}


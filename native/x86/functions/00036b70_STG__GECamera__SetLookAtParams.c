/* 00036b70 | STG::GECamera::SetLookAtParams */

/* STG::GECamera::SetLookAtParams(STG::MVector3 const&, STG::MVector3 const&, STG::MVector3 const&)
    */

void __thiscall
STG::GECamera::SetLookAtParams(GECamera *this,MVector3 *param_1,MVector3 *param_2,MVector3 *param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0x1c0) = *(undefined4 *)param_1;
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x1c4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x1c8) = uVar1;
  *(undefined4 *)(this + 0x1cc) = *(undefined4 *)param_2;
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(this + 0x1d0) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(this + 0x1d4) = uVar1;
  *(undefined4 *)(this + 0x1d8) = *(undefined4 *)param_3;
  uVar1 = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(this + 0x1dc) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(this + 0x1e0) = uVar1;
  return;
}


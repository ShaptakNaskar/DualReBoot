/* 00059c00 | STG::MMatrix::SetPosition */

/* STG::MMatrix::SetPosition(STG::MVector3 const&) */

void __thiscall STG::MMatrix::SetPosition(MMatrix *this,MVector3 *param_1)

{
  *(undefined4 *)(this + 0x30) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  return;
}


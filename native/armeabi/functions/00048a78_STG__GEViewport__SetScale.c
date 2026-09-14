/* 00048a78 | STG::GEViewport::SetScale */

/* STG::GEViewport::SetScale(STG::MVector2 const&, STG::MVector2 const&) */

void __thiscall STG::GEViewport::SetScale(GEViewport *this,MVector2 *param_1,MVector2 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 4);
  uVar1 = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(this + 0x20) = uVar2;
  uVar1 = __subsf3(uVar1,*(undefined4 *)(this + 0x1c));
  uVar1 = __divsf3(uVar1,*(undefined4 *)(this + 0x40));
  uVar1 = __addsf3(uVar1,uVar1);
  uVar1 = __subsf3(uVar1,0x3f800000);
  uVar2 = __subsf3(*(undefined4 *)param_2,*(undefined4 *)(this + 0x10));
  uVar2 = __divsf3(uVar2,*(undefined4 *)(this + 0x3c));
  uVar2 = __addsf3(uVar2,uVar2);
  uVar2 = __subsf3(uVar2,0x3f800000);
  *(undefined4 *)(this + 0x2c) = uVar1;
  *(undefined4 *)(this + 0x28) = uVar2;
  return;
}


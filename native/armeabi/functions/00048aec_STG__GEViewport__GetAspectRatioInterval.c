/* 00048aec | STG::GEViewport::GetAspectRatioInterval */

/* STG::GEViewport::GetAspectRatioInterval(float) const */

void __thiscall STG::GEViewport::GetAspectRatioInterval(GEViewport *this,float param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_r1;
  undefined4 uVar4;
  
  uVar1 = __divsf3(0x3f800000);
  uVar4 = *(undefined4 *)(this + 0x30);
  iVar2 = __aeabi_fcmple(uVar1,uVar4);
  uVar3 = uVar1;
  if (iVar2 == 0) {
    uVar3 = uVar4;
  }
  iVar2 = __aeabi_fcmpge(uVar3);
  if (iVar2 == 0) {
    uVar3 = in_r1;
  }
  uVar3 = __subsf3(uVar3);
  uVar1 = __subsf3(uVar1);
  uVar1 = __divsf3(0x3f800000,uVar1);
  __mulsf3(uVar3,uVar1);
  return;
}


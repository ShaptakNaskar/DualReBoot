/* 0003658c | STG::GECamera::IsVisible */

/* STG::GECamera::IsVisible(STG::MMatrix const&, STG::MVector3 const&, float) const */

bool __thiscall
STG::GECamera::IsVisible(GECamera *this,MMatrix *param_1,MVector3 *param_2,float param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar6 = *(undefined4 *)param_2;
  uVar5 = *(undefined4 *)(param_2 + 4);
  uVar7 = *(undefined4 *)(param_2 + 8);
  uVar1 = __mulsf3(uVar6,*(undefined4 *)param_1);
  uVar2 = __mulsf3(uVar5,*(undefined4 *)(param_1 + 0x10));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar1 = __addsf3(uVar1,*(undefined4 *)(param_1 + 0x30));
  uVar2 = __mulsf3(uVar7,*(undefined4 *)(param_1 + 0x20));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar6,*(undefined4 *)(param_1 + 4));
  uVar3 = __mulsf3(uVar5,*(undefined4 *)(param_1 + 0x14));
  uVar2 = __addsf3(uVar2,uVar3);
  uVar2 = __addsf3(uVar2,*(undefined4 *)(param_1 + 0x34));
  uVar3 = __mulsf3(uVar7,*(undefined4 *)(param_1 + 0x24));
  uVar2 = __addsf3(uVar2,uVar3);
  uVar3 = __mulsf3(uVar6,*(undefined4 *)(param_1 + 8));
  uVar5 = __mulsf3(uVar5,*(undefined4 *)(param_1 + 0x18));
  uVar3 = __addsf3(uVar3,uVar5);
  uVar3 = __addsf3(uVar3,*(undefined4 *)(param_1 + 0x38));
  uVar5 = __mulsf3(uVar7,*(undefined4 *)(param_1 + 0x28));
  uVar3 = __addsf3(uVar3,uVar5);
  __mulsf3(uVar1,*(undefined4 *)(this + 4));
  uVar5 = __addsf3();
  uVar5 = __subsf3(uVar5,*(undefined4 *)(this + 0x10));
  uVar6 = __mulsf3(uVar2,*(undefined4 *)(this + 8));
  uVar5 = __addsf3(uVar5,uVar6);
  uVar6 = __mulsf3(uVar3,*(undefined4 *)(this + 0xc));
  uVar5 = __addsf3(uVar5,uVar6);
  iVar4 = __aeabi_fcmplt(uVar5,0);
  if (iVar4 != 0) {
    return false;
  }
  __mulsf3(uVar1,*(undefined4 *)(this + 0x14));
  uVar5 = __addsf3();
  uVar5 = __subsf3(uVar5,*(undefined4 *)(this + 0x20));
  uVar6 = __mulsf3(uVar2,*(undefined4 *)(this + 0x18));
  uVar5 = __addsf3(uVar5,uVar6);
  uVar6 = __mulsf3(uVar3,*(undefined4 *)(this + 0x1c));
  uVar5 = __addsf3(uVar5,uVar6);
  iVar4 = __aeabi_fcmplt(uVar5,0);
  if (iVar4 == 0) {
    __mulsf3(uVar1,*(undefined4 *)(this + 0x24));
    uVar5 = __addsf3();
    uVar5 = __subsf3(uVar5,*(undefined4 *)(this + 0x30));
    uVar6 = __mulsf3(uVar2,*(undefined4 *)(this + 0x28));
    uVar5 = __addsf3(uVar5,uVar6);
    uVar6 = __mulsf3(uVar3,*(undefined4 *)(this + 0x2c));
    uVar5 = __addsf3(uVar5,uVar6);
    iVar4 = __aeabi_fcmplt(uVar5,0);
    if (iVar4 != 0) {
      return false;
    }
    __mulsf3(uVar1,*(undefined4 *)(this + 0x34));
    uVar5 = __addsf3();
    uVar5 = __subsf3(uVar5,*(undefined4 *)(this + 0x40));
    uVar6 = __mulsf3(uVar2,*(undefined4 *)(this + 0x38));
    uVar5 = __addsf3(uVar5,uVar6);
    uVar6 = __mulsf3(uVar3,*(undefined4 *)(this + 0x3c));
    uVar5 = __addsf3(uVar5,uVar6);
    iVar4 = __aeabi_fcmplt(uVar5,0);
    if (iVar4 == 0) {
      __mulsf3(uVar1,*(undefined4 *)(this + 0x44));
      uVar5 = __addsf3();
      uVar5 = __subsf3(uVar5,*(undefined4 *)(this + 0x50));
      uVar6 = __mulsf3(uVar2,*(undefined4 *)(this + 0x48));
      uVar5 = __addsf3(uVar5,uVar6);
      uVar6 = __mulsf3(uVar3,*(undefined4 *)(this + 0x4c));
      uVar5 = __addsf3(uVar5,uVar6);
      iVar4 = __aeabi_fcmplt(uVar5,0);
      if (iVar4 == 0) {
        __mulsf3(uVar1,*(undefined4 *)(this + 0x54));
        uVar1 = __addsf3();
        uVar1 = __subsf3(uVar1,*(undefined4 *)(this + 0x60));
        uVar2 = __mulsf3(uVar2,*(undefined4 *)(this + 0x58));
        uVar1 = __addsf3(uVar1,uVar2);
        uVar2 = __mulsf3(uVar3,*(undefined4 *)(this + 0x5c));
        uVar1 = __addsf3(uVar1,uVar2);
        iVar4 = __aeabi_fcmpge(uVar1,0);
        return iVar4 != 0;
      }
      return false;
    }
  }
  return false;
}


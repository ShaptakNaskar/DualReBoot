/* 00036934 | STG::GECamera::ConvertScreenToClip */

/* STG::GECamera::ConvertScreenToClip(STG::URectangle<unsigned long> const&, STG::MVector2 const&,
   STG::MVector2&) const */

void __thiscall
STG::GECamera::ConvertScreenToClip
          (GECamera *this,URectangle *param_1,MVector2 *param_2,MVector2 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = __floatunsisf(*(undefined4 *)param_1);
  uVar2 = __floatunsisf(*(undefined4 *)(param_1 + 0xc));
  uVar3 = __subsf3(*(undefined4 *)(param_2 + 4),uVar2);
  uVar4 = __floatunsisf(*(undefined4 *)(param_1 + 4));
  uVar2 = __subsf3(uVar4,uVar2);
  uVar2 = __divsf3(uVar3,uVar2);
  uVar2 = __addsf3(uVar2,uVar2);
  uVar2 = __subsf3(uVar2,0x3f800000);
  uVar3 = __subsf3(*(undefined4 *)param_2,uVar1);
  uVar4 = __floatunsisf(*(undefined4 *)(param_1 + 8));
  uVar1 = __subsf3(uVar4,uVar1);
  uVar1 = __divsf3(uVar3,uVar1);
  uVar1 = __addsf3(uVar1,uVar1);
  uVar1 = __subsf3(uVar1,0x3f800000);
  *(undefined4 *)(param_3 + 4) = uVar2;
  *(undefined4 *)param_3 = uVar1;
  return;
}


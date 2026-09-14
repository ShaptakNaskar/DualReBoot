/* 00035bfc | STG::GEAnimationTrack::Evaluate */

/* STG::GEAnimationTrack::Evaluate(STG::GEAnimationTimeData::EDriver, STG::GEAnimationTimeData
   const&, bool, STG::UTimeValue<unsigned long long, 1ul> const&) const */

undefined4 STG::GEAnimationTrack::Evaluate(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 extraout_r2;
  undefined4 in_stack_00000000;
  int *piVar6;
  undefined4 *puVar7;
  int local_20;
  undefined4 local_1c;
  
  piVar6 = &local_20;
  puVar7 = &local_1c;
  iVar1 = Evaluate();
  if (iVar1 == 0) {
    uVar2 = *param_1;
  }
  else {
    iVar1 = param_1[4] + local_20 * 0x40;
    uVar2 = __subsf3(0x3f800000,local_1c,extraout_r2,param_1[4],in_stack_00000000,piVar6,puVar7);
    uVar3 = __mulsf3(local_1c,*(undefined4 *)(iVar1 + 0x24));
    uVar3 = __mulsf3(uVar3,0x40400000);
    uVar4 = __mulsf3(uVar2,*(undefined4 *)(iVar1 + 0x20));
    uVar3 = __addsf3(uVar3,uVar4);
    uVar4 = __mulsf3(*(undefined4 *)(iVar1 + 0x28),0x40400000);
    uVar4 = __mulsf3(uVar4,uVar2);
    uVar5 = __mulsf3(local_1c,*(undefined4 *)(iVar1 + 0x2c));
    uVar4 = __addsf3(uVar4,uVar5);
    uVar5 = __mulsf3(local_1c,local_1c);
    uVar4 = __mulsf3(uVar5,uVar4);
    uVar2 = __mulsf3(uVar2,uVar2);
    uVar2 = __mulsf3(uVar2,uVar3);
    uVar2 = __addsf3(uVar4,uVar2);
  }
  return uVar2;
}


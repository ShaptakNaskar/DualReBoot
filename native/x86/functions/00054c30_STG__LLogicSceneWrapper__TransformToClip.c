/* 00054c30 | STG::LLogicSceneWrapper::TransformToClip */

/* STG::LLogicSceneWrapper::TransformToClip(STG::MMatrix const&, STG::MVector3 const&) const */

void STG::LLogicSceneWrapper::TransformToClip(MMatrix *param_1,MVector3 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *in_stack_0000000c;
  float *in_stack_00000010;
  
  fVar1 = *in_stack_00000010;
  fVar2 = in_stack_00000010[1];
  fVar3 = in_stack_00000010[2];
  fVar4 = in_stack_0000000c[4];
  fVar8 = in_stack_0000000c[3] * fVar1 + in_stack_0000000c[7] * fVar2 + in_stack_0000000c[0xf] +
          in_stack_0000000c[0xb] * fVar3;
  fVar5 = *in_stack_0000000c;
  fVar6 = in_stack_0000000c[8];
  fVar7 = in_stack_0000000c[0xc];
  *(float *)(param_1 + 4) =
       (in_stack_0000000c[1] * fVar1 + in_stack_0000000c[5] * fVar2 + in_stack_0000000c[0xd] +
       in_stack_0000000c[9] * fVar3) / fVar8;
  *(float *)param_1 = (fVar1 * fVar5 + fVar2 * fVar4 + fVar7 + fVar3 * fVar6) / fVar8;
  return;
}


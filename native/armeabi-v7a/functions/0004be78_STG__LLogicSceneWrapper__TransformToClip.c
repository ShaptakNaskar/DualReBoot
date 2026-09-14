/* 0004be78 | STG::LLogicSceneWrapper::TransformToClip */

/* STG::LLogicSceneWrapper::TransformToClip(STG::MMatrix const&, STG::MVector3 const&) const */

void STG::LLogicSceneWrapper::TransformToClip(MMatrix *param_1,MVector3 *param_2)

{
  float *in_r2;
  float *in_r3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar4 = in_r3[1];
  fVar7 = in_r2[4];
  fVar5 = *in_r3;
  fVar1 = *in_r2;
  fVar2 = in_r2[0xc];
  fVar6 = in_r3[2];
  fVar3 = in_r2[8];
  fVar8 = fVar4 * in_r2[7] + fVar5 * in_r2[3] + in_r2[0xf] + fVar6 * in_r2[0xb];
  *(float *)(param_1 + 4) =
       (fVar4 * in_r2[5] + fVar5 * in_r2[1] + in_r2[0xd] + fVar6 * in_r2[9]) / fVar8;
  *(float *)param_1 = (fVar4 * fVar7 + fVar5 * fVar1 + fVar2 + fVar6 * fVar3) / fVar8;
  return;
}


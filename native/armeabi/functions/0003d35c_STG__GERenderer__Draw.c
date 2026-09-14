/* 0003d35c | STG::GERenderer::Draw */

/* STG::GERenderer::Draw(STG::URectangle<unsigned long> const&, STG::GEMaterial const*, STG::GEColor
   const&, bool) */

void STG::GERenderer::Draw(URectangle *param_1,GEMaterial *param_2,GEColor *param_3,bool param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar1 = __floatunsisf(*(undefined4 *)(param_2 + 4));
  uVar2 = __floatunsisf(*(undefined4 *)(param_2 + 8));
  uVar3 = __floatunsisf(*(undefined4 *)(param_2 + 0xc));
  local_30 = __floatunsisf(*(undefined4 *)param_2);
  local_2c = uVar1;
  local_28 = uVar2;
  local_24 = uVar3;
  Draw(param_1,(GEMaterial *)&local_30,param_3,param_4);
  return;
}


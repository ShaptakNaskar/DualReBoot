/* 000382ac | STG::GEMaterial::ConvertToMultiPassTransparency */

/* STG::GEMaterial::ConvertToMultiPassTransparency(STG::GEMaterial&, STG::GEMaterial&) const */

undefined4 __thiscall
STG::GEMaterial::ConvertToMultiPassTransparency
          (GEMaterial *this,GEMaterial *param_1,GEMaterial *param_2)

{
  int iVar1;
  
  iVar1 = GetIsSuitableForMultiPassTransparency(this);
  if (iVar1 == 0) {
    return 0;
  }
  SetDefault(param_1);
  *(undefined4 *)(param_1 + 0x13c) = 6;
  *(undefined4 *)(param_1 + 0x144) = 0;
  Clone(this,param_2);
  *(undefined4 *)(param_2 + 0x144) = 3;
  return 1;
}


/* 0003ad60 | STG::GEMaterial::ConvertToMultiPassTransparency */

/* STG::GEMaterial::ConvertToMultiPassTransparency(STG::GEMaterial&, STG::GEMaterial&) const */

bool __thiscall
STG::GEMaterial::ConvertToMultiPassTransparency
          (GEMaterial *this,GEMaterial *param_1,GEMaterial *param_2)

{
  char cVar1;
  
  FUN_0002e044();
  cVar1 = GetIsSuitableForMultiPassTransparency(this);
  if (cVar1 != '\0') {
    SetDefault(param_1);
    *(undefined4 *)(param_1 + 0x13c) = 6;
    *(undefined4 *)(param_1 + 0x144) = 0;
    Clone(this,param_2);
    *(undefined4 *)(param_2 + 0x144) = 3;
  }
  return cVar1 != '\0';
}


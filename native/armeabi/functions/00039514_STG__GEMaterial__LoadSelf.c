/* 00039514 | STG::GEMaterial::LoadSelf */

/* STG::GEMaterial::LoadSelf(STG::FFileBase const*) */

undefined4 __thiscall STG::GEMaterial::LoadSelf(GEMaterial *this,FFileBase *param_1)

{
  if (param_1 != (FFileBase *)0x0) {
    USerialize::Load(param_1,this);
    return 1;
  }
  return 0;
}


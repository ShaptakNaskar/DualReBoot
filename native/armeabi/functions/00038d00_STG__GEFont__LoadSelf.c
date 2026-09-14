/* 00038d00 | STG::GEFont::LoadSelf */

/* STG::GEFont::LoadSelf(STG::FFileBase const*) */

undefined4 __thiscall STG::GEFont::LoadSelf(GEFont *this,FFileBase *param_1)

{
  if (param_1 != (FFileBase *)0x0) {
    USerialize::Load(param_1,this);
    return 1;
  }
  return 0;
}


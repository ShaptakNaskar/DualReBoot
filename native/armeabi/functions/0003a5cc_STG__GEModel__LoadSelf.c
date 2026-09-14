/* 0003a5cc | STG::GEModel::LoadSelf */

/* STG::GEModel::LoadSelf(STG::FFileBase const*) */

undefined4 __thiscall STG::GEModel::LoadSelf(GEModel *this,FFileBase *param_1)

{
  if (param_1 != (FFileBase *)0x0) {
    USerialize::Load(param_1,this);
    return 1;
  }
  return 0;
}


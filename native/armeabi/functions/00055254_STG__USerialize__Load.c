/* 00055254 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GEEnvironmentGroup&) */

void STG::USerialize::Load(FFileBase *param_1,GEEnvironmentGroup *param_2)

{
  uint uVar1;
  uint local_5c;
  uchar auStack_58 [4];
  GEEnvironmentSettings aGStack_54 [64];
  
  FFileBase::Read(param_1,auStack_58,4);
  FFileBase::Read(param_1,(uchar *)&local_5c,4);
  if (local_5c != 0) {
    uVar1 = 0;
    do {
      while (7 < uVar1) {
        GEEnvironmentSettings::GEEnvironmentSettings(aGStack_54);
        Load(param_1,aGStack_54);
        GEEnvironmentSettings::~GEEnvironmentSettings(aGStack_54);
        uVar1 = uVar1 + 1;
        if (local_5c <= uVar1) {
          return;
        }
      }
      Load(param_1,(GEEnvironmentSettings *)(param_2 + uVar1 * 0x3c));
      uVar1 = uVar1 + 1;
    } while (uVar1 < local_5c);
  }
  return;
}


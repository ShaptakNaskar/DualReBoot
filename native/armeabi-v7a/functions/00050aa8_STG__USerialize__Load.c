/* 00050aa8 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GEEnvironmentGroup&) */

void STG::USerialize::Load(FFileBase *param_1,GEEnvironmentGroup *param_2)

{
  int iVar1;
  uint uVar2;
  uint local_54;
  uchar auStack_50 [4];
  GEEnvironmentSettings aGStack_4c [60];
  
  FFileBase::Read(param_1,auStack_50,4);
  FFileBase::Read(param_1,(uchar *)&local_54,4);
  if (local_54 != 0) {
    uVar2 = 0;
    do {
      while( true ) {
        iVar1 = uVar2 * 0x3c;
        if (uVar2 < 8) break;
        GEEnvironmentSettings::GEEnvironmentSettings(aGStack_4c);
        uVar2 = uVar2 + 1;
        Load(param_1,aGStack_4c);
        GEEnvironmentSettings::~GEEnvironmentSettings(aGStack_4c);
        if (local_54 <= uVar2) {
          return;
        }
      }
      uVar2 = uVar2 + 1;
      Load(param_1,(GEEnvironmentSettings *)(param_2 + iVar1));
    } while (uVar2 < local_54);
  }
  return;
}


/* 0005ba80 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GEEnvironmentGroup&) */

void STG::USerialize::Load(FFileBase *param_1,GEEnvironmentGroup *param_2)

{
  uint uVar1;
  uint local_60 [4];
  uchar local_50 [4];
  GEEnvironmentSettings local_4c [56];
  undefined4 uStack_14;
  
  uStack_14 = 0x5ba8b;
  FUN_0002e044();
  FFileBase::Read(param_1,local_50,4);
  FFileBase::Read(param_1,(uchar *)local_60,4);
  if (local_60[0] != 0) {
    uVar1 = 0;
    do {
      while (7 < uVar1) {
        GEEnvironmentSettings::GEEnvironmentSettings(local_4c);
        Load(param_1,local_4c);
        GEEnvironmentSettings::~GEEnvironmentSettings(local_4c);
        uVar1 = uVar1 + 1;
        if (local_60[0] <= uVar1) {
          return;
        }
      }
      Load(param_1,(GEEnvironmentSettings *)(param_2 + uVar1 * 0x3c));
      uVar1 = uVar1 + 1;
    } while (uVar1 < local_60[0]);
  }
  return;
}


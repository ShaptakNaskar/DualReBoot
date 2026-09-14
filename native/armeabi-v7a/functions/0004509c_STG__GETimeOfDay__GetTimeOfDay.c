/* 0004509c | STG::GETimeOfDay::GetTimeOfDay */

/* STG::GETimeOfDay::GetTimeOfDay(char const*, STG::GETimeOfDay::EPhase&) */

undefined4 STG::GETimeOfDay::GetTimeOfDay(char *param_1,EPhase *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcasecmp(param_1,(char *)(DAT_000451a8 + 0x450b4));
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = strcasecmp(param_1,(char *)(DAT_000451ac + 0x450cc));
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = strcasecmp(param_1,(char *)(DAT_000451b0 + 0x450e4));
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        iVar1 = strcasecmp(param_1,(char *)(DAT_000451b4 + 0x450fc));
        if (iVar1 == 0) {
          uVar2 = 3;
        }
        else {
          iVar1 = strcasecmp(param_1,(char *)(DAT_000451b8 + 0x45114));
          if (iVar1 == 0) {
            uVar2 = 4;
          }
          else {
            iVar1 = strcasecmp(param_1,(char *)(DAT_000451bc + 0x4512c));
            if (iVar1 == 0) {
              uVar2 = 5;
            }
            else {
              iVar1 = strcasecmp(param_1,(char *)(DAT_000451c0 + 0x45144));
              if (iVar1 == 0) {
                uVar2 = 6;
              }
              else {
                iVar1 = strcasecmp(param_1,(char *)(DAT_000451c4 + 0x4515c));
                if (iVar1 != 0) {
                  return 0;
                }
                uVar2 = 7;
              }
            }
          }
        }
      }
    }
  }
  *(undefined4 *)param_2 = uVar2;
  return 1;
}


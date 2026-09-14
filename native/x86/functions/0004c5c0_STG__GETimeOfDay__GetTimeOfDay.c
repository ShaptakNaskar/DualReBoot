/* 0004c5c0 | STG::GETimeOfDay::GetTimeOfDay */

/* STG::GETimeOfDay::GetTimeOfDay(char const*, STG::GETimeOfDay::EPhase&) */

undefined4 STG::GETimeOfDay::GetTimeOfDay(char *param_1,EPhase *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBX;
  
  FUN_0002e044();
  iVar1 = strcasecmp(param_1,(char *)(unaff_EBX + 0x3ad6c));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = strcasecmp(param_1,(char *)(unaff_EBX + 0x3ad75));
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = strcasecmp(param_1,(char *)(unaff_EBX + 0x3ad7b));
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        iVar1 = strcasecmp(param_1,(char *)(unaff_EBX + 0x3ad80));
        if (iVar1 == 0) {
          uVar2 = 3;
        }
        else {
          iVar1 = strcasecmp(param_1,(char *)(unaff_EBX + 0x3ad88));
          if (iVar1 == 0) {
            uVar2 = 4;
          }
          else {
            iVar1 = strcasecmp(param_1,(char *)(unaff_EBX + 0x3ad8d));
            if (iVar1 == 0) {
              uVar2 = 5;
            }
            else {
              iVar1 = strcasecmp(param_1,(char *)(unaff_EBX + 0x3ad97));
              if (iVar1 == 0) {
                uVar2 = 6;
              }
              else {
                iVar1 = strcasecmp(param_1,(char *)(unaff_EBX + 0x3ad9c));
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


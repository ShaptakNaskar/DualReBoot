/* 000474a8 | STG::GETimeOfDay::GetTimeOfDay */

/* STG::GETimeOfDay::GetTimeOfDay(char const*, STG::GETimeOfDay::EPhase&) */

undefined4 STG::GETimeOfDay::GetTimeOfDay(char *param_1,EPhase *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcasecmp(param_1,(char *)(DAT_000475b4 + 0x474c0));
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = strcasecmp(param_1,(char *)(DAT_000475b8 + 0x474d8));
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = strcasecmp(param_1,(char *)(DAT_000475bc + 0x474f0));
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        iVar1 = strcasecmp(param_1,(char *)(DAT_000475c0 + 0x47508));
        if (iVar1 == 0) {
          uVar2 = 3;
        }
        else {
          iVar1 = strcasecmp(param_1,(char *)(DAT_000475c4 + 0x47520));
          if (iVar1 == 0) {
            uVar2 = 4;
          }
          else {
            iVar1 = strcasecmp(param_1,(char *)(DAT_000475c8 + 0x47538));
            if (iVar1 == 0) {
              uVar2 = 5;
            }
            else {
              iVar1 = strcasecmp(param_1,(char *)(DAT_000475cc + 0x47550));
              if (iVar1 == 0) {
                uVar2 = 6;
              }
              else {
                iVar1 = strcasecmp(param_1,(char *)(DAT_000475d0 + 0x47568));
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


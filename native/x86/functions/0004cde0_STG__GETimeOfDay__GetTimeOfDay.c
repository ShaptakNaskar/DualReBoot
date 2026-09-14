/* 0004cde0 | STG::GETimeOfDay::GetTimeOfDay */

/* STG::GETimeOfDay::GetTimeOfDay(char const*, STG::GETimeOfDay&) */

bool STG::GETimeOfDay::GetTimeOfDay(char *param_1,GETimeOfDay *param_2)

{
  char cVar1;
  EPhase *pEVar2;
  undefined4 local_20;
  GETimeOfDay local_1c [8];
  GETimeOfDay local_14 [8];
  
  pEVar2 = (EPhase *)FUN_0002e044();
  cVar1 = GetTimeOfDay(param_1,pEVar2);
  if (cVar1 != '\0') {
    GETimeOfDay(local_1c,local_20,0xa8c0);
    operator=(param_2,local_1c);
  }
  else {
    GETimeOfDay(local_14);
    operator=(param_2,local_14);
  }
  return cVar1 != '\0';
}


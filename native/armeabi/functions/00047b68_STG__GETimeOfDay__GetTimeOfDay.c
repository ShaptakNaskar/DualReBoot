/* 00047b68 | STG::GETimeOfDay::GetTimeOfDay */

/* STG::GETimeOfDay::GetTimeOfDay(char const*, STG::GETimeOfDay&) */

bool STG::GETimeOfDay::GetTimeOfDay(char *param_1,GETimeOfDay *param_2)

{
  int iVar1;
  undefined4 local_24;
  GETimeOfDay aGStack_20 [8];
  GETimeOfDay aGStack_18 [12];
  
  iVar1 = GetTimeOfDay(param_1,(EPhase *)&local_24);
  if (iVar1 != 0) {
    GETimeOfDay(aGStack_20,local_24,0xa8c0);
    operator=(param_2,aGStack_20);
  }
  else {
    GETimeOfDay(aGStack_18);
    operator=(param_2,aGStack_18);
  }
  return iVar1 != 0;
}


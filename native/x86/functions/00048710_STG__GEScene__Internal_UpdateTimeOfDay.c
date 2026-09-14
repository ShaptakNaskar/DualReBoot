/* 00048710 | STG::GEScene::Internal_UpdateTimeOfDay */

/* STG::GEScene::Internal_UpdateTimeOfDay() */

void __thiscall STG::GEScene::Internal_UpdateTimeOfDay(GEScene *this)

{
  char cVar1;
  TimeStruct local_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  GEScene GStack_20;
  
  FUN_0002e044();
  GETimeOfDayAuto::Update(local_40,(TimeStruct *)(this + 0x5c8));
  GETimeOfDay::operator=((GETimeOfDay *)(this + 0x60c),(GETimeOfDay *)local_40);
  *(undefined4 *)(this + 0x614) = local_38;
  *(undefined4 *)(this + 0x618) = local_34;
  *(undefined4 *)(this + 0x61c) = local_30;
  *(undefined4 *)(this + 0x620) = local_2c;
  *(undefined4 *)(this + 0x624) = local_28;
  *(undefined4 *)(this + 0x628) = local_24;
  this[0x62c] = GStack_20;
  cVar1 = UPreference_Scene::GetTimeOfDay
                    ((UPreference_Scene *)(this + 0x2c),(ResultData *)(this + 0x60c),
                     (GETimeOfDay *)(this + 0x5b8));
  if (cVar1 != '\0') {
    if (*(int *)(this + 0x5b8) == *(int *)(this + 0x5b0)) {
      GETimeOfDay::operator=((GETimeOfDay *)(this + 0x5c0),(GETimeOfDay *)(this + 0x5b8));
    }
    else {
      this[0x770] = (GEScene)0x1;
    }
  }
  return;
}


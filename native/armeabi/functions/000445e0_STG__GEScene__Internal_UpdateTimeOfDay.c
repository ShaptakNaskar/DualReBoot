/* 000445e0 | STG::GEScene::Internal_UpdateTimeOfDay */

/* STG::GEScene::Internal_UpdateTimeOfDay() */

void __thiscall STG::GEScene::Internal_UpdateTimeOfDay(GEScene *this)

{
  int iVar1;
  TimeStruct aTStack_3c [8];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  GEScene local_1c;
  
  GETimeOfDayAuto::Update(aTStack_3c,(TimeStruct *)(this + 0x5dc));
  GETimeOfDay::operator=((GETimeOfDay *)(this + 0x620),(GETimeOfDay *)aTStack_3c);
  *(undefined4 *)(this + 0x628) = local_34;
  this[0x640] = local_1c;
  *(undefined4 *)(this + 0x62c) = local_30;
  *(undefined4 *)(this + 0x630) = local_2c;
  *(undefined4 *)(this + 0x634) = local_28;
  *(undefined4 *)(this + 0x638) = local_24;
  *(undefined4 *)(this + 0x63c) = local_20;
  iVar1 = UPreference_Scene::GetTimeOfDay
                    ((UPreference_Scene *)(this + 0x2c),(ResultData *)(this + 0x620),
                     (GETimeOfDay *)(this + 0x5cc));
  if (iVar1 != 0) {
    if (*(int *)(this + 0x5cc) == *(int *)(this + 0x5c4)) {
      GETimeOfDay::operator=((GETimeOfDay *)(this + 0x5d4),(GETimeOfDay *)(this + 0x5cc));
    }
    else {
      this[0x784] = (GEScene)0x1;
    }
  }
  return;
}


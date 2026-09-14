/* 0007e370 | EngineInterfaceImpl::SetPreference */

/* EngineInterfaceImpl::SetPreference(STG::UPreference_Scene::EPreferenceType, int, _jstring*,
   _jstring*) const */

undefined1 __thiscall
EngineInterfaceImpl::SetPreference
          (EngineInterfaceImpl *this,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  UPreference_Scene *pUVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBX;
  undefined1 local_b1;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  uint local_a0 [8];
  uint *local_80;
  uint *local_7c;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  uint local_60 [4];
  uint *local_50;
  uint *local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  uint local_30 [4];
  uint *local_20;
  uint *local_1c;
  int local_14;
  
  local_14 = 0x7e37b;
  FUN_0002e044();
  local_14 = **(int **)(
                       "_ZN3STG15GETimeOfDayAuto9SolarData6UpdateERKNS_5UTime10TimeStructILNS2_10ETimeValueE0EEERKNS_9MLocationE"
                       + unaff_EBX + 0x11);
  local_b1 = 0;
  if (param_3 == 0) goto LAB_0007e543;
  pUVar2 = (UPreference_Scene *)(*(int *)(param_3 + 8) + 0x2c);
  local_6c = param_4;
  local_70 = *(undefined4 *)(this + 8);
  iVar1 = *(int *)(
                  "_ZN3STG15GETimeOfDayAuto9SolarData6UpdateERKNS_5UTime10TimeStructILNS2_10ETimeValueE0EEERKNS_9MLocationE"
                  + unaff_EBX + 0x15) + 8;
  local_68 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  local_64 = iVar1;
  local_50 = local_60;
  local_4c = local_60;
  StringHelperBase<STG::UStringBase<char,int>,char>::AcquireString((int)&local_70);
  if (param_2 == 5) {
    local_ac = param_5;
    local_a8 = 0;
    iVar1 = *(int *)(
                    "_ZNK3STG5UTime18ComputeSolarEventsERKNS0_10TimeStructILNS0_10ETimeValueE0EEERKNS_9MLocationERNS_13MExplicitTypeIS3_mEESB_"
                    + unaff_EBX + 0x30) + 8;
    local_a0[0] = local_a0[0] & 0xffff0000;
    local_b0 = *(undefined4 *)(this + 8);
    local_a4 = iVar1;
    local_80 = local_a0;
    local_7c = local_a0;
    StringHelperBase<STG::UStringBase<unsigned_short,unsigned_short>,unsigned_short>::AcquireString
              ((StringHelperBase<STG::UStringBase<unsigned_short,unsigned_short>,unsigned_short> *)
               &local_b0,0xff);
    local_b1 = STG::UPreference_Scene::SetValueByKey(pUVar2,5,&local_64,&local_a4);
    StringHelperBase<STG::UStringBase<unsigned_short,unsigned_short>,unsigned_short>::ReleaseString
              ((StringHelperBase<STG::UStringBase<unsigned_short,unsigned_short>,unsigned_short> *)
               &local_b0);
    local_a4 = iVar1;
    if ((local_7c != local_a0) && (local_7c != (uint *)0x0)) {
      uVar4 = local_a0[0] - (int)local_7c & 0xfffffffe;
      puVar3 = local_7c;
      if (uVar4 < 0x81) goto LAB_0007e4e9;
LAB_0007e61d:
      operator_delete(puVar3);
    }
  }
  else {
    local_3c = param_5;
    local_38 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    local_40 = *(undefined4 *)(this + 8);
    local_34 = iVar1;
    local_20 = local_30;
    local_1c = local_30;
    StringHelperBase<STG::UStringBase<char,int>,char>::AcquireString((int)&local_40);
    local_b1 = STG::UPreference_Scene::SetValueByKey(pUVar2,param_2,&local_64,&local_34);
    StringHelperBase<STG::UStringBase<char,int>,char>::ReleaseString
              ((StringHelperBase<STG::UStringBase<char,int>,char> *)&local_40);
    local_34 = iVar1;
    if ((local_1c != local_30) && (local_1c != (uint *)0x0)) {
      uVar4 = local_30[0] - (int)local_1c;
      puVar3 = local_1c;
      if (0x80 < uVar4) goto LAB_0007e61d;
LAB_0007e4e9:
      std::__node_alloc::_M_deallocate(puVar3,uVar4);
    }
  }
  StringHelperBase<STG::UStringBase<char,int>,char>::ReleaseString
            ((StringHelperBase<STG::UStringBase<char,int>,char> *)&local_70);
  local_64 = *(int *)(
                     "_ZN3STG15GETimeOfDayAuto9SolarData6UpdateERKNS_5UTime10TimeStructILNS2_10ETimeValueE0EEERKNS_9MLocationE"
                     + unaff_EBX + 0x15) + 8;
  if ((local_4c != local_60) && (local_4c != (uint *)0x0)) {
    if (local_60[0] - (int)local_4c < 0x81) {
      std::__node_alloc::_M_deallocate(local_4c,local_60[0] - (int)local_4c);
    }
    else {
      operator_delete(local_4c);
    }
  }
LAB_0007e543:
  if (local_14 !=
      **(int **)(
                "_ZN3STG15GETimeOfDayAuto9SolarData6UpdateERKNS_5UTime10TimeStructILNS2_10ETimeValueE0EEERKNS_9MLocationE"
                + unaff_EBX + 0x11)) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e000();
  }
  return local_b1;
}


/* 00072bd8 | EngineInterfaceImpl::SetPreference */

/* EngineInterfaceImpl::SetPreference(STG::UPreference_Scene::EPreferenceType, int, _jstring*,
   _jstring*) const */

void __thiscall
EngineInterfaceImpl::SetPreference
          (EngineInterfaceImpl *this,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  UPreference_Scene *pUVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_a8;
  uint local_a4 [8];
  uint *local_84;
  uint *local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  uint local_6c [4];
  uint *local_5c;
  uint *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  uint local_44 [4];
  uint *local_34;
  uint *local_30;
  int local_2c;
  
  piVar5 = *(int **)(DAT_00072dd4 + 470000);
  local_2c = *piVar5;
  if (param_3 == 0) {
    uVar1 = 0;
    goto LAB_00072d1c;
  }
  local_7c = *(undefined4 *)(this + 8);
  iVar6 = *(int *)(DAT_00072dd8 + 0x72c1c);
  pUVar4 = (UPreference_Scene *)(*(int *)(param_3 + 8) + 0x2c);
  iVar7 = iVar6 + 8;
  local_74 = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  local_78 = param_4;
  local_70 = iVar7;
  local_5c = local_6c;
  local_58 = local_6c;
  StringHelperBase<STG::UStringBase<char,int>,char>::AcquireString((int)&local_7c);
  if (param_2 == 5) {
    local_b4 = *(undefined4 *)(this + 8);
    iVar7 = *(int *)(DAT_00072ddc + 0x72d48) + 8;
    local_b0 = param_5;
    local_ac = 0;
    local_a4[0] = local_a4[0] & 0xffff0000;
    local_a8 = iVar7;
    local_84 = local_a4;
    local_80 = local_a4;
    StringHelperBase<STG::UStringBase<unsigned_short,unsigned_short>,unsigned_short>::AcquireString
              ((StringHelperBase<STG::UStringBase<unsigned_short,unsigned_short>,unsigned_short> *)
               &local_b4,0xff);
    uVar1 = STG::UPreference_Scene::SetValueByKey(pUVar4,5,&local_70,&local_a8);
    StringHelperBase<STG::UStringBase<unsigned_short,unsigned_short>,unsigned_short>::ReleaseString
              ();
    local_a8 = iVar7;
    if ((local_80 != local_a4) && (local_80 != (uint *)0x0)) {
      uVar3 = local_a4[0] - (int)local_80 & 0xfffffffe;
      puVar2 = local_80;
      if (uVar3 < 0x81) goto LAB_00072dbc;
LAB_00072cdc:
      operator_delete(puVar2);
    }
  }
  else {
    local_54 = *(undefined4 *)(this + 8);
    local_50 = param_5;
    local_4c = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    local_48 = iVar7;
    local_34 = local_44;
    local_30 = local_44;
    StringHelperBase<STG::UStringBase<char,int>,char>::AcquireString((int)&local_54);
    uVar1 = STG::UPreference_Scene::SetValueByKey(pUVar4,param_2,&local_70,&local_48);
    StringHelperBase<STG::UStringBase<char,int>,char>::ReleaseString();
    local_48 = iVar7;
    if ((local_30 != local_44) && (local_30 != (uint *)0x0)) {
      uVar3 = local_44[0] - (int)local_30;
      puVar2 = local_30;
      if (0x80 < uVar3) goto LAB_00072cdc;
LAB_00072dbc:
      std::__node_alloc::_M_deallocate(puVar2,uVar3);
    }
  }
  StringHelperBase<STG::UStringBase<char,int>,char>::ReleaseString();
  local_70 = iVar6 + 8;
  if ((local_58 != local_6c) && (local_58 != (uint *)0x0)) {
    if (local_6c[0] - (int)local_58 < 0x81) {
      std::__node_alloc::_M_deallocate(local_58,local_6c[0] - (int)local_58);
    }
    else {
      operator_delete(local_58);
    }
  }
LAB_00072d1c:
  if (local_2c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


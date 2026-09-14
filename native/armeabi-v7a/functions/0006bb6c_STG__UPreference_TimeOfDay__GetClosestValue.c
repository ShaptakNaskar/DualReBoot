/* 0006bb6c | STG::UPreference_TimeOfDay::GetClosestValue */

/* STG::UPreference_TimeOfDay::GetClosestValue(STG::GETimeOfDay const&, STG::GETimeOfDay&) const */

undefined4 __thiscall
STG::UPreference_TimeOfDay::GetClosestValue
          (UPreference_TimeOfDay *this,GETimeOfDay *param_1,GETimeOfDay *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_48;
  int local_40;
  undefined4 uStack_3c;
  int local_38;
  undefined4 uStack_34;
  int local_30;
  undefined4 uStack_2c;
  
  if ((*(int *)(this + 0x80) != 0) && (piVar4 = *(int **)(this + 0x7c), *(int *)param_1 != *piVar4))
  {
    iVar5 = 0;
    do {
      iVar5 = iVar5 + 1;
      if (iVar5 == *(int *)(this + 0x80)) {
        uVar7 = 0xffffffff;
        iVar5 = 0;
        local_48 = 0;
        do {
          GETimeOfDay::GETimeOfDay((GETimeOfDay *)&local_40,iVar5,0xa8c0);
          if ((*(int *)(this + 0x80) != 0) && (piVar4 = *(int **)(this + 0x7c), local_40 != *piVar4)
             ) {
            iVar6 = 0;
            do {
              iVar6 = iVar6 + 1;
              if (iVar6 == *(int *)(this + 0x80)) goto joined_r0x0006bcd0;
              piVar4 = piVar4 + 1;
            } while (local_40 != *piVar4);
          }
          local_38 = local_40;
          uStack_34 = uStack_3c;
          local_30 = local_40;
          uStack_2c = uStack_3c;
          GETimeOfDay::SetFractionMin((GETimeOfDay *)&local_38);
          GETimeOfDay::SetFractionMax((GETimeOfDay *)&local_30);
          uVar1 = GETimeOfDay::GetDistance((GETimeOfDay *)&local_38,param_1);
          uVar2 = GETimeOfDay::GetDistance((GETimeOfDay *)&local_40,param_1);
          uVar3 = GETimeOfDay::GetDistance((GETimeOfDay *)&local_30,param_1);
          if (uVar1 <= uVar7) {
            GETimeOfDay::operator=(param_2,(GETimeOfDay *)&local_38);
            local_48 = 1;
            uVar7 = uVar1;
          }
          if (uVar2 <= uVar7) {
            GETimeOfDay::operator=(param_2,(GETimeOfDay *)&local_40);
            local_48 = 1;
            uVar7 = uVar2;
          }
          if (uVar3 <= uVar7) {
            GETimeOfDay::operator=(param_2,(GETimeOfDay *)&local_30);
            local_48 = 1;
            uVar7 = uVar3;
          }
joined_r0x0006bcd0:
          iVar5 = iVar5 + 1;
          if (iVar5 == 8) {
            return local_48;
          }
        } while( true );
      }
      piVar4 = piVar4 + 1;
    } while (*(int *)param_1 != *piVar4);
  }
  GETimeOfDay::operator=(param_2,param_1);
  return 1;
}


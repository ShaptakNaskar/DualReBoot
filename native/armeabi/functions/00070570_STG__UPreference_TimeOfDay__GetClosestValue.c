/* 00070570 | STG::UPreference_TimeOfDay::GetClosestValue */

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
  undefined4 uVar8;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  
  if ((*(int *)(this + 0x80) != 0) && (piVar4 = *(int **)(this + 0x7c), *(int *)param_1 != *piVar4))
  {
    iVar5 = 0;
    do {
      iVar5 = iVar5 + 1;
      if (iVar5 == *(int *)(this + 0x80)) {
        iVar5 = 0;
        uVar8 = 0;
        uVar7 = 0xffffffff;
        do {
          GETimeOfDay::GETimeOfDay((GETimeOfDay *)&local_40,iVar5,0xa8c0);
          if ((*(int *)(this + 0x80) != 0) && (piVar4 = *(int **)(this + 0x7c), local_40 != *piVar4)
             ) {
            iVar6 = 0;
            do {
              iVar6 = iVar6 + 1;
              if (iVar6 == *(int *)(this + 0x80)) goto joined_r0x000706c8;
              piVar4 = piVar4 + 1;
            } while (local_40 != *piVar4);
          }
          local_38 = local_40;
          local_34 = local_3c;
          local_30 = local_40;
          local_2c = local_3c;
          GETimeOfDay::SetFractionMin((GETimeOfDay *)&local_38);
          GETimeOfDay::SetFractionMax((GETimeOfDay *)&local_30);
          uVar1 = GETimeOfDay::GetDistance((GETimeOfDay *)&local_38,param_1);
          uVar2 = GETimeOfDay::GetDistance((GETimeOfDay *)&local_40,param_1);
          uVar3 = GETimeOfDay::GetDistance((GETimeOfDay *)&local_30,param_1);
          if (uVar1 <= uVar7) {
            GETimeOfDay::operator=(param_2,(GETimeOfDay *)&local_38);
            uVar8 = 1;
            uVar7 = uVar1;
          }
          if (uVar2 <= uVar7) {
            GETimeOfDay::operator=(param_2,(GETimeOfDay *)&local_40);
            uVar8 = 1;
            uVar7 = uVar2;
          }
          if (uVar3 <= uVar7) {
            GETimeOfDay::operator=(param_2,(GETimeOfDay *)&local_30);
            uVar8 = 1;
            uVar7 = uVar3;
          }
joined_r0x000706c8:
          iVar5 = iVar5 + 1;
          if (iVar5 == 8) {
            return uVar8;
          }
        } while( true );
      }
      piVar4 = piVar4 + 1;
    } while (*(int *)param_1 != *piVar4);
  }
  GETimeOfDay::operator=(param_2,param_1);
  return 1;
}


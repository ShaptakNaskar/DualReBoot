/* 0007b3c0 | STG::UPreference_TimeOfDay::GetClosestValue */

/* STG::UPreference_TimeOfDay::GetClosestValue(STG::GETimeOfDay const&, STG::GETimeOfDay&) const */

undefined1 __thiscall
STG::UPreference_TimeOfDay::GetClosestValue
          (UPreference_TimeOfDay *this,GETimeOfDay *param_1,GETimeOfDay *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint local_4c;
  undefined1 local_3d;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x7b3c9;
  FUN_0002e044();
  if (*(int *)(this + 0x80) != 0) {
    iVar1 = 0;
    iVar6 = **(int **)(this + 0x7c);
    while (*(int *)param_1 != iVar6) {
      iVar1 = iVar1 + 1;
      if (iVar1 == *(int *)(this + 0x80)) {
        local_3d = 0;
        local_4c = 0xffffffff;
        iVar6 = 0;
        do {
          GETimeOfDay::GETimeOfDay((GETimeOfDay *)&local_34,iVar6,0xa8c0);
          if (*(int *)(this + 0x80) != 0) {
            iVar2 = 0;
            iVar1 = **(int **)(this + 0x7c);
            while (local_34 != iVar1) {
              iVar2 = iVar2 + 1;
              if (iVar2 == *(int *)(this + 0x80)) goto joined_r0x0007b533;
              iVar1 = (*(int **)(this + 0x7c))[iVar2];
            }
          }
          local_28 = local_30;
          local_20 = local_30;
          local_2c = local_34;
          local_24 = local_34;
          GETimeOfDay::SetFractionMin((GETimeOfDay *)&local_2c);
          GETimeOfDay::SetFractionMax((GETimeOfDay *)&local_24);
          uVar3 = GETimeOfDay::GetDistance((GETimeOfDay *)&local_2c,param_1);
          uVar4 = GETimeOfDay::GetDistance((GETimeOfDay *)&local_34,param_1);
          uVar5 = GETimeOfDay::GetDistance((GETimeOfDay *)&local_24,param_1);
          if (uVar3 <= local_4c) {
            GETimeOfDay::operator=(param_2,(GETimeOfDay *)&local_2c);
            local_3d = 1;
            local_4c = uVar3;
          }
          if (uVar4 <= local_4c) {
            GETimeOfDay::operator=(param_2,(GETimeOfDay *)&local_34);
            local_3d = 1;
            local_4c = uVar4;
          }
          if (uVar5 <= local_4c) {
            GETimeOfDay::operator=(param_2,(GETimeOfDay *)&local_24);
            local_3d = 1;
            local_4c = uVar5;
          }
joined_r0x0007b533:
          iVar6 = iVar6 + 1;
          if (iVar6 == 8) {
            return local_3d;
          }
        } while( true );
      }
      iVar6 = (*(int **)(this + 0x7c))[iVar1];
    }
  }
  GETimeOfDay::operator=(param_2,param_1);
  return 1;
}


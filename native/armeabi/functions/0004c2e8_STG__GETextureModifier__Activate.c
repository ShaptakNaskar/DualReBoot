/* 0004c2e8 | STG::GETextureModifier::Activate */

/* STG::GETextureModifier::Activate(STG::GETimeOfDay const&, STG::UPreference_Scene const&) */

undefined4 __thiscall
STG::GETextureModifier::Activate
          (GETextureModifier *this,GETimeOfDay *param_1,UPreference_Scene *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(this + 0x24) == 0) {
    return 0;
  }
  GETimeOfDay::operator=((GETimeOfDay *)(this + 0x2c),param_1);
  iVar6 = *(int *)(param_2 + 0x58);
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  *(UPreference_Scene **)(this + 0x28) = param_2;
  if (iVar6 != 0) {
    iVar4 = 0;
    iVar5 = 0;
    while( true ) {
      iVar3 = *(int *)(param_2 + 0x54);
      iVar5 = iVar5 + 1;
      iVar1 = (**(code **)(*(int *)(iVar3 + iVar4) + 0x18))(iVar3 + iVar4);
      if (iVar1 != 0) {
        uVar2 = (**(code **)(*(int *)(iVar3 + iVar4) + 0x20))(iVar3 + iVar4);
        *(undefined4 *)(this + 0x34) = uVar2;
      }
      if (iVar5 == iVar6) break;
      iVar4 = iVar4 + 0x88;
      param_2 = *(UPreference_Scene **)(this + 0x28);
    }
  }
  **(undefined4 **)(DAT_0004c398 + 0x4c394) = this;
  return 1;
}


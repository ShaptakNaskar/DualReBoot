/* 00052440 | STG::GETextureModifier::Activate */

/* STG::GETextureModifier::Activate(STG::GETimeOfDay const&, STG::UPreference_Scene const&) */

undefined4 __thiscall
STG::GETextureModifier::Activate
          (GETextureModifier *this,GETimeOfDay *param_1,UPreference_Scene *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EBX;
  int iVar5;
  int iVar6;
  
  uVar3 = FUN_0002e044();
  if (*(int *)(this + 0x24) == 0) {
    return uVar3;
  }
  GETimeOfDay::operator=((GETimeOfDay *)(this + 0x2c),param_1);
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  *(UPreference_Scene **)(this + 0x28) = param_2;
  iVar2 = *(int *)(param_2 + 0x58);
  if (iVar2 != 0) {
    iVar5 = 0;
    iVar6 = 0;
    while( true ) {
      piVar1 = (int *)(iVar5 + *(int *)(param_2 + 0x54));
      iVar4 = (**(code **)(*piVar1 + 0x18))(piVar1);
      if (iVar4 != 0) {
        uVar3 = (**(code **)(*piVar1 + 0x20))(piVar1);
        *(undefined4 *)(this + 0x34) = uVar3;
      }
      if (iVar6 + 1 == iVar2) break;
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x88;
      param_2 = *(UPreference_Scene **)(this + 0x28);
    }
  }
  **(undefined4 **)(unaff_EBX + 0x49a7d) = this;
  return 1;
}


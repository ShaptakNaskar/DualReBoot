/* 0006ffdc | STG::UPreference_Theme::~UPreference_Theme */

/* STG::UPreference_Theme::~UPreference_Theme() */

UPreference_Theme * __thiscall STG::UPreference_Theme::~UPreference_Theme(UPreference_Theme *this)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = *(int *)(this + 0x7c);
  *(int *)this = *(int *)(DAT_000700e0 + 0x6fff0) + 8;
  if (iVar3 != 0) {
    iVar7 = *(int *)(iVar3 + -4) * 0x38 + iVar3;
    puVar5 = (undefined4 *)(iVar7 + -0x20);
    for (iVar4 = iVar7; iVar4 != iVar3; iVar4 = iVar4 + -0x38) {
      iVar3 = *(int *)(DAT_000700e4 + 0x70080);
      *(int *)(iVar4 + -0x1c) = iVar3 + 8;
      pvVar1 = *(void **)((int)puVar5 + ((iVar7 + -0x18) - (iVar7 + -0x34)));
      iVar6 = iVar4 - iVar7;
      if ((pvVar1 != (void *)(iVar4 + -0x18)) && (pvVar1 != (void *)0x0)) {
        uVar2 = *(int *)(iVar6 + iVar7 + -0x18) - (int)pvVar1;
        if (uVar2 < 0x81) {
          std::__node_alloc::_M_deallocate(pvVar1,uVar2);
        }
        else {
          operator_delete(pvVar1);
        }
      }
      *(int *)(iVar6 + iVar7 + -0x38) = iVar3 + 8;
      pvVar1 = (void *)*puVar5;
      if ((pvVar1 != (void *)(iVar4 + -0x34)) && (pvVar1 != (void *)0x0)) {
        uVar2 = *(int *)(iVar6 + iVar7 + -0x34) - (int)pvVar1;
        if (uVar2 < 0x81) {
          std::__node_alloc::_M_deallocate(pvVar1,uVar2);
        }
        else {
          operator_delete(pvVar1);
        }
      }
      iVar3 = *(int *)(this + 0x7c);
      puVar5 = puVar5 + -0xe;
    }
    operator_delete__((void *)(iVar4 + -8));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  return this;
}


/* 000632ac | STG::UPreference_IAB::~UPreference_IAB */

/* STG::UPreference_IAB::~UPreference_IAB() */

UPreference_IAB * __thiscall STG::UPreference_IAB::~UPreference_IAB(UPreference_IAB *this)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = *(int *)(this + 0x7c);
  *(int *)this = *(int *)(DAT_000633b8 + 0x632c0) + 8;
  if (iVar3 != 0) {
    iVar7 = iVar3 + *(int *)(iVar3 + -4) * 0x38;
    puVar5 = (undefined4 *)(iVar7 + -0x20);
    for (iVar4 = iVar7; iVar4 != iVar3; iVar4 = iVar4 + -0x38) {
      iVar3 = *(int *)(DAT_000633bc + 0x63354);
      iVar6 = iVar4 - iVar7;
      *(int *)(iVar4 + -0x1c) = iVar3 + 8;
      pvVar1 = *(void **)((int)puVar5 + ((iVar7 + -0x18) - (iVar7 + -0x34)));
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
  operator_delete(this);
  return this;
}


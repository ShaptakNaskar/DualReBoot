/* 0007ab80 | STG::UPreference_Theme::~UPreference_Theme */

/* STG::UPreference_Theme::~UPreference_Theme() */

void __thiscall STG::UPreference_Theme::~UPreference_Theme(UPreference_Theme *this)

{
  void *pvVar1;
  uint uVar2;
  int unaff_EBX;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_0002e044();
  *(int *)this = *(int *)("_ZN3STG10USerialize4LoadEPKNS_9FFileBaseERNS_10GESkeleton4MeshE" +
                         unaff_EBX + 0x26) + 8;
  iVar3 = *(int *)(this + 0x7c);
  if (iVar3 != 0) {
    iVar5 = *(int *)(iVar3 + -4) * 0x38 + iVar3;
    for (iVar4 = iVar5; iVar4 != iVar3; iVar4 = iVar4 + -0x38) {
      iVar3 = iVar4 - iVar5;
      *(int *)(iVar4 + -0x1c) =
           *(int *)("_ZN3STG10USerialize4LoadEPKNS_9FFileBaseERNS_16GEAnimationTrackE" +
                   unaff_EBX + 0x30) + 8;
      pvVar1 = *(void **)(iVar5 + -4 + iVar3);
      if ((pvVar1 != (void *)(iVar4 + -0x18)) && (pvVar1 != (void *)0x0)) {
        uVar2 = *(int *)(iVar5 + -0x18 + iVar3) - (int)pvVar1;
        if (uVar2 < 0x81) {
          std::__node_alloc::_M_deallocate(pvVar1,uVar2);
        }
        else {
          operator_delete(pvVar1);
        }
      }
      *(int *)(iVar5 + -0x38 + iVar3) =
           *(int *)("_ZN3STG10USerialize4LoadEPKNS_9FFileBaseERNS_16GEAnimationTrackE" +
                   unaff_EBX + 0x30) + 8;
      pvVar1 = *(void **)(iVar5 + -0x20 + iVar3);
      if ((pvVar1 != (void *)(iVar4 + -0x34)) && (pvVar1 != (void *)0x0)) {
        uVar2 = *(int *)(iVar5 + -0x34 + iVar3) - (int)pvVar1;
        if (uVar2 < 0x81) {
          std::__node_alloc::_M_deallocate(pvVar1,uVar2);
        }
        else {
          operator_delete(pvVar1);
        }
      }
      iVar3 = *(int *)(this + 0x7c);
    }
    operator_delete__((void *)(iVar4 + -4));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  return;
}


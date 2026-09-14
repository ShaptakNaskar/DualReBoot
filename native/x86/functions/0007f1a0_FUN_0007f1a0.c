/* 0007f1a0 | FUN_0007f1a0 */

/* WARNING: Removing unreachable block (ram,0x0007f280) */
/* WARNING: Removing unreachable block (ram,0x0007f26b) */

void FUN_0007f1a0(void)

{
  char *pcVar1;
  size_t __size;
  void *__ptr;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBX;
  bool bVar5;
  uint local_24;
  uint local_20;
  
  FUN_0002e044();
  pcVar1 = "_ZN3STG17GETextureModifier17s_pActiveModifierE" + unaff_EBX + 2;
  pcVar1[0] = '\x02';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1 = "_ZN3STG17GETextureModifier17s_pActiveModifierE" + unaff_EBX + 6;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1 = "_ZN3STG17GETextureModifier17s_pActiveModifierE" + unaff_EBX + 10;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1 = "_ZN3STG17GETextureModifier17s_pActiveModifierE" + unaff_EBX + 0xe;
  pcVar1[0] = '\x01';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1 = "_ZN3STG17GETextureModifier17s_pActiveModifierE" + unaff_EBX + 0x12;
  pcVar1[0] = '\x01';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  __size = FUN_0007f0f0();
  if ((-1 < (int)__size) && (__ptr = malloc(__size), __ptr != (void *)0x0)) {
    iVar2 = FUN_0007eee0(__size);
    if (-1 < iVar2) {
      FUN_0007ef80();
      FUN_0007ef80();
      iVar3 = __popcountsi2(local_20 & local_24);
      iVar2 = 1;
      if (iVar3 != 0) {
        iVar2 = iVar3;
      }
      *(int *)("_ZN3STG17GETextureModifier17s_pActiveModifierE" + unaff_EBX + 0xe) = iVar2;
      iVar2 = cpuid_basic_info(0);
      bVar5 = false;
      if ((*(int *)(iVar2 + 4) == 0x756e6547) && (*(int *)(iVar2 + 0xc) == 0x6c65746e)) {
        bVar5 = *(int *)(iVar2 + 8) == 0x49656e69;
      }
      iVar2 = cpuid_Version_info(1);
      uVar4 = *(uint *)(iVar2 + 0xc);
      if ((uVar4 & 0x200) != 0) {
        *(uint *)("_ZN3STG17GETextureModifier17s_pActiveModifierE" + unaff_EBX + 6) =
             *(uint *)("_ZN3STG17GETextureModifier17s_pActiveModifierE" + unaff_EBX + 6) | 1;
        *(undefined4 *)("_ZN3STG17GETextureModifier17s_pActiveModifierE" + unaff_EBX + 10) =
             *(undefined4 *)("_ZN3STG17GETextureModifier17s_pActiveModifierE" + unaff_EBX + 10);
      }
      if ((uVar4 & 0x800000) != 0) {
        *(uint *)("_ZN3STG17GETextureModifier17s_pActiveModifierE" + unaff_EBX + 6) =
             *(uint *)("_ZN3STG17GETextureModifier17s_pActiveModifierE" + unaff_EBX + 6) | 2;
        *(undefined4 *)("_ZN3STG17GETextureModifier17s_pActiveModifierE" + unaff_EBX + 10) =
             *(undefined4 *)("_ZN3STG17GETextureModifier17s_pActiveModifierE" + unaff_EBX + 10);
      }
      if ((bVar5) && ((uVar4 & 0x400000) != 0)) {
        *(uint *)("_ZN3STG17GETextureModifier17s_pActiveModifierE" + unaff_EBX + 6) =
             *(uint *)("_ZN3STG17GETextureModifier17s_pActiveModifierE" + unaff_EBX + 6) | 4;
        *(undefined4 *)("_ZN3STG17GETextureModifier17s_pActiveModifierE" + unaff_EBX + 10) =
             *(undefined4 *)("_ZN3STG17GETextureModifier17s_pActiveModifierE" + unaff_EBX + 10);
      }
    }
    free(__ptr);
  }
  return;
}


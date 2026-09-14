/* 00049f18 | STG::GETextureModifier::STextureInfo::Initialize */

/* WARNING: Removing unreachable block (ram,0x00049fe8) */
/* WARNING: Removing unreachable block (ram,0x00049ff0) */
/* WARNING: Removing unreachable block (ram,0x0004a0a8) */
/* WARNING: Removing unreachable block (ram,0x0004a000) */
/* WARNING: Removing unreachable block (ram,0x0004a074) */
/* WARNING: Removing unreachable block (ram,0x0004a07c) */
/* WARNING: Removing unreachable block (ram,0x0004a0b0) */
/* WARNING: Removing unreachable block (ram,0x0004a08c) */
/* STG::GETextureModifier::STextureInfo::Initialize() */

void __thiscall STG::GETextureModifier::STextureInfo::Initialize(STextureInfo *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  GETimeOfDay aGStack_64 [8];
  int local_5c;
  uint local_58 [4];
  STextureInfo *local_48;
  STextureInfo *local_44;
  undefined4 local_40;
  int local_3c;
  uint local_38 [4];
  STextureInfo *local_28;
  STextureInfo *local_24;
  undefined4 local_20;
  int local_1c;
  
  piVar3 = *(int **)(DAT_0004a0dc + 0x49f38);
  *(undefined4 *)(this + 4) = 0xffffffff;
  local_1c = *piVar3;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *this = (STextureInfo)0x0;
  this[1] = (STextureInfo)0x0;
  this[2] = (STextureInfo)0x0;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  GETimeOfDay::GETimeOfDay(aGStack_64);
  GETimeOfDay::operator=((GETimeOfDay *)(this + 0x14),aGStack_64);
  local_48 = (STextureInfo *)local_58;
  local_3c = *(int *)(DAT_0004a0e0 + 0x49f84);
  this[0x1c] = (STextureInfo)0x0;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  this[0x24] = (STextureInfo)0x0;
  local_58[0] = local_58[0] & 0xffffff00;
  local_40 = 0xffffffff;
  if (local_48 == this + 0x2c) {
LAB_0004a0b8:
    *(undefined4 *)(this + 0x44) = 0xffffffff;
  }
  else {
    puVar2 = *(undefined1 **)(this + 0x40);
    puVar1 = *(undefined1 **)(this + 0x3c);
    if (puVar2 == puVar1) goto LAB_0004a0b8;
    *puVar2 = *puVar1;
    *(undefined1 **)(this + 0x3c) = puVar2 + (*(int *)(this + 0x3c) - (int)puVar1);
    *(undefined4 *)(this + 0x44) = 0xffffffff;
  }
  local_5c = local_3c + 8;
  local_28 = (STextureInfo *)local_38;
  local_3c = local_3c + 8;
  local_38[0] = local_38[0] & 0xffffff00;
  local_20 = 0xffffffff;
  if (local_28 != this + 0x4c) {
    puVar2 = *(undefined1 **)(this + 0x60);
    puVar1 = *(undefined1 **)(this + 0x5c);
    if (puVar2 != puVar1) {
      *puVar2 = *puVar1;
      *(undefined1 **)(this + 0x5c) = puVar2 + (*(int *)(this + 0x5c) - (int)puVar1);
      *(undefined4 *)(this + 100) = 0xffffffff;
      goto LAB_0004a090;
    }
  }
  *(undefined4 *)(this + 100) = 0xffffffff;
LAB_0004a090:
  if (local_1c != *piVar3) {
    local_44 = local_48;
    local_24 = local_28;
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


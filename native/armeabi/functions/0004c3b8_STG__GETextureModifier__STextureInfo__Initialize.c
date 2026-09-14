/* 0004c3b8 | STG::GETextureModifier::STextureInfo::Initialize */

/* WARNING: Removing unreachable block (ram,0x0004c488) */
/* WARNING: Removing unreachable block (ram,0x0004c490) */
/* WARNING: Removing unreachable block (ram,0x0004c548) */
/* WARNING: Removing unreachable block (ram,0x0004c4a0) */
/* WARNING: Removing unreachable block (ram,0x0004c514) */
/* WARNING: Removing unreachable block (ram,0x0004c51c) */
/* WARNING: Removing unreachable block (ram,0x0004c550) */
/* WARNING: Removing unreachable block (ram,0x0004c52c) */
/* STG::GETextureModifier::STextureInfo::Initialize() */

void __thiscall STG::GETextureModifier::STextureInfo::Initialize(STextureInfo *this)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int *piVar4;
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
  
  iVar1 = DAT_0004c580;
  piVar4 = *(int **)(DAT_0004c57c + 0x4c3d0);
  local_1c = *piVar4;
  *this = (STextureInfo)0x0;
  this[1] = (STextureInfo)0x0;
  this[2] = (STextureInfo)0x0;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  GETimeOfDay::GETimeOfDay(aGStack_64);
  GETimeOfDay::operator=((GETimeOfDay *)(this + 0x14),aGStack_64);
  local_48 = (STextureInfo *)local_58;
  local_3c = *(int *)(iVar1 + 0x4c41c);
  this[0x1c] = (STextureInfo)0x0;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  this[0x24] = (STextureInfo)0x0;
  local_58[0] = local_58[0] & 0xffffff00;
  local_40 = 0xffffffff;
  if (local_48 == this + 0x2c) {
LAB_0004c558:
    *(undefined4 *)(this + 0x44) = 0xffffffff;
  }
  else {
    puVar3 = *(undefined1 **)(this + 0x40);
    puVar2 = *(undefined1 **)(this + 0x3c);
    if (puVar3 == puVar2) goto LAB_0004c558;
    *puVar3 = *puVar2;
    *(undefined1 **)(this + 0x3c) = puVar3 + (*(int *)(this + 0x3c) - (int)puVar2);
    *(undefined4 *)(this + 0x44) = 0xffffffff;
  }
  local_5c = local_3c + 8;
  local_28 = (STextureInfo *)local_38;
  local_3c = local_3c + 8;
  local_38[0] = local_38[0] & 0xffffff00;
  local_20 = 0xffffffff;
  if (local_28 != this + 0x4c) {
    puVar3 = *(undefined1 **)(this + 0x60);
    puVar2 = *(undefined1 **)(this + 0x5c);
    if (puVar3 != puVar2) {
      *puVar3 = *puVar2;
      *(undefined1 **)(this + 0x5c) = puVar3 + (*(int *)(this + 0x5c) - (int)puVar2);
      *(undefined4 *)(this + 100) = 0xffffffff;
      goto LAB_0004c530;
    }
  }
  *(undefined4 *)(this + 100) = 0xffffffff;
LAB_0004c530:
  if (local_1c != *piVar4) {
    local_44 = local_48;
    local_24 = local_28;
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


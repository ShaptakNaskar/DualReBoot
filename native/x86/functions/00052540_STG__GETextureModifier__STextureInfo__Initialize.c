/* 00052540 | STG::GETextureModifier::STextureInfo::Initialize */

/* WARNING: Removing unreachable block (ram,0x00052622) */
/* WARNING: Removing unreachable block (ram,0x00052626) */
/* WARNING: Removing unreachable block (ram,0x000526e8) */
/* WARNING: Removing unreachable block (ram,0x00052637) */
/* WARNING: Removing unreachable block (ram,0x000526af) */
/* WARNING: Removing unreachable block (ram,0x000526b3) */
/* WARNING: Removing unreachable block (ram,0x000526f8) */
/* WARNING: Removing unreachable block (ram,0x000526c0) */
/* STG::GETextureModifier::STextureInfo::Initialize() */

void __thiscall STG::GETextureModifier::STextureInfo::Initialize(STextureInfo *this)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int unaff_EBX;
  GETimeOfDay local_68 [8];
  int local_60;
  uint local_5c [4];
  STextureInfo *local_4c;
  STextureInfo *local_48;
  undefined4 local_44;
  int local_40;
  uint local_3c [4];
  STextureInfo *local_2c;
  STextureInfo *local_28;
  undefined4 local_24;
  int local_14;
  
  local_14 = 0x5254b;
  FUN_0002e044();
  piVar1 = *(int **)(unaff_EBX + 0x498ed);
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 8) = 0xffffffff;
  local_14 = *piVar1;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *this = (STextureInfo)0x0;
  this[1] = (STextureInfo)0x0;
  this[2] = (STextureInfo)0x0;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  GETimeOfDay::GETimeOfDay(local_68);
  GETimeOfDay::operator=((GETimeOfDay *)(this + 0x14),local_68);
  local_4c = (STextureInfo *)local_5c;
  local_60 = *(int *)(unaff_EBX + 0x498f1);
  this[0x1c] = (STextureInfo)0x0;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  this[0x24] = (STextureInfo)0x0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  local_44 = 0xffffffff;
  if (local_4c == this + 0x2c) {
LAB_00052708:
    local_60 = *(int *)(unaff_EBX + 0x498f1);
    *(undefined4 *)(this + 0x44) = 0xffffffff;
  }
  else {
    puVar2 = *(undefined1 **)(this + 0x40);
    puVar3 = *(undefined1 **)(this + 0x3c);
    if (puVar3 == puVar2) goto LAB_00052708;
    *puVar2 = *puVar3;
    *(undefined1 **)(this + 0x3c) = puVar2 + (*(int *)(this + 0x3c) - (int)puVar3);
    *(undefined4 *)(this + 0x44) = 0xffffffff;
  }
  local_60 = local_60 + 8;
  local_40 = *(int *)(unaff_EBX + 0x498f1) + 8;
  local_3c[0] = local_3c[0] & 0xffffff00;
  local_2c = (STextureInfo *)local_3c;
  local_24 = 0xffffffff;
  if (local_2c != this + 0x4c) {
    puVar2 = *(undefined1 **)(this + 0x60);
    puVar3 = *(undefined1 **)(this + 0x5c);
    if (puVar3 != puVar2) {
      *puVar2 = *puVar3;
      *(undefined1 **)(this + 0x5c) = puVar2 + (*(int *)(this + 0x5c) - (int)puVar3);
      *(undefined4 *)(this + 100) = 0xffffffff;
      goto LAB_000526cc;
    }
  }
  *(undefined4 *)(this + 100) = 0xffffffff;
LAB_000526cc:
  if (local_14 != **(int **)(unaff_EBX + 0x498ed)) {
    local_48 = local_4c;
    local_28 = local_2c;
                    /* WARNING: Subroutine does not return */
    FUN_0002e000();
  }
  return;
}


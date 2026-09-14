/* 00037b90 | STG::GEMaterial::SetDefault */

/* WARNING: Removing unreachable block (ram,0x00037c70) */
/* WARNING: Removing unreachable block (ram,0x00037c78) */
/* WARNING: Removing unreachable block (ram,0x00037dc8) */
/* WARNING: Removing unreachable block (ram,0x00037c88) */
/* WARNING: Removing unreachable block (ram,0x00037d54) */
/* WARNING: Removing unreachable block (ram,0x00037d5c) */
/* WARNING: Removing unreachable block (ram,0x00037dc0) */
/* WARNING: Removing unreachable block (ram,0x00037d6c) */
/* STG::GEMaterial::SetDefault() */

void __thiscall STG::GEMaterial::SetDefault(GEMaterial *this)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int *piVar6;
  int local_44;
  uint local_40 [4];
  uint *local_30;
  uint *local_2c;
  undefined4 local_28;
  int local_24;
  
  piVar1 = *(int **)(this + 0x2c);
  piVar6 = *(int **)(DAT_00037e1c + 0x37bb0);
  *(undefined4 *)(this + 0x13c) = 0;
  local_24 = *piVar6;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x148) = 0x3f800000;
  *(undefined4 *)(this + 0x14c) = 0x3f800000;
  *(undefined4 *)(this + 0x150) = 0x3f800000;
  *(undefined4 *)(this + 0x154) = 0x3f800000;
  if ((piVar1 != (int *)0x0) && (iVar3 = piVar1[1], piVar1[1] = iVar3 + -1, iVar3 == 1)) {
    (**(code **)(*piVar1 + 4))();
  }
  iVar3 = *(int *)(DAT_00037e20 + 0x37c08);
  *(undefined4 *)(this + 0x2c) = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  local_28 = 0xffffffff;
  if ((GEMaterial *)&local_44 == this + 0x6c) {
LAB_00037df0:
    *(undefined4 *)(this + 0x88) = 0xffffffff;
  }
  else {
    puVar4 = *(undefined1 **)(this + 0x84);
    puVar2 = *(undefined1 **)(this + 0x80);
    if (puVar4 == puVar2) goto LAB_00037df0;
    *puVar4 = *puVar2;
    *(undefined1 **)(this + 0x80) = puVar4 + (*(int *)(this + 0x80) - (int)puVar2);
    *(undefined4 *)(this + 0x88) = 0xffffffff;
  }
  local_44 = iVar3 + 8;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x34) = 1;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x4c) = 0x3f800000;
  *(undefined4 *)(this + 0x50) = 0x3f800000;
  *(undefined4 *)(this + 0x54) = 0x3f800000;
  *(undefined4 *)(this + 0x58) = 0x3f800000;
  local_30 = local_40;
  local_2c = local_40;
  MMatrix::MakeIdentity((MMatrix *)(this + 0xbc));
  piVar1 = *(int **)(this + 0x30);
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  if ((piVar1 != (int *)0x0) && (iVar5 = piVar1[1], piVar1[1] = iVar5 + -1, iVar5 == 1)) {
    (**(code **)(*piVar1 + 4))();
  }
  *(undefined4 *)(this + 0x30) = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  local_28 = 0xffffffff;
  if (this + 0x8c != (GEMaterial *)&local_44) {
    puVar4 = *(undefined1 **)(this + 0xa4);
    puVar2 = *(undefined1 **)(this + 0xa0);
    if (puVar4 != puVar2) {
      *puVar4 = *puVar2;
      *(undefined1 **)(this + 0xa0) = puVar4 + (*(int *)(this + 0xa0) - (int)puVar2);
      *(undefined4 *)(this + 0xa8) = 0xffffffff;
      goto LAB_00037d70;
    }
  }
  *(undefined4 *)(this + 0xa8) = 0xffffffff;
LAB_00037d70:
  local_44 = iVar3 + 8;
  *(undefined4 *)(this + 0x5c) = 0x3f800000;
  *(undefined4 *)(this + 0x38) = 1;
  *(undefined4 *)(this + 0x60) = 0x3f800000;
  *(undefined4 *)(this + 100) = 0x3f800000;
  *(undefined4 *)(this + 0x68) = 0x3f800000;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  local_30 = local_40;
  local_2c = local_40;
  MMatrix::MakeIdentity((MMatrix *)(this + 0xfc));
  iVar3 = *piVar6;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  if (local_24 != iVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


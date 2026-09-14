/* 0003a4f0 | STG::GEMaterial::SetDefault */

/* WARNING: Removing unreachable block (ram,0x0003a5ec) */
/* WARNING: Removing unreachable block (ram,0x0003a5f0) */
/* WARNING: Removing unreachable block (ram,0x0003a798) */
/* WARNING: Removing unreachable block (ram,0x0003a602) */
/* WARNING: Removing unreachable block (ram,0x0003a6f8) */
/* WARNING: Removing unreachable block (ram,0x0003a6fc) */
/* WARNING: Removing unreachable block (ram,0x0003a788) */
/* WARNING: Removing unreachable block (ram,0x0003a70a) */
/* STG::GEMaterial::SetDefault() */

void __thiscall STG::GEMaterial::SetDefault(GEMaterial *this)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  int unaff_EBX;
  int local_40;
  uint local_3c [4];
  uint *local_2c;
  uint *local_28;
  undefined4 local_24;
  int local_14;
  
  local_14 = 0x3a4fb;
  FUN_0002e044();
  piVar1 = *(int **)(unaff_EBX + 0x6193d);
  uVar5 = *(undefined8 *)(unaff_EBX + 0x4d2dd);
  *(undefined8 *)(this + 0x148) = *(undefined8 *)(unaff_EBX + 0x4d2d5);
  local_14 = *piVar1;
  piVar1 = *(int **)(this + 0x2c);
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined8 *)(this + 0x150) = uVar5;
  if ((piVar1 != (int *)0x0) && (iVar2 = piVar1[1], piVar1[1] = iVar2 + -1, iVar2 == 1)) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  local_40 = *(int *)(unaff_EBX + 0x61941);
  *(undefined4 *)(this + 0x2c) = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  local_24 = 0xffffffff;
  if ((GEMaterial *)&local_40 == this + 0x6c) {
LAB_0003a7c8:
    local_40 = *(int *)(unaff_EBX + 0x61941);
    *(undefined4 *)(this + 0x88) = 0xffffffff;
  }
  else {
    puVar3 = *(undefined1 **)(this + 0x84);
    puVar4 = *(undefined1 **)(this + 0x80);
    if (puVar4 == puVar3) goto LAB_0003a7c8;
    *puVar3 = *puVar4;
    *(undefined1 **)(this + 0x80) = puVar3 + (*(int *)(this + 0x80) - (int)puVar4);
    *(undefined4 *)(this + 0x88) = 0xffffffff;
  }
  local_40 = local_40 + 8;
  *(undefined4 *)(this + 0x34) = 1;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x4c) = 0x3f800000;
  *(undefined4 *)(this + 0x50) = 0x3f800000;
  *(undefined4 *)(this + 0x54) = 0x3f800000;
  *(undefined4 *)(this + 0x58) = 0x3f800000;
  local_2c = local_3c;
  local_28 = local_3c;
  MMatrix::MakeIdentity((MMatrix *)(this + 0xbc));
  piVar1 = *(int **)(this + 0x30);
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  if ((piVar1 != (int *)0x0) && (iVar2 = piVar1[1], piVar1[1] = iVar2 + -1, iVar2 == 1)) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  local_40 = *(int *)(unaff_EBX + 0x61941);
  *(undefined4 *)(this + 0x30) = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  local_24 = 0xffffffff;
  if ((GEMaterial *)&local_40 != this + 0x8c) {
    puVar3 = *(undefined1 **)(this + 0xa4);
    puVar4 = *(undefined1 **)(this + 0xa0);
    if (puVar4 != puVar3) {
      *puVar3 = *puVar4;
      *(undefined1 **)(this + 0xa0) = puVar3 + (*(int *)(this + 0xa0) - (int)puVar4);
      *(undefined4 *)(this + 0xa8) = 0xffffffff;
      goto LAB_0003a716;
    }
  }
  local_40 = *(int *)(unaff_EBX + 0x61941);
  *(undefined4 *)(this + 0xa8) = 0xffffffff;
LAB_0003a716:
  local_40 = local_40 + 8;
  *(undefined4 *)(this + 0x38) = 1;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x5c) = 0x3f800000;
  *(undefined4 *)(this + 0x60) = 0x3f800000;
  *(undefined4 *)(this + 100) = 0x3f800000;
  *(undefined4 *)(this + 0x68) = 0x3f800000;
  local_2c = local_3c;
  local_28 = local_3c;
  MMatrix::MakeIdentity((MMatrix *)(this + 0xfc));
  piVar1 = *(int **)(unaff_EBX + 0x6193d);
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e000();
  }
  return;
}


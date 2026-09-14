/* 0003aa30 | STG::GEMaterial::Clone */

/* STG::GEMaterial::Clone(STG::GEMaterial&) const */

void __thiscall STG::GEMaterial::Clone(GEMaterial *this,GEMaterial *param_1)

{
  int *piVar1;
  char *pcVar2;
  void *pvVar3;
  undefined1 *puVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  
  FUN_0002e044();
  SetDefault(param_1);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(this + 0x13c);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(this + 0x140);
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(this + 0x144);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(this + 0x148);
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(this + 0x14c);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(this + 0x150);
  *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(this + 0x154);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(this + 0x2c);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(this + 0x34);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(this + 0x3c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(this + 0x44);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(this + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(this + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(this + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(this + 0x58);
  if ((string *)(param_1 + 0x70) != (string *)(this + 0x70)) {
    pcVar2 = *(char **)(this + 0x80);
    puVar4 = *(undefined1 **)(param_1 + 0x80);
    pvVar3 = *(void **)(this + 0x84);
    uVar8 = (int)pcVar2 - (int)pvVar3;
    pvVar6 = *(void **)(param_1 + 0x84);
    uVar7 = (int)puVar4 - (int)pvVar6;
    if (uVar7 < uVar8) {
      if (uVar7 == 0) {
        iVar5 = 0;
      }
      else {
        memmove(pvVar6,pvVar3,uVar7);
        iVar5 = *(int *)(param_1 + 0x80) - *(int *)(param_1 + 0x84);
      }
      std::string::_M_append((string *)(param_1 + 0x70),(char *)(iVar5 + (int)pvVar3),pcVar2);
    }
    else {
      if (uVar8 != 0) {
        memmove(pvVar6,pvVar3,uVar8);
        puVar4 = *(undefined1 **)(param_1 + 0x80);
        pvVar6 = *(void **)(param_1 + 0x84);
      }
      puVar9 = (undefined1 *)(uVar8 + (int)pvVar6);
      if (puVar4 != puVar9) {
        *puVar9 = *puVar4;
        *(undefined1 **)(param_1 + 0x80) = puVar9 + (*(int *)(param_1 + 0x80) - (int)puVar4);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(this + 0x88);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(this + 0xac);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(this + 0xb4);
  MMatrix::operator=((MMatrix *)(param_1 + 0xbc),(MMatrix *)(this + 0xbc));
  if (*(int *)(param_1 + 0x2c) != 0) {
    piVar1 = (int *)(*(int *)(param_1 + 0x2c) + 4);
    *piVar1 = *piVar1 + 1;
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(this + 0x30);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(this + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(this + 0x40);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(this + 0x48);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(this + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(this + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(this + 100);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(this + 0x68);
  if ((string *)(param_1 + 0x90) != (string *)(this + 0x90)) {
    pcVar2 = *(char **)(this + 0xa0);
    puVar4 = *(undefined1 **)(param_1 + 0xa0);
    pvVar3 = *(void **)(this + 0xa4);
    uVar8 = (int)pcVar2 - (int)pvVar3;
    pvVar6 = *(void **)(param_1 + 0xa4);
    uVar7 = (int)puVar4 - (int)pvVar6;
    if (uVar7 < uVar8) {
      iVar5 = 0;
      if (uVar7 != 0) {
        memmove(pvVar6,pvVar3,uVar7);
        iVar5 = *(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0xa4);
      }
      std::string::_M_append((string *)(param_1 + 0x90),(char *)(iVar5 + (int)pvVar3),pcVar2);
    }
    else {
      if (uVar8 != 0) {
        memmove(pvVar6,pvVar3,uVar8);
        puVar4 = *(undefined1 **)(param_1 + 0xa0);
        pvVar6 = *(void **)(param_1 + 0xa4);
      }
      puVar9 = (undefined1 *)(uVar8 + (int)pvVar6);
      if (puVar4 != puVar9) {
        *puVar9 = *puVar4;
        *(undefined1 **)(param_1 + 0xa0) = puVar9 + (*(int *)(param_1 + 0xa0) - (int)puVar4);
      }
    }
  }
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(this + 0xa8);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(this + 0xb0);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(this + 0xb8);
  MMatrix::operator=((MMatrix *)(param_1 + 0xfc),(MMatrix *)(this + 0xfc));
  if (*(int *)(param_1 + 0x30) != 0) {
    piVar1 = (int *)(*(int *)(param_1 + 0x30) + 4);
    *piVar1 = *piVar1 + 1;
  }
  return;
}


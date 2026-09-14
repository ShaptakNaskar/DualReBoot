/* 00048d74 | STG::GETextureFontContainer::Initialize */

/* STG::GETextureFontContainer::Initialize(unsigned long, unsigned long) */

void __thiscall
STG::GETextureFontContainer::Initialize(GETextureFontContainer *this,ulong param_1,ulong param_2)

{
  GEFont *this_00;
  void *pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  ulong unaff_r6;
  GETextureFont *this_01;
  
  *(ulong *)this = param_1;
  if (param_1 == 0) {
    unaff_r6 = param_2;
  }
  *(ulong *)(this + 8) = param_2;
  if (param_1 != 0) {
    pvVar1 = operator_new__(param_1 << 2);
    unaff_r6 = *(ulong *)(this + 8);
    *(void **)(this + 4) = pvVar1;
  }
  if (unaff_r6 == 0) {
    if (*(int *)this == 0) {
      return;
    }
  }
  else {
    puVar2 = operator_new__(unaff_r6 * 0x30 + 8);
    puVar2[1] = unaff_r6;
    *puVar2 = 0x30;
    this_01 = (GETextureFont *)(puVar2 + 2);
    while (unaff_r6 = unaff_r6 - 1, unaff_r6 != 0xffffffff) {
      GETextureFont::GETextureFont(this_01);
      this_01 = this_01 + 0x30;
    }
    *(GETextureFont **)(this + 0xc) = (GETextureFont *)(puVar2 + 2);
    if (*(int *)this == 0) {
      return;
    }
  }
  uVar4 = 0;
  do {
    this_00 = operator_new(0x368);
    GEFont::GEFont(this_00);
    uVar3 = *(uint *)this;
    *(GEFont **)(*(int *)(this + 4) + uVar4 * 4) = this_00;
    uVar4 = uVar4 + 1;
  } while (uVar4 < uVar3);
  return;
}


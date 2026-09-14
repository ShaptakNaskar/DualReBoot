/* 00051020 | STG::GETextureFontContainer::Initialize */

/* STG::GETextureFontContainer::Initialize(unsigned long, unsigned long) */

void __thiscall
STG::GETextureFontContainer::Initialize(GETextureFontContainer *this,ulong param_1,ulong param_2)

{
  GEFont *this_00;
  void *pvVar1;
  ulong *puVar2;
  GETextureFont *this_01;
  uint uVar3;
  
  FUN_0002e044();
  *(ulong *)this = param_1;
  *(ulong *)(this + 8) = param_2;
  if (param_1 != 0) {
    pvVar1 = operator_new__(param_1 << 2);
    param_2 = *(ulong *)(this + 8);
    *(void **)(this + 4) = pvVar1;
  }
  if (param_2 != 0) {
    puVar2 = operator_new__(param_2 * 0x30 + 4);
    *puVar2 = param_2;
    this_01 = (GETextureFont *)(puVar2 + 1);
    while (param_2 = param_2 - 1, param_2 != 0xffffffff) {
      GETextureFont::GETextureFont(this_01);
      this_01 = this_01 + 0x30;
    }
    *(GETextureFont **)(this + 0xc) = (GETextureFont *)(puVar2 + 1);
  }
  if (*(int *)this != 0) {
    uVar3 = 0;
    do {
      this_00 = operator_new(0x368);
      GEFont::GEFont(this_00);
      *(GEFont **)(*(int *)(this + 4) + uVar3 * 4) = this_00;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)this);
  }
  return;
}


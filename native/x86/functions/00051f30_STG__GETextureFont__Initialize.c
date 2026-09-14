/* 00051f30 | STG::GETextureFont::Initialize */

/* STG::GETextureFont::Initialize(STG::FFileHash const&, unsigned long, bool) */

void __thiscall
STG::GETextureFont::Initialize(GETextureFont *this,FFileHash *param_1,ulong param_2,bool param_3)

{
  ulong *puVar1;
  char *pcVar2;
  void *__src;
  undefined1 *puVar3;
  int iVar4;
  ulong *puVar5;
  uint __n;
  ulong uVar6;
  undefined1 *puVar7;
  ulong *puVar8;
  int unaff_EBX;
  uint __n_00;
  void *__dest;
  
  FUN_0002e044();
  if ((string *)(this + 4) != (string *)(param_1 + 4)) {
    pcVar2 = *(char **)(param_1 + 0x14);
    __src = *(void **)(param_1 + 0x18);
    __n_00 = (int)pcVar2 - (int)__src;
    puVar3 = *(undefined1 **)(this + 0x14);
    __dest = *(void **)(this + 0x18);
    __n = (int)puVar3 - (int)__dest;
    if (__n < __n_00) {
      iVar4 = 0;
      if (__n != 0) {
        memmove(__dest,__src,__n);
        iVar4 = *(int *)(this + 0x14) - *(int *)(this + 0x18);
      }
      std::string::_M_append((string *)(this + 4),(char *)(iVar4 + (int)__src),pcVar2);
    }
    else {
      if (__n_00 != 0) {
        memmove(__dest,__src,__n_00);
        puVar3 = *(undefined1 **)(this + 0x14);
        __dest = *(void **)(this + 0x18);
      }
      puVar7 = (undefined1 *)((int)__dest + __n_00);
      if (puVar7 != puVar3) {
        *puVar7 = *puVar3;
        *(undefined1 **)(this + 0x14) = puVar7 + (*(int *)(this + 0x14) - (int)puVar3);
      }
    }
  }
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(ulong *)(this + 0x20) = param_2;
  this[0x28] = (GETextureFont)param_3;
  if (param_2 == 0) {
    return;
  }
  puVar5 = operator_new__(param_2 * 0x2c + 4);
  puVar1 = puVar5 + 1;
  *puVar5 = param_2;
  iVar4 = *(int *)(unaff_EBX + 0x49f87);
  uVar6 = 0;
  puVar8 = puVar1;
  do {
    uVar6 = uVar6 + 1;
    *puVar8 = iVar4 + 8;
    *(ulong **)((int)puVar5 + (int)puVar8 + (0x28 - (int)puVar1)) = puVar8 + 1;
    *(ulong **)((int)puVar5 + (int)puVar8 + (0x2c - (int)puVar1)) = puVar8 + 1;
    *(undefined2 *)(puVar8 + 1) = 0;
    puVar8 = puVar8 + 0xb;
  } while (uVar6 != param_2);
  *(ulong **)(this + 0x24) = puVar1;
  return;
}


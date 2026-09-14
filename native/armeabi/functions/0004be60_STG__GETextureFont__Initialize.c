/* 0004be60 | STG::GETextureFont::Initialize */

/* STG::GETextureFont::Initialize(STG::FFileHash const&, unsigned long, bool) */

void __thiscall
STG::GETextureFont::Initialize(GETextureFont *this,FFileHash *param_1,ulong param_2,bool param_3)

{
  void *__dest;
  undefined4 *puVar1;
  size_t __n;
  ulong uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint __n_00;
  int iVar6;
  char *pcVar7;
  void *__src;
  undefined4 *puVar8;
  
  if ((string *)(this + 4) != (string *)(param_1 + 4)) {
    puVar3 = *(undefined1 **)(this + 0x14);
    __src = *(void **)(param_1 + 0x18);
    pcVar7 = *(char **)(param_1 + 0x14);
    __dest = *(void **)(this + 0x18);
    __n_00 = (int)pcVar7 - (int)__src;
    __n = (int)puVar3 - (int)__dest;
    if (__n < __n_00) {
      iVar6 = 0;
      if (__n != 0) {
        memmove(__dest,__src,__n);
        iVar6 = *(int *)(this + 0x14) - *(int *)(this + 0x18);
      }
      std::string::_M_append((string *)(this + 4),(char *)((int)__src + iVar6),pcVar7);
      uVar4 = *(undefined4 *)(param_1 + 0x1c);
      *(ulong *)(this + 0x20) = param_2;
      *(undefined4 *)(this + 0x1c) = uVar4;
      this[0x28] = (GETextureFont)param_3;
      goto joined_r0x0004bf18;
    }
    if (__n_00 != 0) {
      memmove(__dest,__src,__n_00);
      __dest = *(void **)(this + 0x18);
      puVar3 = *(undefined1 **)(this + 0x14);
    }
    if ((undefined1 *)((int)__dest + __n_00) != puVar3) {
      *(undefined1 *)((int)__dest + __n_00) = *puVar3;
      *(undefined1 **)(this + 0x14) =
           (undefined1 *)((int)__dest + __n_00) + (*(int *)(this + 0x14) - (int)puVar3);
    }
  }
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  *(ulong *)(this + 0x20) = param_2;
  *(undefined4 *)(this + 0x1c) = uVar4;
  this[0x28] = (GETextureFont)param_3;
joined_r0x0004bf18:
  if (param_2 == 0) {
    return;
  }
  puVar1 = operator_new__(param_2 * 0x2c + 8);
  uVar2 = 0;
  iVar6 = *(int *)(DAT_0004bfb8 + 0x4bf40);
  *puVar1 = 0x2c;
  puVar1[1] = param_2;
  puVar8 = puVar1 + 2;
  puVar5 = puVar1 + 3;
  do {
    uVar2 = uVar2 + 1;
    puVar5[-1] = iVar6 + 8;
    *(undefined4 **)((int)(puVar1 + 3) + (int)puVar5 + (0x1c - (int)puVar8)) = puVar5;
    *(undefined4 **)((int)puVar1 + (int)puVar5 + (0x2c - (int)puVar8)) = puVar5;
    *(undefined2 *)puVar5 = 0;
    puVar5 = puVar5 + 0xb;
  } while (uVar2 != param_2);
  *(undefined4 **)(this + 0x24) = puVar8;
  return;
}


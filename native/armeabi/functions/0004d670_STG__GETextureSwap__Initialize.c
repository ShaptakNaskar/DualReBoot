/* 0004d670 | STG::GETextureSwap::Initialize */

/* STG::GETextureSwap::Initialize(STG::UStringBase<char, int> const&, unsigned long, bool, bool) */

void __thiscall
STG::GETextureSwap::Initialize
          (GETextureSwap *this,UStringBase *param_1,ulong param_2,bool param_3,bool param_4)

{
  void *pvVar1;
  undefined4 *puVar2;
  GETimeOfDay *pGVar3;
  int iVar4;
  size_t __n;
  ulong uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  GETimeOfDay *this_00;
  uint __n_00;
  void *__src;
  int iVar9;
  int iVar10;
  char *pcVar11;
  
  if ((string *)(this + 4) != (string *)(param_1 + 4)) {
    __src = *(void **)(param_1 + 0x18);
    pcVar11 = *(char **)(param_1 + 0x14);
    puVar6 = *(undefined1 **)(this + 0x14);
    pvVar1 = *(void **)(this + 0x18);
    __n_00 = (int)pcVar11 - (int)__src;
    __n = (int)puVar6 - (int)pvVar1;
    if (__n < __n_00) {
      iVar9 = 0;
      if (__n != 0) {
        memmove(pvVar1,__src,__n);
        iVar9 = *(int *)(this + 0x14) - *(int *)(this + 0x18);
      }
      std::string::_M_append((string *)(this + 4),(char *)((int)__src + iVar9),pcVar11);
    }
    else {
      if (__n_00 != 0) {
        memmove(pvVar1,__src,__n_00);
        pvVar1 = *(void **)(this + 0x18);
        puVar6 = *(undefined1 **)(this + 0x14);
      }
      if ((undefined1 *)((int)pvVar1 + __n_00) != puVar6) {
        *(undefined1 *)((int)pvVar1 + __n_00) = *puVar6;
        *(undefined1 **)(this + 0x14) =
             (undefined1 *)((int)pvVar1 + __n_00) + (*(int *)(this + 0x14) - (int)puVar6);
      }
    }
  }
  *(ulong *)(this + 0x1c) = param_2;
  this[0x20] = (GETextureSwap)param_3;
  this[0x21] = (GETextureSwap)param_4;
  puVar2 = operator_new__(param_2 * 0x1c + 8);
  *puVar2 = 0x1c;
  puVar2[1] = param_2;
  if (param_2 != 0) {
    uVar5 = 0;
    iVar9 = *(int *)(DAT_0004d884 + 0x4d724);
    puVar7 = puVar2 + 3;
    do {
      uVar5 = uVar5 + 1;
      puVar7[-1] = iVar9 + 8;
      *(undefined4 **)((int)(puVar2 + 3) + (int)((int)puVar7 + (0xc - (int)(puVar2 + 2)))) = puVar7;
      *(undefined4 **)((int)puVar2 + (int)((int)puVar7 + (0x1c - (int)(puVar2 + 2)))) = puVar7;
      *(undefined1 *)puVar7 = 0;
      puVar7 = puVar7 + 7;
    } while (uVar5 != param_2);
  }
  iVar9 = *(int *)(this + 0x1c);
  *(undefined4 **)(this + 0x24) = puVar2 + 2;
  puVar2 = operator_new__(iVar9 * 0x20 + 8);
  *puVar2 = 0x20;
  puVar2[1] = iVar9;
  if (iVar9 != 0) {
    iVar4 = 0;
    iVar10 = *(int *)(DAT_0004d888 + 0x4d79c);
    puVar8 = puVar2 + 2;
    puVar7 = puVar2 + 3;
    do {
      iVar4 = iVar4 + 1;
      puVar7[-1] = iVar10 + 8;
      *(undefined4 **)((int)(puVar2 + 3) + (int)((int)puVar7 + (0xc - (int)puVar8))) = puVar7;
      *(undefined4 **)((int)puVar2 + (int)((int)puVar7 + (0x1c - (int)puVar8))) = puVar7;
      *(undefined1 *)puVar7 = 0;
      *(undefined4 *)((int)puVar2 + (int)((int)puVar7 + (0x20 - (int)puVar8))) = 0xffffffff;
      puVar7 = puVar7 + 8;
    } while (iVar4 != iVar9);
  }
  iVar9 = *(int *)(this + 0x1c);
  *(undefined4 **)(this + 0x28) = puVar2 + 2;
  pGVar3 = operator_new__(iVar9 << 3);
  this_00 = pGVar3;
  while (iVar9 = iVar9 + -1, iVar9 != -1) {
    GETimeOfDay::GETimeOfDay(this_00);
    this_00 = this_00 + 8;
  }
  *(GETimeOfDay **)(this + 0x2c) = pGVar3;
  pvVar1 = operator_new__(*(int *)(this + 0x1c) << 2);
  *(void **)(this + 0x30) = pvVar1;
  return;
}


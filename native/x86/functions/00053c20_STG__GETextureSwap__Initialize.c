/* 00053c20 | STG::GETextureSwap::Initialize */

/* STG::GETextureSwap::Initialize(STG::UStringBase<char, int> const&, unsigned long, bool, bool) */

void __thiscall
STG::GETextureSwap::Initialize
          (GETextureSwap *this,UStringBase *param_1,ulong param_2,bool param_3,bool param_4)

{
  ulong *puVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  ulong *puVar6;
  int *piVar7;
  GETimeOfDay *pGVar8;
  void *pvVar9;
  int iVar10;
  uint __n;
  ulong uVar11;
  undefined1 *puVar12;
  ulong *puVar13;
  int *piVar14;
  int unaff_EBX;
  uint __n_00;
  GETimeOfDay *this_00;
  int local_30;
  void *__dest;
  
  FUN_0002e044();
  if ((string *)(this + 4) != (string *)(param_1 + 4)) {
    pcVar3 = *(char **)(param_1 + 0x14);
    pvVar9 = *(void **)(param_1 + 0x18);
    __n_00 = (int)pcVar3 - (int)pvVar9;
    puVar5 = *(undefined1 **)(this + 0x14);
    __dest = *(void **)(this + 0x18);
    __n = (int)puVar5 - (int)__dest;
    if (__n < __n_00) {
      iVar10 = 0;
      if (__n != 0) {
        memmove(__dest,pvVar9,__n);
        iVar10 = *(int *)(this + 0x14) - *(int *)(this + 0x18);
      }
      std::string::_M_append((string *)(this + 4),(char *)(iVar10 + (int)pvVar9),pcVar3);
    }
    else {
      if (__n_00 != 0) {
        memmove(__dest,pvVar9,__n_00);
        puVar5 = *(undefined1 **)(this + 0x14);
        __dest = *(void **)(this + 0x18);
      }
      puVar12 = (undefined1 *)((int)__dest + __n_00);
      if (puVar12 != puVar5) {
        *puVar12 = *puVar5;
        *(undefined1 **)(this + 0x14) = puVar12 + (*(int *)(this + 0x14) - (int)puVar5);
      }
    }
  }
  *(ulong *)(this + 0x1c) = param_2;
  this[0x20] = (GETextureSwap)param_3;
  this[0x21] = (GETextureSwap)param_4;
  puVar6 = operator_new__(param_2 * 0x1c + 4);
  puVar1 = puVar6 + 1;
  *puVar6 = param_2;
  if (param_2 != 0) {
    iVar10 = *(int *)(unaff_EBX + 0x48213);
    uVar11 = 0;
    puVar13 = puVar1;
    do {
      uVar11 = uVar11 + 1;
      *puVar13 = iVar10 + 8;
      *(ulong **)((int)puVar6 + (int)puVar13 + (0x18 - (int)puVar1)) = puVar13 + 1;
      *(ulong **)((int)puVar6 + (int)puVar13 + (0x1c - (int)puVar1)) = puVar13 + 1;
      *(undefined1 *)(puVar13 + 1) = 0;
      puVar13 = puVar13 + 7;
    } while (uVar11 != param_2);
  }
  iVar10 = *(int *)(this + 0x1c);
  *(ulong **)(this + 0x24) = puVar1;
  piVar7 = operator_new__(iVar10 * 0x20 + 4);
  piVar2 = piVar7 + 1;
  *piVar7 = iVar10;
  if (iVar10 != 0) {
    iVar4 = *(int *)(unaff_EBX + 0x48213);
    local_30 = 0;
    piVar14 = piVar2;
    do {
      *piVar14 = iVar4 + 8;
      local_30 = local_30 + 1;
      *(int **)((int)piVar7 + (int)piVar14 + (0x18 - (int)piVar2)) = piVar14 + 1;
      *(int **)((int)piVar7 + (int)piVar14 + (0x1c - (int)piVar2)) = piVar14 + 1;
      *(undefined1 *)(piVar14 + 1) = 0;
      *(undefined4 *)((int)piVar7 + (int)piVar14 + (0x20 - (int)piVar2)) = 0xffffffff;
      piVar14 = piVar14 + 8;
    } while (local_30 != iVar10);
  }
  iVar10 = *(int *)(this + 0x1c);
  *(int **)(this + 0x28) = piVar2;
  pGVar8 = operator_new__(iVar10 * 8);
  this_00 = pGVar8;
  while (iVar10 = iVar10 + -1, iVar10 != -1) {
    GETimeOfDay::GETimeOfDay(this_00);
    this_00 = this_00 + 8;
  }
  *(GETimeOfDay **)(this + 0x2c) = pGVar8;
  pvVar9 = operator_new__(*(int *)(this + 0x1c) << 2);
  *(void **)(this + 0x30) = pvVar9;
  return;
}


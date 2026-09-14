/* 0004b1c8 | STG::GETextureSwap::Initialize */

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
  string *psVar7;
  string *this_00;
  GETimeOfDay *this_01;
  uint __n_00;
  void *__src;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  
  this_00 = (string *)(this + 4);
  if (this_00 != (string *)(param_1 + 4)) {
    __src = *(void **)(param_1 + 0x18);
    pcVar10 = *(char **)(param_1 + 0x14);
    puVar6 = *(undefined1 **)(this + 0x14);
    pvVar1 = *(void **)(this + 0x18);
    __n_00 = (int)pcVar10 - (int)__src;
    __n = (int)puVar6 - (int)pvVar1;
    if (__n < __n_00) {
      iVar8 = 0;
      if (__n != 0) {
        memmove(pvVar1,__src,__n);
        iVar8 = *(int *)(this + 0x14) - *(int *)(this + 0x18);
      }
      std::string::_M_append(this_00,(char *)((int)__src + iVar8),pcVar10);
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
  puVar11 = (undefined4 *)0x4b254;
  puVar2 = operator_new__(param_2 * 0x1c + 8);
  puVar2[1] = param_2;
  if (param_2 == 0) {
    puVar11 = puVar2 + 2;
  }
  *puVar2 = 0x1c;
  if (param_2 != 0) {
    this_00 = (string *)(puVar2 + 3);
    uVar5 = 0;
    puVar11 = puVar2 + 2;
    iVar8 = *(int *)(DAT_0004b3e0 + 0x4b284);
    psVar7 = this_00;
    do {
      uVar5 = uVar5 + 1;
      *(int *)(psVar7 + -4) = iVar8 + 8;
      *(string **)(this_00 + (int)(psVar7 + (0xc - (int)puVar11))) = psVar7;
      *(string **)((int)puVar2 + (int)(psVar7 + (0x1c - (int)puVar11))) = psVar7;
      *psVar7 = (string)0x0;
      psVar7 = psVar7 + 0x1c;
    } while (uVar5 != param_2);
  }
  iVar8 = *(int *)(this + 0x1c);
  *(undefined4 **)(this + 0x24) = puVar11;
  puVar2 = operator_new__(iVar8 * 0x20 + 8);
  puVar2[1] = iVar8;
  if (iVar8 == 0) {
    this_00 = (string *)(puVar2 + 2);
  }
  *puVar2 = 0x20;
  if (iVar8 != 0) {
    iVar4 = 0;
    this_00 = (string *)(puVar2 + 2);
    iVar9 = *(int *)(DAT_0004b3e4 + 0x4b2fc);
    puVar11 = puVar2 + 3;
    do {
      iVar4 = iVar4 + 1;
      puVar11[-1] = iVar9 + 8;
      *(undefined4 **)((int)(puVar2 + 3) + (int)((int)puVar11 + (0xc - (int)this_00))) = puVar11;
      *(undefined4 **)((int)puVar2 + (int)((int)puVar11 + (0x1c - (int)this_00))) = puVar11;
      *(undefined1 *)puVar11 = 0;
      *(undefined4 *)((int)puVar2 + (int)((int)puVar11 + (0x20 - (int)this_00))) = 0xffffffff;
      puVar11 = puVar11 + 8;
    } while (iVar4 != iVar8);
  }
  iVar8 = *(int *)(this + 0x1c);
  *(string **)(this + 0x28) = this_00;
  pGVar3 = operator_new__(iVar8 << 3);
  this_01 = pGVar3;
  while (iVar8 = iVar8 + -1, iVar8 != -1) {
    GETimeOfDay::GETimeOfDay(this_01);
    this_01 = this_01 + 8;
  }
  *(GETimeOfDay **)(this + 0x2c) = pGVar3;
  pvVar1 = operator_new__(*(int *)(this + 0x1c) << 2);
  *(void **)(this + 0x30) = pvVar1;
  return;
}


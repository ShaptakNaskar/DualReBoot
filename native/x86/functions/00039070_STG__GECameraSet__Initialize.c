/* 00039070 | STG::GECameraSet::Initialize */

/* STG::GECameraSet::Initialize(STG::UStringBase<char, int> const&, unsigned long, unsigned long) */

void __thiscall
STG::GECameraSet::Initialize(GECameraSet *this,UStringBase *param_1,ulong param_2,ulong param_3)

{
  char *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  void *pvVar4;
  uint __n;
  void *__dest;
  uint __n_00;
  undefined1 *puVar5;
  
  iVar2 = FUN_0002e044();
  if ((string *)(this + 0x214) != (string *)(iVar2 + 4)) {
    pcVar1 = *(char **)(iVar2 + 0x14);
    pvVar4 = *(void **)(iVar2 + 0x18);
    __n = (int)pcVar1 - (int)pvVar4;
    puVar3 = *(undefined1 **)(this + 0x224);
    __dest = *(void **)(this + 0x228);
    __n_00 = (int)puVar3 - (int)__dest;
    if (__n_00 < __n) {
      iVar2 = 0;
      if (__n_00 != 0) {
        memmove(__dest,pvVar4,__n_00);
        iVar2 = *(int *)(this + 0x224) - *(int *)(this + 0x228);
      }
      std::string::_M_append((string *)(this + 0x214),(char *)(iVar2 + (int)pvVar4),pcVar1);
    }
    else {
      if (__n != 0) {
        memmove(__dest,pvVar4,__n);
        puVar3 = *(undefined1 **)(this + 0x224);
        __dest = *(void **)(this + 0x228);
      }
      puVar5 = (undefined1 *)(__n + (int)__dest);
      if (puVar5 != puVar3) {
        *puVar5 = *puVar3;
        *(undefined1 **)(this + 0x224) = puVar5 + (*(int *)(this + 0x224) - (int)puVar3);
      }
    }
  }
  *(ulong *)(this + 0x234) = param_2;
  *(ulong *)(this + 0x240) = param_3;
  if (param_2 != 0) {
    pvVar4 = operator_new__(param_2 << 2);
    *(void **)(this + 0x230) = pvVar4;
    pvVar4 = operator_new__(*(int *)(this + 0x234) << 2);
    *(void **)(this + 0x22c) = pvVar4;
    param_3 = *(ulong *)(this + 0x240);
  }
  if (param_3 != 0) {
    pvVar4 = operator_new__(param_3 << 2);
    *(void **)(this + 0x238) = pvVar4;
    pvVar4 = operator_new__(*(uint *)(this + 0x240));
    *(void **)(this + 0x23c) = pvVar4;
  }
  return;
}


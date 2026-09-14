/* 00038960 | STG::GECameraSet::Initialize */

/* STG::GECameraSet::Initialize(STG::UStringBase<char, int> const&, unsigned long, unsigned long) */

void __thiscall
STG::GECameraSet::Initialize(GECameraSet *this,UStringBase *param_1,ulong param_2,ulong param_3)

{
  void *pvVar1;
  size_t __n;
  int iVar2;
  undefined1 *puVar3;
  uint __n_00;
  char *pcVar4;
  void *__src;
  
  if ((string *)(this + 0x214) != (string *)(param_1 + 4)) {
    __src = *(void **)(param_1 + 0x18);
    pcVar4 = *(char **)(param_1 + 0x14);
    puVar3 = *(undefined1 **)(this + 0x224);
    pvVar1 = *(void **)(this + 0x228);
    __n_00 = (int)pcVar4 - (int)__src;
    __n = (int)puVar3 - (int)pvVar1;
    if (__n < __n_00) {
      iVar2 = 0;
      if (__n != 0) {
        memmove(pvVar1,__src,__n);
        iVar2 = *(int *)(this + 0x224) - *(int *)(this + 0x228);
      }
      std::string::_M_append((string *)(this + 0x214),(char *)((int)__src + iVar2),pcVar4);
      *(ulong *)(this + 0x234) = param_2;
      *(ulong *)(this + 0x240) = param_3;
      goto joined_r0x00038a24;
    }
    if (__n_00 != 0) {
      memmove(pvVar1,__src,__n_00);
      pvVar1 = *(void **)(this + 0x228);
      puVar3 = *(undefined1 **)(this + 0x224);
    }
    if ((undefined1 *)((int)pvVar1 + __n_00) != puVar3) {
      *(undefined1 *)((int)pvVar1 + __n_00) = *puVar3;
      *(undefined1 **)(this + 0x224) =
           (undefined1 *)((int)pvVar1 + __n_00) + (*(int *)(this + 0x224) - (int)puVar3);
    }
  }
  *(ulong *)(this + 0x234) = param_2;
  *(ulong *)(this + 0x240) = param_3;
joined_r0x00038a24:
  if (param_2 != 0) {
    pvVar1 = operator_new__(param_2 << 2);
    *(void **)(this + 0x230) = pvVar1;
    pvVar1 = operator_new__(*(int *)(this + 0x234) << 2);
    param_3 = *(ulong *)(this + 0x240);
    *(void **)(this + 0x22c) = pvVar1;
  }
  if (param_3 != 0) {
    pvVar1 = operator_new__(param_3 << 2);
    *(void **)(this + 0x238) = pvVar1;
    pvVar1 = operator_new__(*(uint *)(this + 0x240));
    *(void **)(this + 0x23c) = pvVar1;
  }
  return;
}


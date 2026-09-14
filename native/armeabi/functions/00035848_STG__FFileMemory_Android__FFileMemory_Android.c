/* 00035848 | STG::FFileMemory_Android::FFileMemory_Android */

/* STG::FFileMemory_Android::FFileMemory_Android(AAsset*) */

FFileMemory_Android * __thiscall
STG::FFileMemory_Android::FFileMemory_Android(FFileMemory_Android *this,AAsset *param_1)

{
  int iVar1;
  ulong uVar2;
  
  FFileMemory::FFileMemory((FFileMemory *)this);
  iVar1 = DAT_000358b4;
  *(AAsset **)(this + 0x3c) = param_1;
  *(int *)this = *(int *)(iVar1 + 0x3586c) + 8;
  if (param_1 != (AAsset *)0x0) {
    iVar1 = AAsset_getLength(param_1);
    uVar2 = AAsset_getBuffer(*(undefined4 *)(this + 0x3c));
    if (iVar1 != 0 && uVar2 != 0) {
      FFileBase::Open((uchar *)this,uVar2);
      return this;
    }
  }
  return this;
}


/* 00036220 | STG::FFileMemory_Android::FFileMemory_Android */

/* STG::FFileMemory_Android::FFileMemory_Android(AAsset*) */

void __thiscall
STG::FFileMemory_Android::FFileMemory_Android(FFileMemory_Android *this,AAsset *param_1)

{
  ulong uVar1;
  uchar *puVar2;
  int unaff_EBX;
  
  FUN_0002e044();
  FFileMemory::FFileMemory((FFileMemory *)this);
  *(int *)this = *(int *)(unaff_EBX + 0x65c3f) + 8;
  *(AAsset **)(this + 0x3c) = param_1;
  if (param_1 != (AAsset *)0x0) {
    uVar1 = AAsset_getLength(param_1);
    puVar2 = (uchar *)AAsset_getBuffer(*(undefined4 *)(this + 0x3c));
    if ((uVar1 != 0) && (puVar2 != (uchar *)0x0)) {
      FFileBase::Open((FFileBase *)this,puVar2,uVar1);
    }
  }
  return;
}


/* 00036190 | STG::FFileMemory_Android::~FFileMemory_Android */

/* STG::FFileMemory_Android::~FFileMemory_Android() */

void __thiscall STG::FFileMemory_Android::~FFileMemory_Android(FFileMemory_Android *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x65ccf) + 8;
  if (*(int *)(this + 0x3c) != 0) {
    AAsset_close(*(int *)(this + 0x3c));
  }
  FFileMemory::~FFileMemory((FFileMemory *)this);
  return;
}


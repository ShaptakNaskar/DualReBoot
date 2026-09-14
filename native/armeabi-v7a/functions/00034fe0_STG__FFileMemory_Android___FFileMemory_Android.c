/* 00034fe0 | STG::FFileMemory_Android::~FFileMemory_Android */

/* STG::FFileMemory_Android::~FFileMemory_Android() */

FFileMemory_Android * __thiscall
STG::FFileMemory_Android::~FFileMemory_Android(FFileMemory_Android *this)

{
  *(int *)this = *(int *)(DAT_00035018 + 0x34ffc) + 8;
  if (*(int *)(this + 0x3c) != 0) {
    AAsset_close();
  }
  FFileMemory::~FFileMemory((FFileMemory *)this);
  return this;
}


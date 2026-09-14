/* 0003f0f0 | STG::GERenderer::CaptureScreenShot */

/* STG::GERenderer::CaptureScreenShot(STG::URectangle<unsigned long> const&, STG::UStringBase<char,
   int> const&) */

undefined4 __thiscall
STG::GERenderer::CaptureScreenShot(GERenderer *this,URectangle *param_1,UStringBase *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar2 = 0;
  FUN_0002e044();
  if (*(int *)(param_2 + 0x18) != *(int *)(param_2 + 0x14)) {
    local_30 = 0xc;
    local_2c = 0;
    local_28 = 0;
    local_24 = (void *)0x0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    cVar1 = CaptureScreenShot(this,param_1,(GEPixelData *)&local_30);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*(int *)this + 0x20))(this,param_2,(GEPixelData *)&local_30);
    }
    if ((local_20 != 0) && (local_24 != (void *)0x0)) {
      operator_delete__(local_24);
    }
  }
  return uVar2;
}


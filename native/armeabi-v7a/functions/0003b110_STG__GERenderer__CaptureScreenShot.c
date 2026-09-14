/* 0003b110 | STG::GERenderer::CaptureScreenShot */

/* STG::GERenderer::CaptureScreenShot(STG::URectangle<unsigned long> const&, STG::UStringBase<char,
   int> const&) */

undefined4 __thiscall
STG::GERenderer::CaptureScreenShot(GERenderer *this,URectangle *param_1,UStringBase *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_2 + 0x18) == *(int *)(param_2 + 0x14)) {
    uVar1 = 0;
  }
  else {
    local_2c = 0;
    local_30 = 0xc;
    local_28 = 0;
    local_24 = (void *)0x0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    iVar2 = CaptureScreenShot(this,param_1,(GEPixelData *)&local_30);
    if (iVar2 == 0) {
      if (local_20 == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)(*(int *)this + 0x20))(this,param_2,&local_30);
      if (local_20 == 0) {
        return uVar1;
      }
    }
    if (local_24 != (void *)0x0) {
      operator_delete__(local_24);
    }
  }
  return uVar1;
}


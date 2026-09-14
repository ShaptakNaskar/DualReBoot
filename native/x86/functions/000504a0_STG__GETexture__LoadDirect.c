/* 000504a0 | STG::GETexture::LoadDirect */

/* STG::GETexture::LoadDirect(unsigned char const*) */

undefined4 __thiscall STG::GETexture::LoadDirect(GETexture *this,uchar *param_1)

{
  undefined4 uVar1;
  uchar *local_10;
  
  FUN_0002e044();
  local_10 = (uchar *)0x0;
  uVar1 = Load(this,param_1,&local_10);
  if (local_10 != (uchar *)0x0) {
    ClearCompositeData(this);
    if (local_10 != (uchar *)0x0) {
      operator_delete__(local_10);
    }
  }
  return uVar1;
}


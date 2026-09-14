/* 00048424 | STG::GETexture::LoadDirect */

/* STG::GETexture::LoadDirect(unsigned char const*) */

undefined4 __thiscall STG::GETexture::LoadDirect(GETexture *this,uchar *param_1)

{
  undefined4 uVar1;
  uchar *local_14 [2];
  
  local_14[0] = (uchar *)0x0;
  uVar1 = Load(this,param_1,local_14);
  if (local_14[0] != (uchar *)0x0) {
    ClearCompositeData(this);
    if (local_14[0] != (uchar *)0x0) {
      operator_delete__(local_14[0]);
    }
  }
  return uVar1;
}


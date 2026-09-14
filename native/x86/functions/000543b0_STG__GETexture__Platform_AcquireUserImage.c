/* 000543b0 | STG::GETexture::Platform_AcquireUserImage */

/* STG::GETexture::Platform_AcquireUserImage(STG::UStringBase<char, int> const&, unsigned long,
   unsigned long, STG::GEPixelFormat::EFormat&, unsigned char*&, unsigned long&, unsigned long&) */

undefined4
STG::GETexture::Platform_AcquireUserImage
          (UStringBase *param_1,ulong param_2,ulong param_3,EFormat *param_4,uchar **param_5,
          ulong *param_6,ulong *param_7)

{
  undefined4 *puVar1;
  EngineInterface *this;
  int iVar2;
  int unaff_EBX;
  undefined4 uVar3;
  
  FUN_0002e044();
  puVar1 = *(undefined4 **)(unaff_EBX + 0x47b13);
  uVar3 = 0;
  *(undefined4 *)param_4 = 0xc;
  *param_5 = (uchar *)0x0;
  this = (EngineInterface *)*puVar1;
  *param_6 = 0;
  *param_7 = 0;
  if (this != (EngineInterface *)0x0) {
    iVar2 = EngineInterface::FindBitmapData(this,param_1);
    if (iVar2 != 0) {
      uVar3 = 1;
      *(undefined4 *)param_4 = 10;
      *param_5 = *(uchar **)(iVar2 + 0x1c);
      *param_6 = (uint)*(ushort *)(iVar2 + 0x24);
      *param_7 = (uint)*(ushort *)(iVar2 + 0x26);
    }
  }
  return uVar3;
}


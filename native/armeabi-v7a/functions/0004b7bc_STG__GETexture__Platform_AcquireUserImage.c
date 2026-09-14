/* 0004b7bc | STG::GETexture::Platform_AcquireUserImage */

/* STG::GETexture::Platform_AcquireUserImage(STG::UStringBase<char, int> const&, unsigned long,
   unsigned long, STG::GEPixelFormat::EFormat&, unsigned char*&, unsigned long&, unsigned long&) */

undefined4
STG::GETexture::Platform_AcquireUserImage
          (UStringBase *param_1,ulong param_2,ulong param_3,EFormat *param_4,uchar **param_5,
          ulong *param_6,ulong *param_7)

{
  ushort uVar1;
  ushort uVar2;
  EngineInterface *this;
  int iVar3;
  uchar *puVar4;
  undefined4 *puVar5;
  
  puVar5 = *(undefined4 **)(DAT_0004b83c + 0x4b7dc);
  *(undefined4 *)param_4 = 0xc;
  *param_5 = (uchar *)0x0;
  this = (EngineInterface *)*puVar5;
  *param_6 = 0;
  *param_7 = 0;
  if (this == (EngineInterface *)0x0) {
    return 0;
  }
  iVar3 = EngineInterface::FindBitmapData(this,param_1);
  if (iVar3 != 0) {
    puVar4 = *(uchar **)(iVar3 + 0x1c);
    uVar1 = *(ushort *)(iVar3 + 0x24);
    uVar2 = *(ushort *)(iVar3 + 0x26);
    *(undefined4 *)param_4 = 10;
    *param_5 = puVar4;
    *param_6 = (uint)uVar1;
    *param_7 = (uint)uVar2;
    return 1;
  }
  return 0;
}


/* 0004dc24 | STG::GETexture::Platform_AcquireUserImage */

/* STG::GETexture::Platform_AcquireUserImage(STG::UStringBase<char, int> const&, unsigned long,
   unsigned long, STG::GEPixelFormat::EFormat&, unsigned char*&, unsigned long&, unsigned long&) */

undefined4
STG::GETexture::Platform_AcquireUserImage
          (UStringBase *param_1,ulong param_2,ulong param_3,EFormat *param_4,uchar **param_5,
          ulong *param_6,ulong *param_7)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  uchar *puVar5;
  EngineInterface *this;
  
  iVar3 = DAT_0004dca4;
  *(undefined4 *)param_4 = 0xc;
  puVar4 = *(undefined4 **)(iVar3 + 0x4dc48);
  *param_5 = (uchar *)0x0;
  this = (EngineInterface *)*puVar4;
  *param_6 = 0;
  *param_7 = 0;
  if ((this != (EngineInterface *)0x0) &&
     (iVar3 = EngineInterface::FindBitmapData(this,param_1), iVar3 != 0)) {
    puVar5 = *(uchar **)(iVar3 + 0x1c);
    uVar1 = *(ushort *)(iVar3 + 0x24);
    uVar2 = *(ushort *)(iVar3 + 0x26);
    *(undefined4 *)param_4 = 10;
    *param_5 = puVar5;
    *param_6 = (uint)uVar1;
    *param_7 = (uint)uVar2;
    return 1;
  }
  return 0;
}


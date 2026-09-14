/* 00038d30 | STG::GECameraSet::ComputeCamera */

/* STG::GECameraSet::ComputeCamera(STG::GEViewport const&, STG::GECamera&) const */

void __thiscall
STG::GECameraSet::ComputeCamera(GECameraSet *this,GEViewport *param_1,GECamera *param_2)

{
  undefined8 uVar1;
  GECamera *pGVar2;
  longdouble lVar3;
  
  FUN_0002e044();
  pGVar2 = (GECamera *)**(undefined4 **)(this + 0x22c);
  if (*(int *)(this + 0x234) == 1) {
    if ((pGVar2 + 0x14 < param_2 + 4) || (param_2 + 0x14 < pGVar2 + 4)) {
      uVar1 = *(undefined8 *)(pGVar2 + 0xc);
      *(undefined8 *)(param_2 + 4) = *(undefined8 *)(pGVar2 + 4);
      *(undefined8 *)(param_2 + 0xc) = uVar1;
      uVar1 = *(undefined8 *)(pGVar2 + 0x1c);
      *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(pGVar2 + 0x14);
      *(undefined8 *)(param_2 + 0x1c) = uVar1;
      uVar1 = *(undefined8 *)(pGVar2 + 0x2c);
      *(undefined8 *)(param_2 + 0x24) = *(undefined8 *)(pGVar2 + 0x24);
      *(undefined8 *)(param_2 + 0x2c) = uVar1;
      uVar1 = *(undefined8 *)(pGVar2 + 0x3c);
      *(undefined8 *)(param_2 + 0x34) = *(undefined8 *)(pGVar2 + 0x34);
      *(undefined8 *)(param_2 + 0x3c) = uVar1;
      uVar1 = *(undefined8 *)(pGVar2 + 0x4c);
      *(undefined8 *)(param_2 + 0x44) = *(undefined8 *)(pGVar2 + 0x44);
      *(undefined8 *)(param_2 + 0x4c) = uVar1;
      uVar1 = *(undefined8 *)(pGVar2 + 0x5c);
      *(undefined8 *)(param_2 + 0x54) = *(undefined8 *)(pGVar2 + 0x54);
      *(undefined8 *)(param_2 + 0x5c) = uVar1;
    }
    else {
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(pGVar2 + 4);
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(pGVar2 + 8);
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(pGVar2 + 0xc);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(pGVar2 + 0x10);
      *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(pGVar2 + 0x14);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(pGVar2 + 0x18);
      *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(pGVar2 + 0x1c);
      *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(pGVar2 + 0x20);
      *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(pGVar2 + 0x24);
      *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(pGVar2 + 0x28);
      *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(pGVar2 + 0x2c);
      *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(pGVar2 + 0x30);
      *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(pGVar2 + 0x34);
      *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(pGVar2 + 0x38);
      *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(pGVar2 + 0x3c);
      *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(pGVar2 + 0x40);
      *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(pGVar2 + 0x44);
      *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(pGVar2 + 0x48);
      *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(pGVar2 + 0x4c);
      *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(pGVar2 + 0x50);
      *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(pGVar2 + 0x54);
      *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(pGVar2 + 0x58);
      *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(pGVar2 + 0x5c);
      *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(pGVar2 + 0x60);
    }
    *(undefined4 *)(param_2 + 100) = *(undefined4 *)(pGVar2 + 100);
    *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(pGVar2 + 0x68);
    *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(pGVar2 + 0x6c);
    *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(pGVar2 + 0x70);
    *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(pGVar2 + 0x74);
    *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(pGVar2 + 0x78);
    *(undefined4 *)(param_2 + 0x7c) = *(undefined4 *)(pGVar2 + 0x7c);
    MMatrix::operator=((MMatrix *)(param_2 + 0x80),(MMatrix *)(pGVar2 + 0x80));
    MMatrix::operator=((MMatrix *)(param_2 + 0xc0),(MMatrix *)(pGVar2 + 0xc0));
    MMatrix::operator=((MMatrix *)(param_2 + 0x100),(MMatrix *)(pGVar2 + 0x100));
    MMatrix::operator=((MMatrix *)(param_2 + 0x140),(MMatrix *)(pGVar2 + 0x140));
    MMatrix::operator=((MMatrix *)(param_2 + 0x180),(MMatrix *)(pGVar2 + 0x180));
    *(undefined4 *)(param_2 + 0x1c0) = *(undefined4 *)(pGVar2 + 0x1c0);
    *(undefined4 *)(param_2 + 0x1c4) = *(undefined4 *)(pGVar2 + 0x1c4);
    *(undefined4 *)(param_2 + 0x1c8) = *(undefined4 *)(pGVar2 + 0x1c8);
    *(undefined4 *)(param_2 + 0x1cc) = *(undefined4 *)(pGVar2 + 0x1cc);
    *(undefined4 *)(param_2 + 0x1d0) = *(undefined4 *)(pGVar2 + 0x1d0);
    *(undefined4 *)(param_2 + 0x1d4) = *(undefined4 *)(pGVar2 + 0x1d4);
    *(undefined4 *)(param_2 + 0x1d8) = *(undefined4 *)(pGVar2 + 0x1d8);
    *(undefined4 *)(param_2 + 0x1dc) = *(undefined4 *)(pGVar2 + 0x1dc);
    *(undefined4 *)(param_2 + 0x1e0) = *(undefined4 *)(pGVar2 + 0x1e0);
    *(undefined4 *)(param_2 + 0x1e4) = *(undefined4 *)(pGVar2 + 0x1e4);
    *(undefined4 *)(param_2 + 0x1e8) = *(undefined4 *)(pGVar2 + 0x1e8);
    *(undefined4 *)(param_2 + 0x1ec) = *(undefined4 *)(pGVar2 + 0x1ec);
    *(undefined4 *)(param_2 + 0x1f0) = *(undefined4 *)(pGVar2 + 0x1f0);
    *(undefined4 *)(param_2 + 500) = *(undefined4 *)(pGVar2 + 500);
    *(undefined4 *)(param_2 + 0x1f8) = *(undefined4 *)(pGVar2 + 0x1f8);
    *(undefined4 *)(param_2 + 0x1fc) = *(undefined4 *)(pGVar2 + 0x1fc);
    *(undefined4 *)(param_2 + 0x200) = *(undefined4 *)(pGVar2 + 0x200);
    *(undefined4 *)(param_2 + 0x204) = *(undefined4 *)(pGVar2 + 0x204);
    *(undefined4 *)(param_2 + 0x208) = *(undefined4 *)(pGVar2 + 0x208);
    param_2[0x20c] = pGVar2[0x20c];
  }
  else {
    lVar3 = (longdouble)GEViewport::GetAspectRatioInterval(param_1,*(float *)(pGVar2 + 0x208));
    GECamera::Lerp(param_2,pGVar2,*(GECamera **)(*(int *)(this + 0x22c) + 4),(float)lVar3);
  }
  GECamera::ApplyViewport(param_2,param_1);
  return;
}


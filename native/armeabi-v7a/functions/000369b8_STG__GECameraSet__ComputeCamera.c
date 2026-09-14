/* 000369b8 | STG::GECameraSet::ComputeCamera */

/* STG::GECameraSet::ComputeCamera(STG::GEViewport const&, STG::GECamera&) const */

void __thiscall
STG::GECameraSet::ComputeCamera(GECameraSet *this,GEViewport *param_1,GECamera *param_2)

{
  GECamera GVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  GECamera *pGVar4;
  undefined4 uVar5;
  float fVar6;
  
  pGVar4 = (GECamera *)**(undefined4 **)(this + 0x22c);
  if (*(int *)(this + 0x234) == 1) {
    uVar2 = *(undefined4 *)(pGVar4 + 4);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(pGVar4 + 8);
    uVar3 = *(undefined4 *)(pGVar4 + 0xc);
    *(undefined4 *)(param_2 + 4) = uVar2;
    *(undefined4 *)(param_2 + 0xc) = uVar3;
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(pGVar4 + 0x10);
    uVar2 = *(undefined4 *)(pGVar4 + 0x14);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(pGVar4 + 0x18);
    uVar3 = *(undefined4 *)(pGVar4 + 0x1c);
    *(undefined4 *)(param_2 + 0x14) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(pGVar4 + 0x20);
    uVar2 = *(undefined4 *)(pGVar4 + 0x24);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(pGVar4 + 0x28);
    uVar3 = *(undefined4 *)(pGVar4 + 0x2c);
    *(undefined4 *)(param_2 + 0x24) = uVar2;
    *(undefined4 *)(param_2 + 0x2c) = uVar3;
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(pGVar4 + 0x30);
    uVar2 = *(undefined4 *)(pGVar4 + 0x34);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(pGVar4 + 0x38);
    uVar3 = *(undefined4 *)(pGVar4 + 0x3c);
    *(undefined4 *)(param_2 + 0x34) = uVar2;
    *(undefined4 *)(param_2 + 0x3c) = uVar3;
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(pGVar4 + 0x40);
    *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(pGVar4 + 0x44);
    uVar2 = *(undefined4 *)(pGVar4 + 0x4c);
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(pGVar4 + 0x48);
    *(undefined4 *)(param_2 + 0x4c) = uVar2;
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(pGVar4 + 0x50);
    uVar2 = *(undefined4 *)(pGVar4 + 0x58);
    uVar3 = *(undefined4 *)(pGVar4 + 0x5c);
    *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(pGVar4 + 0x54);
    *(undefined4 *)(param_2 + 0x58) = uVar2;
    *(undefined4 *)(param_2 + 0x5c) = uVar3;
    uVar2 = *(undefined4 *)(pGVar4 + 0x60);
    *(undefined4 *)(param_2 + 100) = *(undefined4 *)(pGVar4 + 100);
    *(undefined4 *)(param_2 + 0x60) = uVar2;
    uVar2 = *(undefined4 *)(pGVar4 + 0x6c);
    uVar3 = *(undefined4 *)(pGVar4 + 0x70);
    *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(pGVar4 + 0x68);
    *(undefined4 *)(param_2 + 0x6c) = uVar2;
    uVar5 = *(undefined4 *)(pGVar4 + 0x74);
    uVar2 = *(undefined4 *)(pGVar4 + 0x78);
    *(undefined4 *)(param_2 + 0x70) = uVar3;
    uVar3 = *(undefined4 *)(pGVar4 + 0x7c);
    *(undefined4 *)(param_2 + 0x78) = uVar2;
    *(undefined4 *)(param_2 + 0x74) = uVar5;
    *(undefined4 *)(param_2 + 0x7c) = uVar3;
    MMatrix::operator=((MMatrix *)(param_2 + 0x80),(MMatrix *)(pGVar4 + 0x80));
    MMatrix::operator=((MMatrix *)(param_2 + 0xc0),(MMatrix *)(pGVar4 + 0xc0));
    MMatrix::operator=((MMatrix *)(param_2 + 0x100),(MMatrix *)(pGVar4 + 0x100));
    MMatrix::operator=((MMatrix *)(param_2 + 0x140),(MMatrix *)(pGVar4 + 0x140));
    MMatrix::operator=((MMatrix *)(param_2 + 0x180),(MMatrix *)(pGVar4 + 0x180));
    uVar2 = *(undefined4 *)(pGVar4 + 0x1c4);
    *(undefined4 *)(param_2 + 0x1c0) = *(undefined4 *)(pGVar4 + 0x1c0);
    *(undefined4 *)(param_2 + 0x1c4) = uVar2;
    uVar2 = *(undefined4 *)(pGVar4 + 0x1cc);
    *(undefined4 *)(param_2 + 0x1c8) = *(undefined4 *)(pGVar4 + 0x1c8);
    *(undefined4 *)(param_2 + 0x1cc) = uVar2;
    uVar2 = *(undefined4 *)(pGVar4 + 0x1d4);
    *(undefined4 *)(param_2 + 0x1d0) = *(undefined4 *)(pGVar4 + 0x1d0);
    *(undefined4 *)(param_2 + 0x1d4) = uVar2;
    uVar2 = *(undefined4 *)(pGVar4 + 0x1d8);
    *(undefined4 *)(param_2 + 0x1dc) = *(undefined4 *)(pGVar4 + 0x1dc);
    uVar3 = *(undefined4 *)(pGVar4 + 0x1e0);
    *(undefined4 *)(param_2 + 0x1d8) = uVar2;
    *(undefined4 *)(param_2 + 0x1e0) = uVar3;
    uVar2 = *(undefined4 *)(pGVar4 + 0x1e4);
    *(undefined4 *)(param_2 + 0x1e8) = *(undefined4 *)(pGVar4 + 0x1e8);
    uVar3 = *(undefined4 *)(pGVar4 + 0x1f0);
    *(undefined4 *)(param_2 + 0x1e4) = uVar2;
    uVar2 = *(undefined4 *)(pGVar4 + 0x1ec);
    *(undefined4 *)(param_2 + 0x1f0) = uVar3;
    uVar3 = *(undefined4 *)(pGVar4 + 500);
    *(undefined4 *)(param_2 + 0x1ec) = uVar2;
    *(undefined4 *)(param_2 + 500) = uVar3;
    uVar2 = *(undefined4 *)(pGVar4 + 0x1f8);
    uVar3 = *(undefined4 *)(pGVar4 + 0x200);
    *(undefined4 *)(param_2 + 0x1fc) = *(undefined4 *)(pGVar4 + 0x1fc);
    *(undefined4 *)(param_2 + 0x1f8) = uVar2;
    *(undefined4 *)(param_2 + 0x200) = uVar3;
    *(undefined4 *)(param_2 + 0x204) = *(undefined4 *)(pGVar4 + 0x204);
    GVar1 = pGVar4[0x20c];
    *(undefined4 *)(param_2 + 0x208) = *(undefined4 *)(pGVar4 + 0x208);
    param_2[0x20c] = GVar1;
  }
  else {
    fVar6 = (float)GEViewport::GetAspectRatioInterval(param_1,*(float *)(pGVar4 + 0x208));
    GECamera::Lerp(param_2,pGVar4,*(GECamera **)(*(int *)(this + 0x22c) + 4),fVar6);
  }
  GECamera::ApplyViewport(param_2,param_1);
  return;
}


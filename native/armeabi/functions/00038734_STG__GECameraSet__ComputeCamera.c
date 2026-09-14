/* 00038734 | STG::GECameraSet::ComputeCamera */

/* STG::GECameraSet::ComputeCamera(STG::GEViewport const&, STG::GECamera&) const */

void STG::GECameraSet::ComputeCamera(GEViewport *param_1,GECamera *param_2)

{
  GECamera GVar1;
  GECamera *in_r2;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  GECamera *pGVar5;
  undefined4 uVar6;
  float in_s0;
  float fVar7;
  
  pGVar5 = (GECamera *)**(undefined4 **)(param_1 + 0x22c);
  if (*(int *)(param_1 + 0x234) == 1) {
    uVar2 = *(undefined4 *)(pGVar5 + 8);
    uVar3 = *(undefined4 *)(pGVar5 + 0xc);
    *(undefined4 *)(in_r2 + 4) = *(undefined4 *)(pGVar5 + 4);
    *(undefined4 *)(in_r2 + 8) = uVar2;
    *(undefined4 *)(in_r2 + 0xc) = uVar3;
    *(undefined4 *)(in_r2 + 0x10) = *(undefined4 *)(pGVar5 + 0x10);
    uVar2 = *(undefined4 *)(pGVar5 + 0x18);
    uVar3 = *(undefined4 *)(pGVar5 + 0x1c);
    *(undefined4 *)(in_r2 + 0x14) = *(undefined4 *)(pGVar5 + 0x14);
    *(undefined4 *)(in_r2 + 0x18) = uVar2;
    *(undefined4 *)(in_r2 + 0x1c) = uVar3;
    *(undefined4 *)(in_r2 + 0x20) = *(undefined4 *)(pGVar5 + 0x20);
    uVar2 = *(undefined4 *)(pGVar5 + 0x28);
    uVar3 = *(undefined4 *)(pGVar5 + 0x2c);
    *(undefined4 *)(in_r2 + 0x24) = *(undefined4 *)(pGVar5 + 0x24);
    *(undefined4 *)(in_r2 + 0x28) = uVar2;
    *(undefined4 *)(in_r2 + 0x2c) = uVar3;
    *(undefined4 *)(in_r2 + 0x30) = *(undefined4 *)(pGVar5 + 0x30);
    uVar2 = *(undefined4 *)(pGVar5 + 0x38);
    uVar3 = *(undefined4 *)(pGVar5 + 0x3c);
    *(undefined4 *)(in_r2 + 0x34) = *(undefined4 *)(pGVar5 + 0x34);
    *(undefined4 *)(in_r2 + 0x38) = uVar2;
    *(undefined4 *)(in_r2 + 0x3c) = uVar3;
    *(undefined4 *)(in_r2 + 0x40) = *(undefined4 *)(pGVar5 + 0x40);
    *(undefined4 *)(in_r2 + 0x44) = *(undefined4 *)(pGVar5 + 0x44);
    uVar2 = *(undefined4 *)(pGVar5 + 0x4c);
    *(undefined4 *)(in_r2 + 0x48) = *(undefined4 *)(pGVar5 + 0x48);
    *(undefined4 *)(in_r2 + 0x4c) = uVar2;
    *(undefined4 *)(in_r2 + 0x50) = *(undefined4 *)(pGVar5 + 0x50);
    uVar2 = *(undefined4 *)(pGVar5 + 0x58);
    uVar3 = *(undefined4 *)(pGVar5 + 0x5c);
    *(undefined4 *)(in_r2 + 0x54) = *(undefined4 *)(pGVar5 + 0x54);
    *(undefined4 *)(in_r2 + 0x58) = uVar2;
    *(undefined4 *)(in_r2 + 0x5c) = uVar3;
    uVar2 = *(undefined4 *)(pGVar5 + 100);
    *(undefined4 *)(in_r2 + 0x60) = *(undefined4 *)(pGVar5 + 0x60);
    *(undefined4 *)(in_r2 + 100) = uVar2;
    uVar2 = *(undefined4 *)(pGVar5 + 0x6c);
    uVar3 = *(undefined4 *)(pGVar5 + 0x70);
    *(undefined4 *)(in_r2 + 0x68) = *(undefined4 *)(pGVar5 + 0x68);
    *(undefined4 *)(in_r2 + 0x6c) = uVar2;
    *(undefined4 *)(in_r2 + 0x70) = uVar3;
    uVar2 = *(undefined4 *)(pGVar5 + 0x78);
    uVar3 = *(undefined4 *)(pGVar5 + 0x7c);
    *(undefined4 *)(in_r2 + 0x74) = *(undefined4 *)(pGVar5 + 0x74);
    *(undefined4 *)(in_r2 + 0x78) = uVar2;
    *(undefined4 *)(in_r2 + 0x7c) = uVar3;
    MMatrix::operator=((MMatrix *)(in_r2 + 0x80),(MMatrix *)(pGVar5 + 0x80));
    MMatrix::operator=((MMatrix *)(in_r2 + 0xc0),(MMatrix *)(pGVar5 + 0xc0));
    MMatrix::operator=((MMatrix *)(in_r2 + 0x100),(MMatrix *)(pGVar5 + 0x100));
    MMatrix::operator=((MMatrix *)(in_r2 + 0x140),(MMatrix *)(pGVar5 + 0x140));
    MMatrix::operator=((MMatrix *)(in_r2 + 0x180),(MMatrix *)(pGVar5 + 0x180));
    uVar2 = *(undefined4 *)(pGVar5 + 0x1c4);
    uVar3 = *(undefined4 *)(pGVar5 + 0x1c8);
    *(undefined4 *)(in_r2 + 0x1c0) = *(undefined4 *)(pGVar5 + 0x1c0);
    *(undefined4 *)(in_r2 + 0x1c4) = uVar2;
    *(undefined4 *)(in_r2 + 0x1c8) = uVar3;
    uVar2 = *(undefined4 *)(pGVar5 + 0x1d0);
    uVar3 = *(undefined4 *)(pGVar5 + 0x1d4);
    *(undefined4 *)(in_r2 + 0x1cc) = *(undefined4 *)(pGVar5 + 0x1cc);
    *(undefined4 *)(in_r2 + 0x1d0) = uVar2;
    *(undefined4 *)(in_r2 + 0x1d4) = uVar3;
    uVar2 = *(undefined4 *)(pGVar5 + 0x1dc);
    uVar3 = *(undefined4 *)(pGVar5 + 0x1e0);
    *(undefined4 *)(in_r2 + 0x1d8) = *(undefined4 *)(pGVar5 + 0x1d8);
    *(undefined4 *)(in_r2 + 0x1dc) = uVar2;
    *(undefined4 *)(in_r2 + 0x1e0) = uVar3;
    uVar3 = *(undefined4 *)(pGVar5 + 0x1f0);
    uVar4 = *(undefined4 *)(pGVar5 + 500);
    uVar6 = *(undefined4 *)(pGVar5 + 0x1e4);
    uVar2 = *(undefined4 *)(pGVar5 + 0x1e8);
    *(undefined4 *)(in_r2 + 0x1ec) = *(undefined4 *)(pGVar5 + 0x1ec);
    *(undefined4 *)(in_r2 + 0x1e4) = uVar6;
    *(undefined4 *)(in_r2 + 0x1e8) = uVar2;
    *(undefined4 *)(in_r2 + 0x1f0) = uVar3;
    *(undefined4 *)(in_r2 + 500) = uVar4;
    uVar2 = *(undefined4 *)(pGVar5 + 0x1f8);
    uVar3 = *(undefined4 *)(pGVar5 + 0x200);
    *(undefined4 *)(in_r2 + 0x1fc) = *(undefined4 *)(pGVar5 + 0x1fc);
    *(undefined4 *)(in_r2 + 0x1f8) = uVar2;
    *(undefined4 *)(in_r2 + 0x200) = uVar3;
    *(undefined4 *)(in_r2 + 0x204) = *(undefined4 *)(pGVar5 + 0x204);
    GVar1 = pGVar5[0x20c];
    *(undefined4 *)(in_r2 + 0x208) = *(undefined4 *)(pGVar5 + 0x208);
    in_r2[0x20c] = GVar1;
  }
  else {
    fVar7 = (float)GEViewport::GetAspectRatioInterval((GEViewport *)param_2,in_s0);
    GECamera::Lerp(in_r2,pGVar5,*(GECamera **)(*(int *)(param_1 + 0x22c) + 4),fVar7);
  }
  GECamera::ApplyViewport((GEViewport *)in_r2);
  return;
}


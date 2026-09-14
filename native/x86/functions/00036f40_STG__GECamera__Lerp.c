/* 00036f40 | STG::GECamera::Lerp */

/* STG::GECamera::Lerp(STG::GECamera const&, STG::GECamera const&, float) */

void __thiscall
STG::GECamera::Lerp(GECamera *this,GECamera *param_1,GECamera *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  
  FUN_0002e044();
  if ((param_1 + 0x14 < this + 4) || (this + 0x14 < param_1 + 4)) {
    uVar3 = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)(this + 4) = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)(this + 0xc) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x1c);
    *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_1 + 0x14);
    *(undefined8 *)(this + 0x1c) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x2c);
    *(undefined8 *)(this + 0x24) = *(undefined8 *)(param_1 + 0x24);
    *(undefined8 *)(this + 0x2c) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x3c);
    *(undefined8 *)(this + 0x34) = *(undefined8 *)(param_1 + 0x34);
    *(undefined8 *)(this + 0x3c) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x4c);
    *(undefined8 *)(this + 0x44) = *(undefined8 *)(param_1 + 0x44);
    *(undefined8 *)(this + 0x4c) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x5c);
    *(undefined8 *)(this + 0x54) = *(undefined8 *)(param_1 + 0x54);
    *(undefined8 *)(this + 0x5c) = uVar3;
  }
  else {
    *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  }
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  MMatrix::operator=((MMatrix *)(this + 0x80),(MMatrix *)(param_1 + 0x80));
  MMatrix::operator=((MMatrix *)(this + 0xc0),(MMatrix *)(param_1 + 0xc0));
  MMatrix::operator=((MMatrix *)(this + 0x100),(MMatrix *)(param_1 + 0x100));
  MMatrix::operator=((MMatrix *)(this + 0x140),(MMatrix *)(param_1 + 0x140));
  MMatrix::operator=((MMatrix *)(this + 0x180),(MMatrix *)(param_1 + 0x180));
  *(undefined4 *)(this + 0x1c0) = *(undefined4 *)(param_1 + 0x1c0);
  *(undefined4 *)(this + 0x1c4) = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined4 *)(this + 0x1c8) = *(undefined4 *)(param_1 + 0x1c8);
  *(undefined4 *)(this + 0x1cc) = *(undefined4 *)(param_1 + 0x1cc);
  *(undefined4 *)(this + 0x1d0) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(this + 0x1d4) = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(this + 0x1d8) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)(this + 0x1dc) = *(undefined4 *)(param_1 + 0x1dc);
  *(undefined4 *)(this + 0x1e0) = *(undefined4 *)(param_1 + 0x1e0);
  *(undefined4 *)(this + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
  *(undefined4 *)(this + 0x1e8) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(this + 0x1ec) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(this + 0x1f0) = *(undefined4 *)(param_1 + 0x1f0);
  *(undefined4 *)(this + 500) = *(undefined4 *)(param_1 + 500);
  *(undefined4 *)(this + 0x1f8) = *(undefined4 *)(param_1 + 0x1f8);
  *(undefined4 *)(this + 0x1fc) = *(undefined4 *)(param_1 + 0x1fc);
  *(undefined4 *)(this + 0x200) = *(undefined4 *)(param_1 + 0x200);
  *(undefined4 *)(this + 0x204) = *(undefined4 *)(param_1 + 0x204);
  *(undefined4 *)(this + 0x208) = *(undefined4 *)(param_1 + 0x208);
  fVar1 = *(float *)(param_1 + 0x1c0);
  fVar2 = *(float *)(param_2 + 0x1c0);
  this[0x20c] = param_1[0x20c];
  *(float *)(this + 0x1c0) = (fVar2 - fVar1) * param_3 + fVar1;
  *(float *)(this + 0x1c4) =
       (*(float *)(param_2 + 0x1c4) - *(float *)(param_1 + 0x1c4)) * param_3 +
       *(float *)(param_1 + 0x1c4);
  *(float *)(this + 0x1c8) =
       (*(float *)(param_2 + 0x1c8) - *(float *)(param_1 + 0x1c8)) * param_3 +
       *(float *)(param_1 + 0x1c8);
  *(float *)(this + 0x1cc) =
       (*(float *)(param_2 + 0x1cc) - *(float *)(param_1 + 0x1cc)) * param_3 +
       *(float *)(param_1 + 0x1cc);
  *(float *)(this + 0x1d0) =
       (*(float *)(param_2 + 0x1d0) - *(float *)(param_1 + 0x1d0)) * param_3 +
       *(float *)(param_1 + 0x1d0);
  *(float *)(this + 0x1d4) =
       (*(float *)(param_2 + 0x1d4) - *(float *)(param_1 + 0x1d4)) * param_3 +
       *(float *)(param_1 + 0x1d4);
  *(float *)(this + 0x1d8) =
       (*(float *)(param_2 + 0x1d8) - *(float *)(param_1 + 0x1d8)) * param_3 +
       *(float *)(param_1 + 0x1d8);
  *(float *)(this + 0x1dc) =
       (*(float *)(param_2 + 0x1dc) - *(float *)(param_1 + 0x1dc)) * param_3 +
       *(float *)(param_1 + 0x1dc);
  *(float *)(this + 0x1e0) =
       (*(float *)(param_2 + 0x1e0) - *(float *)(param_1 + 0x1e0)) * param_3 +
       *(float *)(param_1 + 0x1e0);
  *(float *)(this + 0x1ec) =
       (*(float *)(param_2 + 0x1ec) - *(float *)(param_1 + 0x1ec)) * param_3 +
       *(float *)(param_1 + 0x1ec);
  *(float *)(this + 0x1f0) =
       (*(float *)(param_2 + 0x1f0) - *(float *)(param_1 + 0x1f0)) * param_3 +
       *(float *)(param_1 + 0x1f0);
  *(float *)(this + 500) =
       (*(float *)(param_2 + 500) - *(float *)(param_1 + 500)) * param_3 + *(float *)(param_1 + 500)
  ;
  *(float *)(this + 0x1e4) =
       (*(float *)(param_2 + 0x1e4) - *(float *)(param_1 + 0x1e4)) * param_3 +
       *(float *)(param_1 + 0x1e4);
  *(float *)(this + 0x1e8) =
       (*(float *)(param_2 + 0x1e8) - *(float *)(param_1 + 0x1e8)) * param_3 +
       *(float *)(param_1 + 0x1e8);
  *(float *)(this + 0x68) =
       (*(float *)(param_2 + 0x68) - *(float *)(param_1 + 0x68)) * param_3 +
       *(float *)(param_1 + 0x68);
  *(float *)(this + 0x6c) =
       (*(float *)(param_2 + 0x6c) - *(float *)(param_1 + 0x6c)) * param_3 +
       *(float *)(param_1 + 0x6c);
  *(float *)(this + 0x70) =
       (*(float *)(param_2 + 0x70) - *(float *)(param_1 + 0x70)) * param_3 +
       *(float *)(param_1 + 0x70);
  *(float *)(this + 0x74) =
       (*(float *)(param_2 + 0x74) - *(float *)(param_1 + 0x74)) * param_3 +
       *(float *)(param_1 + 0x74);
  *(float *)(this + 0x78) =
       (*(float *)(param_2 + 0x78) - *(float *)(param_1 + 0x78)) * param_3 +
       *(float *)(param_1 + 0x78);
  *(float *)(this + 0x7c) =
       (*(float *)(param_2 + 0x7c) - *(float *)(param_1 + 0x7c)) * param_3 +
       *(float *)(param_1 + 0x7c);
  return;
}


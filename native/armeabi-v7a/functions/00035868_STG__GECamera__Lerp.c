/* 00035868 | STG::GECamera::Lerp */

/* STG::GECamera::Lerp(STG::GECamera const&, STG::GECamera const&, float) */

void __thiscall
STG::GECamera::Lerp(GECamera *this,GECamera *param_1,GECamera *param_2,float param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x1c) = uVar2;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x24) = uVar1;
  *(undefined4 *)(this + 0x2c) = uVar2;
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x34) = uVar1;
  *(undefined4 *)(this + 0x3c) = uVar2;
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  uVar2 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x48) = uVar1;
  *(undefined4 *)(this + 0x4c) = uVar2;
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  uVar1 = *(undefined4 *)(param_1 + 0x58);
  uVar2 = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = uVar1;
  *(undefined4 *)(this + 0x5c) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x60) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar2 = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = uVar1;
  uVar3 = *(undefined4 *)(param_1 + 0x74);
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x70) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(this + 0x78) = uVar1;
  *(undefined4 *)(this + 0x74) = uVar3;
  *(undefined4 *)(this + 0x7c) = uVar2;
  MMatrix::operator=((MMatrix *)(this + 0x80),(MMatrix *)(param_1 + 0x80));
  MMatrix::operator=((MMatrix *)(this + 0xc0),(MMatrix *)(param_1 + 0xc0));
  MMatrix::operator=((MMatrix *)(this + 0x100),(MMatrix *)(param_1 + 0x100));
  MMatrix::operator=((MMatrix *)(this + 0x140),(MMatrix *)(param_1 + 0x140));
  MMatrix::operator=((MMatrix *)(this + 0x180),(MMatrix *)(param_1 + 0x180));
  uVar1 = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined4 *)(this + 0x1c0) = *(undefined4 *)(param_1 + 0x1c0);
  *(undefined4 *)(this + 0x1c4) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x1cc);
  *(undefined4 *)(this + 0x1c8) = *(undefined4 *)(param_1 + 0x1c8);
  *(undefined4 *)(this + 0x1cc) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(this + 0x1d0) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(this + 0x1d4) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)(this + 0x1dc) = *(undefined4 *)(param_1 + 0x1dc);
  uVar2 = *(undefined4 *)(param_1 + 0x1e0);
  *(undefined4 *)(this + 0x1d8) = uVar1;
  *(undefined4 *)(this + 0x1e0) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x1e4);
  *(undefined4 *)(this + 0x1e8) = *(undefined4 *)(param_1 + 0x1e8);
  uVar2 = *(undefined4 *)(param_1 + 0x1f0);
  *(undefined4 *)(this + 0x1e4) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(this + 0x1f0) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 500);
  *(undefined4 *)(this + 0x1ec) = uVar1;
  *(undefined4 *)(this + 500) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x1fc);
  uVar2 = *(undefined4 *)(param_1 + 0x200);
  *(undefined4 *)(this + 0x1f8) = *(undefined4 *)(param_1 + 0x1f8);
  *(undefined4 *)(this + 0x1fc) = uVar1;
  *(undefined4 *)(this + 0x200) = uVar2;
  *(undefined4 *)(this + 0x204) = *(undefined4 *)(param_1 + 0x204);
  *(undefined4 *)(this + 0x208) = *(undefined4 *)(param_1 + 0x208);
  fVar5 = *(float *)(param_1 + 0x1c0);
  fVar4 = *(float *)(param_2 + 0x1c0);
  this[0x20c] = param_1[0x20c];
  *(float *)(this + 0x1c0) = fVar5 + (fVar4 - fVar5) * param_3;
  *(float *)(this + 0x1c4) =
       *(float *)(param_1 + 0x1c4) +
       (*(float *)(param_2 + 0x1c4) - *(float *)(param_1 + 0x1c4)) * param_3;
  *(float *)(this + 0x1c8) =
       *(float *)(param_1 + 0x1c8) +
       (*(float *)(param_2 + 0x1c8) - *(float *)(param_1 + 0x1c8)) * param_3;
  *(float *)(this + 0x1cc) =
       *(float *)(param_1 + 0x1cc) +
       (*(float *)(param_2 + 0x1cc) - *(float *)(param_1 + 0x1cc)) * param_3;
  *(float *)(this + 0x1d0) =
       *(float *)(param_1 + 0x1d0) +
       (*(float *)(param_2 + 0x1d0) - *(float *)(param_1 + 0x1d0)) * param_3;
  *(float *)(this + 0x1d4) =
       *(float *)(param_1 + 0x1d4) +
       (*(float *)(param_2 + 0x1d4) - *(float *)(param_1 + 0x1d4)) * param_3;
  *(float *)(this + 0x1d8) =
       *(float *)(param_1 + 0x1d8) +
       (*(float *)(param_2 + 0x1d8) - *(float *)(param_1 + 0x1d8)) * param_3;
  *(float *)(this + 0x1dc) =
       *(float *)(param_1 + 0x1dc) +
       (*(float *)(param_2 + 0x1dc) - *(float *)(param_1 + 0x1dc)) * param_3;
  *(float *)(this + 0x1e0) =
       *(float *)(param_1 + 0x1e0) +
       (*(float *)(param_2 + 0x1e0) - *(float *)(param_1 + 0x1e0)) * param_3;
  *(float *)(this + 0x1ec) =
       *(float *)(param_1 + 0x1ec) +
       (*(float *)(param_2 + 0x1ec) - *(float *)(param_1 + 0x1ec)) * param_3;
  *(float *)(this + 0x1f0) =
       *(float *)(param_1 + 0x1f0) +
       (*(float *)(param_2 + 0x1f0) - *(float *)(param_1 + 0x1f0)) * param_3;
  *(float *)(this + 500) =
       *(float *)(param_1 + 500) + (*(float *)(param_2 + 500) - *(float *)(param_1 + 500)) * param_3
  ;
  *(float *)(this + 0x1e4) =
       *(float *)(param_1 + 0x1e4) +
       (*(float *)(param_2 + 0x1e4) - *(float *)(param_1 + 0x1e4)) * param_3;
  *(float *)(this + 0x1e8) =
       *(float *)(param_1 + 0x1e8) +
       (*(float *)(param_2 + 0x1e8) - *(float *)(param_1 + 0x1e8)) * param_3;
  *(float *)(this + 0x68) =
       *(float *)(param_1 + 0x68) +
       (*(float *)(param_2 + 0x68) - *(float *)(param_1 + 0x68)) * param_3;
  *(float *)(this + 0x6c) =
       *(float *)(param_1 + 0x6c) +
       (*(float *)(param_2 + 0x6c) - *(float *)(param_1 + 0x6c)) * param_3;
  *(float *)(this + 0x70) =
       *(float *)(param_1 + 0x70) +
       (*(float *)(param_2 + 0x70) - *(float *)(param_1 + 0x70)) * param_3;
  *(float *)(this + 0x74) =
       *(float *)(param_1 + 0x74) +
       (*(float *)(param_2 + 0x74) - *(float *)(param_1 + 0x74)) * param_3;
  *(float *)(this + 0x78) =
       *(float *)(param_1 + 0x78) +
       (*(float *)(param_2 + 0x78) - *(float *)(param_1 + 0x78)) * param_3;
  *(float *)(this + 0x7c) =
       *(float *)(param_1 + 0x7c) +
       (*(float *)(param_2 + 0x7c) - *(float *)(param_1 + 0x7c)) * param_3;
  return;
}


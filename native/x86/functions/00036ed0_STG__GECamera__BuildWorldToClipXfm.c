/* 00036ed0 | STG::GECamera::BuildWorldToClipXfm */

/* STG::GECamera::BuildWorldToClipXfm() */

void __thiscall STG::GECamera::BuildWorldToClipXfm(GECamera *this)

{
  FUN_0002e044();
  MMatrix::Transform((MMatrix *)(this + 0x100),(MMatrix *)(this + 0xc0),(MMatrix *)(this + 0x140));
  MMatrix::ComputeInverse((MMatrix *)(this + 0x140),(MMatrix *)(this + 0x180));
  return;
}


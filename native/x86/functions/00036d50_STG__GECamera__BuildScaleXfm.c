/* 00036d50 | STG::GECamera::BuildScaleXfm */

/* STG::GECamera::BuildScaleXfm() */

void __thiscall STG::GECamera::BuildScaleXfm(GECamera *this)

{
  FUN_0002e044();
  MMatrix::MakeScaleOffset
            ((MMatrix *)(this + 0x80),(MVector3 *)(this + 0x68),(MVector3 *)(this + 0x74));
  return;
}


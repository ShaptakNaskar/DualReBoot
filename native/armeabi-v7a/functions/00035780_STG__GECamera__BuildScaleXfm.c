/* 00035780 | STG::GECamera::BuildScaleXfm */

/* STG::GECamera::BuildScaleXfm() */

void __thiscall STG::GECamera::BuildScaleXfm(GECamera *this)

{
  MMatrix::MakeScaleOffset
            ((MMatrix *)(this + 0x80),(MVector3 *)(this + 0x68),(MVector3 *)(this + 0x74));
  return;
}


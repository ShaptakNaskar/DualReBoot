/* 00037790 | STG::GECamera::ConvertScreenToClip */

/* STG::GECamera::ConvertScreenToClip(STG::MVector2 const&, STG::MVector2&) const */

void STG::GECamera::ConvertScreenToClip(MVector2 *param_1,MVector2 *param_2)

{
  FUN_0002e044();
  ConvertScreenToClip((URectangle *)param_1,param_1 + 0x1f8,param_2);
  return;
}


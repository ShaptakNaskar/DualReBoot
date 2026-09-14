/* 0003a380 | STG::GEMaterial::GetIsSuitableForMultiPassTransparency */

/* STG::GEMaterial::GetIsSuitableForMultiPassTransparency() const */

bool __thiscall STG::GEMaterial::GetIsSuitableForMultiPassTransparency(GEMaterial *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x13c);
  if (((iVar1 != 1) && (iVar1 != 4)) && (iVar1 != 2)) {
    return false;
  }
  return *(int *)(this + 0x144) == 1;
}


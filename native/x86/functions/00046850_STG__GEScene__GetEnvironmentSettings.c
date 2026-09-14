/* 00046850 | STG::GEScene::GetEnvironmentSettings */

/* STG::GEScene::GetEnvironmentSettings() const */

int __thiscall STG::GEScene::GetEnvironmentSettings(GEScene *this)

{
  int iVar1;
  int *piVar2;
  
  FUN_0002e044();
  iVar1 = GetEnvironmentIndex(this);
  piVar2 = (int *)GetTimeOfDay(this);
  return *piVar2 * 0x3c + iVar1 * 0x1e0 + *(int *)(this + 0x308);
}


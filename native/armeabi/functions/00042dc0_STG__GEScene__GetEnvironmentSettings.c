/* 00042dc0 | STG::GEScene::GetEnvironmentSettings */

/* STG::GEScene::GetEnvironmentSettings() const */

int __thiscall STG::GEScene::GetEnvironmentSettings(GEScene *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = GetEnvironmentIndex(this);
  iVar3 = *(int *)(this + 0x314);
  piVar2 = (int *)GetTimeOfDay(this);
  return *piVar2 * 0x3c + iVar1 * 0x1e0 + iVar3;
}


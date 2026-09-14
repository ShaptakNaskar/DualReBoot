/* 00050520 | STG::GETexture::LoadSelf */

/* STG::GETexture::LoadSelf(STG::FFileBase const*) */

undefined1 __thiscall STG::GETexture::LoadSelf(GETexture *this,FFileBase *param_1)

{
  uchar *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uchar *puVar5;
  undefined1 local_25;
  uint local_24;
  uchar *local_20 [4];
  
  FUN_0002e044();
  if (param_1 == (FFileBase *)0x0) {
    return 0;
  }
  iVar3 = (**(code **)(*(int *)param_1 + 8))(param_1);
  uVar4 = FFileBase::GetFileSize(param_1);
  if (iVar3 == 1) {
    local_20[0] = (uchar *)0x0;
    cVar2 = FFileBase::ReadDirect(param_1,local_20,uVar4);
    if (cVar2 == '\0') {
      return 0;
    }
    puVar5 = (uchar *)0x0;
    local_24 = 0;
    puVar1 = local_20[0];
  }
  else {
    puVar5 = (uchar *)0x0;
    local_24 = 0;
    if (uVar4 != 0) {
      puVar5 = operator_new__(uVar4);
      local_24 = uVar4;
    }
    local_20[0] = (uchar *)0x0;
    cVar2 = FFileBase::Read(param_1,puVar5,uVar4);
    local_25 = 0;
    puVar1 = puVar5;
    if (cVar2 == '\0') goto LAB_000505b0;
  }
  local_20[0] = puVar1;
  local_25 = LoadDirect(this,local_20[0]);
LAB_000505b0:
  if ((local_24 != 0) && (puVar5 != (uchar *)0x0)) {
    operator_delete__(puVar5);
  }
  return local_25;
}


/* 00048474 | STG::GETexture::LoadSelf */

/* STG::GETexture::LoadSelf(STG::FFileBase const*) */

undefined4 __thiscall STG::GETexture::LoadSelf(GETexture *this,FFileBase *param_1)

{
  uchar *puVar1;
  int iVar2;
  uint uVar3;
  uchar *puVar4;
  undefined4 uVar5;
  uchar *local_1c;
  
  if (param_1 == (FFileBase *)0x0) {
    return 0;
  }
  iVar2 = (**(code **)(*(int *)param_1 + 8))(param_1);
  uVar3 = FFileBase::GetFileSize();
  if (iVar2 == 1) {
    puVar4 = (uchar *)0x0;
    local_1c = (uchar *)0x0;
    iVar2 = FFileBase::ReadDirect(param_1,&local_1c,uVar3);
    if (iVar2 == 0) {
      return 0;
    }
    uVar3 = 0;
    puVar1 = local_1c;
  }
  else {
    if (uVar3 == 0) {
      puVar4 = (uchar *)0x0;
    }
    else {
      puVar4 = operator_new__(uVar3);
    }
    local_1c = (uchar *)0x0;
    iVar2 = FFileBase::Read(param_1,puVar4,uVar3);
    uVar5 = 0;
    puVar1 = puVar4;
    if (iVar2 == 0) goto LAB_000484ec;
  }
  local_1c = puVar1;
  uVar5 = LoadDirect(this,local_1c);
LAB_000484ec:
  if ((uVar3 != 0) && (puVar4 != (uchar *)0x0)) {
    operator_delete__(puVar4);
  }
  return uVar5;
}


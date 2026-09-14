/* 0002ede8 | STG::FFileBase::ReadAll */

/* STG::FFileBase::ReadAll(unsigned char*&, unsigned long&) const */

undefined4 __thiscall STG::FFileBase::ReadAll(FFileBase *this,uchar **param_1,ulong *param_2)

{
  uint uVar1;
  uchar *puVar2;
  int iVar3;
  ulong uVar4;
  
  uVar1 = GetFileSize();
  *param_2 = uVar1;
  if (uVar1 == 0) {
    *param_1 = (uchar *)0x0;
    *param_2 = 0;
    return 0;
  }
  puVar2 = operator_new__(uVar1);
  uVar4 = *param_2;
  *param_1 = puVar2;
  iVar3 = Read(this,puVar2,uVar4);
  if (iVar3 != 0) {
    return 1;
  }
  if (*param_1 != (uchar *)0x0) {
    operator_delete__(*param_1);
  }
  *param_1 = (uchar *)0x0;
  *param_2 = 0;
  return 0;
}


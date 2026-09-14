/* 0002e660 | STG::FFileBase::ReadAll */

/* STG::FFileBase::ReadAll(unsigned char*&, unsigned long&) const */

undefined4 __thiscall STG::FFileBase::ReadAll(FFileBase *this,uchar **param_1,ulong *param_2)

{
  char cVar1;
  uint uVar2;
  uchar *puVar3;
  
  FUN_0002e044();
  uVar2 = GetFileSize(this);
  *param_2 = uVar2;
  if (uVar2 != 0) {
    puVar3 = operator_new__(uVar2);
    *param_1 = puVar3;
    cVar1 = Read(this,puVar3,*param_2);
    if (cVar1 != '\0') {
      return 1;
    }
    if (*param_1 != (uchar *)0x0) {
      operator_delete__(*param_1);
    }
  }
  *param_1 = (uchar *)0x0;
  *param_2 = 0;
  return 0;
}


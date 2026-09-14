/* 0007c100 | StringHelperBase<STG::UStringBase<unsigned_short,unsigned_short>,unsigned_short>::ReleaseString */

/* StringHelperBase<STG::UStringBase<unsigned short, unsigned short>, unsigned
   short>::ReleaseString() */

void __thiscall
StringHelperBase<STG::UStringBase<unsigned_short,unsigned_short>,unsigned_short>::ReleaseString
          (StringHelperBase<STG::UStringBase<unsigned_short,unsigned_short>,unsigned_short> *this)

{
  int *piVar1;
  
  piVar1 = *(int **)this;
  if ((piVar1 != (int *)0x0) && (*(int *)(this + 4) != 0)) {
    (**(code **)(*piVar1 + 0x298))(piVar1,*(int *)(this + 4),*(undefined4 *)(this + 8));
  }
  return;
}


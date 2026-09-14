/* 0007c0c0 | StringHelperBase<STG::UStringBase<char,int>,char>::ReleaseString */

/* StringHelperBase<STG::UStringBase<char, int>, char>::ReleaseString() */

void __thiscall
StringHelperBase<STG::UStringBase<char,int>,char>::ReleaseString
          (StringHelperBase<STG::UStringBase<char,int>,char> *this)

{
  int *piVar1;
  
  piVar1 = *(int **)this;
  if ((piVar1 != (int *)0x0) && (*(int *)(this + 4) != 0)) {
    (**(code **)(*piVar1 + 0x2a8))(piVar1,*(int *)(this + 4),*(undefined4 *)(this + 8));
  }
  return;
}


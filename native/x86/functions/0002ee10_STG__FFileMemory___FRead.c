/* 0002ee10 | STG::FFileMemory::_FRead */

/* STG::FFileMemory::_FRead(unsigned char*, unsigned long, unsigned long) const */

size_t __thiscall
STG::FFileMemory::_FRead(FFileMemory *this,uchar *param_1,ulong param_2,ulong param_3)

{
  size_t __n;
  
  __n = param_3 * param_2;
  FUN_0002e044();
  if (__n != 0) {
    memcpy(param_1,(void *)(*(int *)(this + 0x30) + *(int *)(this + 0x38)),__n);
    *(size_t *)(this + 0x38) = *(int *)(this + 0x38) + __n;
  }
  return __n;
}


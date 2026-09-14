/* 0005a230 | std::string::_M_compute_next_size */

/* std::string::_M_compute_next_size(unsigned int) */

uint __thiscall std::string::_M_compute_next_size(string *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(int *)(this + 0x10) - *(int *)(this + 0x14);
  if (-uVar2 - 2 < param_1) {
                    /* WARNING: Subroutine does not return */
    __stl_throw_length_error((char *)((int)&DAT_0005a28c + DAT_0005a28c));
  }
  uVar1 = uVar2;
  if (uVar2 < param_1) {
    uVar1 = param_1;
  }
  uVar1 = uVar2 + 1 + uVar1;
  if (uVar1 == 0xffffffff) {
    return 0xfffffffe;
  }
  if (uVar1 < uVar2) {
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}


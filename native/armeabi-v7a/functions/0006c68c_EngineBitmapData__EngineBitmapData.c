/* 0006c68c | EngineBitmapData::EngineBitmapData */

/* EngineBitmapData::EngineBitmapData(char const*, unsigned char*, unsigned long, unsigned short,
   unsigned short) */

EngineBitmapData * __thiscall
EngineBitmapData::EngineBitmapData
          (EngineBitmapData *this,char *param_1,uchar *param_2,ulong param_3,ushort param_4,
          ushort param_5)

{
  size_t sVar1;
  uint uVar2;
  void *pvVar3;
  EngineBitmapData *__dest;
  size_t __n;
  uint local_2c [2];
  
  __dest = this + 4;
  *(int *)this = *(int *)(DAT_0006c7c4 + 0x6c69c) + 8;
  *(EngineBitmapData **)(this + 0x14) = __dest;
  *(EngineBitmapData **)(this + 0x18) = __dest;
  sVar1 = strlen(param_1);
  __n = (int)(param_1 + sVar1) - (int)param_1;
  uVar2 = __n + 1;
  if (uVar2 != 0) {
    if (0x10 < uVar2) {
      local_2c[0] = uVar2;
      if (uVar2 < 0x81) {
        __dest = (EngineBitmapData *)std::__node_alloc::_M_allocate(local_2c);
      }
      else {
        __dest = operator_new(uVar2);
      }
      *(EngineBitmapData **)(this + 0x18) = __dest;
      *(EngineBitmapData **)(this + 0x14) = __dest;
      *(EngineBitmapData **)(this + 4) = __dest + local_2c[0];
    }
    if (param_1 != param_1 + sVar1) {
      pvVar3 = memcpy(__dest,param_1,__n);
      __dest = (EngineBitmapData *)((int)pvVar3 + __n);
    }
    *(EngineBitmapData **)(this + 0x14) = __dest;
    *__dest = (EngineBitmapData)0x0;
    *(undefined4 *)(this + 0x1c) = 0;
    *(undefined4 *)(this + 0x20) = 0;
    *(undefined4 *)(this + 0x24) = 0;
    if (((param_2 != (uchar *)0x0 && param_1 != (char *)0x0) && (param_4 != 0 && param_3 != 0)) &&
       (param_5 != 0)) {
      *(ulong *)(this + 0x20) = param_3;
      *(ushort *)(this + 0x24) = param_4;
      *(ushort *)(this + 0x26) = param_5;
      pvVar3 = operator_new__(param_3);
      *(void **)(this + 0x1c) = pvVar3;
      memcpy(pvVar3,param_2,*(size_t *)(this + 0x20));
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  std::__stl_throw_length_error((char *)(DAT_0006c7c8 + 0x6c788));
}


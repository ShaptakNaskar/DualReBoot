/* 0007258c | EngineInterfaceImpl::AddBitmapData */

/* EngineInterfaceImpl::AddBitmapData(int, _jstring*, _jobject*, int, int, int) const */

void __thiscall
EngineInterfaceImpl::AddBitmapData
          (EngineInterfaceImpl *this,int param_1,_jstring *param_2,_jobject *param_3,int param_4,
          int param_5,int param_6)

{
  undefined4 uVar1;
  uchar *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_54;
  _jstring *local_50;
  undefined4 local_4c;
  int local_48;
  uint local_44 [4];
  uint *local_34;
  uint *local_30;
  int local_2c;
  
  piVar3 = *(int **)(DAT_000726e8 + 0x725a4);
  local_2c = *piVar3;
  uVar1 = 0;
  if (param_1 != 0) {
    iVar4 = param_6;
    if (0 < param_6) {
      iVar4 = param_5;
    }
    if (iVar4 < 1) {
      uVar1 = 0;
    }
    else {
      puVar2 = (uchar *)(**(code **)(**(int **)(this + 8) + 0x398))(*(int **)(this + 8),param_3);
      iVar4 = 0;
      if (puVar2 != (uchar *)0x0) {
        iVar4 = param_4;
      }
      if ((puVar2 == (uchar *)0x0 || param_4 == 0) || iVar4 < 0) {
        uVar1 = 0;
      }
      else {
        local_54 = *(undefined4 *)(this + 8);
        iVar4 = *(int *)(DAT_000726ec + 0x7262c) + 8;
        local_4c = 0;
        local_44[0] = local_44[0] & 0xffffff00;
        local_50 = param_2;
        local_48 = iVar4;
        local_34 = local_44;
        local_30 = local_44;
        StringHelperBase<STG::UStringBase<char,int>,char>::AcquireString((int)&local_54);
        uVar1 = EngineInterface::AddBitmapData
                          ((EngineInterface *)param_1,(char *)local_30,puVar2,param_4,
                           (ushort)param_5,(ushort)param_6);
        StringHelperBase<STG::UStringBase<char,int>,char>::ReleaseString();
        local_48 = iVar4;
        if ((local_30 != local_44) && (local_30 != (uint *)0x0)) {
          if (local_44[0] - (int)local_30 < 0x81) {
            std::__node_alloc::_M_deallocate(local_30,local_44[0] - (int)local_30);
          }
          else {
            operator_delete(local_30);
          }
        }
      }
    }
  }
  if (local_2c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}


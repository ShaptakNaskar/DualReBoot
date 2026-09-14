/* 0007dc30 | EngineInterfaceImpl::AddBitmapData */

/* EngineInterfaceImpl::AddBitmapData(int, _jstring*, _jobject*, int, int, int) const */

undefined1 __thiscall
EngineInterfaceImpl::AddBitmapData
          (EngineInterfaceImpl *this,int param_1,_jstring *param_2,_jobject *param_3,int param_4,
          int param_5,int param_6)

{
  int *piVar1;
  undefined1 uVar2;
  uchar *puVar3;
  int iVar4;
  int unaff_EBX;
  undefined4 local_40;
  _jstring *local_3c;
  undefined4 local_38;
  int local_34;
  uint local_30 [4];
  uint *local_20;
  uint *local_1c;
  int local_14;
  
  FUN_0002e044();
  piVar1 = *(int **)("_ZN3STG9GETexture8GetPixelERKNS_13GEPixelFormat7EFormatEPKhRhS7_S7_S7_" +
                    unaff_EBX + 0x33);
  local_14 = *piVar1;
  uVar2 = 0;
  if (param_1 != 0) {
    if ((0 < param_6) && (0 < param_5)) {
      puVar3 = (uchar *)(**(code **)(**(int **)(this + 8) + 0x398))(*(int **)(this + 8),param_3);
      if ((puVar3 != (uchar *)0x0) && (0 < param_4)) {
        local_40 = *(undefined4 *)(this + 8);
        local_3c = param_2;
        iVar4 = *(int *)("_ZN3STG9GETexture8GetPixelERKNS_13GEPixelFormat7EFormatEPKhRhS7_S7_S7_" +
                        unaff_EBX + 0x37) + 8;
        local_38 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        local_34 = iVar4;
        local_20 = local_30;
        local_1c = local_30;
        StringHelperBase<STG::UStringBase<char,int>,char>::AcquireString((int)&local_40);
        uVar2 = EngineInterface::AddBitmapData
                          ((EngineInterface *)param_1,(char *)local_1c,puVar3,param_4,
                           (ushort)param_5,(ushort)param_6);
        StringHelperBase<STG::UStringBase<char,int>,char>::ReleaseString
                  ((StringHelperBase<STG::UStringBase<char,int>,char> *)&local_40);
        local_34 = iVar4;
        if ((local_1c != local_30) && (local_1c != (uint *)0x0)) {
          if (local_30[0] - (int)local_1c < 0x81) {
            std::__node_alloc::_M_deallocate(local_1c,local_30[0] - (int)local_1c);
          }
          else {
            operator_delete(local_1c);
          }
        }
        goto LAB_0007dc7d;
      }
    }
    uVar2 = 0;
  }
LAB_0007dc7d:
  if (local_14 == *piVar1) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}


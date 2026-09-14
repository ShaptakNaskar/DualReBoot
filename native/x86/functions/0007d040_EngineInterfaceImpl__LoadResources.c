/* 0007d040 | EngineInterfaceImpl::LoadResources */

/* EngineInterfaceImpl::LoadResources(int, _jobject*) const */

EngineInterface * __thiscall
EngineInterfaceImpl::LoadResources(EngineInterfaceImpl *this,int param_1,_jobject *param_2)

{
  char cVar1;
  EngineInterface *local_20 [3];
  FFileManagerScoped local_14 [8];
  
  local_20[0] = (EngineInterface *)FUN_0002e044();
  if (local_20[0] != (EngineInterface *)0x0) {
    STG::FFileManagerScoped::FFileManagerScoped(local_14,*(_JNIEnv **)(this + 8),param_2);
    cVar1 = STG::FFileManagerScoped::IsValid();
    if ((cVar1 != '\0') && (local_20[0][0xc] != (EngineInterface)0x0)) {
      EngineInterface::Activate(local_20[0]);
      (**(code **)(**(int **)(local_20[0] + 8) + 8))(*(int **)(local_20[0] + 8));
      EngineInterface::Deactivate(local_20[0]);
      EngineInterface::ReserveBitmapData(local_20[0],0);
      STG::FFileManagerScoped::~FFileManagerScoped(local_14);
      return local_20[0];
    }
    STG::FFileManagerScoped::~FFileManagerScoped(local_14);
  }
  EngineInterface::Deallocate(local_20);
  return local_20[0];
}


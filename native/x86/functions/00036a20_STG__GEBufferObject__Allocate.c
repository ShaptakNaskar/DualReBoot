/* 00036a20 | STG::GEBufferObject::Allocate */

/* STG::GEBufferObject::Allocate(unsigned long) */

undefined1 STG::GEBufferObject::Allocate(ulong param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_0002e044();
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    return *(undefined1 *)(param_1 + 0x18);
  }
  GERendererAPI::GL_GenBuffer((ulong *)(param_1 + 0x10));
  Bind((GEBufferObject *)param_1);
  GERendererAPI::GL_BufferData
            (*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
             *(undefined4 *)(param_1 + 0xc));
  Unbind((GEBufferObject *)param_1);
  bVar2 = *(int *)(param_1 + 0x10) != 0;
  *(bool *)(param_1 + 0x18) = bVar2;
  return bVar2;
}


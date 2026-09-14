/* 0003dae0 | STG::GERendererAPI::GL_VertexDataEnable */

/* STG::GERendererAPI::GL_VertexDataEnable(STG::GEVertexBuffer::EUsage, STG::GEVertexBuffer::EType,
   unsigned long, unsigned long, void const*) */

void STG::GERendererAPI::GL_VertexDataEnable
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(DAT_0003db54 + param_1 * 4 + 0x3dcac);
  uVar2 = param_4;
  if (iVar1 != 0x500) {
    glClientActiveTexture(iVar1);
  }
  iVar1 = DAT_0003db58 + 0x3db24;
  glEnableClientState(*(undefined4 *)(iVar1 + param_1 * 4 + 0x1d8));
  (**(code **)(DAT_0003db5c + 0x3db40 + param_1 * 4))
            (param_3,*(undefined4 *)(iVar1 + param_2 * 4 + 500),param_4,param_5,uVar2);
  return;
}


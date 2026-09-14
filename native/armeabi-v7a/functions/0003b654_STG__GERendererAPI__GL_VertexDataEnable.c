/* 0003b654 | STG::GERendererAPI::GL_VertexDataEnable */

/* STG::GERendererAPI::GL_VertexDataEnable(STG::GEVertexBuffer::EUsage, STG::GEVertexBuffer::EType,
   unsigned long, unsigned long, void const*) */

void STG::GERendererAPI::GL_VertexDataEnable
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = param_4;
  if (*(int *)(DAT_0003b6c4 + param_1 * 4 + 0x3b820) != 0x500) {
    glClientActiveTexture();
  }
  iVar1 = DAT_0003b6c8 + 0x3b694;
  glEnableClientState(*(undefined4 *)(iVar1 + param_1 * 4 + 0x1d8));
  (**(code **)(DAT_0003b6cc + 0x3b6b4 + param_1 * 4))
            (param_3,*(undefined4 *)(iVar1 + param_2 * 4 + 500),param_4,param_5,uVar2);
  return;
}


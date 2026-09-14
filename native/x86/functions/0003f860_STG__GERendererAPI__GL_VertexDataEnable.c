/* 0003f860 | STG::GERendererAPI::GL_VertexDataEnable */

/* STG::GERendererAPI::GL_VertexDataEnable(STG::GEVertexBuffer::EUsage, STG::GEVertexBuffer::EType,
   unsigned long, unsigned long, void const*) */

void STG::GERendererAPI::GL_VertexDataEnable
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  iVar1 = *(int *)(unaff_EBX + 0x4878b + param_1 * 4);
  if (iVar1 != 0x500) {
    glClientActiveTexture(iVar1);
  }
  glEnableClientState(*(undefined4 *)(unaff_EBX + 0x487a7 + param_1 * 4));
  (**(code **)(unaff_EBX + 0x5afcf + param_1 * 4))
            (param_3,*(undefined4 *)(unaff_EBX + 0x487c3 + param_2 * 4),param_4,param_5);
  return;
}


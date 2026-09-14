/* 0003c53c | STG::GERendererAPI::GL_QueryCapabilities */

/* STG::GERendererAPI::GL_QueryCapabilities(STG::GERendererAPI::Capabilities&) */

void STG::GERendererAPI::GL_QueryCapabilities(Capabilities *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)param_1 = 0;
  uVar1 = GL_QueryAnisotropySupport();
  *(undefined4 *)param_1 = uVar1;
  return;
}


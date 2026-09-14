/* 0006cf58 | EngineInterface::Deactivate */

/* EngineInterface::Deactivate() */

void __thiscall EngineInterface::Deactivate(EngineInterface *this)

{
  if ((EngineInterface *)**(undefined4 **)(DAT_0006cf74 + 0x6cf64) == this) {
    **(undefined4 **)(DAT_0006cf74 + 0x6cf64) = 0;
  }
  return;
}


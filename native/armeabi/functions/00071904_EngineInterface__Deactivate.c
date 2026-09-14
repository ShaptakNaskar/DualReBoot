/* 00071904 | EngineInterface::Deactivate */

/* EngineInterface::Deactivate() */

void __thiscall EngineInterface::Deactivate(EngineInterface *this)

{
  if ((EngineInterface *)**(undefined4 **)(DAT_00071920 + 0x71910) == this) {
    **(undefined4 **)(DAT_00071920 + 0x71910) = 0;
  }
  return;
}


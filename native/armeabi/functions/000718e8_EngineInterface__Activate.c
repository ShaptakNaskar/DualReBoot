/* 000718e8 | EngineInterface::Activate */

/* EngineInterface::Activate() */

void __thiscall EngineInterface::Activate(EngineInterface *this)

{
  if (**(int **)(DAT_00071900 + 0x718f4) == 0) {
    **(int **)(DAT_00071900 + 0x718f4) = (int)this;
  }
  return;
}


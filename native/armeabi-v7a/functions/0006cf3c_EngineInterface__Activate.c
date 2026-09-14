/* 0006cf3c | EngineInterface::Activate */

/* EngineInterface::Activate() */

void __thiscall EngineInterface::Activate(EngineInterface *this)

{
  if (**(int **)(DAT_0006cf54 + 0x6cf48) == 0) {
    **(int **)(DAT_0006cf54 + 0x6cf48) = (int)this;
  }
  return;
}


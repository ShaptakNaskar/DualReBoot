/* 0004ddb0 | STG::GEVertexBuffer::SharesAnyComponents */

/* STG::GEVertexBuffer::SharesAnyComponents(STG::GEVertexBuffer const&) const */

undefined4 __thiscall
STG::GEVertexBuffer::SharesAnyComponents(GEVertexBuffer *this,GEVertexBuffer *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_0002e044();
  if (*(int *)(this + 0xa4) != 0) {
    uVar2 = 0;
    do {
      uVar1 = HasComponent(param_1,*(undefined4 *)(this + uVar2 * 4 + 0x88));
      if ((char)uVar1 != '\0') {
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(this + 0xa4));
  }
  return uVar1;
}


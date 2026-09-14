/* 0006b0f0 | STG::UTime::~UTime */

/* STG::UTime::~UTime() */

void __thiscall STG::UTime::~UTime(UTime *this)

{
  FUN_0002e044();
  ~UTime(this);
  operator_delete(this);
  return;
}


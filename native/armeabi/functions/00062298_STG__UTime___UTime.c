/* 00062298 | STG::UTime::~UTime */

/* STG::UTime::~UTime() */

UTime * __thiscall STG::UTime::~UTime(UTime *this)

{
  ~UTime(this);
  operator_delete(this);
  return this;
}


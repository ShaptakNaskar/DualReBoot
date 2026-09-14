/* 00034f28 | STG::FLog::~FLog */

/* STG::FLog::~FLog() */

FLog * __thiscall STG::FLog::~FLog(FLog *this)

{
  ~FLog(this);
  operator_delete(this);
  return this;
}


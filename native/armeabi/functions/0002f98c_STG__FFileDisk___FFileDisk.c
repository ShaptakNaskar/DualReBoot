/* 0002f98c | STG::FFileDisk::~FFileDisk */

/* STG::FFileDisk::~FFileDisk() */

FFileDisk * __thiscall STG::FFileDisk::~FFileDisk(FFileDisk *this)

{
  ~FFileDisk(this);
  operator_delete(this);
  return this;
}


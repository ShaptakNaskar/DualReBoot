/* 00059650 | STG::MMatrix::Scale */

/* STG::MMatrix::Scale(float, float, float) */

void __thiscall STG::MMatrix::Scale(MMatrix *this,float param_1,float param_2,float param_3)

{
  *(ulonglong *)(this + 0x10) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(this + 0x10) >> 0x20) * param_2,
                (float)*(undefined8 *)(this + 0x10) * param_2);
  *(ulonglong *)(this + 0x18) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(this + 0x18) >> 0x20) * param_2,
                (float)*(undefined8 *)(this + 0x18) * param_2);
  *(ulonglong *)(this + 0x20) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(this + 0x20) >> 0x20) * param_3,
                (float)*(undefined8 *)(this + 0x20) * param_3);
  *(ulonglong *)(this + 0x28) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(this + 0x28) >> 0x20) * param_3,
                (float)*(undefined8 *)(this + 0x28) * param_3);
  *(ulonglong *)this =
       CONCAT44((float)((ulonglong)*(undefined8 *)this >> 0x20) * param_1,
                (float)*(undefined8 *)this * param_1);
  *(ulonglong *)(this + 8) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(this + 8) >> 0x20) * param_1,
                (float)*(undefined8 *)(this + 8) * param_1);
  return;
}


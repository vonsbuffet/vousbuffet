#ifndef CpuBite_H
#define CpuBite_H

#include "VBCc.h"

class CpuCoul;

class CpuBite{
public:

    void Ce();
    void Be(CpuCoul *_cpuCoul, float *&_ctepF);
    void Vee(CpuCoul *_cpuCoul, float *&_ctepF);
    void Pec();

    int64_t VB = 0;
};

#endif //CpuBite_H

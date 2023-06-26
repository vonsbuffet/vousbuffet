#ifndef CpuKlok_H
#define CpuKlok_H

#include "time.h"
#include "VBCc.h"

class CpuCoul;

class CpuKlok{
public:

    void Ce();
    void Be(CpuCoul *_cpuCoul, float *&_ctepF);
    void Vee(CpuCoul *_cpuCoul, float *&_ctepF);
    void Pec();

    int64_t VB;
    struct timespec before;
    struct timespec now;
};


#endif //CpuKlok_H

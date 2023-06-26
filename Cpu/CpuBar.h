#ifndef CpuBar_H
#define CpuBar_H

#include "VBCc.h"

class CpuCoul;
class GpuUne;

class CpuBar{
public:

    void Ce();
    void Be(CpuCoul *_cpuCoul, float *&_ctepF);
    void Vee(CpuCoul *_cpuCoul, float *&_ctepF);
    void Pec();

    int64_t VB;
    char *pointC;
    int64_t limitC;
    GpuUne *gpuUne;
    uint64_t bindPointC;
};

#endif //CpuBar_H

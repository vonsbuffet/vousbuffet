#ifndef GpuCpuKomaBag_H
#define GpuCpuKomaBag_H

#include "VBCc.h"

class CpuCoul;

class GpuCpuKomaBag{
public:

    void Ce();
    void Be(CpuCoul *_cpuCoul, float *&_ctepF);
    void Vee(CpuCoul *_cpuCoul, float *&_ctepF);
    void Pec();

    int64_t VB;
    VkDevice device;
    uint32_t fenceLimit;
    VkFence *fencec;
};

#endif //GpuCpuKomaBag_H

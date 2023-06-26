#ifndef GpuLink_H
#define GpuLink_H

#include "VBCc.h"

class CpuCoul;

class GpuLink{
public:

    void Ce();
    void Be(CpuCoul *_cpuCoul, float *&_ctepF);
    void Vee(CpuCoul *_cpuCoul, float *&_ctepF);
    void Pec();

    int64_t VB;
    VkDevice device;
    VkMappedMemoryRange *mappedMemoryRangec;
};

#endif //GpuLink_H

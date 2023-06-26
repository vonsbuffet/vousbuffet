#ifndef GpuUne_H
#define GpuUne_H

#include "VBCc.h"

class CpuCoul;

class GpuUne{
public:

    void Ce();
    void Be(CpuCoul *_cpuCoul, float *&_ctepF);
    void Vee(CpuCoul *_cpuCoul, float *&_ctepF);
    void Pec();

    int64_t VB;
    VkDevice device;
    VkBuffer buffer;
    VkMemoryRequirements memoryRequirements;
    uint32_t *qewViBPointc;
    VkDeviceMemory deviceMemory;
    uint64_t bindPointC;
};

#endif //GpuUne_H

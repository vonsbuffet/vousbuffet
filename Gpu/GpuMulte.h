#ifndef GpuMulte_H
#define GpuMulte_H

#include "VBCc.h"

class CpuCoul;

class GpuMulte{
public:

    void Ce();
    void Be(CpuCoul *_cpuCoul, float *&_ctepF);
    void Vee(CpuCoul *_cpuCoul, float *&_ctepF);
    void Pec();

    int64_t VB;
    VkDevice device;
    VkBuffer buffer;
    VkImage image;
    VkMemoryRequirements memoryRequirements;
    uint32_t *qewViBPointc;
    VkDeviceMemory deviceMemory;
    uint64_t bindPointC;
};

#endif //GpuMulte_H

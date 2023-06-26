#ifndef GpuKomaBag_H
#define GpuKomaBag_H

#include "VBCc.h"

class CpuCoul;

class GpuKomaBag {
public:

    void Ce();
    void Be(CpuCoul *_cpuCoul, float *&_ctepF);
    void Vee(CpuCoul *_cpuCoul, float *&_ctepF);
    void Pec();

    int64_t VB;
    VkDevice device;
    uint32_t semaphoreLimit;
    VkSemaphore *semaphorec;
    VkPipelineStageFlags *gpuGnWaitDstStageMaskc;
};
#endif //GpuKomaBag_H

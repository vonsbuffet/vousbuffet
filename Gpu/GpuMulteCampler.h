#ifndef GpuMulteCampler_H
#define GpuMulteCampler_H

#include "VBCc.h"

class CpuCoul;

class GpuMulteCampler {
public:

    void Ce();
    void Be(CpuCoul *_cpuCoul, float *&_ctepF);
    void Vee(CpuCoul *_cpuCoul, float *&_ctepF);
    void Pec();

    int64_t VB;
    VkDevice device;
    VkSampler sampler;
};

#endif //GpuMulteCampler_H

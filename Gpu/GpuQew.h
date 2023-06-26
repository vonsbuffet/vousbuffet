#ifndef GpuQew_H
#define GpuQew_H

#include "VBCc.h"

class CpuCoul;

class GpuQew{
public:

    void Ce();
    void Be(CpuCoul *_cpuCoul, float *&_ctepF);
    void Vee(CpuCoul *_cpuCoul, float *&_ctepF);
    void Pec();

    int64_t VB;
    VkDevice device;
    VkQueue queue;
    uint32_t submitInfoLimit;
    VkSubmitInfo *submitInfoc;
    VkFence fence;
};

#endif //GpuQew_H

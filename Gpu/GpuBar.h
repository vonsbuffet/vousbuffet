#ifndef GpuBar_H
#define GpuBar_H

#include "VBCc.h"

class CpuCoul;

class GpuBar{
public:

    void Ce();
    void Be(CpuCoul *_cpuCoul, float *&_ctepF);
    void Vee(CpuCoul *_cpuCoul, float *&_ctepF);
    void Pec();

    int64_t VB;
    VkDevice device;
    VkDeviceMemory deviceMemory;
    int64_t limitC;
    void **viBPointc;
    float *viBc;
};

#endif //GpuBar_H

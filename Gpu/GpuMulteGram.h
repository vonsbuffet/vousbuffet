#ifndef GpuMulteGram_H
#define GpuMulteGram_H

#include "VBCc.h"

class CpuCoul;

class GpuMulteGram{
public:

    void Ce();
    void Be(CpuCoul *_cpuCoul, float *&_ctepF);
    void Vee(CpuCoul *_cpuCoul, float *&_ctepF);
    void Pec();

    int64_t VB;
    VkDevice device;
    VkImageView imageView;
};

#endif //GpuMulteGram_H

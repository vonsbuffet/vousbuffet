#ifndef GpuUneGram_H
#define GpuUneGram_H

#include "VBCc.h"

class CpuCoul;

class GpuUneGram{
public:

    void Ce();
    void Be(CpuCoul *_cpuCoul, float *&_ctepF);
    void Vee(CpuCoul *_cpuCoul, float *&_ctepF);
    void Pec();

    int64_t VB;
    VkDevice device;
    VkBufferView bufferView;
};

#endif //GpuUneGram_H

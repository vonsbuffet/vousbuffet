#ifndef GpuBarGramBeGram_H
#define GpuBarGramBeGram_H

#include "VBCc.h"

class CpuCoul;

class GpuBarGramBeGram{
public:

    void Ce();
    void Be(CpuCoul *_cpuCoul, float *&_ctepF);
    void Vee(CpuCoul *_cpuCoul, float *&_ctepF);
    void Pec();

    int64_t VB;
    VkDevice device;
    VkDescriptorSetLayoutBinding *descriptorSetLayoutBindingc;
    VkDescriptorSetLayout descriptorSetLayout;
};

#endif //GpuBarGramBeGram_H

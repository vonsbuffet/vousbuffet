#ifndef GpuKeGramBeGram_H
#define GpuKeGramBeGram_H

#include "VBCc.h"

class CpuCoul;

class GpuBarGramBeGram{
public:

    void Pec();
    void Ce();
    void Be(CpuCoul *_cpuCoul, float *&_ctepF);
    void Vee(CpuCoul *_cpuCoul, float *&_ctepF);

    int64_t VB;
    VkDevice device;
    VkDescriptorSetLayoutBinding *descriptorSetLayoutBindingc;
    VkDescriptorSetLayout descriptorSetLayout;
};

#endif //GpuKeGramBeGram_H

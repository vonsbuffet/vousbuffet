#ifndef GpuGramBeGram_H
#define GpuGramBeGram_H

#include "VBCc.h"

class CpuCoul;

class GpuGramBeGram{
public:

    void Ce();
    void Be(CpuCoul *_cpuCoul, float *&_ctepF);
    void Vee(CpuCoul *_cpuCoul, float *&_ctepF);
    void Pec();

    int64_t VB;
    VkDevice device;
    VkPushConstantRange *pushConstantRangec;
    VkDescriptorSetLayout *descriptorSetLayoutc;
    VkPipelineLayout pipelineLayout;
};

#endif //GpuGramBeGram_H

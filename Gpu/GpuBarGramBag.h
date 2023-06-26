#ifndef GpuBarGramBag_H
#define GpuBarGramBag_H

#include "VBCc.h"

class CpuCoul;

class GpuBarGramBag{
public:

    void Ce();
    void Be(CpuCoul *_cpuCoul, float *&_ctepF);
    void Vee(CpuCoul *_cpuCoul, float *&_ctepF);
    void Pec();

    int64_t VB;
    VkDevice device;
    VkDescriptorPool descriptorPool;
    VkDescriptorPoolSize* descriptorPoolSizec;
    uint32_t descriptorSetLimit;
    VkDescriptorSet *descriptorSetc;
    VkDescriptorSetLayout *descriptorSetLayoutc;
    uint32_t writeDescriptorSetLimit;
    VkWriteDescriptorSet *writeDescriptorSetc;
    VkCopyDescriptorSet *copyDescriptorSetc;
};

#endif //GpuBarGramBag_H

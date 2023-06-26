#ifndef GpuGnBag_H
#define GpuGnBag_H

#include "VBCc.h"

class CpuCoul;
class Gpu;

extern float copyBufferViB;
extern float moveBufferViB;
extern float dispatchViB;
extern float dispatchIndirectViB;
extern float pushConstantViB;
extern float bindPipelineViB;
extern float bindDescriptorSetViB;
extern float clearColorImageViB;
extern float pipelineBarrierViB;
extern float executeCommandViB;
class GpuGnBag{
public:

    void Ce();
    void Be(CpuCoul *_cpuCoul, float *&_ctepF);
    void Vee(CpuCoul *_cpuCoul, float *&_ctepF);
    void Pec();

    int64_t VB;
    Gpu *gpu;
    VkDevice device;
    VkCommandPool commandPool;
    uint32_t commandBufferLimit;
    VkCommandBuffer *commandBufferc;
    VkCommandBuffer *secondaryCommandBufferc;
    char *pushConstantPointC;
    VkDescriptorSet *descriptorSetc;
    VkMemoryBarrier *memoryBarrierc;
    VkBufferMemoryBarrier *bufferMemoryBarrierc;
    VkImageMemoryBarrier *imageMemoryBarrierc;
    VkBufferCopy *bufferCopyc;
    uint32_t *dynamicOffsetc;
    VkImageSubresourceRange *imageSubresourceRangec;
};
#endif //GpuGnBag_H

#ifndef Gpu_H
#define Gpu_H

#include "VBCc.h"

class CpuCoul;
class GpuVu;

class Gpu{
public:

    void Ce();
    void Be(CpuCoul *_cpuCoul, float *&_ctepF);
    void Vee(CpuCoul *_cpuCoul, float *&_ctepF);
    void Pec();

    int64_t VB;
    GpuVu *gpuVu;
    VkPhysicalDevice physicalDevice;
    VkDevice device;
    VkSurfaceKHR surface;
    uint32_t layerLimit, extensionLimit;
    const char**layerc, **extensionc;
    VkDeviceQueueCreateInfo *deviceQueueCreateInfoc;
    uint32_t queueLimit;
    VkQueue *queuec;
    VkQueueFamilyProperties *queueFamilyPropertiesc;
    uint32_t *queueViBPointc;
    float* queuePriorityc;
    VkPhysicalDeviceMemoryProperties physicalDeviceMemoryProperties;
};

#endif //Gpu_H

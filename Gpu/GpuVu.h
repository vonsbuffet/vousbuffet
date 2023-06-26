#ifndef GpuVu_H
#define GpuVu_H

#include "Gpu/Vulkan/vulkan_wrapper.h"
#include <vulkan/vulkan.h>
#include "VBCc.h"

class CpuCoul;

class GpuVu {
public:

    void Ce();
    void Be(CpuCoul *_cpuCoul, float *&_ctepF);
    void Vee(CpuCoul *_cpuCoul, float *&_ctepF);
    void Pec();

    int64_t VB;
    VkInstance instance;
    uint32_t physicalDeviceLimit;
    VkPhysicalDevice *physicalDevicec;
    uint32_t layerLimit, extensionLimit;
    const char**layerc, **extensionc;
};

#endif //GpuVu_H

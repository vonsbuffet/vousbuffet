#ifndef GpuMulteBag_H
#define GpuMulteBag_H

#include "VBCc.h"

class CpuCoul;

class GpuMulteBag {
public:

    void Ce();
    void Be(CpuCoul *_cpuCoul, float *&_ctepF);
    void Vee(CpuCoul *_cpuCoul, float *&_ctepF);
    void Pec();

    int64_t VB;
    VkDevice device;
    VkSurfaceKHR surface;
    VkSurfaceFormatKHR* surfaceFormats;
    uint32_t *qewViBPointc;
    VkSwapchainKHR swapchain;
    VkSemaphore *semaphorec;
    uint32_t multeLimit;
    VkImage *imagec;
    uint32_t imagePoint;
    VkQueue qew;
    VkPresentInfoKHR presentInfo;
};

#endif //GpuMulteBag_H

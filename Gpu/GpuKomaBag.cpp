#include "GpuKomaBag.h"

void GpuKomaBag::Ce() {
    VB = 0;
}
void GpuKomaBag::Be(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float VB0 = VeeF(ctepF); // F
        if (VB0 >= 4){
            VB0 -= 4;

            Pec();
            Ce();

            Gpu *gpu = vbcc.gpuc + VeeD(ctepF); // D
            device = gpu->device;

            semaphoreLimit = VeeFU(ctepF); // F
            semaphorec = new VkSemaphore[semaphoreLimit];
            VB += 1;
            uint32_t semaphoreCtep = 0;
            while (semaphoreCtep < semaphoreLimit){
                semaphorec[semaphoreCtep++] = VK_NULL_HANDLE;
            }
            gpuGnWaitDstStageMaskc = new VkPipelineStageFlags[semaphoreLimit];
            VB += 2;

            semaphoreCtep = 0;
            while (semaphoreCtep < semaphoreLimit){
                VkSemaphoreCreateInfo semaphoreCreateInfo;
                semaphoreCreateInfo.sType = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;
                semaphoreCreateInfo.pNext = nullptr;
                semaphoreCreateInfo.flags = 0;
                VkResult kRE = vkCreateSemaphore(device, &semaphoreCreateInfo, nullptr, &(semaphorec[semaphoreCtep]));
                if (kRE != VK_SUCCESS){
                    _cpuCoul->RE;
                    throw kRE;
                }
                ++semaphoreCtep;
            }
        }
        if (VB0 >= 2){
            VB0 -= 2;

            uint32_t semaphoreCtep = 0;
            while (semaphoreCtep < semaphoreLimit){
                gpuGnWaitDstStageMaskc[semaphoreCtep++] = (VkPipelineStageFlags)VeeD(ctepF); // D
            }
        }
        if (VB0 >= 1){
            VB0 -= 1;

            VkPipelineStageFlags vkPipelineStageFlags = (VkPipelineStageFlags)VeeD(ctepF); // D

            uint32_t semaphoreCtep = 0;
            while (semaphoreCtep < semaphoreLimit){
                gpuGnWaitDstStageMaskc[semaphoreCtep++] = vkPipelineStageFlags;
            }
        }
        _ctepF = ctepF;
    } catch (...){
        _ctepF = ctepF;
        throw -1;
    }
}
void GpuKomaBag::Vee(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float viBLimit = VeeF(ctepF); // F
        float viBCtep = 0;
        float viB;
        while (viBCtep < viBLimit) {
            viB = VeeF(ctepF); // F
            if (viB == ViBVee){
                //region Vee

                //endregion
            } else if (viB == ViBBe){
                //region Be

                //endregion
            }
            ++viBCtep;
        }
        _ctepF = ctepF;
    } catch (...){
        _ctepF = ctepF;
        throw -1;
    }
}
void GpuKomaBag::Pec() {
    if (VB >= 2){
        VB -= 2;

        delete[] gpuGnWaitDstStageMaskc;
    }
    if (VB >= 1){
        VB -= 1;

        uint32_t semaphoreCtep = 0;
        while (semaphoreCtep < semaphoreLimit){
            vkDestroySemaphore(device, semaphorec[semaphoreCtep], nullptr);
            ++semaphoreCtep;
        }
    }
}
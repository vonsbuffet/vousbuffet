#include "GpuCpuKomaBag.h"

void GpuCpuKomaBag::Ce(){
    VB = 0;
}
void GpuCpuKomaBag::Be(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float VB0 = VeeF(ctepF); // F
        if (VB0 >= 4){
            VB0 -= 4;

            //region Ce Fence(c)
            Pec();
            Ce();

            Gpu *gpu = vbcc.gpuc + VeeD(ctepF); // D
            device = gpu->device;

            fenceLimit = VeeFU(ctepF); // F
            fencec = new VkFence[fenceLimit];
            VB += 1;
            uint32_t fenceCtep = 0;
            while (fenceCtep < fenceLimit)
                fencec[fenceCtep++] = VK_NULL_HANDLE;
            //endregion
        }
        if (VB0 >= 2) {
            VB0 -= 2;

            VkFenceCreateFlags vkFenceCreateFlags = VeeFU(ctepF); // F

            uint32_t fenceCtep = 0;
            while (fenceCtep < fenceLimit){
                VkFenceCreateInfo fenceCreateInfo;
                fenceCreateInfo.sType = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO;
                fenceCreateInfo.pNext = nullptr;
                fenceCreateInfo.flags = vkFenceCreateFlags;
                VkResult kRE = vkCreateFence(device, &fenceCreateInfo, nullptr, &(fencec[fenceCtep]));
                if (kRE != VK_SUCCESS) {
                    _cpuCoul->RE = kRE;
                    throw -1;
                }
                ++fenceCtep;
            }
        }
        if (VB0 >= 1) {
            VB0 -= 1;

            uint32_t fenceCtep = 0;
            while (fenceCtep < fenceLimit){
                VkFenceCreateInfo fenceCreateInfo;
                fenceCreateInfo.sType = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO;
                fenceCreateInfo.pNext = nullptr;
                fenceCreateInfo.flags = (VkFenceCreateFlags)VeeFU(ctepF); // F
                VkResult kRE = vkCreateFence(device, &fenceCreateInfo, nullptr, &(fencec[fenceCtep]));
                if (kRE != VK_SUCCESS) {
                    _cpuCoul->RE = kRE;
                    throw -1;
                }
                ++fenceCtep;
            }
        }
        _ctepF = ctepF;
    } catch (...){
        _ctepF = ctepF;
        throw -1;
    }
}
void GpuCpuKomaBag::Vee(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float viBLimit = VeeF(ctepF); // F
        float viBCtep = 0;
        float viB;
        while (viBCtep < viBLimit) {
            viB = VeeF(ctepF); // F
            if (viB == ViBVee){
                //region Vee
                uint32_t fencePoint = VeeFU(ctepF); // F
                uint32_t fenceLimit0 = VeeFU(ctepF); // F

                VkResult kRE = vkResetFences(device, fenceLimit0, &(fencec[fencePoint]));
                if (kRE != VK_SUCCESS){
                    _cpuCoul->RE = kRE;
                    throw -1;
                }
                //endregion
            }
            else if (viB == ViBBe){
                //region Be
                uint32_t fencePoint = VeeFU(ctepF); // F
                uint32_t fenceLimit0 = VeeFU(ctepF); // F
                VkBool32 waitAllViB = (VkBool32)VeeFU(ctepF); // F
                uint64_t timeOutNS = (uint64_t)VeeD(ctepF); // D

                VkResult kRE = vkWaitForFences(device, fenceLimit0, &(fencec[fencePoint]), waitAllViB, timeOutNS);
                if (kRE != VK_SUCCESS){
                    _cpuCoul->RE = kRE;
                    throw -1;
                }
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
void GpuCpuKomaBag::Pec() {
    if (VB >= 1) {
        VB -= 1;

        uint32_t fenceCtep = 0;
        while (fenceCtep < fenceLimit)
            vkDestroyFence(device, fencec[fenceCtep++], nullptr);
    }
}
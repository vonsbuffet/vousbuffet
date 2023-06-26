#include "GpuQew.h"

void GpuQew::Ce(){
    VB = 0;

    submitInfoLimit = 0;
}
void GpuQew::Be(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float VB0 = VeeF(ctepF); // F
        if (VB0 >= 2){
            VB0 -= 2;

            Gpu *gpu = vbcc.gpuc + VeeD(ctepF); // D
            device = gpu->device;
            queue = gpu->queuec[VeeFU(ctepF)]; // F
        }
        if (VB0 >= 1){
            VB0 -= 1;

            Pec();
            Ce();

            submitInfoLimit = VeeFU(ctepF); // F
            submitInfoc = new VkSubmitInfo[submitInfoLimit];
            VB += 1;

            uint32_t submitInfoCtep = 0;
            while (submitInfoCtep < submitInfoLimit){
                VkSubmitInfo *submitInfo = &(submitInfoc[submitInfoCtep]);
                submitInfo->sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
                submitInfo->pNext = nullptr;

                submitInfoCtep += 1;
            }

            submitInfoLimit = 0;
        }
        _ctepF = ctepF;
    } catch (...){
        _ctepF = ctepF;
        throw -1;
    }
}
void GpuQew::Vee(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float viBLimit = VeeF(ctepF); // F
        float viBCtep = 0;
        float viB;
        while (viBCtep < viBLimit) {
            viB = VeeF(ctepF); // F
            if (viB == ViBVee){
                //region Vee
                float fenceVB = VeeF(ctepF); // F
                fence = VK_NULL_HANDLE;
                if (fenceVB > 0){
                    GpuCpuKomaBag *gpuCpuKomaBag = vbcc.gpuCpuKomaBagc + VeeD(ctepF); // D
                    fence = gpuCpuKomaBag->fencec[VeeFU(ctepF)]; // F
                }

                VkResult kRE = vkQueueSubmit(queue, submitInfoLimit, submitInfoc, fence);
                submitInfoLimit = 0;
                if (kRE != VK_SUCCESS){
                    _cpuCoul->RE = kRE;
                    throw -1;
                }
                //endregion
            }
            else if (viB == ViBBe){
                //region Be
                VkResult kRE = vkQueueWaitIdle(queue);
                if (kRE != VK_SUCCESS)
                    throw;
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
void GpuQew::Pec(){
    if (VB >= 1){
        VB -= 1;

        delete[] submitInfoc;
    }
}
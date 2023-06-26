#include "GpuUneGram.h"

void GpuUneGram::Ce(){
    VB = 0;
}
void GpuUneGram::Be(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float VB0 = VeeF(ctepF); // F
        if (VB0 >= 1){
            VB0 -= 1;

            Gpu *gpu = vbcc.gpuc + VeeD(ctepF); // D
            device = gpu->device;

            VkBufferViewCreateInfo bufferViewCreateInfo;
            bufferViewCreateInfo.sType = VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO;
            bufferViewCreateInfo.pNext = nullptr;
            bufferViewCreateInfo.flags = 0;
            bufferViewCreateInfo.buffer = (vbcc.gpuUnec + VeeFU(ctepF))->buffer; // F
            bufferViewCreateInfo.format = (VkFormat)(VeeD(ctepF)); // D
            bufferViewCreateInfo.offset = (uint64_t)VeeD(ctepF); // D
            bufferViewCreateInfo.range = (uint64_t)VeeD(ctepF); // D
            VkResult kRE = vkCreateBufferView(device, &bufferViewCreateInfo, nullptr, &bufferView);
            if (kRE != VK_SUCCESS){
                _cpuCoul->RE = kRE;
                throw kRE;
            }
            VB += 1;
        }
        _ctepF = ctepF;
    } catch (...){
        _ctepF = ctepF;
        throw -1;
    }
}
void GpuUneGram::Vee(CpuCoul *_cpuCoul, float *&_ctepF) {
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
void GpuUneGram::Pec(){
    if (VB >= 1){
        VB -= 1;

        vkDestroyBufferView(device, bufferView, nullptr);
    }
}
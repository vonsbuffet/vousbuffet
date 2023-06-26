#include "GpuUne.h"

void GpuUne::Ce(){
    VB = 0;
}
void GpuUne::Be(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float VB0 = VeeF(ctepF); // F
        if (VB0 >= 1){
            VB0 -= 1;

            Pec();
            Ce();

            Gpu *gpu = vbcc.gpuc + VeeD(ctepF); // D
            device = gpu->device;

            //region Qew ViiB Point(c)
            uint32_t qewLimit = VeeFU(ctepF); // F
            qewViBPointc = new uint32_t[qewLimit];
            VB += 1;
            uint32_t qewViBPointCtep = 0;
            while (qewViBPointCtep < qewLimit){
                qewViBPointc[qewViBPointCtep++] = gpu->queueViBPointc[VeeFU(ctepF)]; // F
            }
            //endregion

            VkBufferCreateInfo bufferCreateInfo;
            bufferCreateInfo.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
            bufferCreateInfo.pNext = nullptr;
            bufferCreateInfo.flags = VeeFU(ctepF); // F
            bufferCreateInfo.size = (uint64_t)VeeD(ctepF); // D
            bufferCreateInfo.usage = VeeFU(ctepF); // F
            bufferCreateInfo.sharingMode = (VkSharingMode)VeeFU(ctepF); // F
            bufferCreateInfo.queueFamilyIndexCount = qewLimit;
            bufferCreateInfo.pQueueFamilyIndices = qewViBPointc;
            VkResult kRE = vkCreateBuffer(device, &bufferCreateInfo, nullptr, &buffer);
            if (kRE != VK_SUCCESS){
                _cpuCoul->RE = kRE;
                throw kRE;
            }
            VB += 2;

            delete[] qewViBPointc;
            VB -= 1;

            vkGetBufferMemoryRequirements(device, buffer, &memoryRequirements);
        }
        _ctepF = ctepF;
    } catch (...){
        _ctepF = ctepF;
        throw -1;
    }
}
void GpuUne::Vee(CpuCoul *_cpuCoul, float *&_ctepF) {
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
void GpuUne::Pec(){
    if (VB >= 2){
        VB -= 2;

        vkDestroyBuffer(device, buffer, nullptr);
    }
    if (VB >= 1){
        VB -= 1;

        delete[] qewViBPointc;
    }
}
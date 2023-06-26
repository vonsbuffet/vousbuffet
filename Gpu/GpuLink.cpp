#include "GpuLink.h"

void GpuLink::Ce(){
    VB = 0;
}
void GpuLink::Be(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float VB0 = VeeF(ctepF); // F
        if (VB0 >= 1){
            VB0 -= 1;

            Pec();
            Ce();

            Gpu *gpu = vbcc.gpuc + VeeD(ctepF); // D
            device = gpu->device;

            mappedMemoryRangec = new VkMappedMemoryRange[VeeFU(ctepF)]; // F
            VB += 1;
        }
        _ctepF = ctepF;
    } catch (...){
        _ctepF = ctepF;
        throw -1;
    }
}
void GpuLink::Vee(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float viBLimit = VeeF(ctepF); // F
        float viBCtep = 0;
        float viB;
        while (viBCtep < viBLimit) {
            viB = VeeF(ctepF); // F
            if (viB == ViBVee){
                //region Vee
                uint32_t mappedMemoryRangeLimit = VeeFU(ctepF); // F
                uint32_t mappedMemoryRangeCtep = 0;
                while (mappedMemoryRangeCtep < mappedMemoryRangeLimit){
                    CpuBar *cpuBar = vbcc.cpuBarc + VeeD(ctepF); // D
                    mappedMemoryRangec[mappedMemoryRangeCtep].sType = VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE;
                    mappedMemoryRangec[mappedMemoryRangeCtep].memory = cpuBar->gpuUne->deviceMemory;
                    mappedMemoryRangec[mappedMemoryRangeCtep].offset = cpuBar->bindPointC + (uint64_t)VeeD(ctepF); // D
                    mappedMemoryRangec[mappedMemoryRangeCtep].size = (uint64_t)VeeD(ctepF); // D
                    mappedMemoryRangec[mappedMemoryRangeCtep].pNext = nullptr;
                    ++mappedMemoryRangeCtep;
                }
                VkResult kRE = vkFlushMappedMemoryRanges(device, mappedMemoryRangeLimit, mappedMemoryRangec);
                if (kRE != VK_SUCCESS){
                    _cpuCoul->RE = kRE;
                    throw kRE;
                }

                //endregion
            }
            else if (viB == ViBBe){
                //region Be
                uint32_t mappedMemoryRangeLimit = VeeFU(ctepF); // F
                uint32_t mappedMemoryRangeCtep = 0;
                while (mappedMemoryRangeCtep < mappedMemoryRangeLimit){
                    CpuBar *cpuBar = vbcc.cpuBarc + VeeD(ctepF); // D
                    mappedMemoryRangec[mappedMemoryRangeCtep].sType = VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE;
                    mappedMemoryRangec[mappedMemoryRangeCtep].memory = cpuBar->gpuUne->deviceMemory;
                    mappedMemoryRangec[mappedMemoryRangeCtep].offset = cpuBar->bindPointC + (uint64_t)VeeD(ctepF); // D
                    mappedMemoryRangec[mappedMemoryRangeCtep].size = (uint64_t)VeeD(ctepF); // D
                    mappedMemoryRangec[mappedMemoryRangeCtep].pNext = nullptr;
                    ++mappedMemoryRangeCtep;
                }
                VkResult kRE = vkInvalidateMappedMemoryRanges(device, mappedMemoryRangeLimit, mappedMemoryRangec);
                if (kRE != VK_SUCCESS){
                    _cpuCoul->RE = kRE;
                    throw kRE;
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
void GpuLink::Pec(){
    if (VB >= 1){
        VB -= 1;

        delete[] mappedMemoryRangec;
    }
}
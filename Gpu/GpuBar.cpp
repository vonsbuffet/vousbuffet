#include "GpuBar.h"

void GpuBar::Ce(){
    VB = 0;
}
void GpuBar::Be(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float VB0 = VeeF(ctepF); // F
        if (VB0 >= 1){
            VB0 -= 1;

            Pec();
            Ce();

            Gpu *gpu = vbcc.gpuc + VeeD(ctepF); // D
            device = gpu->device;

            //region MemoryBind(c) [ Requirements ]
            limitC = 0;
            uint32_t bindLimit = VeeFU(ctepF); // F
            viBc = new float[bindLimit];
            VB += 1;
            viBPointc = new void*[bindLimit];
            VB += 2;
            uint32_t memoryTypeBit = 0;
            uint32_t bindCtep = 0;
            while (bindCtep < bindLimit) {
                viBc[bindCtep] = VeeF(ctepF); // F
                if (viBc[bindCtep] == GpuViBUne) {
                    GpuUne *gpuUne = vbcc.gpuUnec + VeeD(ctepF); // D
                    viBPointc[bindCtep] = gpuUne;
                    memoryTypeBit |= gpuUne->memoryRequirements.memoryTypeBits;
                    limitC += gpuUne->memoryRequirements.alignment - limitC % gpuUne->memoryRequirements.alignment + gpuUne->memoryRequirements.size;
                }
                else if (viBc[bindCtep] == GpuViBMulte) {
                    GpuMulte *gpuMulte = vbcc.gpuMultec + VeeD(ctepF); // D
                    viBPointc[bindCtep] = gpuMulte;
                    memoryTypeBit |= gpuMulte->memoryRequirements.memoryTypeBits;
                    limitC += gpuMulte->memoryRequirements.alignment - limitC % gpuMulte->memoryRequirements.alignment + gpuMulte->memoryRequirements.size;
                }
                ++bindCtep;
            }
            //endregion

            //region MemoryPropertyFlags
            VkMemoryPropertyFlags memoryPropertyFlags = VeeFU(ctepF); // F
            uint32_t memoryViBLimit = gpu->physicalDeviceMemoryProperties.memoryTypeCount;
            uint32_t memoryViBCtep = 0;
            while (memoryViBCtep < memoryViBLimit){
                if (((memoryTypeBit & (1 << memoryViBCtep)) != 0) && ((gpu->physicalDeviceMemoryProperties.memoryTypes[memoryViBCtep].propertyFlags & memoryPropertyFlags) == memoryPropertyFlags))
                    break;
                ++memoryViBCtep;
            }
            if (memoryViBCtep == memoryViBLimit){
                _cpuCoul->RE = -1;
                throw ExtraSauce("Error: GpuBar:Be[MemoryProperty Not Found]");
            }
            //endregion

            VkMemoryAllocateInfo allocateInfo;
            allocateInfo.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
            allocateInfo.pNext = nullptr;
            allocateInfo.allocationSize = (uint64_t)limitC;
            allocateInfo.memoryTypeIndex = memoryViBCtep;
            VkResult kRE = vkAllocateMemory(device, &allocateInfo, nullptr, &deviceMemory);
            if (kRE != VK_SUCCESS){
                _cpuCoul->RE = kRE;
                throw ExtraSauce("Error: GpuBar:Be[vkAllocateMemory Failed]");
            }
            VB += 4;

            //region MemoryBind(c)
            int64_t point = 0;
            bindCtep = 0;
            while (bindCtep < bindLimit){
                float viB = viBc[bindCtep];
                void *viBPoint = viBPointc[bindCtep];
                if (viB == GpuViBUne){
                    GpuUne *gpuUne = (GpuUne *)viBPoint;
                    point += gpuUne->memoryRequirements.alignment - point % gpuUne->memoryRequirements.alignment;
                    kRE = vkBindBufferMemory(device, gpuUne->buffer, deviceMemory, (uint64_t)point);
                    if (kRE != VK_SUCCESS){
                        _cpuCoul->RE = kRE;
                        throw ExtraSauce("Error: GpuBar:Be[vkBindBufferMemory Failed]");
                    }
                    gpuUne->deviceMemory = deviceMemory;
                    gpuUne->bindPointC = point;
                    point += gpuUne->memoryRequirements.size;
                }
                else if (viB == GpuViBMulte){
                    GpuMulte *gpuMulte = (GpuMulte *)viBPoint;
                    point += gpuMulte->memoryRequirements.alignment - point % gpuMulte->memoryRequirements.alignment;
                    kRE = vkBindImageMemory(device, gpuMulte->image, deviceMemory, (uint64_t)point);
                    if (kRE != VK_SUCCESS){
                        _cpuCoul->RE = kRE;
                        throw ExtraSauce("Error: GpuBar:Be[vkBindImageMemory Failed]");
                    }
                    gpuMulte->deviceMemory = deviceMemory;
                    gpuMulte->bindPointC = point;
                    point += gpuMulte->memoryRequirements.size;
                }
                ++bindCtep;
            }
            //endregion

            delete[] viBPointc;
            VB -= 2;

            delete[] viBc;
            VB -= 1;
        }
        _ctepF = ctepF;
    } catch (...){
        _ctepF = ctepF;
        throw -1;
    }
}
void GpuBar::Vee(CpuCoul *_cpuCoul, float *&_ctepF) {
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
            }
            else if (viB == ViBBe){
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
void GpuBar::Pec(){
    if (VB >= 4){
        VB -= 4;

        vkFreeMemory(device, deviceMemory, nullptr);
    }
    if (VB >= 2){
        VB -= 2;

        delete[] viBPointc;
    }
    if (VB >= 1){
        VB -= 1;

        delete[] viBc;
    }
}
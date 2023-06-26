#include "GpuMulteGram.h"

void GpuMulteGram::Ce(){
    VB = 0;
}
void GpuMulteGram::Be(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float VB0 = VeeF(ctepF); // F
        if (VB0 >= 1){
            VB0 -= 1;

            Pec();
            Ce();

            Gpu *gpu = vbcc.gpuc + VeeD(ctepF); // D
            device = gpu->device;

            //region Image
            VkImage image = VK_NULL_HANDLE;
            float viB = VeeF(ctepF); // F
            if (viB == GpuViBMulte){
                GpuMulte *gpuMulte = vbcc.gpuMultec + VeeD(ctepF); // D
                image = gpuMulte->image;
            }
            else if (viB == GpuViBMulteBag){
                GpuMulteBag *gpuMulteBag = vbcc.gpuMulteBagc + VeeD(ctepF); // D
                image = gpuMulteBag->imagec[VeeD(ctepF)]; // D
            }
            //endregion

            //region Component
            VkComponentMapping componentMapping;
            componentMapping.r = (VkComponentSwizzle)VeeFU(ctepF); // F
            componentMapping.g = (VkComponentSwizzle)VeeFU(ctepF); // F
            componentMapping.b = (VkComponentSwizzle)VeeFU(ctepF); // F
            componentMapping.a = (VkComponentSwizzle)VeeFU(ctepF); // F
            //endregion

            //region SubresourceRange
            VkImageSubresourceRange subresourceRange;
            subresourceRange.aspectMask = VeeFU(ctepF); // F
            subresourceRange.baseMipLevel = VeeFU(ctepF); // F
            subresourceRange.levelCount = VeeFU(ctepF); // F
            subresourceRange.baseArrayLayer = VeeFU(ctepF); // F
            subresourceRange.layerCount = VeeFU(ctepF); // F
            //endregion

            VkImageViewCreateInfo imageViewCreateInfo;
            imageViewCreateInfo.sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
            imageViewCreateInfo.pNext = nullptr;
            imageViewCreateInfo.flags = (VkImageViewCreateFlags)VeeFU(ctepF); // F
            imageViewCreateInfo.image = image;
            imageViewCreateInfo.viewType = (VkImageViewType)VeeFU(ctepF); // F
            imageViewCreateInfo.format = (VkFormat)VeeD(ctepF); // D
            imageViewCreateInfo.components = componentMapping;
            imageViewCreateInfo.subresourceRange = subresourceRange;
            VkResult kRE = vkCreateImageView(device, &imageViewCreateInfo, nullptr, &imageView);
            if (kRE != VK_SUCCESS){
               _cpuCoul->RE = kRE;
                throw ExtraSauce("Error: GpuMulteGram:Be[vkCreateImageView Failed]");
            }
            VB += 1;
        }
        _ctepF = ctepF;
    } catch (...){
        _ctepF = ctepF;
        throw -1;
    }
}
void GpuMulteGram::Vee(CpuCoul *_cpuCoul, float *&_ctepF) {
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
void GpuMulteGram::Pec(){
    if (VB >= 1){
        VB -= 1;

        vkDestroyImageView(device, imageView, nullptr);
    }
}

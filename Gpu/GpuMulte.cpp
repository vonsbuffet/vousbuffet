#include "GpuMulte.h"

void GpuMulte::Ce(){
    VB = 0;
}
void GpuMulte::Be(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float VB0 = VeeF(ctepF); // F
        if (VB0 >= 1){
            VB0 -= 1;

            Pec();
            Ce();

            Gpu *gpu = vbcc.gpuc + VeeD(ctepF); // D
            device = gpu->device;

            //region Extent
            VkExtent3D extent;
            extent.width = VeeFU(ctepF); // F
            extent.height = VeeFU(ctepF); // F
            extent.depth = VeeFU(ctepF); // F
            //endregion

            //region Qew ViiB Point(c)
            uint32_t qewViBLimit = VeeFU(ctepF); // F
            qewViBPointc = new uint32_t[qewViBLimit];
            VB += 1;
            uint32_t qewViBCtep = 0;
            while (qewViBCtep < qewViBLimit)
                qewViBPointc[qewViBCtep++]  = gpu->queueViBPointc[VeeFU(ctepF)]; // F
            //endregion

            VkImageCreateInfo imageCreateInfo;
            imageCreateInfo.sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
            imageCreateInfo.pNext = nullptr;
            imageCreateInfo.flags = (VkImageCreateFlags)VeeFU(ctepF); // F
            imageCreateInfo.imageType = (VkImageType)VeeFU(ctepF); // F
            imageCreateInfo.format = (VkFormat)VeeD(ctepF); // D
            imageCreateInfo.extent = extent;
            imageCreateInfo.mipLevels = VeeFU(ctepF); // F
            imageCreateInfo.arrayLayers = VeeFU(ctepF); // F
            imageCreateInfo.samples = (VkSampleCountFlagBits)VeeFU(ctepF); // F
            imageCreateInfo.tiling = (VkImageTiling)VeeD(ctepF); // D
            imageCreateInfo.usage = (VkImageUsageFlags)VeeFU(ctepF); // F
            imageCreateInfo.sharingMode = (VkSharingMode)VeeFU(ctepF); // F
            imageCreateInfo.queueFamilyIndexCount = qewViBLimit;
            imageCreateInfo.pQueueFamilyIndices = qewViBPointc;
            imageCreateInfo.initialLayout = (VkImageLayout)VeeD(ctepF); // D
            VkResult kRE = vkCreateImage(device, &imageCreateInfo, nullptr, &image);
            if (kRE != VK_SUCCESS){
               _cpuCoul->RE = kRE;
                throw kRE;
            }
            VB += 2;

            delete[] qewViBPointc;
            VB -= 1;

            vkGetImageMemoryRequirements(device, image, &memoryRequirements);
        }
        _ctepF = ctepF;
    } catch (...){
        _ctepF = ctepF;
        throw -1;
    }
}
void GpuMulte::Vee(CpuCoul *_cpuCoul, float *&_ctepF) {
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
void GpuMulte::Pec(){
    if (VB >= 2){
        VB -= 2;

        vkDestroyImage(device, image, nullptr);
    }
    if (VB >= 1){
        VB -= 1;

        delete[] qewViBPointc;
    }
}
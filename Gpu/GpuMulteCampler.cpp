#include "GpuMulteCampler.h"

void GpuMulteCampler::Ce(){
    VB = 0;
}
void GpuMulteCampler::Be(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float VB0 = VeeF(ctepF); // F
        if (VB0 >= 1){
            VB0 -= 1;

            Gpu *gpu = vbcc.gpuc + VeeD(ctepF); // D
            device = gpu->device;

            VkSamplerCreateInfo samplerCreateInfo;
            samplerCreateInfo.sType = VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO;
            samplerCreateInfo.pNext = nullptr;
            samplerCreateInfo.flags = (VkSamplerCreateFlags)VeeFU(ctepF); // F
            samplerCreateInfo.magFilter = (VkFilter)VeeD(ctepF); // D
            samplerCreateInfo.minFilter = (VkFilter)VeeD(ctepF); // D
            samplerCreateInfo.mipmapMode = (VkSamplerMipmapMode)VeeFU(ctepF); // F
            samplerCreateInfo.addressModeU = (VkSamplerAddressMode)VeeFU(ctepF); // F
            samplerCreateInfo.addressModeV = (VkSamplerAddressMode)VeeFU(ctepF); // F
            samplerCreateInfo.addressModeW = (VkSamplerAddressMode)VeeFU(ctepF); // F
            samplerCreateInfo.mipLodBias = VeeF(ctepF); // F
            samplerCreateInfo.anisotropyEnable = (VkBool32)VeeFU(ctepF); // F
            samplerCreateInfo.maxAnisotropy = VeeF(ctepF); // F
            samplerCreateInfo.compareEnable = (VkBool32)VeeFU(ctepF); // F
            samplerCreateInfo.compareOp = (VkCompareOp)VeeFU(ctepF); // F
            samplerCreateInfo.minLod = VeeF(ctepF); // F
            samplerCreateInfo.maxLod = VeeF(ctepF); // F
            samplerCreateInfo.borderColor = (VkBorderColor)VeeD(ctepF); // D
            samplerCreateInfo.unnormalizedCoordinates = (VkBool32)VeeFU(ctepF); // F
            VkResult kRE = vkCreateSampler(device, &samplerCreateInfo, nullptr, &sampler);
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
void GpuMulteCampler::Vee(CpuCoul *_cpuCoul, float *&_ctepF) {
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
void GpuMulteCampler::Pec(){
    if (VB >= 1){
        VB -= 1;

        vkDestroySampler(device, sampler, nullptr);
    }
}
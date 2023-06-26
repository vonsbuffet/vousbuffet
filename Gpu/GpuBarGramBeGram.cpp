#include "GpuBarGramBeGram.h"

void GpuBarGramBeGram::Ce(){
    VB = 0;
}
void GpuBarGramBeGram::Be(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float VB0 = VeeF(ctepF); // F
        if (VB0 >= 1){
            VB0 -= 1;

            Pec();
            Ce();

            Gpu *gpu = vbcc.gpuc + VeeD(ctepF);
            device = gpu->device; // D

            //region DescriptorSetLayoutBinding(c)
            uint32_t bindingLimit = VeeFU(ctepF); // F
            descriptorSetLayoutBindingc = new VkDescriptorSetLayoutBinding[bindingLimit];
            VB += 1;
            uint32_t bindingCtep = 0;
            while (bindingCtep < bindingLimit){
                VkDescriptorSetLayoutBinding *descriptorSetLayoutBinding = &(descriptorSetLayoutBindingc[bindingCtep]);
                descriptorSetLayoutBinding->binding = VeeFU(ctepF); // F
                descriptorSetLayoutBinding->descriptorType = (VkDescriptorType)VeeD(ctepF); // D
                descriptorSetLayoutBinding->descriptorCount = VeeFU(ctepF); // F
                descriptorSetLayoutBinding->stageFlags = (VkShaderStageFlags)VeeD(ctepF); // D
                descriptorSetLayoutBinding->pImmutableSamplers = nullptr;
                ++bindingCtep;
            }
            //endregion

            VkDescriptorSetLayoutCreateInfo descriptorSetLayoutCreateInfo;
            descriptorSetLayoutCreateInfo.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
            descriptorSetLayoutCreateInfo.pNext = nullptr;
            descriptorSetLayoutCreateInfo.flags = (VkDescriptorSetLayoutCreateFlags)(VeeFU(ctepF)); // F
            descriptorSetLayoutCreateInfo.bindingCount = bindingLimit;
            descriptorSetLayoutCreateInfo.pBindings = descriptorSetLayoutBindingc;
            VkResult kRE = vkCreateDescriptorSetLayout(device, &descriptorSetLayoutCreateInfo, nullptr, &descriptorSetLayout);
            if (kRE != VK_SUCCESS){
                _cpuCoul->RE = kRE;
                throw kRE;
            }
            VB += 2;

            delete[] descriptorSetLayoutBindingc;
            VB -= 1;
        }
        _ctepF = ctepF;
    } catch (...){
        _ctepF = ctepF;
        throw -1;
    }
}
void GpuBarGramBeGram::Vee(CpuCoul *_cpuCoul, float *&_ctepF) {
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
void GpuBarGramBeGram::Pec(){
    if (VB >= 2){
        VB -= 2;

        vkDestroyDescriptorSetLayout(device, descriptorSetLayout, nullptr);
    }
    if (VB >= 1){
        VB -= 1;

        delete[] descriptorSetLayoutBindingc;
    }
}
#include "GpuGramBeGram.h"

void GpuGramBeGram::Ce(){
    VB = 0;
}
void GpuGramBeGram::Be(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float VB0 = VeeF(ctepF); // F
        if (VB0 >= 1){
            VB0 -= 1;

            Pec();
            Ce();

            Gpu *gpu = vbcc.gpuc + VeeD(ctepF); // D
            device = gpu->device;

            //region DescriptorSetLayout(c)
            uint32_t descriptorSetLayoutLimit = VeeFU(ctepF); // F
            uint32_t descriptorSetLayoutCtep = 0;
            descriptorSetLayoutc = new VkDescriptorSetLayout[descriptorSetLayoutLimit];
            VB += 1;
            while (descriptorSetLayoutCtep < descriptorSetLayoutLimit){
                GpuBarGramBeGram *gpuBarGramBeGram = vbcc.gpuBarGramBeGramc + VeeD(ctepF); // D
                descriptorSetLayoutc[descriptorSetLayoutCtep++] = gpuBarGramBeGram->descriptorSetLayout;
            }
            //endregion

            //region PushConstantRange(c)
            uint32_t pushConstantRangeLimit = VeeFU(ctepF); // F
            uint32_t pushConstantRangeCtep = 0;
            pushConstantRangec = new VkPushConstantRange[pushConstantRangeLimit];
            VB += 2;
            while (pushConstantRangeCtep < pushConstantRangeLimit){
                pushConstantRangec[pushConstantRangeCtep].stageFlags = (VkShaderStageFlags)VeeD(ctepF); // D
                pushConstantRangec[pushConstantRangeCtep].offset = VeeFU(ctepF); // F
                pushConstantRangec[pushConstantRangeCtep].size = VeeFU(ctepF); // F
                ++pushConstantRangeCtep;
            }
            //endregion

            VkPipelineLayoutCreateInfo pipelineLayoutCreateInfo;
            pipelineLayoutCreateInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
            pipelineLayoutCreateInfo.pNext = nullptr;
            pipelineLayoutCreateInfo.flags = 0;
            pipelineLayoutCreateInfo.setLayoutCount = descriptorSetLayoutLimit;
            pipelineLayoutCreateInfo.pSetLayouts = descriptorSetLayoutc;
            pipelineLayoutCreateInfo.pushConstantRangeCount = pushConstantRangeLimit;
            pipelineLayoutCreateInfo.pPushConstantRanges = pushConstantRangec;
            VkResult kRE = vkCreatePipelineLayout(device, &pipelineLayoutCreateInfo, nullptr, &pipelineLayout);
            if (kRE != VK_SUCCESS){
                _cpuCoul->RE = kRE;
                throw ExtraSauce("Error: GpuGramBeGram:Be[vkCreatePipelineLayout Failed");
            }
            VB += 4;

            delete[] pushConstantRangec;
            VB -= 2;

            delete[] descriptorSetLayoutc;
            VB -= 1;
        }
        _ctepF = ctepF;
    } catch (...){
        _ctepF = ctepF;
        throw -1;
    }
}
void GpuGramBeGram::Vee(CpuCoul *_cpuCoul, float *&_ctepF) {
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
void GpuGramBeGram::Pec(){
    if (VB >= 4){
        VB -= 4;

        vkDestroyPipelineLayout(device, pipelineLayout, nullptr);
    }
    if (VB >= 2){
        VB -= 2;

        delete[] pushConstantRangec;
    }
    if (VB >= 1){
        VB -= 1;

        delete[] descriptorSetLayoutc;
    }
}
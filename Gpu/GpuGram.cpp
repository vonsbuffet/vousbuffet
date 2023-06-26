#include "GpuGram.h"

// Extra Sauce
int32_t SPIRV(shaderc_shader_kind _viB, float *_glslPointF, float *_spirvPointF){
    shaderc::Compiler compiler;
    shaderc::CompileOptions options;
    shaderc::SpvCompilationResult result;

    uint32_t glslLimitC = (uint32_t)VeeD(_glslPointF); // D
    result = compiler.CompileGlslToSpv((char *)_glslPointF, glslLimitC, _viB, "main", options);
    if (result.GetCompilationStatus() != shaderc_compilation_status_success){
        LOGI("ERROR :: SPIR-V[%s]", result.GetErrorMessage().c_str());
        return -1;
    }

    std::vector<uint32_t> SPIRV(result.cbegin(), result.cend());

    uint32_t spirvLimitC = sizeof(uint32_t) * (uint32_t)(SPIRV.size());

    memcpy((void *)(_spirvPointF + 2), (void *)SPIRV.data(), (size_t)spirvLimitC);

    BeD(_spirvPointF, spirvLimitC); // *D

    return 0;
}
// Enough Sauce!

void GpuGram::Ce(){
    VB = 0;
    pipelineCache = VK_NULL_HANDLE;
}
void GpuGram::Be(CpuCoul *_cpuCoul, float *&_ctepF){
    float *ctepF = _ctepF;
    try{
        float VB0 = VeeF(ctepF); // F
        if (VB0 >= 4) {
            VB0 -= 4;

            Pec();
            Ce();

            Gpu *gpu = vbcc.gpuc + VeeD(ctepF); // D
            device = gpu->device;
        }
        if (VB0 >= 2) {
            VB0 -= 2;

            //region Cache
            float *cachePointF = _cpuCoul->eoBar.pointCe + VeeD(ctepF); // D
            VkPipelineCacheCreateFlags pipelineCacheCreateFlags = (VkPipelineCacheCreateFlags)VeeFU(ctepF); // F

            VkPipelineCacheCreateInfo cacheCreateInfo;
            cacheCreateInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO;
            cacheCreateInfo.pNext = nullptr;
            cacheCreateInfo.flags = pipelineCacheCreateFlags;
            cacheCreateInfo.initialDataSize = (size_t)VeeD(cachePointF);
            cacheCreateInfo.pInitialData = (const void *)cachePointF;
            VkResult kRE = vkCreatePipelineCache(device, &cacheCreateInfo, nullptr, &pipelineCache);
            if (kRE != VK_SUCCESS){
                _cpuCoul->RE = kRE;
                throw kRE;
            }
            VB += 1;
            //endregion
        }
        if (VB0 >= 1){
            VB0 -= 1;

            //region vkCreateComputePipeline

            //region Shader Module
            float *spirvPointF = (float *)VeeP(ctepF); // P

            VkShaderModuleCreateInfo shaderModuleCreateInfo;
            shaderModuleCreateInfo.sType = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
            shaderModuleCreateInfo.pNext = nullptr;
            shaderModuleCreateInfo.flags = 0;
            shaderModuleCreateInfo.codeSize = (size_t)VeeD(spirvPointF);
            shaderModuleCreateInfo.pCode = (uint32_t *)spirvPointF;
            VkResult kRE = vkCreateShaderModule(device, &shaderModuleCreateInfo, nullptr, &shaderModule);
            if (kRE != VK_SUCCESS){
                _cpuCoul->RE = kRE;
                throw kRE;
            }
            VB += 2;
            //endregion

            //region Pipeline Shader Stage
            VkPipelineShaderStageCreateInfo shaderStageCreateInfo;
            shaderStageCreateInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
            shaderStageCreateInfo.pNext = nullptr;
            shaderStageCreateInfo.flags = (VkPipelineShaderStageCreateFlags)VeeFU(ctepF); // F
            shaderStageCreateInfo.stage = (VkShaderStageFlagBits)VeeD(ctepF); // D
            shaderStageCreateInfo.module = shaderModule;
            shaderStageCreateInfo.pName = "main";
            shaderStageCreateInfo.pSpecializationInfo = nullptr;
            //endregion

            //region ComputePipeline
            VkComputePipelineCreateInfo computePipelineCreateInfo;
            computePipelineCreateInfo.sType = VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO;
            computePipelineCreateInfo.pNext = nullptr;
            computePipelineCreateInfo.flags = (VkPipelineCreateFlags)VeeD(ctepF); // D
            computePipelineCreateInfo.stage = shaderStageCreateInfo;
            computePipelineCreateInfo.layout = (vbcc.gpuGramBeGramc + VeeD(ctepF))->pipelineLayout; // D
            computePipelineCreateInfo.basePipelineHandle = VK_NULL_HANDLE;
            computePipelineCreateInfo.basePipelineIndex = -1;
            kRE = vkCreateComputePipelines(device, pipelineCache, 1, &computePipelineCreateInfo, nullptr, &pipeline);
            if (kRE != VK_SUCCESS){
                _cpuCoul->RE = kRE;
                throw kRE;
            }
            VB += 4;
            //endregion

            vkDestroyShaderModule(device, shaderModule, nullptr);
            VB -= 2;

            if (VB == 5){
                vkDestroyPipelineCache(device, pipelineCache, nullptr);
                pipelineCache = VK_NULL_HANDLE;
                VB -= 1;
            }
            //endregion
        }
        _ctepF = ctepF;
    } catch (...){
        _ctepF = ctepF;
        throw -1;
    }
}
void GpuGram::Vee(CpuCoul *_cpuCoul, float *&_ctepF){
    float *ctepF = _ctepF;
    try{
        float viBLimit = VeeF(ctepF); // F
        float viBCtep = 0;
        float viB;
        while (viBCtep < viBLimit) {
            viB = VeeF(ctepF); // F
            if (viB == ViBVee){
                //region Vee [ Cache ]
                float *cachePointF = _cpuCoul->eoBar.pointCe + VeeD(ctepF); // D
                VkPipelineCacheCreateFlags pipelineCacheCreateFlags = (VkPipelineCacheCreateFlags)VeeFU(ctepF); // F

                VkPipelineCacheCreateInfo cacheCreateInfo;
                cacheCreateInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO;
                cacheCreateInfo.initialDataSize = (uint32_t)0;
                cacheCreateInfo.pInitialData = nullptr;
                cacheCreateInfo.flags = pipelineCacheCreateFlags;
                cacheCreateInfo.pNext = nullptr;
                VkResult kRE = vkCreatePipelineCache(device, &cacheCreateInfo, nullptr, &pipelineCache);
                if (kRE != VK_SUCCESS){
                    _cpuCoul->RE = kRE;
                    throw kRE;
                }
                VB += 1;

                size_t cacheLimitC = 0;
                kRE = vkGetPipelineCacheData(device, pipelineCache, &cacheLimitC, NULL);
                if (kRE != VK_SUCCESS){
                    _cpuCoul->RE = kRE;
                    throw kRE;
                }
                kRE = vkGetPipelineCacheData(device, pipelineCache, &cacheLimitC, (void *)(cachePointF + 2));
                if (kRE != VK_SUCCESS){
                    _cpuCoul->RE = kRE;
                    throw kRE;
                }
                vkDestroyPipelineCache(device, pipelineCache, nullptr);
                VB -= 1;

                BeD(cachePointF, cacheLimitC); // *D
                //endregion
            }
            else if (viB == ViBCe){
                //region Ce [ SPIR-V ]
                float *glslPointF = (_cpuCoul->eoBar.pointCe + VeeD(ctepF)); // D
                float *spirvPointF = (_cpuCoul->eoBar.pointCe + VeeD(ctepF)); // D
                shaderc_shader_kind shaderKind = (shaderc_shader_kind)VeeFU(ctepF); // F

                int32_t RE = SPIRV(shaderKind, glslPointF, spirvPointF);
                if (RE != 0){
                    _cpuCoul->RE = RE;
                    throw RE;
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
void GpuGram::Pec(){
    if (VB >= 4){
        VB -= 4;

        vkDestroyPipeline(device, pipeline, nullptr);
    }
    if (VB >= 2){
        VB -= 2;

        vkDestroyShaderModule(device, shaderModule, nullptr);
    }
    if (VB >= 1){
        VB -= 1;

        vkDestroyPipelineCache(device, pipelineCache, nullptr);
    }
}
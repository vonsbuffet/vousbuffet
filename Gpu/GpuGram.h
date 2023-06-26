#ifndef GpuGram_H
#define GpuGram_H

#include <shaderc/shaderc.hpp>

#include "VBCc.h"

class CpuCoul;

int32_t SPIRV(shaderc_shader_kind _viB, float *_glslPointF, float *_spirvPointF);

class GpuGram{
public:

    void Ce();
    void Be(CpuCoul *_cpuCoul, float *&_ctepF);
    void Vee(CpuCoul *_cpuCoul, float *&_ctepF);
    void Pec();

    int64_t VB;
    VkDevice device;
    VkPipeline pipeline;
    VkPipelineCache pipelineCache;
    VkShaderModule shaderModule;
};
#endif //GpuGram_H

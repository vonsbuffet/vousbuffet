#include "GpuBarGramBag.h"

void GpuBarGramBag::Ce(){
    VB = 0;
}
void GpuBarGramBag::Be(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float VB0 = VeeF(ctepF);
        if (VB0 >= 1){
            VB0 -= 1;

            //region Ce DescriptorPool
            Pec();
            Ce();

            Gpu *gpu = vbcc.gpuc + VeeD(ctepF); // D
            device = gpu->device;

            //region DescriptorSets
            descriptorSetLimit = VeeFU(ctepF); // F
            descriptorSetc = new VkDescriptorSet[descriptorSetLimit];
            VB += 1;
            uint32_t descriptorSetCtep = 0;
            while (descriptorSetCtep < descriptorSetLimit)
                descriptorSetc[descriptorSetCtep++] = VK_NULL_HANDLE;
            //endregion

            //region DescriptorPoolSize(c)
            uint32_t descriptorPoolSizeLimit = VeeFU(ctepF); // F
            descriptorPoolSizec = new VkDescriptorPoolSize[descriptorPoolSizeLimit];
            VB += 2;
            uint32_t descriptorPoolSizeCtep = 0;
            while (descriptorPoolSizeCtep < descriptorPoolSizeLimit){
                descriptorPoolSizec[descriptorPoolSizeCtep].type = (VkDescriptorType)VeeD(ctepF); // D
                descriptorPoolSizec[descriptorPoolSizeCtep++].descriptorCount = (uint32_t)VeeD(ctepF); // D
            }
            //endregion

            VkDescriptorPoolCreateInfo descriptorPoolCreateInfo;
            descriptorPoolCreateInfo.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
            descriptorPoolCreateInfo.pNext = nullptr;
            descriptorPoolCreateInfo.flags = (VkDescriptorPoolCreateFlags)VeeFU(ctepF); // F
            descriptorPoolCreateInfo.maxSets = descriptorSetLimit;
            descriptorPoolCreateInfo.poolSizeCount = descriptorPoolSizeLimit;
            descriptorPoolCreateInfo.pPoolSizes = descriptorPoolSizec;
            VkResult kRE = vkCreateDescriptorPool(device, &descriptorPoolCreateInfo, nullptr, &descriptorPool);
            if (kRE != VK_SUCCESS){
                _cpuCoul->RE = kRE;
                throw kRE;
            }
            VB += 4;

            delete[] descriptorPoolSizec;
            VB -= 2;

            descriptorSetLayoutc = new VkDescriptorSetLayout[descriptorSetLimit];
            VB += 8;

            //region WriteDescriptorSet(c)
            writeDescriptorSetLimit = VeeFU(ctepF); // F
            writeDescriptorSetc = new VkWriteDescriptorSet[writeDescriptorSetLimit];
            VB += 16;
            uint32_t writeDescriptorSetCtep = 0;
            while (writeDescriptorSetCtep < writeDescriptorSetLimit){
                VkWriteDescriptorSet *writeDescriptorSet = &(writeDescriptorSetc[writeDescriptorSetCtep]);
                writeDescriptorSet->pBufferInfo = nullptr;
                writeDescriptorSet->pImageInfo = nullptr;
                writeDescriptorSet->pTexelBufferView = nullptr;
                ++writeDescriptorSetCtep;
            }
            uint32_t descriptorBufferInfoLimit = VeeFU(ctepF); // F
            uint32_t descriptorImageInfoLimit = VeeFU(ctepF); // F
            uint32_t bufferViewLimit = VeeFU(ctepF); // F
            writeDescriptorSetCtep = 0;
            while (writeDescriptorSetCtep < writeDescriptorSetLimit){
                VkWriteDescriptorSet *writeDescriptorSet = &(writeDescriptorSetc[writeDescriptorSetCtep]);
                writeDescriptorSet->pBufferInfo = new VkDescriptorBufferInfo[descriptorBufferInfoLimit];
                writeDescriptorSet->pImageInfo = new VkDescriptorImageInfo[descriptorImageInfoLimit];
                writeDescriptorSet->pTexelBufferView = new VkBufferView[bufferViewLimit];
                ++writeDescriptorSetCtep;
            }
            //endregion

            copyDescriptorSetc = new VkCopyDescriptorSet[VeeFU(ctepF)]; // F
            VB += 32;

            //endregion
        }
        _ctepF = ctepF;
    } catch (...){
        _ctepF = ctepF;
        throw -1;
    }
}
void GpuBarGramBag::Vee(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float viBLimit = VeeF(ctepF); // F
        float viBCtep = 0;
        while (viBCtep < viBLimit) {
            float viB = VeeFU(ctepF); // F
            if (viB == ViBVee){
                //region Vee
                vkResetDescriptorPool(device, descriptorPool, 0);
                //endregion
            }
            else if (viB == ViBBe){
                //region Be
                uint32_t descriptorSetPoint = VeeFU(ctepF); // F
                uint32_t descriptorSetPointLimit = descriptorSetPoint + VeeFU(ctepF); // F
                uint32_t descriptorSetCtep = descriptorSetPoint;
                while (descriptorSetCtep < descriptorSetPointLimit) {
                    VkDescriptorSet descriptorSet = descriptorSetc[descriptorSetCtep];

                    uint32_t writeDescriptorSetLimit0 = VeeFU(ctepF); // F
                    uint32_t writeDescriptorSetCtep = 0;
                    while (writeDescriptorSetCtep < writeDescriptorSetLimit0) {
                        //region VkWriteDescriptorSet
                        VkWriteDescriptorSet *writeDescriptorSet = &(writeDescriptorSetc[writeDescriptorSetCtep]);
                        writeDescriptorSet->sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
                        writeDescriptorSet->pNext = nullptr;
                        writeDescriptorSet->dstSet = descriptorSet;
                        writeDescriptorSet->dstBinding = VeeFU(ctepF); // F
                        writeDescriptorSet->dstArrayElement = VeeFU(ctepF); // F
                        writeDescriptorSet->descriptorType = (VkDescriptorType)VeeD(ctepF); // D
                        writeDescriptorSet->descriptorCount = VeeFU(ctepF); // F

                        if (writeDescriptorSet->descriptorType >= 6 && writeDescriptorSet->descriptorType <= 9) {
                            //region Buffer Descriptor
                            uint32_t descriptorBufferInfoLimit = writeDescriptorSet->descriptorCount;
                            uint32_t descriptorBufferInfoCtep = 0;
                            while (descriptorBufferInfoCtep < descriptorBufferInfoLimit) {
                                VkDescriptorBufferInfo *descriptorBufferInfo = (VkDescriptorBufferInfo *)&(writeDescriptorSet->pBufferInfo[descriptorBufferInfoCtep]);
                                descriptorBufferInfo->buffer = (vbcc.gpuUnec + VeeD(ctepF))->buffer; // D
                                descriptorBufferInfo->offset = (uint64_t)VeeD(ctepF); // D
                                descriptorBufferInfo->range = (uint64_t)VeeD(ctepF); // D
                                ++descriptorBufferInfoCtep;
                            }
                            //endregion
                        }
                        else if (writeDescriptorSet->descriptorType <= 3 || writeDescriptorSet->descriptorType == 10) {
                            //region Image Descriptor
                            uint32_t descriptorImageInfoLimit = writeDescriptorSet->descriptorCount;
                            uint32_t descriptorImageInfoCtep = 0;
                            while (descriptorImageInfoCtep < descriptorImageInfoLimit) {
                                VkDescriptorImageInfo *descriptorImageInfo = (VkDescriptorImageInfo *)&(writeDescriptorSet->pImageInfo[descriptorImageInfoCtep]);
                                if (writeDescriptorSet->descriptorType <= 1)
                                    descriptorImageInfo->sampler = (vbcc.gpuMulteCamplerc + VeeD(ctepF))->sampler; // D
                                if (writeDescriptorSet->descriptorType >= 1){
                                    descriptorImageInfo->imageView = (vbcc.gpuMulteGramc + VeeD(ctepF))->imageView; // D
                                    descriptorImageInfo->imageLayout = (VkImageLayout)VeeD(ctepF); // D
                                }
                                ++descriptorImageInfoCtep;
                            }
                            //endregion
                        }
                        else if (writeDescriptorSet->descriptorType == 4 || writeDescriptorSet->descriptorType == 5){
                            //region TexelBufferView Descriptor
                            uint32_t texelBufferViewLimit = writeDescriptorSet->descriptorCount;
                            uint32_t texelBufferViewCtep = 0;
                            while (texelBufferViewCtep < texelBufferViewLimit){
                                VkBufferView *bufferView = (VkBufferView *)&(writeDescriptorSet->pTexelBufferView[texelBufferViewCtep]);
                                bufferView[0] = (vbcc.gpuUneGramc + VeeD(ctepF))->bufferView; // D
                                ++texelBufferViewCtep;
                            }
                            //endregion
                        }
                        //endregion
                        ++writeDescriptorSetCtep;
                    }
                    uint32_t copyDescriptorSetLimit = VeeFU(ctepF); // F
                    uint32_t copyDescriptorSetCtep = 0;
                    while (copyDescriptorSetCtep < copyDescriptorSetLimit){
                        //region VkCopyDescriptorSet
                        VkCopyDescriptorSet *copyDescriptorSet = &(copyDescriptorSetc[copyDescriptorSetCtep]);
                        copyDescriptorSet->sType = VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET;
                        copyDescriptorSet->pNext = nullptr;
                        GpuBarGramBag *gpuBarGramBag = vbcc.gpuBarGramBagc + VeeD(ctepF); // D
                        copyDescriptorSet->srcSet = gpuBarGramBag->descriptorSetc[VeeFU(ctepF)]; // F
                        copyDescriptorSet->srcBinding = VeeFU(ctepF); // F
                        copyDescriptorSet->srcArrayElement = VeeFU(ctepF); // F
                        copyDescriptorSet->dstSet = descriptorSet;
                        copyDescriptorSet->dstBinding = VeeFU(ctepF); // F
                        copyDescriptorSet->dstArrayElement = VeeFU(ctepF); // F
                        copyDescriptorSet->descriptorCount = VeeFU(ctepF); // F
                        //endregion
                        ++copyDescriptorSetCtep;
                    }
                    vkUpdateDescriptorSets(device, writeDescriptorSetLimit0, writeDescriptorSetc, copyDescriptorSetLimit, copyDescriptorSetc);

                    ++descriptorSetCtep;
                }
                //endregion
            }
            else if (viB == ViBCe){
                //region Ce
                uint32_t descriptorSetPoint = VeeFU(ctepF); // F
                uint32_t descriptorSetLimit0 = VeeFU(ctepF); // F

                uint32_t descriptorSetCtep = 0;
                while (descriptorSetCtep < descriptorSetLimit0){
                    GpuBarGramBeGram *gpuBarGramBeGram = vbcc.gpuBarGramBeGramc + VeeD(ctepF); // D
                    descriptorSetLayoutc[descriptorSetCtep++] = gpuBarGramBeGram->descriptorSetLayout;
                }

                VkDescriptorSetAllocateInfo descriptorSetAllocateInfo;
                descriptorSetAllocateInfo.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO;
                descriptorSetAllocateInfo.pNext = nullptr;
                descriptorSetAllocateInfo.descriptorPool = descriptorPool;
                descriptorSetAllocateInfo.descriptorSetCount = descriptorSetLimit0;
                descriptorSetAllocateInfo.pSetLayouts = descriptorSetLayoutc;
                VkResult kRE = vkAllocateDescriptorSets(device, &descriptorSetAllocateInfo, &(descriptorSetc[descriptorSetPoint]));
                if (kRE != VK_SUCCESS){
                    _cpuCoul->RE = kRE;
                    std::stringstream sStream;
                    sStream << "Error :: GpuBarGramBag:Vee[vkAllocateDescriptorSets Failed] :: " << kRE;
                    throw ExtraSauce(sStream.str().c_str());
                }
                //endregion
            }
            else if (viB == ViBPec){
                //region Pec
                uint32_t descriptorSetPoint = VeeFU(ctepF); // F
                uint32_t descriptorSetLimit0 = VeeFU(ctepF); // F

                VkResult kRE = vkFreeDescriptorSets(device, descriptorPool, descriptorSetLimit0, &(descriptorSetc[descriptorSetPoint]));
                if (kRE != VK_SUCCESS){
                    _cpuCoul->RE = kRE;
                    throw kRE;
                }
                uint32_t descriptorSetPointLimit = descriptorSetPoint + descriptorSetLimit0;
                uint32_t descriptorSetCtep = descriptorSetPoint;
                while (descriptorSetCtep < descriptorSetPointLimit)
                    descriptorSetc[descriptorSetCtep++] = VK_NULL_HANDLE;
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
void GpuBarGramBag::Pec(){
    if (VB >= 32){
        VB -= 32;

        delete[] copyDescriptorSetc;
    }
    if (VB >= 16){
        VB -= 16;

        uint32_t writeDescriptorSetCtep = 0;
        while(writeDescriptorSetCtep < writeDescriptorSetLimit){
            VkWriteDescriptorSet *writeDescriptorSet = &(writeDescriptorSetc[writeDescriptorSetCtep]);
            delete[] writeDescriptorSet->pBufferInfo;
            delete[] writeDescriptorSet->pImageInfo;
            delete[] writeDescriptorSet->pTexelBufferView;
            ++writeDescriptorSetCtep;
        }
        delete[] writeDescriptorSetc;
    }
    if (VB >= 8){
        VB -= 8;

        delete[] descriptorSetLayoutc;
    }
    if (VB >= 4){
        VB -= 4;

        vkDestroyDescriptorPool(device, descriptorPool, nullptr);
    }
    if (VB >= 2){
        VB -= 2;

        delete[] descriptorPoolSizec;
    }
    if (VB >= 1){
        VB -= 1;

        delete[] descriptorSetc;
    }
}
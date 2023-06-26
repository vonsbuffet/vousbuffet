#include "GpuGnBag.h"

// Secret Sauce
float copyBufferViB = 0;
float moveBufferViB = 1;
float dispatchViB = 2;
float dispatchIndirectViB = 3;
float pushConstantViB = 4;
float bindPipelineViB = 5;
float bindDescriptorSetViB = 6;
float clearColorImageViB = 7;
float pipelineBarrierViB = 8;
float executeCommandViB = 9;
// Enough Secret!

void GpuGnBag::Ce() {
    VB = 0;
}
void GpuGnBag::Be(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float VB0 = VeeF(ctepF); // F
        if (VB0 >= 1){
            VB0 -= 1;

            //region Ce CommandPool
            Pec();
            Ce();

            gpu = vbcc.gpuc + VeeD(ctepF); // D
            device = gpu->device;

            VkCommandPoolCreateInfo commandPoolCreateInfo;
            commandPoolCreateInfo.sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
            commandPoolCreateInfo.pNext = nullptr;
            commandPoolCreateInfo.flags = (VkCommandPoolCreateFlags)VeeFU(ctepF); // F
            commandPoolCreateInfo.queueFamilyIndex = gpu->queueViBPointc[VeeFU(ctepF)]; // F
            VkResult kRE = vkCreateCommandPool(device, &commandPoolCreateInfo, nullptr, &commandPool);
            if (kRE != VK_SUCCESS){
                _cpuCoul->RE = kRE;
                throw kRE;
            }
            VB += 1;

            commandBufferLimit = VeeFU(ctepF); // F
            commandBufferc = new VkCommandBuffer[commandBufferLimit];
            VB += 2;

            uint32_t commandBufferCtep = 0;
            while (commandBufferCtep < commandBufferLimit){
                commandBufferc[commandBufferCtep] = VK_NULL_HANDLE;
                ++commandBufferCtep;
            }

            secondaryCommandBufferc = new VkCommandBuffer[VeeFU(ctepF)]; // F
            VB += 4;

            pushConstantPointC = new char[VeeFU(ctepF)]; // F
            VB += 8;

            descriptorSetc = new VkDescriptorSet[VeeFU(ctepF)]; // F
            VB += 16;

            memoryBarrierc = new VkMemoryBarrier[VeeFU(ctepF)]; // F
            VB += 32;

            bufferMemoryBarrierc = new VkBufferMemoryBarrier[VeeFU(ctepF)]; // F
            VB += 64;

            imageMemoryBarrierc = new VkImageMemoryBarrier[VeeFU(ctepF)]; // F
            VB += 128;

            bufferCopyc = new VkBufferCopy[VeeFU(ctepF)]; // F
            VB += 256;

            dynamicOffsetc = new uint32_t[VeeFU(ctepF)]; // F
            VB += 512;

            imageSubresourceRangec = new VkImageSubresourceRange[VeeFU(ctepF)]; // F
            VB += 1024;
            //endregion
        }
        _ctepF = ctepF;
    } catch (...){
        _ctepF = ctepF;
        throw -1;
    }
}
void GpuGnBag::Vee(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float viBLimit = VeeF(ctepF); // F
        float viBCtep = 0;
        float viB;
        while (viBCtep < viBLimit) {
            viB = VeeF(ctepF); // F
            if (viB == ViBVee){
                //region Vee
                float veeViB = VeeF(ctepF); // F
                if (veeViB == 0){
                    //region QueueSubmit
                    GpuQew *gpuQew = vbcc.gpuQewc + VeeD(ctepF); // D
                    uint32_t submitLimit = VeeFU(ctepF); // F

                    uint32_t submitCtep = 0;
                    while (submitCtep < submitLimit){
                        //region SubmitInfo
                        VkSubmitInfo *submitInfo = &(gpuQew->submitInfoc[gpuQew->submitInfoLimit++]);
                        submitInfo->sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
                        submitInfo->pNext = nullptr;
                        submitInfo->pCommandBuffers = &(commandBufferc[VeeFU(ctepF)]); // F
                        submitInfo->commandBufferCount = VeeFU(ctepF); // F
                        submitInfo->waitSemaphoreCount = VeeFU(ctepF); // F
                        if (submitInfo->waitSemaphoreCount > 0){
                            GpuKomaBag *gpuKomaBag = vbcc.gpuKomaBagc + VeeD(ctepF); // D
                            uint32_t semaphorePoint = VeeFU(ctepF); // F
                            submitInfo->pWaitSemaphores = &(gpuKomaBag->semaphorec[semaphorePoint]);
                            submitInfo->pWaitDstStageMask = &(gpuKomaBag->gpuGnWaitDstStageMaskc[semaphorePoint]);
                        }
                        submitInfo->signalSemaphoreCount = VeeFU(ctepF); // F
                        if (submitInfo->signalSemaphoreCount > 0){
                            GpuKomaBag *gpuKomaBag = vbcc.gpuKomaBagc + VeeD(ctepF); // D
                            uint32_t semaphorePoint = VeeFU(ctepF); // F
                            submitInfo->pSignalSemaphores = &(gpuKomaBag->semaphorec[semaphorePoint]);
                        }
                        ++submitCtep;
                        //endregion
                    }
                    //endregion
                }
                else if (veeViB == 1){
                    //region Reset [ Pool ]
                    vkResetCommandPool(device, commandPool, 0);
                    //endregion
                }
                else if (veeViB == 2){
                    //region Reset [ Buffer ]
                    uint32_t commandBufferPoint = VeeFU(ctepF); // F
                    uint32_t commandBufferPointLimit = commandBufferPoint + VeeFU(ctepF); // F
                    float resetVB = VeeF(ctepF); // F

                    if (resetVB > 0){
                        VkCommandBufferResetFlags commandBufferResetFlags = (VkCommandBufferResetFlags)VeeFU(ctepF); // F
                        uint32_t commandBufferCtep = commandBufferPoint;
                        while (commandBufferCtep < commandBufferPointLimit){
                            VkCommandBuffer commandBuffer = commandBufferc[commandBufferCtep];

                            vkResetCommandBuffer(commandBuffer, commandBufferResetFlags);

                            commandBufferCtep += 1;
                        }
                    } else {
                        uint32_t commandBufferCtep = commandBufferPoint;
                        while (commandBufferCtep < commandBufferPointLimit){
                            VkCommandBuffer commandBuffer = commandBufferc[commandBufferCtep];

                            VkCommandBufferResetFlags commandBufferResetFlags = (VkCommandBufferResetFlags)VeeFU(ctepF); // F
                            vkResetCommandBuffer(commandBuffer, commandBufferResetFlags);

                            commandBufferCtep += 1;
                        }
                    }
                    //endregion
                }
                //endregion
            }
            else if (viB == ViBBe){
                //region Be
                uint32_t commandBufferPoint = VeeFU(ctepF); // F
                uint32_t commandBufferPointLimit = commandBufferPoint + VeeFU(ctepF); // F
                uint32_t commandBufferCtep = commandBufferPoint;
                while (commandBufferCtep < commandBufferPointLimit){
                    VkCommandBuffer commandBuffer = commandBufferc[commandBufferCtep];
                    VkCommandBufferBeginInfo beginInfo;
                    beginInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
                    beginInfo.pNext = nullptr;
                    beginInfo.flags = (VkCommandBufferUsageFlags)VeeFU(ctepF); // F
                    beginInfo.pInheritanceInfo = nullptr;
                    VkResult kRE = vkBeginCommandBuffer(commandBuffer, &beginInfo);
                    if (kRE != VK_SUCCESS){
                        _cpuCoul->RE = kRE;
                        throw kRE;
                    }
                    float commandViBLimit = VeeF(ctepF); // F
                    float commandViBCtep = 0;
                    while (commandViBCtep < commandViBLimit){
                        float commandViB = VeeF(ctepF); // F
                        if (commandViB == copyBufferViB){
                            //region Copy Buffer
                            VkBuffer beBuffer = (vbcc.gpuUnec + VeeD(ctepF))->buffer; // D
                            VkBuffer veeBuffer = (vbcc.gpuUnec + VeeD(ctepF))->buffer; // D
                            uint32_t bufferCopyLimit = (uint32_t)VeeD(ctepF); // D
                            uint32_t bufferCopyCtep = 0;
                            while (bufferCopyCtep < bufferCopyLimit){
                                bufferCopyc[bufferCopyCtep].dstOffset = (VkDeviceSize)VeeD(ctepF); // D
                                bufferCopyc[bufferCopyCtep].srcOffset = (VkDeviceSize)VeeD(ctepF); // D
                                bufferCopyc[bufferCopyCtep].size = (VkDeviceSize)VeeD(ctepF); // D
                                ++bufferCopyCtep;
                            }
                            vkCmdCopyBuffer(commandBuffer, veeBuffer, beBuffer, bufferCopyLimit, bufferCopyc);
                            //endregion
                        }
                        if (commandViB == moveBufferViB){
                            //region Move Buffer
                            VkBuffer buffer = (vbcc.gpuUnec + VeeD(ctepF))->buffer; // D
                            int64_t pointC = VeeD(ctepF); // D
                            int64_t limitC = VeeD(ctepF); // D
                            int64_t ctepC = VeeD(ctepF); // D
                            VkBuffer pecBuffer = (vbcc.gpuUnec + VeeD(ctepF))->buffer; // D
                            VkBuffer pecPointC = (vbcc.gpuUnec + VeeD(ctepF))->buffer; // D
                            uint32_t pecLimitC = (uint32_t)VeeD(ctepF); // D

                            VkMemoryBarrier *memoryBarrier = memoryBarrierc;
                            memoryBarrier->sType = VK_STRUCTURE_TYPE_MEMORY_BARRIER;
                            memoryBarrier->pNext = nullptr;
                            memoryBarrier->srcAccessMask = (VkAccessFlags)VK_ACCESS_MEMORY_READ_BIT;
                            memoryBarrier->dstAccessMask = (VkAccessFlags)VK_ACCESS_MEMORY_WRITE_BIT;

                            VkBufferCopy *bufferCopy = bufferCopyc;

                            int64_t limitC0 = 0;
                            while (limitC > 0){

                                if (limitC > pecLimitC)
                                    bufferCopy->size = (VkDeviceSize)pecLimitC;
                                else
                                    bufferCopy->size = (VkDeviceSize)limitC;

                                //region Copy [ ->Pec ]
                                bufferCopy->dstOffset = (VkDeviceSize)pecPointC;
                                if (ctepC > 0)
                                    bufferCopy->srcOffset = (VkDeviceSize)(pointC + limitC - bufferCopy->size);
                                else
                                    bufferCopy->srcOffset = (VkDeviceSize)(pointC + limitC0);
                                vkCmdCopyBuffer(commandBuffer, buffer, pecBuffer, 1, bufferCopyc);
                                //endregion
                                vkCmdPipelineBarrier(commandBuffer, VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 1, memoryBarrierc, 0, bufferMemoryBarrierc, 0, imageMemoryBarrierc);
                                //region Copy [ Pec-> ]
                                bufferCopy->srcOffset = (VkDeviceSize)pecPointC;
                                if (ctepC > 0)
                                    bufferCopy->dstOffset = (VkDeviceSize)(pointC + limitC - bufferCopy->size + ctepC);
                                else
                                    bufferCopy->dstOffset = (VkDeviceSize)(pointC + limitC0 + ctepC);
                                vkCmdCopyBuffer(commandBuffer, pecBuffer, buffer, 1, bufferCopyc);
                                //endregion
                                vkCmdPipelineBarrier(commandBuffer, VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 1, memoryBarrierc, 0, bufferMemoryBarrierc, 0, imageMemoryBarrierc);

                                limitC -= bufferCopy->size;
                                limitC0 += bufferCopy->size;
                            }
                            //endregion
                        }
                        else if (commandViB == dispatchViB){
                            //region Dispatch
                            uint32_t x = (uint32_t)VeeD(ctepF); // D
                            uint32_t y = (uint32_t)VeeD(ctepF); // D
                            uint32_t z = (uint32_t)VeeD(ctepF); // D
                            int64_t dispatchLimit = (uint32_t)VeeD(ctepF); // D

                            VkMemoryBarrier memoryBarrier;
                            memoryBarrier.sType = VK_STRUCTURE_TYPE_MEMORY_BARRIER;
                            memoryBarrier.pNext = nullptr;
                            memoryBarrier.srcAccessMask = (VkAccessFlags)VK_ACCESS_MEMORY_WRITE_BIT;
                            memoryBarrier.dstAccessMask = (VkAccessFlags)VK_ACCESS_MEMORY_READ_BIT;

                            int64_t dispatchCtep = 1;
                            do{
                                vkCmdDispatch(commandBuffer, x, y, z);

                                if (dispatchCtep >= dispatchLimit)
                                    break;

                                vkCmdPipelineBarrier(commandBuffer, VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT, VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT, 0, 1, &memoryBarrier, 0, nullptr, 0, nullptr);

                                dispatchCtep += 1;
                            } while (true);
                            //endregion
                        }
                        else if (commandViB == dispatchIndirectViB){
                            //region Dispatch Indirect
                            GpuUne *gpuUne = vbcc.gpuUnec + VeeD(ctepF); // D
                            VkDeviceSize pointTruC = (VkDeviceSize)VeeD(ctepF); // D
                            vkCmdDispatchIndirect(commandBuffer, gpuUne->buffer, pointTruC);
                            //endregion
                        }
                        else if (commandViB == pushConstantViB){
                            //region Push Constant
                            GpuGramBeGram *gpuGramBeGram = vbcc.gpuGramBeGramc + VeeD(ctepF); // D
                            VkShaderStageFlags shaderStageFlags = (VkShaderStageFlags)VeeD(ctepF); // D
                            uint32_t pointC = VeeFU(ctepF); // F
                            uint32_t limitC = VeeFU(ctepF); // F
                            float pushViB = VeeF(ctepF); // F
                            if (pushViB == 0){
                                uint32_t limitF = limitC / 4;
                                uint32_t ctepF0 = 0;
                                while (ctepF0 < limitF)
                                    ((float *)pushConstantPointC)[ctepF0++] = VeeF(ctepF); // F
                            }
                            else if (pushViB == 1){
                                uint32_t limitI = limitC / 4;
                                uint32_t ctepI = 0;
                                while (ctepI < limitI)
                                    ((int32_t *)pushConstantPointC)[ctepI++] = (int32_t)VeeD(ctepF); // D
                            }
                            else if (pushViB == 2){
                                uint32_t limitU = limitC / 4;
                                uint32_t ctepU = 0;
                                while (ctepU < limitU)
                                    ((uint32_t *)pushConstantPointC)[ctepU++] = (uint32_t)VeeD(ctepF); // D
                            }
                            vkCmdPushConstants(commandBuffer, gpuGramBeGram->pipelineLayout, shaderStageFlags, pointC, limitC, (void *)pushConstantPointC);
                            //endregion
                        }
                        else if (commandViB == bindPipelineViB){
                            //region Bind Pipeline
                            GpuGram *gpuGram = vbcc.gpuGramc + VeeD(ctepF); // D
                            VkPipelineBindPoint pipelineBindPoint = (VkPipelineBindPoint)VeeD(ctepF); // D

                            vkCmdBindPipeline(commandBuffer, pipelineBindPoint, gpuGram->pipeline);
                            //endregion
                        }
                        else if (commandViB == bindDescriptorSetViB){
                            //region Bind DescriptorSet
                            VkPipelineBindPoint pipelineBindPoint = (VkPipelineBindPoint)VeeD(ctepF); // D
                            VkPipelineLayout pipelineLayout = (vbcc.gpuGramBeGramc + VeeD(ctepF))->pipelineLayout; // D
                            uint32_t firstSetPoint = VeeFU(ctepF); // F
                            uint32_t descriptorSetLimit = VeeFU(ctepF); // F
                            uint32_t descriptorSetCtep = 0;
                            while (descriptorSetCtep < descriptorSetLimit){
                                GpuBarGramBag *gpuBarGramBag = vbcc.gpuBarGramBagc + VeeD(ctepF); // D
                                descriptorSetc[descriptorSetCtep++] = gpuBarGramBag->descriptorSetc[VeeFU(ctepF)]; // F
                            }
                            uint32_t dynamicOffsetLimit = VeeFU(ctepF); // F
                            uint32_t dynamicOffsetCtep = 0;
                            while (dynamicOffsetCtep < dynamicOffsetLimit)
                                dynamicOffsetc[dynamicOffsetCtep++] = (uint32_t)VeeD(ctepF); // D
                            vkCmdBindDescriptorSets(commandBuffer, pipelineBindPoint, pipelineLayout, firstSetPoint, descriptorSetLimit, descriptorSetc, dynamicOffsetLimit, dynamicOffsetc);
                            //endregion
                        }
                        else if (commandViB == clearColorImageViB){
                            //region ClearColorImage
                            float commandViB0 = VeeF(ctepF); // F
                            VkImage image = VK_NULL_HANDLE;
                            if (commandViB0 == GpuViBMulte){
                                GpuMulte *gpuMulte = vbcc.gpuMultec + VeeD(ctepF); // D
                                image = gpuMulte->image;
                            } else if (commandViB0 == GpuViBMulteBag){
                                GpuMulteBag *gpuMulteBag = vbcc.gpuMulteBagc + VeeD(ctepF); // D
                                image = gpuMulteBag->imagec[VeeFU(ctepF)]; // F
                            }
                            VkImageLayout imageLayout = (VkImageLayout)VeeD(ctepF); // D
                            VkClearColorValue clearColorValue;
                            commandViB0 = VeeF(ctepF); // F
                            if (commandViB0 == 0){
                                clearColorValue.float32[0] = VeeF(ctepF); // F
                                clearColorValue.float32[1] = VeeF(ctepF); // F
                                clearColorValue.float32[2] = VeeF(ctepF); // F
                                clearColorValue.float32[3] = VeeF(ctepF); // F
                            } else if (commandViB0 == 1){
                                clearColorValue.int32[0] = (int32_t)VeeD(ctepF); // D
                                clearColorValue.int32[1] = (int32_t)VeeD(ctepF); // D
                                clearColorValue.int32[2] = (int32_t)VeeD(ctepF); // D
                                clearColorValue.int32[3] = (int32_t)VeeD(ctepF); // D
                            } else if (commandViB0 == 2){
                                clearColorValue.uint32[0] = (uint32_t)VeeD(ctepF); // D
                                clearColorValue.uint32[1] = (uint32_t)VeeD(ctepF); // D
                                clearColorValue.uint32[2] = (uint32_t)VeeD(ctepF); // D
                                clearColorValue.uint32[3] = (uint32_t)VeeD(ctepF); // D
                            }
                            uint32_t imageSubresourceRangeLimit = VeeFU(ctepF);
                            uint32_t imageSubresourceRangeCtep = 0;
                            while (imageSubresourceRangeCtep < imageSubresourceRangeLimit){
                                VkImageSubresourceRange *imageSubresourceRange = &(imageSubresourceRangec[imageSubresourceRangeCtep]);
                                imageSubresourceRange->aspectMask = (VkImageAspectFlags)VeeFU(ctepF); // F
                                imageSubresourceRange->baseMipLevel = VeeFU(ctepF); // F
                                imageSubresourceRange->levelCount = VeeFU(ctepF); // F
                                imageSubresourceRange->baseArrayLayer = VeeFU(ctepF); // F
                                imageSubresourceRange->layerCount = VeeFU(ctepF); // F
                                ++imageSubresourceRangeCtep;
                            }
                            vkCmdClearColorImage(commandBuffer,image,imageLayout,&clearColorValue,imageSubresourceRangeLimit,imageSubresourceRangec);
                            //endregion
                        }
                        else if (commandViB == pipelineBarrierViB){
                            //region Pipeline Barrier
                            VkPipelineStageFlags srcStageMask = (VkPipelineStageFlags)VeeD(ctepF); // D
                            VkPipelineStageFlags dstStageMask = (VkPipelineStageFlags)VeeD(ctepF); // D
                            VkDependencyFlags dependencyFlags = (VkDependencyFlags)VeeFU(ctepF); // F
                            //region Memory Barrier(c)
                            uint32_t memoryBarrierLimit = VeeFU(ctepF); // F
                            uint32_t memoryBarrierCtep = 0;
                            while (memoryBarrierCtep < memoryBarrierLimit){
                                VkMemoryBarrier *memoryBarrier = &(memoryBarrierc[memoryBarrierCtep]);
                                memoryBarrier->sType = VK_STRUCTURE_TYPE_MEMORY_BARRIER;
                                memoryBarrier->pNext = nullptr;
                                memoryBarrier->srcAccessMask = (VkAccessFlags)VeeD(ctepF); // D
                                memoryBarrier->dstAccessMask = (VkAccessFlags)VeeD(ctepF); // D
                                ++memoryBarrierCtep;
                            }
                            //endregion
                            //region Buffer Barrier(c)
                            uint32_t bufferMemoryBarrierLimit = VeeFU(ctepF); // F
                            uint32_t bufferMemoryBarrierCtep = 0;
                            while (bufferMemoryBarrierCtep < bufferMemoryBarrierLimit){
                                VkBufferMemoryBarrier *bufferMemoryBarrier = &(bufferMemoryBarrierc[bufferMemoryBarrierCtep]);
                                bufferMemoryBarrier->sType = VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER;
                                bufferMemoryBarrier->pNext = nullptr;
                                bufferMemoryBarrier->srcAccessMask = (VkAccessFlags)VeeD(ctepF); // D
                                bufferMemoryBarrier->dstAccessMask = (VkAccessFlags)VeeD(ctepF); // D
                                bufferMemoryBarrier->srcQueueFamilyIndex = gpu->queueViBPointc[VeeFU(ctepF)]; // F
                                bufferMemoryBarrier->dstQueueFamilyIndex = gpu->queueViBPointc[VeeFU(ctepF)]; // F
                                bufferMemoryBarrier->buffer = (vbcc.gpuUnec + VeeD(ctepF))->buffer; // D
                                bufferMemoryBarrier->offset = (VkDeviceSize)VeeD(ctepF); // D
                                bufferMemoryBarrier->size = (VkDeviceSize)VeeD(ctepF); // D
                                ++bufferMemoryBarrierCtep;
                            }
                            //endregion
                            //region Image Barrier(c)
                            uint32_t imageMemoryBarrierLimit = VeeFU(ctepF); // F
                            uint32_t imageMemoryBarrierCtep = 0;
                            while (imageMemoryBarrierCtep < imageMemoryBarrierLimit){
                                VkImageMemoryBarrier *imageMemoryBarrier = &(imageMemoryBarrierc[imageMemoryBarrierCtep]);
                                imageMemoryBarrier->sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
                                imageMemoryBarrier->pNext = nullptr;
                                imageMemoryBarrier->srcAccessMask = (VkAccessFlags)VeeD(ctepF); // D
                                imageMemoryBarrier->dstAccessMask = (VkAccessFlags)VeeD(ctepF); // D
                                imageMemoryBarrier->oldLayout = (VkImageLayout)VeeD(ctepF); // D
                                imageMemoryBarrier->newLayout = (VkImageLayout)VeeD(ctepF); // D
                                imageMemoryBarrier->srcQueueFamilyIndex = gpu->queueViBPointc[VeeFU(ctepF)]; // F
                                imageMemoryBarrier->dstQueueFamilyIndex = gpu->queueViBPointc[VeeFU(ctepF)]; // F
                                float multeViB = VeeF(ctepF); // F
                                if (multeViB == GpuViBMulteBag){
                                    GpuMulteBag *gpuMulteBag = vbcc.gpuMulteBagc + VeeD(ctepF); // D
                                    imageMemoryBarrier->image = gpuMulteBag->imagec[VeeFU(ctepF)]; // F
                                }
                                else if (multeViB == GpuViBMulte){
                                    imageMemoryBarrier->image =  (vbcc.gpuMultec + VeeD(ctepF))->image; // D
                                }
                                imageMemoryBarrier->subresourceRange.aspectMask = (VkImageAspectFlags)VeeFU(ctepF); // F
                                imageMemoryBarrier->subresourceRange.baseMipLevel = VeeFU(ctepF); // F
                                imageMemoryBarrier->subresourceRange.levelCount = VeeFU(ctepF); // F
                                imageMemoryBarrier->subresourceRange.baseArrayLayer = VeeFU(ctepF); // F
                                imageMemoryBarrier->subresourceRange.layerCount = VeeFU(ctepF); // F
                                ++imageMemoryBarrierCtep;
                            }
                            //endregion
                            vkCmdPipelineBarrier(commandBuffer, srcStageMask, dstStageMask, dependencyFlags, memoryBarrierLimit, memoryBarrierc, bufferMemoryBarrierLimit, bufferMemoryBarrierc, imageMemoryBarrierLimit, imageMemoryBarrierc);
                            //endregion
                        }
                        else if (commandViB == executeCommandViB){
                            //region Execute Command
                            uint32_t secondaryCommandBufferLimit = VeeFU(ctepF); // F
                            uint32_t secondaryCommandBufferCtep = 0;
                            while (secondaryCommandBufferCtep < commandBufferLimit){
                                GpuGnBag *gpuGnBag = vbcc.gpuGnBagc + VeeD(ctepF); // D
                                secondaryCommandBufferc[secondaryCommandBufferCtep++] = gpuGnBag->commandBufferc[VeeFU(ctepF)];
                            }
                            vkCmdExecuteCommands(commandBuffer, secondaryCommandBufferLimit, secondaryCommandBufferc);
                            //endregion
                        }
                        ++commandViBCtep;
                    }
                    kRE = vkEndCommandBuffer(commandBuffer);
                    if (kRE != VK_SUCCESS){
                        _cpuCoul->RE = kRE;
                        throw kRE;
                    }
                    ++commandBufferCtep;
                }
                //endregion
            }
            else if (viB == ViBCe){
                //region Ce
                uint32_t commandBufferPoint = VeeFU(ctepF); // F
                uint32_t commandBufferLimit0 = VeeFU(ctepF); // F
                VkCommandBufferLevel vkCommandBufferLevel = (VkCommandBufferLevel)VeeD(ctepF); // D

                VkCommandBufferAllocateInfo commandBufferAllocateInfo;
                commandBufferAllocateInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
                commandBufferAllocateInfo.pNext = nullptr;
                commandBufferAllocateInfo.commandPool = commandPool;
                commandBufferAllocateInfo.level = vkCommandBufferLevel;
                commandBufferAllocateInfo.commandBufferCount = commandBufferLimit0;
                VkResult kRE = vkAllocateCommandBuffers(device, &commandBufferAllocateInfo, &(commandBufferc[commandBufferPoint]));
                if (kRE != VK_SUCCESS){
                    _cpuCoul->RE = kRE;
                    throw kRE;
                }
                //endregion
            }
            else if (viB == ViBPec){
                //region Pec
                uint32_t commandBufferPoint = VeeFU(ctepF); // F
                uint32_t commandBufferLimit0 = VeeFU(ctepF); // F

                vkFreeCommandBuffers(device, commandPool, commandBufferLimit0, &(commandBufferc[commandBufferPoint]));
                uint32_t commandBufferPointLimit = commandBufferPoint + commandBufferLimit0;
                uint32_t commandBufferCtep = commandBufferPoint;
                while (commandBufferCtep < commandBufferPointLimit)
                    commandBufferc[commandBufferCtep++] = VK_NULL_HANDLE;
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
void GpuGnBag::Pec(){
    if (VB >= 1024){
        VB -= 1024;

        delete[] imageSubresourceRangec;
    }
    if (VB >= 5124){
        VB -= 512;

        delete[] dynamicOffsetc;
    }
    if (VB >= 256){
        VB -= 256;

        delete[] bufferCopyc;
    }
    if (VB >= 128){
        VB -= 128;

        delete[] imageMemoryBarrierc;
    }
    if (VB >= 64){
        VB -= 64;

        delete[] bufferMemoryBarrierc;
    }
    if (VB >= 32){
        VB -= 32;

        delete[] memoryBarrierc;
    }
    if (VB >= 16){
        VB -= 16;

        delete[] descriptorSetc;
    }
    if (VB >= 8){
        VB -= 8;

        delete[] pushConstantPointC;
    }
    if (VB >= 4){
        VB -= 4;

        delete[] secondaryCommandBufferc;
    }
    if (VB >= 2){
        VB -= 2;

        delete[] commandBufferc;
    }
    if (VB >= 1){
        VB -= 1;

        vkDestroyCommandPool(device, commandPool, nullptr);
    }
}
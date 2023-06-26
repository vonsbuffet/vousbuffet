#include "GpuMulteBag.h"

void GpuMulteBag::Ce(){
    VB = 0;
}
void GpuMulteBag::Be(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float VB0 = VeeF(ctepF); // F
        if (VB0 >= 2){
            VB0 -= 2;

            //region Ce Swapchain
            Pec();
            Ce();


            Gpu *gpu = vbcc.gpuc + VeeD(ctepF); // D
            device = gpu->device;
            surface = gpu->surface;

            //region Surface Format
            VkFormat format = (VkFormat)VeeD(ctepF); // D
            uint32_t formatLimit = 0;
            uint32_t formatCtep = 0;
            VkResult kRE = vkGetPhysicalDeviceSurfaceFormatsKHR(gpu->physicalDevice, surface, &formatLimit, VK_NULL_HANDLE);
            if (kRE != VK_SUCCESS){
               _cpuCoul->RE = kRE;
                throw kRE;
            }
            surfaceFormats = new VkSurfaceFormatKHR[formatLimit];
            VB += 1;
            kRE = vkGetPhysicalDeviceSurfaceFormatsKHR(gpu->physicalDevice, surface, &formatLimit, surfaceFormats);
            if (kRE != VK_SUCCESS){
               _cpuCoul->RE = kRE;
                throw kRE;
            }
            while (formatCtep < formatLimit){
                if (surfaceFormats[formatCtep].format == format)
                    break;
                ++formatCtep;
            }
            if (formatCtep == formatLimit){
               _cpuCoul->RE = -1;
                throw -1;
            }
            //endregion

            //region Surface Capabilities
            VkSurfaceCapabilitiesKHR surfaceCap;
            kRE = vkGetPhysicalDeviceSurfaceCapabilitiesKHR(gpu->physicalDevice, surface, &surfaceCap);
            if (kRE != VK_SUCCESS){
               _cpuCoul->RE = kRE;
                throw kRE;
            }
            //endregion

            //region Qew ViiB Point(c)
            uint32_t qewLimit = VeeFU(ctepF); // F
            qewViBPointc = new uint32_t[qewLimit];
            VB += 2;
            uint32_t qewCtep = 0;
            while (qewCtep < qewLimit)
                qewViBPointc[qewCtep++] = (gpu->queueViBPointc)[VeeFU(ctepF)]; // F
            //endregion

            //region Composite Alpha
            VkCompositeAlphaFlagsKHR compositeAlphaFlags = (VkCompositeAlphaFlagsKHR)VeeFU(ctepF); // F
            if (!(surfaceCap.supportedCompositeAlpha | compositeAlphaFlags)){
               _cpuCoul->RE = -1;
                throw -1;
            }
            //endregion

            VkSwapchainCreateInfoKHR swapchainCreateInfoKhr;
            swapchainCreateInfoKhr.sType = VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR;
            swapchainCreateInfoKhr.pNext = nullptr;
            swapchainCreateInfoKhr.flags = VeeFU(ctepF); // F
            swapchainCreateInfoKhr.surface = surface;
            swapchainCreateInfoKhr.minImageCount = VeeFU(ctepF); // F
            swapchainCreateInfoKhr.imageFormat = surfaceFormats[formatCtep].format;
            swapchainCreateInfoKhr.imageColorSpace = surfaceFormats[formatCtep].colorSpace;
            swapchainCreateInfoKhr.imageExtent = surfaceCap.currentExtent;
            swapchainCreateInfoKhr.imageArrayLayers = VeeFU(ctepF); // F
            swapchainCreateInfoKhr.imageUsage = (VkImageUsageFlags)VeeFU(ctepF); // F
            swapchainCreateInfoKhr.imageSharingMode = (VkSharingMode)VeeFU(ctepF); // F
            swapchainCreateInfoKhr.queueFamilyIndexCount = qewLimit;
            swapchainCreateInfoKhr.pQueueFamilyIndices = qewViBPointc;
            swapchainCreateInfoKhr.preTransform = (VkSurfaceTransformFlagBitsKHR)VeeFU(ctepF); // F
            swapchainCreateInfoKhr.compositeAlpha = *(VkCompositeAlphaFlagBitsKHR *)&compositeAlphaFlags;
            swapchainCreateInfoKhr.presentMode = (VkPresentModeKHR)VeeD(ctepF); // D
            swapchainCreateInfoKhr.clipped = VeeFU(ctepF); // F
            swapchainCreateInfoKhr.oldSwapchain = VK_NULL_HANDLE;
            kRE = vkCreateSwapchainKHR(device, &swapchainCreateInfoKhr, nullptr, &swapchain);
            if (kRE != VK_SUCCESS){
               _cpuCoul->RE = kRE;
                throw kRE;
            }
            VB += 4;

            delete[] qewViBPointc;
            VB -= 2;

            delete[] surfaceFormats;
            VB -= 1;

            kRE = vkGetSwapchainImagesKHR(device, swapchain, &multeLimit, nullptr);
            if (kRE != VK_SUCCESS){
               _cpuCoul->RE = kRE;
                throw kRE;
            }
            imagec = new VkImage[multeLimit];
            VB += 8;
            kRE = vkGetSwapchainImagesKHR(device, swapchain, &multeLimit, imagec);
            if (kRE != VK_SUCCESS){
               _cpuCoul->RE = kRE;
                throw kRE;
            }
            //endregion
        }
        if (VB0 >= 1){
            VB0 -= 1;

            //region PresentInfo

            //region Semaphore(c)
            uint32_t semaphoreLimit = VeeFU(ctepF); // F
            semaphorec = new VkSemaphore[semaphoreLimit];
            VB += 16;
            //endregion

            presentInfo.sType = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
            presentInfo.pNext = nullptr;
            presentInfo.pWaitSemaphores = semaphorec;
            presentInfo.swapchainCount = 1;
            presentInfo.pSwapchains = &swapchain;
            presentInfo.pImageIndices = &imagePoint;
            presentInfo.pResults = nullptr;
            //endregion
        }
        _ctepF = ctepF;
    } catch (...){
        _ctepF = ctepF;
        throw -1;
    }
}
void GpuMulteBag::Vee(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float viBLimit = VeeF(ctepF); // F
        float viBCtep = 0;
        float viB;
        while (viBCtep < viBLimit) {
            viB = VeeF(ctepF); // F
            if (viB == ViBVee){
                //region Vee
                imagePoint = VeeFU(ctepF); // F

                float semaphoreVB = VeeF(ctepF); // F
                presentInfo.waitSemaphoreCount = 0;
                if (semaphoreVB != 0){
                    GpuKomaBag *gpuKomaBag = vbcc.gpuKomaBagc + VeeD(ctepF); // D
                    presentInfo.pWaitSemaphores = &(gpuKomaBag->semaphorec[VeeFU(ctepF)]); // F
                    presentInfo.waitSemaphoreCount = VeeFU(ctepF); // F
                }

                VkResult kRE = vkQueuePresentKHR(qew, &presentInfo);
                if (kRE != VK_SUCCESS && kRE != VK_SUBOPTIMAL_KHR){
                   _cpuCoul->RE = kRE;
                    throw kRE;
                }
                //endregion
            }
            else if (viB == ViBBe){
                //region Be
                uint64_t timeNS = (uint64_t)VeeD(ctepF); // D
                float *bePointF = (float *)_cpuCoul->eoBar.pointCe + VeeD(ctepF); // D

                VkSemaphore semaphore = VK_NULL_HANDLE;
                float semaphoreVB = VeeF(ctepF); // F
                if (semaphoreVB != 0){
                    GpuKomaBag *gpuKomaBag = vbcc.gpuKomaBagc + VeeD(ctepF); // D
                    semaphore = gpuKomaBag->semaphorec[VeeFU(ctepF)]; // F
                }

                VkFence fence = VK_NULL_HANDLE;
                float fenceVB = VeeF(ctepF); // F
                if (fenceVB != 0){
                    GpuCpuKomaBag *gpuCpuKomaBag = vbcc.gpuCpuKomaBagc + VeeD(ctepF); // D
                    fence = gpuCpuKomaBag->fencec[VeeD(ctepF)]; // D
                }

                uint32_t multePoint;
                VkResult kRE = vkAcquireNextImageKHR(device, swapchain, timeNS, semaphore, fence, &multePoint);
                if (kRE == VK_SUCCESS || kRE == VK_SUBOPTIMAL_KHR){
                    //region Success
                    BeF(bePointF, ViBCe); // *F
                    BeD(bePointF, multePoint); // *D
                    //endregion
                }
                else if (kRE == VK_TIMEOUT || kRE == VK_NOT_READY) {
                    //region Success Later?
                    BeF(bePointF, ViBPec); // *F
                    //endregion
                }
                else {
                    //region Success Never.
                   _cpuCoul->RE = kRE;
                    throw kRE;
                    //endregion
                }
                //endregion
            }
            else if (viB == ViBCe){
                //region Ce
                int64_t bePointF = VeeD(ctepF); // D

                float *beCtepF = _cpuCoul->eoBar.pointCe + bePointF;
                BeD(beCtepF, multeLimit); // *D
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
void GpuMulteBag::Pec(){
    if (VB >= 16){
        VB -= 16;

        delete[] semaphorec;
    }
    if (VB >= 8){
        VB -= 8;

        delete[] imagec;
    }
    if (VB >= 4){
        VB -= 4;

        vkDestroySwapchainKHR(device, swapchain, nullptr);
    }
    if (VB >= 2){
        VB -= 2;

        delete[] qewViBPointc;
    }
    if (VB >= 1){
        VB -= 1;

        delete[] surfaceFormats;
    }
}
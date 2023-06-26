#include "Gpu.h"

void Gpu::Ce(){
    VB = 0;
}
void Gpu::Be(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float VB0 = VeeF(ctepF); // F
        if (VB0 >= 2){
            VB0 -= 2;

            //region Device
            Pec();
            Ce();

            gpuVu = vbcc.gpuVuc + VeeD(ctepF); // D
            physicalDevice = gpuVu->physicalDevicec[VeeD(ctepF)]; // D

            vkGetPhysicalDeviceMemoryProperties(physicalDevice, &physicalDeviceMemoryProperties);

            //region Qew
            uint32_t queueFamilyPropertiesLimit = 0;
            vkGetPhysicalDeviceQueueFamilyProperties(physicalDevice, &queueFamilyPropertiesLimit, nullptr);
            queueFamilyPropertiesc = new VkQueueFamilyProperties[queueFamilyPropertiesLimit];
            VB += 1;
            vkGetPhysicalDeviceQueueFamilyProperties(physicalDevice, &queueFamilyPropertiesLimit, queueFamilyPropertiesc);

            queueLimit = VeeFU(ctepF); // F
            queuec = new VkQueue[queueLimit];
            VB += 2;
            queueViBPointc = new uint32_t[queueLimit];
            VB += 4;
            queuePriorityc = new float[queueLimit];
            VB += 8;
            deviceQueueCreateInfoc = new VkDeviceQueueCreateInfo[queueLimit];
            VB += 16;
            uint32_t qewCtep = 0;
            while (qewCtep < queueLimit){
                uint32_t qewFlag = VeeFU(ctepF); // F
                uint32_t qewViBCtep = 0;
                while (qewViBCtep < queueFamilyPropertiesLimit){
                    if (queueFamilyPropertiesc[qewViBCtep].queueFlags & qewFlag)
                        break;
                    ++qewViBCtep;
                }
                if (qewViBCtep == queueFamilyPropertiesLimit){
                    _cpuCoul->RE = -1;
                    throw -1;
                }
                deviceQueueCreateInfoc[qewCtep].sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
                deviceQueueCreateInfoc[qewCtep].pNext = nullptr;
                deviceQueueCreateInfoc[qewCtep].flags = VeeFU(ctepF); // F
                queueViBPointc[qewCtep] = qewViBCtep;
                queuePriorityc[qewCtep] = VeeF(ctepF); // F
                deviceQueueCreateInfoc[qewCtep].queueCount = 1;
                deviceQueueCreateInfoc[qewCtep].queueFamilyIndex = qewViBCtep;
                deviceQueueCreateInfoc[qewCtep].pQueuePriorities = &(queuePriorityc[qewCtep]);
                ++qewCtep;
            }
            //endregion
            //region Layer
            float layerVB = VeeF(ctepF); // F
            if (layerVB > 0){
                layerLimit = 1;
                layerc = new const char*[layerLimit];
                VB += 1;
                layerc[0] = "VK_LAYER_KHRONOS_validation";
            } else {
                layerLimit = VeeFU(ctepF); // F
                layerc = new const char*[layerLimit];
                VB += 1;
                uint32_t layerCtep = 0;
                while (layerCtep < layerLimit)
                    layerc[layerCtep++] = nullptr;
                layerCtep = 0;
                while (layerCtep < layerLimit)
                    layerc[layerCtep++] = VeeS(ctepF); // S
            }
            //endregion
            //region Extension
            float extensionVB = VeeF(ctepF); // F
            if (extensionVB > 0){
                extensionLimit = 1;
                extensionc = new const char*[extensionLimit];
                VB += 2;
                extensionc[0] = "VK_KHR_swapchain";
            } else {
                extensionLimit = VeeFU(ctepF); // F
                extensionc = new const char*[extensionLimit];
                VB += 2;
                uint32_t extensionCtep = 0;
                while (extensionCtep < extensionLimit)
                    extensionc[extensionCtep++] = nullptr;
                extensionCtep = 0;
                while (extensionCtep < extensionLimit)
                    extensionc[extensionCtep++] = VeeS(ctepF); // S
            }
            //endregion
            //region Features
            VkPhysicalDeviceFeatures physicalDeviceFeatures;
            VkBool32 *features = (VkBool32 *)&physicalDeviceFeatures;
            uint32_t featureLimit = sizeof(VkPhysicalDeviceFeatures) / sizeof(VkBool32);
            uint32_t featureCtep = 0;
            while (featureCtep < featureLimit){
                features[featureCtep++] = VK_FALSE;
            }
            uint32_t enableLimit = VeeFU(ctepF); // F
            uint32_t enableCtep = 0;
            while (enableCtep < enableLimit){
                uint32_t featurePoint = VeeFU(ctepF); // F
                features[featurePoint] = VK_TRUE;
                ++enableCtep;
            }
            //endregion
            VkDeviceCreateInfo deviceCreateInfo;
            deviceCreateInfo.sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
            deviceCreateInfo.pNext = nullptr;
            deviceCreateInfo.flags = 0;
            deviceCreateInfo.queueCreateInfoCount = queueLimit;
            deviceCreateInfo.pQueueCreateInfos = deviceQueueCreateInfoc;
            deviceCreateInfo.enabledLayerCount = layerLimit;
            deviceCreateInfo.ppEnabledLayerNames = layerc;
            deviceCreateInfo.enabledExtensionCount = extensionLimit;
            deviceCreateInfo.ppEnabledExtensionNames = extensionc;
            deviceCreateInfo.pEnabledFeatures = (const VkPhysicalDeviceFeatures *)&physicalDeviceFeatures;
            VkResult RE = vkCreateDevice(physicalDevice, &deviceCreateInfo, nullptr, &device);
            if (RE != VK_SUCCESS){
                _cpuCoul->RE = RE;
                throw RE;
            }
            VB += 128;

            if (extensionVB > 0){
                delete[] extensionc;
                VB -= 64;
            } else {
                uint32_t extensionCtep = 0;
                while (extensionCtep < extensionLimit)
                    delete[] extensionc[extensionCtep++];
                delete[] extensionc;
                VB -= 64;
            }
            if (layerVB > 0){
                delete[] layerc;
                VB -= 32;
            } else {
                uint32_t layerCtep = 0;
                while (layerCtep < layerLimit)
                    delete[] layerc[layerCtep++];
                delete[] layerc;
                VB -= 32;
            }
            delete[] deviceQueueCreateInfoc;
            VB -= 2;
            delete[] queuePriorityc;
            VB -= 1;

            qewCtep = 0;
            while (qewCtep < queueLimit){
                vkGetDeviceQueue(device, queueViBPointc[qewCtep], qewCtep, &(queuec[qewCtep]));
                ++qewCtep;
            }
            //endregion
        }
        if (VB0 >= 1){
            VB0 -= 1;

            //region Surface
            VkAndroidSurfaceCreateInfoKHR androidSurfaceCreateInfoKHR;
            androidSurfaceCreateInfoKHR.sType = VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR;
            androidSurfaceCreateInfoKHR.pNext = nullptr;
            androidSurfaceCreateInfoKHR.flags = 0;
            androidSurfaceCreateInfoKHR.window = vbcc.androidApp->window;
            VkResult kRE = vkCreateAndroidSurfaceKHR(gpuVu->instance, &androidSurfaceCreateInfoKHR, nullptr, &surface);
            if (kRE != VK_SUCCESS){
                _cpuCoul->RE = kRE;
                throw kRE;
            }
            VB += 256;
            //endregion
        }
        _ctepF = ctepF;
    } catch (...){
        _ctepF = ctepF;
        throw -1;
    }
}
void Gpu::Vee(CpuCoul *_cpuCoul, float *&_ctepF) {
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
void Gpu::Pec(){
    if (VB >= 256){
        VB -= 256;

        vkDestroySurfaceKHR(gpuVu->instance, surface, nullptr);
    }
    if (VB >= 128){
        VB -= 128;

        vkDestroyDevice(device, nullptr);
    }
    if (VB >= 64){
        VB -= 64;

        uint32_t layerCtep = 0;
        while (layerCtep < extensionLimit)
            delete[] extensionc[layerCtep++];
        delete[] extensionc;
    }
    if (VB >= 32){
        VB -= 32;

        uint32_t layerCtep = 0;
        while (layerCtep < layerLimit)
            delete[] layerc[layerCtep++];
        delete[] layerc;
    }
    if (VB >= 16){
        VB -= 16;

        delete[] deviceQueueCreateInfoc;
    }
    if (VB >= 8){
        VB -= 8;

        delete[] queuePriorityc;
    }
    if (VB >= 4){
        VB -= 4;

        delete[]queueViBPointc;
    }
    if (VB >= 2){
        VB -= 2;

        delete[] queuec;
    }
    if (VB >= 1){
        VB -= 1;

        delete[] queueFamilyPropertiesc;
    }
}
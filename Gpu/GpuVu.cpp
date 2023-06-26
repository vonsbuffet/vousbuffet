#include "GpuVu.h"

void GpuVu::Ce(){
    VB = 0;
}
void GpuVu::Be(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float VB0 = VeeF(ctepF); // F
        if (VB0 >= 1){
            VB0 -= 1;

            //region Ce Instance
            Pec();
            Ce();

            //region GpuVu Version
            uint32_t major = VeeFU(ctepF); // F
            uint32_t minor = VeeFU(ctepF); // F
            uint32_t patch = VeeFU(ctepF); // F
            //endregion
            //region VkApplicationInfo
            VkApplicationInfo applicationInfo;
            applicationInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
            applicationInfo.pNext = nullptr;
            applicationInfo.pApplicationName = "Vou's Buffet";
            applicationInfo.applicationVersion = VK_MAKE_VERSION(2, 1, 0);
            applicationInfo.pEngineName = "Von's Buffet";
            applicationInfo.engineVersion = VK_MAKE_VERSION(0, 1, 2);
            applicationInfo.apiVersion = VK_MAKE_VERSION(major,minor,patch);
            //endregion
            //region Layer
            float layerVB = VeeF(ctepF); // F
            if (layerVB > 0){
                layerLimit = 1;
                layerc = new const char*[layerLimit];
                VB += 1;
                layerc[0] = "VK_LAYER_KHRONOS_validation";
            }
            else {
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
                extensionLimit = 2;
                extensionc = new const char*[extensionLimit];
                VB += 2;
                extensionc[0] = "VK_KHR_surface";
                extensionc[1] = "VK_KHR_android_surface";
            }
            else {
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
            VkInstanceCreateInfo instanceCreateInfo;
            instanceCreateInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
            instanceCreateInfo.pNext = nullptr;
            instanceCreateInfo.flags = 0;
            instanceCreateInfo.pApplicationInfo = (const VkApplicationInfo *)&applicationInfo;
            instanceCreateInfo.enabledLayerCount = layerLimit;
            instanceCreateInfo.ppEnabledLayerNames = layerc;
            instanceCreateInfo.enabledExtensionCount = extensionLimit;
            instanceCreateInfo.ppEnabledExtensionNames = extensionc;
            VkResult kRE = vkCreateInstance(&instanceCreateInfo, nullptr, &instance);
            if (kRE != VK_SUCCESS){
                _cpuCoul->RE = kRE;
                throw kRE;
            }
            VB += 4;
            if (extensionVB > 0){
                delete[] extensionc;
                VB -= 2;
            }
            else {
                uint32_t extensionCtep = 0;
                while (extensionCtep < extensionLimit)
                    delete[] extensionc[extensionCtep++];
                delete[] extensionc;
                VB -= 2;
            }
            if (layerVB > 0){
                delete[] layerc;
                VB -= 1;
            }
            else {
                uint32_t layerCtep = 0;
                while (layerCtep < layerLimit)
                    delete[] layerc[layerCtep++];
                delete[] layerc;
                VB -= 1;
            }
            //region Physical Device
            physicalDeviceLimit = 0;
            kRE = vkEnumeratePhysicalDevices(instance, &physicalDeviceLimit, nullptr);
            if (kRE != VK_SUCCESS){
                _cpuCoul->RE = kRE;
                throw kRE;
            }
            physicalDevicec = new VkPhysicalDevice[physicalDeviceLimit];
            VB += 8;
            kRE = vkEnumeratePhysicalDevices(instance, &physicalDeviceLimit, physicalDevicec);
            if (kRE != VK_SUCCESS){
                _cpuCoul->RE = kRE;
                throw kRE;
            }
            //endregion
            //endregion
        }
        _ctepF = ctepF;
    } catch (...){
        _ctepF = ctepF;
        throw -1;
    }
}
void GpuVu::Vee(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float viBLimit = VeeF(ctepF); // F
        float viBCtep = 0;
        float viB;
        while (viBCtep < viBLimit) {
            viB = VeeF(ctepF); // F
            if (viB == ViBVee){
                //region Vee
                VkPhysicalDevice physicalDevice = physicalDevicec[VeeD(ctepF)]; // D
                VkPhysicalDeviceFeatures physicalDeviceFeatures;
                vkGetPhysicalDeviceFeatures(physicalDevice,&physicalDeviceFeatures);

                uint32_t extensionPropertiesLimit = 0;
                vkEnumerateDeviceExtensionProperties(physicalDevice, VK_NULL_HANDLE, &extensionPropertiesLimit, nullptr);
                VkExtensionProperties *extensionPropertiesc = new VkExtensionProperties[extensionPropertiesLimit];
                VB += 2;
                vkEnumerateDeviceExtensionProperties(physicalDevice, VK_NULL_HANDLE, &extensionPropertiesLimit, extensionPropertiesc);
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
void GpuVu::Pec() {
    if (VB >= 8){
        VB -= 8;

        delete[] physicalDevicec;
    }
    if (VB >= 4){
        VB -= 4;

        vkDestroyInstance(instance, nullptr);
    }
    if (VB >= 2){
        VB -= 2;

        uint32_t extensionCtep = 0;
        while (extensionCtep < extensionLimit)
            delete[] extensionc[extensionCtep++];
        delete[] extensionc;
    }
    if (VB >= 1){
        VB -= 1;

        uint32_t layerCtep = 0;
        while (layerCtep < layerLimit)
            delete[] layerc[layerCtep++];
        delete[] layerc;
    }
}
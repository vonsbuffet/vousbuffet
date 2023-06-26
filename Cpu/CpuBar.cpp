#include "CpuBar.h"

void CpuBar::Ce(){
    VB = 0;
}
void CpuBar::Be(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float VB0 = VeeF(ctepF); // F
        if (VB0 >= 4){
            VB0 -= 4;

            //region vkMapMemory()
            Pec();
            Ce();

            gpuUne = vbcc.gpuUnec + VeeD(ctepF); // D
            bindPointC = gpuUne->bindPointC + VeeD(ctepF); // D
            limitC = VeeD(ctepF); // D

            VkResult result = vkMapMemory(gpuUne->device, gpuUne->deviceMemory, bindPointC, (uint64_t)limitC, 0, (void **)&pointC);
            if (result != VK_SUCCESS) {
                _cpuCoul->RE = (int32_t)result;
                throw ExtraSauce("Error :: CpuBar:Be[vkMapMemory Failed]");
            }
            VB += 1;
            //endregion
        }
        if (VB0 >= 2){
            VB0 -= 2;

            CpuBar *cpuBar = vbcc.cpuBarc + VeeD(ctepF); // d
            pointC = &(cpuBar->pointC[VeeD(ctepF)]); // D
        }
        if (VB0 >= 1){
            VB0 -= 1;

            //region new char[]
            Pec();
            Ce();

            limitC = VeeD(ctepF); // D
            pointC = new char[limitC];
            VB += 2;
            //endregion
        }
        _ctepF = ctepF;
    } catch (...){
        _ctepF = ctepF;
        throw -1;
    }
}
void CpuBar::Vee(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float viBLimit = VeeF(ctepF); // F
        float viBCtep = 0;
        float viB;
        while (viBCtep < viBLimit) {
            viB = VeeF(ctepF); // F
            if (viB == ViBVee){
                //region Vee
                float typeViB = VeeF(ctepF); // F
                if (typeViB == 8){
                    //region 8bit
                    int8_t *bePoint8 = (int8_t *)&(pointC[VeeD(ctepF)]); // D
                    int64_t beCtep8 = VeeD(ctepF); // D
                    int8_t *veePoint8 = (int8_t *)VeeP(ctepF); // P
                    int64_t veeCtep8 = VeeD(ctepF); // D
                    int64_t veeLimit8 = VeeD(ctepF); // D
                    if (veeCtep8 > 0){
                        int8_t *veePointLimit8 = veePoint8 + veeLimit8;
                        while(veePoint8 < veePointLimit8){
                            *bePoint8 = *veePoint8;
                            bePoint8 += beCtep8;
                            veePoint8 += veeCtep8;
                        }
                    }
                    else if (veeCtep8 < 0){
                        int8_t *veePointLimit8 = veePoint8 - veeLimit8;
                        while(veePoint8 > veePointLimit8){
                            *bePoint8 = *veePoint8;
                            bePoint8 += beCtep8;
                            veePoint8 += veeCtep8;
                        }
                    }
                    //endregion
                }
                else if (typeViB == 32){
                    //region 32bit
                    int32_t *bePoint32 = (int32_t *)VeeP(ctepF); // P
                    int64_t beCtep32 = VeeD(ctepF); // D
                    int32_t *veePoint32 = (int32_t *)&(pointC[VeeD(ctepF)]); // D
                    int64_t veeCtep32 = VeeD(ctepF); // D
                    int64_t veeLimit32 = VeeD(ctepF); // D

                    if (veeCtep32 > 0){
                        int32_t *veePointLimit32 = veePoint32 + veeLimit32;
                        while(veePoint32 < veePointLimit32){
                            *bePoint32 = *veePoint32;
                            bePoint32 += beCtep32;
                            veePoint32 += veeCtep32;
                        }
                    }
                    else if (veeCtep32 < 0){
                        int32_t *veePointLimit32 = veePoint32 - veeLimit32;
                        while(veePoint32 > veePointLimit32){
                            *bePoint32 = *veePoint32;
                            bePoint32 += beCtep32;
                            veePoint32 += veeCtep32;
                        }
                    }
                    //endregion
                }
                else if (typeViB == 64){
                    //region 64bit
                    int64_t *bePoint64 = (int64_t *)&(pointC[VeeD(ctepF)]); // D
                    int64_t beCtep64 = VeeD(ctepF); // D
                    int64_t *veePoint64 = (int64_t *)VeeP(ctepF); // P
                    int64_t veeCtep64 = VeeD(ctepF); // D
                    int64_t veeLimit64 = VeeD(ctepF); // D

                    if (veeCtep64 > 0){
                        int64_t *veePointLimitF = veePoint64 + veeLimit64;
                        while(veePoint64 < veePointLimitF){
                            *bePoint64 = *veePoint64;
                            bePoint64 += beCtep64;
                            veePoint64 += veeCtep64;
                        }
                    }
                    else if (veeCtep64 < 0){
                        int64_t *veePointLimitF = veePoint64 - veeLimit64;
                        while(veePoint64 > veePointLimitF){
                            *bePoint64 = *veePoint64;
                            bePoint64 += beCtep64;
                            veePoint64 += veeCtep64;
                        }
                    }
                    //endregion
                }
                //endregion
            }
            else if (viB == ViBBe){
                //region Be
                float typeViB = VeeF(ctepF); // F
                if (typeViB == 8){
                    //region 8bit
                    int8_t *bePoint8 = (int8_t *)&(pointC[VeeD(ctepF)]); // D
                    int64_t beCtep8 = VeeD(ctepF); // D
                    int8_t *veePoint8 = (int8_t *)&(pointC[VeeD(ctepF)]); // D
                    int64_t veeCtep8 = VeeD(ctepF); // D
                    int64_t veeLimit8 = VeeD(ctepF); // D

                    if (veeCtep8 > 0){
                        int8_t *veePointLimit8 = veePoint8 + veeLimit8;
                        while(veePoint8 < veePointLimit8){
                            *bePoint8 = *veePoint8;
                            bePoint8 += beCtep8;
                            veePoint8 += veeCtep8;
                        }
                    }
                    else if (veeCtep8 < 0){
                        int8_t *veePointLimit8 = veePoint8 - veeLimit8;
                        while(veePoint8 > veePointLimit8){
                            *bePoint8 = *veePoint8;
                            bePoint8 += beCtep8;
                            veePoint8 += veeCtep8;
                        }
                    }
                    else if (veeCtep8 == 0){
                        if (beCtep8 > 0){
                            int8_t *bePointLimit8 = bePoint8 + veeLimit8;
                            while(bePoint8 < bePointLimit8){
                                *bePoint8 = *veePoint8;
                                bePoint8 += beCtep8;
                            }
                        }
                        else if (beCtep8 < 0){
                            int8_t *bePointLimit8 = bePoint8 - veeLimit8;
                            while(bePoint8 > bePointLimit8){
                                *bePoint8 = *veePoint8;
                                bePoint8 += beCtep8;
                            }
                        }
                        else if (beCtep8 == 0){
                            *bePoint8 = *veePoint8;
                        }
                    }
                    //endregion
                }
                else if (typeViB == 32){
                    //region 32bit
                    int32_t *point32 = (int32_t *)pointC;

                    int32_t *bePoint32 = &(point32[VeeD(ctepF)]); // D
                    int64_t beCtep32 = VeeD(ctepF); // D
                    int32_t *veePoint32 = &(point32[VeeD(ctepF)]); // D
                    int64_t veeCtep32 = VeeD(ctepF); // D
                    int64_t veeLimit32 = VeeD(ctepF); // D

                    if (veeCtep32 > 0){
                        int32_t *veePointLimit32 = veePoint32 + veeLimit32;
                        while(veePoint32 < veePointLimit32){
                            *bePoint32 = *veePoint32;
                            bePoint32 += beCtep32;
                            veePoint32 += veeCtep32;
                        }
                    }
                    else if (veeCtep32 < 0){
                        int32_t *veePointLimit32 = veePoint32 - veeLimit32;
                        while(veePoint32 > veePointLimit32){
                            *bePoint32 = *veePoint32;
                            bePoint32 += beCtep32;
                            veePoint32 += veeCtep32;
                        }
                    }
                    else if (veeCtep32 == 0){
                        if (beCtep32 > 0){
                            int32_t *bePointLimit32 = bePoint32 + veeLimit32;
                            while(bePoint32 < bePointLimit32){
                                *bePoint32 = *veePoint32;
                                bePoint32 += beCtep32;
                            }
                        }
                        else if (beCtep32 < 0){
                            int32_t *bePointLimit32 = bePoint32 - veeLimit32;
                            while(bePoint32 > bePointLimit32){
                                *bePoint32 = *veePoint32;
                                bePoint32 += beCtep32;
                            }
                        }
                        else if (beCtep32 == 0){
                            *bePoint32 = *veePoint32;
                        }
                    }
                    //endregion
                }
                else if (typeViB == 64){
                    //region 64bit
                    int64_t *bePoint64 = (int64_t *)&(pointC[VeeD(ctepF)]); // D
                    int64_t beCtep64 = VeeD(ctepF); // D
                    int64_t *veePoint64 = (int64_t *)&(pointC[VeeD(ctepF)]); // D
                    int64_t veeCtep64 = VeeD(ctepF); // D
                    int64_t veeLimit64 = VeeD(ctepF); // D

                    if (veeCtep64 > 0){
                        int64_t *veePointLimit64 = veePoint64 + veeLimit64;
                        while(veePoint64 < veePointLimit64){
                            *bePoint64 = *veePoint64;
                            bePoint64 += beCtep64;
                            veePoint64 += veeCtep64;
                        }
                    }
                    else if (veeCtep64 < 0){
                        int64_t *veePointLimit64 = veePoint64 - veeLimit64;
                        while(veePoint64 > veePointLimit64){
                            *bePoint64 = *veePoint64;
                            bePoint64 += beCtep64;
                            veePoint64 += veeCtep64;
                        }
                    }
                    else if (veeCtep64 == 0){
                        if (beCtep64 > 0){
                            int64_t *bePointLimit64 = bePoint64 + veeLimit64;
                            while(bePoint64 < bePointLimit64){
                                *bePoint64 = *veePoint64;
                                bePoint64 += beCtep64;
                            }
                        }
                        else if (beCtep64 < 0){
                            int64_t *bePointLimit64 = bePoint64 - veeLimit64;
                            while(bePoint64 > bePointLimit64){
                                *bePoint64 = *veePoint64;
                                bePoint64 += beCtep64;
                            }
                        }
                        else if (beCtep64 == 0){
                            *bePoint64 = *veePoint64;
                        }
                    }
                    //endregion
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
void CpuBar::Pec(){
    if (VB >= 2){
        VB -= 2;

        delete[] pointC;
    }
    if (VB >= 1){
        VB -= 1;

        vkUnmapMemory(gpuUne->device, gpuUne->deviceMemory);
    }
}
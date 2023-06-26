#include "CpuBite.h"

void CpuBite::Ce(){
    VB = 0;
}
void CpuBite::Be(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float VB0 = VeeF(ctepF); // F
        if (VB0 >= 1){
            VB0 -= 1;

        }
        _ctepF = ctepF;
    } catch (...){
        _ctepF = ctepF;
        throw -1;
    }
}
void CpuBite::Vee(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float viBLimit = VeeF(ctepF); // F
        float viBCtep = 0;
        float viB;
        while (viBCtep < viBLimit) {
            viB = VeeF(ctepF); // F
            if (viB == 0){
                //region Pec [ float -> int32_t ]
                int32_t *bePointI = (int32_t *)VeeP(ctepF); // P
                float *veePointF = (float *)VeeP(ctepF); // P
                float *veePointLimitF = veePointF + VeeD(ctepF); // D

                while (veePointF < veePointLimitF){
                    *bePointI = (int32_t)*veePointF;
                    veePointF += 1;
                    *bePointI += (int32_t)*veePointF * 16777216;
                    veePointF += 1;
                    bePointI += 1;
                }
                //endregion
            }
            else if (viB == 1){
                //region Ce [ int32_t -> float ]
                float *bePointF = (float *)VeeP(ctepF); // P
                int32_t *veePointI = (int32_t *)VeeP(ctepF); // P
                int32_t *veePointLimitI = veePointI + VeeD(ctepF); // D

                while (veePointI < veePointLimitI){
                    *bePointF = (float)(*veePointI % 16777216);
                    bePointF += 1;
                    *bePointF = (float)(*veePointI / 16777216);
                    bePointF += 1;
                    veePointI += 1;
                }
                //endregion
            }
            else if (viB == 2) {
                //region Be [ uint8_t -> float ]
                float *bePointF = (float *)VeeP(ctepF); // P
                uint8_t *veePointU8 = (uint8_t *)VeeP(ctepF); // P
                uint8_t *veePointLimitU8 = veePointU8 + VeeD(ctepF); // D

                while (veePointU8 < veePointLimitU8)
                    *bePointF++ = (float)*veePointU8++;
                //endregion
            }
            else if (viB == 3){
                //region Vee [ float -> uint8_t ]
                uint8_t *bePointU8 = (uint8_t *)VeeP(ctepF); // P
                float *veePointF = (float *)VeeP(ctepF); // P
                float *veePointLimitF = veePointF + VeeD(ctepF); // D

                while (veePointF < veePointLimitF)
                    *bePointU8++ = (uint8_t)*veePointF++;
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
void CpuBite::Pec(){
}
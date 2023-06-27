#include "CpuKlok.h"

void CpuKlok::Ce(){
    VB = 0;
}
void CpuKlok::Be(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float VB0 = VeeF(ctepF); // F
        if (VB0 >= 1){
            VB0 -= 1;

            int RE = clock_gettime(CLOCK_MONOTONIC, &before);
            if (RE < 0){
                _cpuCoul->RE = RE;
                throw -1;
            }
        }
        _ctepF = ctepF;
    }
    catch (...){
        _ctepF = ctepF;
        throw -1;
    }
}
void CpuKlok::Vee(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float viBLimit = VeeF(ctepF); // F
        float viBCtep = 0;
        float viB;
        while (viBCtep < viBLimit) {
            viB = VeeF(ctepF); // F
            if (viB == ViBVee){
                //region Vee
                float *klokPointF = _cpuCoul->eoBar.pointCe + VeeD(ctepF); // D

                int RE = clock_gettime(CLOCK_MONOTONIC, &now);
                if (RE < 0){
                    _cpuCoul->RE = RE;
                    throw -1;
                }

                // Time
                float *klokPointF0 = klokPointF;
                BeD(klokPointF, (int64_t)now.tv_sec); // *D
                BeD(klokPointF, (int64_t)now.tv_nsec); // *D

                // ΔTime
                if (now.tv_nsec >=  before.tv_nsec){
                    if (now.tv_sec >= before.tv_sec)
                        BeD(klokPointF, (int64_t)(now.tv_sec - before.tv_sec)); // *D
                    else
                        BeD(klokPointF, (int64_t)(LONG_MAX - before.tv_sec + now.tv_sec + 1)); // *D

                    BeD(klokPointF, (int64_t)(now.tv_nsec - before.tv_nsec)); // *D
                }
                else {
                    if (now.tv_sec > before.tv_sec)
                        BeD(klokPointF, (int64_t)(now.tv_sec - before.tv_sec - 1)); // *D
                    else if (now.tv_sec == before.tv_sec)
                        BeD(klokPointF, (int64_t)0); // *D
                    else
                        BeD(klokPointF, (LONG_MAX - before.tv_sec + now.tv_sec)); // *D

                    BeD(klokPointF, (1000000000 - before.tv_nsec + now.tv_nsec)); // *D
                }

                before.tv_sec = now.tv_sec;
                before.tv_nsec = now.tv_nsec;
                //endregion
            }
            else if (viB == ViBBe){
                //region Be
                int64_t komaVB = 0;
                int64_t komaBV = VeeD(ctepF); // D

                int RE = clock_gettime(CLOCK_MONOTONIC, &now);
                if (RE < 0){
                    _cpuCoul->RE = RE;
                    throw -1;
                }

                before.tv_nsec = now.tv_nsec;
                while (true) {
                    RE = clock_gettime(CLOCK_MONOTONIC, &now);
                    if (RE < 0){
                        _cpuCoul->RE = RE;
                        throw -1;
                    }

                    if (now.tv_nsec > before.tv_nsec)
                        komaVB += now.tv_nsec - before.tv_nsec;
                    else
                        komaVB += LONG_MAX - before.tv_nsec + now.tv_nsec;

                    before.tv_nsec = now.tv_nsec;

                    if (komaVB >= komaBV)
                        break;
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
void CpuKlok::Pec() {

}

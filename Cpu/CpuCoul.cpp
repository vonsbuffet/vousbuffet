#include "CpuCoul.h"

// Extra Sauce
void *CpuCoulUne(void * _cpuCoul){
    CpuCoul *cpuCoul = (CpuCoul *)_cpuCoul;
    cpuCoul->Vee(nullptr, nullPointerF);
    return nullptr;
}
// Enough Sauce!

void CpuCoul::Ce() {
    VB = 0;
}
void CpuCoul::Be(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float VB0 = VeeF(ctepF); // F
        if (VB0 >= 8){
            VB0 -= 8;

            //region Andy [ Swap ]
            androidMainCpuCoul = _cpuCoul;
            swapVB = 1;
            while (swapVB == 1);
            //endregion
        }
        if (VB0 >= 4){
            VB0 -= 4;

            veeVB = VeeD(ctepF); // D

            if (veeVB == -2){
                if (VB != 0){
                    while (ViB == ViBCe);
                }
            }
        }
        if (VB0 >= 2){
            VB0 -= 2;

            Pec();
            Ce();

            //region Multe
            pointI = (int32_t *)VeeP(ctepF); // P
            pointF = (float *)VeeP(ctepF); // P

            veePointI = &(pointI[VeeD(ctepF)]); // D
            //endregion
        }
        if (VB0 >= 1) {
            VB0 -= 1;

            Pec();
            Ce();

            //region Une
            pointI = (int32_t *)VeeP(ctepF); // P
            eoBar.limitVee = (int32_t)VeeD(ctepF); // D
            eoBar.pointBe = (int32_t *)VeeP(ctepF); // P
            eoBar.limitBe = (int32_t)VeeD(ctepF); // D
            pointF = (float *)VeeP(ctepF); // P
            eoBar.limitCe = (int32_t)VeeD(ctepF); // D

            veePointI = &(pointI[VeeD(ctepF)]); // D

            veeVB = VeeD(ctepF); // D

            RE = pthread_create(&pthread, nullptr, CpuCoulUne, (void *)this);
            if (RE){
                _cpuCoul->RE = RE;
                throw ExtraSauce("Error :: CpuCoul:Be[Failed To Create Thread]");
            }
            //endregion
        }
        _ctepF = ctepF;
    }
    catch (...){
        _ctepF = ctepF;
        throw ExtraSauce("Error :: CpuCoul:Be");
    }
}
void CpuCoul::Vee(CpuCoul *_cpuCoul, float *&_ctepF) {
    VB += 1;
    float *ctepF = _ctepF;
    try{
        ViB = ViBCe;
        if (ctepF != nullptr){
            veeVB = VeeD(ctepF); // D
        }

        while (true){
            if (veeVB != 0){
                if (veeVB > 0){
                    veeVB -= 1;
                    if (veeVB == 0){
                        break;
                    }
                }
                else {
                    if (veeVB == -2){
                        //region Koma
                        ViB = 0;
                        while (veeVB == -2);
                        ViB = ViBCe;
                        //endregion
                    }
                    if (veeVB == -1){
                        break;
                    }
                }
            }
            //region CpuGram
            int32_t vee0PointI = *veePointI;

            int32_t vee0CtepI = vee0PointI + 2;
            int32_t vbBV = pointI[vee0CtepI++];
            int32_t bvVB = 0;
            int32_t bioCtepLimit = pointI[vee0CtepI++];
            while (vee0CtepI <= bioCtepLimit){
                //region BV
                int32_t bvViB = pointI[vee0CtepI++];
                if (bvViB <= BVFLimit){
                    //region F
                    int32_t veePoint = pointI[vee0CtepI++];
                    int32_t vee0Point = pointI[vee0CtepI++];

                    float vee = pointF[veePoint];
                    float vee0 = pointF[vee0Point];

                    if (bvViB == BVFNE)
                        bvVB += (vee != vee0);
                    else if (bvViB == BVFE)
                        bvVB += (vee == vee0);
                    else if (bvViB == BVFGE)
                        bvVB += (vee >= vee0);
                    else if (bvViB == BVFG)
                        bvVB += (vee > vee0);
                    //endregion
                }
                else if (bvViB <= BVDLimit){
                    //region D
                    int32_t veePoint = pointI[vee0CtepI++];
                    int32_t vee0Point = pointI[vee0CtepI++];

                    int64_t vee = (int64_t)(pointF[veePoint]) + 16777216 * (int64_t)(pointF[veePoint + 1]);
                    int64_t vee0 = (int64_t)(pointF[vee0Point]) + 16777216 * (int64_t)(pointF[vee0Point + 1]);

                    if (bvViB == BVDNE)
                        bvVB += (vee != vee0);
                    else if (bvViB == BVDE)
                        bvVB += (vee == vee0);
                    else if (bvViB == BVDGE)
                        bvVB += (vee >= vee0);
                    else if (bvViB == BVDG)
                        bvVB += (vee > vee0);
                    //endregion
                }
                else if (bvViB <= BVKLimit){
                    //region K
                    int64_t veePoint = pointI[vee0CtepI++];
                    int64_t vee0Point = pointI[vee0CtepI++];
                    int64_t veeLimitPoint = pointI[vee0CtepI++];
                    int32_t pointVB = pointI[vee0CtepI++];

                    if (pointVB >= 2){
                        pointVB -= 2;

                        veePoint = (int64_t)pointF[veePoint] + 16777216 * (int64_t)pointF[veePoint + 1];
                    }
                    if (pointVB >= 1){

                        vee0Point = (int64_t)pointF[vee0Point] + 16777216 * (int64_t)pointF[vee0Point + 1];
                    }
                    int64_t veePointLimit = veePoint + (int64_t)pointF[veeLimitPoint] + 16777216 * (int64_t)pointF[veeLimitPoint + 1];

                    if (bvViB == BVKNE){
                        //region !=
                        while (veePoint < veePointLimit){
                            if (pointF[veePoint] != pointF[vee0Point]){
                                ++veePoint;
                                ++vee0Point;
                                continue;
                            }
                            break;
                        }
                        if (veePoint == veePointLimit)
                            bvVB += 1;
                        //endregion
                    }
                    else if (bvViB == BVKE){
                        //region ==
                        while (veePoint < veePointLimit){
                            if (pointF[veePoint] == pointF[vee0Point]){
                                ++veePoint;
                                ++vee0Point;
                                continue;
                            }
                            break;
                        }
                        if (veePoint == veePointLimit)
                            ++bvVB;
                        //endregion
                    }
                    else if (bvViB == BVKGE){
                        //region >=
                        while (veePoint < veePointLimit){
                            if (pointF[veePoint] >= pointF[vee0Point]){
                                ++veePoint;
                                ++vee0Point;
                                continue;
                            }
                            break;
                        }
                        if (veePoint == veePointLimit)
                            ++bvVB;
                        //endregion
                    }
                    else if (bvViB == BVFG){
                        //region >
                        while (veePoint < veePointLimit){
                            if (pointF[veePoint] > pointF[vee0Point]){
                                ++veePoint;
                                ++vee0Point;
                                continue;
                            }
                            break;
                        }
                        if (veePoint == veePointLimit)
                            ++bvVB;
                        //endregion
                    }
                    //endregion
                }
                //endregion
            }
            //
            int32_t linkViB = (int32_t)(bvVB >= vbBV);
            *veePointI = pointI[vee0PointI + linkViB];
            //
            bioCtepLimit = pointI[vee0CtepI++] * linkViB;
            while(vee0CtepI <= bioCtepLimit){
                //region VB
                int32_t vbViB = pointI[vee0CtepI++];
                if (vbViB <= VBFLimit){
                    //region F
                    int32_t bePoint = pointI[vee0CtepI++];
                    int32_t veePoint = pointI[vee0CtepI++];
                    int32_t vee0Point = pointI[vee0CtepI++];
                    int32_t veePointLimit = pointI[vee0CtepI++];
                    int32_t strainViB = pointI[vee0CtepI++];

                    double be = pointF[bePoint];
                    double be0 = 0.0;
                    //region Vee
                    do { be0 += pointF[veePoint++] * pointF[vee0Point++]; }
                    while (veePoint < veePointLimit);
                    //endregion
                    //region Be
                    if (vbViB == VBFE)
                        be = be0;
                    else if (vbViB == VBFA)
                        be += be0;
                    else if (vbViB == VBFS)
                        be -= be0;
                    else if (vbViB == VBFM)
                        be *= be0;
                    else if (vbViB == VBFD)
                        be /= be0;
                    //endregion
                    //region Strain
                    if (strainViB != VBStrNo) {
                        if (strainViB == VBStrReLU)
                            be *= (1.0 - 0.8 * float(be < 0)); // ReLU | 1
                        else {
                            double power = exp(-2.0 * be);
                            double bitc = double(strainViB % 2);
                            double numerator = 1.0 + bitc;
                            double denominator = 1.0 + power;
                            double fraction = numerator / denominator;
                            if (strainViB <= 3)
                                be = fraction - bitc; // Sigmoid Or Tanh | 2 Or 3
                            else
                                be = numerator * power * 2.0 * fraction * fraction; // Deriv[Sigmoid] Or Deriv[Tanh] | 4 Or 5
                        }
                    }
                    //endregion
                    pointF[bePoint] = (float)be;
                    //endregion
                }
                else if (vbViB <= VBDLimit){
                    //region D
                    int32_t bePoint = pointI[vee0CtepI++];
                    int32_t veePoint = pointI[vee0CtepI++];
                    int32_t vee0Point = pointI[vee0CtepI++];
                    int32_t veePointLimit = pointI[vee0CtepI++];

                    int64_t be = (int64_t)(pointF[bePoint]) + 16777216 * (int64_t)(pointF[bePoint + 1]);
                    int64_t be0 = 0;
                    //region Vee
                    do {
                        int64_t vee = (int64_t)(pointF[veePoint]) + 16777216 * (int64_t)(pointF[veePoint + 1]);
                        int64_t vee0 = (int64_t)(pointF[vee0Point]) + 16777216 * (int64_t)(pointF[vee0Point + 1]);
                        be0 += vee * vee0;

                        veePoint += 2;
                        vee0Point += 2;
                    } while (veePoint < veePointLimit);
                    //endregion
                    //region Be
                    if (vbViB == VBDE) {
                        be = be0;
                    }
                    else if (vbViB == VBDA) {
                        be += be0;
                    }
                    else if (vbViB == VBDS) {
                        be -= be0;
                    }
                    else if (vbViB == VBDM) {
                        be *= be0;
                    }
                    else if (vbViB == VBDD) {
                        be /= be0;
                    }
                    else if (vbViB == VBDMod){
                        be = be % be0;
                    }
                    //endregion
                    pointF[bePoint] = (float)(be % 16777216);
                    pointF[bePoint + 1] = (float)(be / 16777216);
                    //endregion
                }
                else if (vbViB <= VBKLimit) {
                    //region K
                    int64_t bePoint = pointI[vee0CtepI++];
                    int64_t veePoint = pointI[vee0CtepI++];
                    int64_t veeLimitPoint = pointI[vee0CtepI++];
                    int32_t pointVB = pointI[vee0CtepI++];

                    if (pointVB >= 2){
                        pointVB -= 2;

                        veePoint = (int64_t)pointF[veePoint] + 16777216 * (int64_t)pointF[veePoint + 1];
                    }
                    if (pointVB >= 1){
                        //pointVB -= 1;

                        bePoint = (int64_t)pointF[bePoint] + 16777216 * (int64_t)pointF[bePoint + 1];
                    }

                    int64_t veePointLimit = veePoint + (int64_t)pointF[veeLimitPoint] + 16777216 * (int64_t)pointF[veeLimitPoint + 1];

                    if (vbViB == VBKFF) {
                        //region F->F
                        do {
                            pointF[bePoint] = pointF[veePoint];

                            veePoint += 1;
                            bePoint += 1;
                        } while (veePoint < veePointLimit);
                        //endregion
                    }
                    else if (vbViB == VBKFI){
                        //region F->I
                        do {
                            pointI[bePoint] = (int32_t)(pointF[veePoint]) + 16777216 * (int32_t)(pointF[veePoint + 1]);

                            veePoint += 2;
                            bePoint += 1;
                        } while (veePoint < veePointLimit);
                        //endregion
                    }
                    else if (vbViB == VBKIF){
                        //region I->F
                        do {
                            int veeI = pointI[veePoint];
                            pointF[bePoint] = float(veeI % 16777216);
                            pointF[bePoint + 1] = float(veeI / 16777216);

                            veePoint += 1;
                            bePoint += 2;
                        } while (veePoint < veePointLimit);
                        //endregion
                    }
                    //endregion
                }
                else if (vbViB <= VBVLimit){
                    //region VBCc
                    int64_t bePoint = pointI[vee0CtepI++];
                    int64_t veePoint = pointI[vee0CtepI++];
                    int64_t pointVB = pointI[vee0CtepI++];

                    if (pointVB >= 2){
                        pointVB -= 2;

                        veePoint = (int64_t)pointF[veePoint] + 16777216 * (int64_t)pointF[veePoint + 1];
                    }
                    if (pointVB >= 1){
                        //pointVB -= 1;

                        bePoint = (int64_t)pointF[bePoint] + 16777216 * (int64_t)pointF[bePoint + 1];
                    }

                    bePointF = (pointF + bePoint);
                    float *ctepF0 = (pointF + veePoint);
                    vbcc.Vee(this, ctepF0);
                    //endregion
                }
                else if (vbViB <= VBPLimit){
                    //region Pec
                    veeVB = -1;
                    //endregion
                }
                //endregion
            }
            //endregion
        }
        if (VB >= 2){
            delete[] vbcc.cpuCoulc;
            return;
        }
        if (ctepF != nullptr)
            _ctepF = ctepF;
        ViB = ViBPec;
        VB -= 1;
    } catch (...){
        VB -= 1;
        if (VB >= 4){
            VB -= 4;
            delete[] vbcc.cpuCoulc;
            return;
        }
        if (ctepF != nullptr){
            _ctepF = ctepF;
            throw -1;
        }
        else {
            ViB = ViBPec;
        }
    }
}
void CpuCoul::Pec() {
    veeVB = -1;
    while (VB > 0);
}

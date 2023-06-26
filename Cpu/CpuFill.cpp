#include "CpuFill.h"

void CpuFill::Ce(){
    VB = 0;
}
void CpuFill::Be(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float VB0 = VeeF(ctepF); // F
        if (VB0 >= 4){
            VB0 -= 4;

            Pec();
            Ce();

            pathBar.pathLimitC = VeeD(ctepF); // D
            pathBar.pathPointC = new char[pathBar.pathLimitC];
            VB += 1;

            iStream = new std::ifstream();
            VB += 2;

            oStream = new std::ofstream();
            VB += 4;
        }
        if (VB0 >= 2){
            VB0 -= 2;

            pathBar.pathCtepC = 0;
            VeeBeStr((char *)(vbcc.androidApp->activity->internalDataPath), pathBar.pathPointC, &pathBar.pathCtepC);
            pathBar.pathPointC[pathBar.pathCtepC++] = '/';
            pathBar.pathFilePointC = pathBar.pathCtepC;
        }
        if (VB0 >= 1){
            VB0 -= 1;

            pathBar.pathCtepC = 0;
            VeeBeStr((char *)(vbcc.androidApp->activity->externalDataPath), pathBar.pathPointC, &pathBar.pathCtepC);
            pathBar.pathPointC[pathBar.pathCtepC++] = '/';
            pathBar.pathFilePointC = pathBar.pathCtepC;
        }
        _ctepF = ctepF;
    } catch (...){
        _ctepF = ctepF;
        _cpuCoul->RE = -1;
        throw -1;
    }
}
void CpuFill::Vee(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float viBLimitF = VeeF(ctepF); // F
        float viBCtepF = 0;
        float viBF;
        while (viBCtepF < viBLimitF) {
            viBF = VeeF(ctepF); // F
            if (viBF == ViBVee){
                //region Vee
                int64_t filePointC = VeeD(ctepF); // D
                char *cpuPointC = VeeP(ctepF); // P
                int64_t limitC = VeeD(ctepF); // D
                int64_t bePointF = VeeD(ctepF); // D

                if (filePointC >= 0)
                    iStream->seekg(filePointC);
                filePointC = (int64_t)iStream->tellg();
                iStream->read(cpuPointC, (std::streamsize)limitC);

                if (bePointF >= 0){
                    float *bePointF0 = _cpuCoul->eoBar.pointCe + bePointF;
                    BeD(bePointF0, filePointC); // *D
                    BeD(bePointF0, (int64_t)iStream->tellg() - filePointC); // *D
                }
                //endregion
            }
            else if (viBF == ViBBe){
                //region Be
                int64_t filePointC = VeeD(ctepF); // D
                char *cpuPointC = VeeP(ctepF); // P
                int64_t limitC = VeeD(ctepF); // D
                int64_t bePointF = VeeD(ctepF); // D

                if (filePointC >= 0)
                    oStream->seekp(filePointC);
                filePointC = (int64_t)oStream->tellp();
                oStream->write(cpuPointC, (std::streamsize)limitC);

                if (bePointF >= 0){
                    float *bePointF0 = _cpuCoul->eoBar.pointCe + bePointF;
                    BeD(bePointF0, filePointC); // *D
                    BeD(bePointF0, (int64_t)iStream->tellg() - filePointC); // *D
                }
                //endregion
            }
            else if (viBF == ViBCe){
                //region Ce
                float ceViB = VeeF(ctepF); // F
                if (ceViB == 3){
                    //region iStream
                    int64_t file = VeeD(ctepF); // D

                    pathBar.pathCtepC = pathBar.pathFilePointC;
                    BeFilePath(pathBar.pathPointC, &pathBar.pathCtepC, file);

                    if (iStream->is_open())
                        iStream->close();

                    iStream->clear();
                    iStream->open(pathBar.pathPointC, std::ios_base::in | std::ios_base::ate);
                    if (!iStream->is_open()){
                        _cpuCoul->RE = -1;
                        throw -1;
                    }
                    //endregion
                }
                else if (ceViB == 2){
                    //region oStream
                    int64_t file = VeeD(ctepF); // D
                    pathBar.pathCtepC = pathBar.pathFilePointC;
                    BeFilePath(pathBar.pathPointC, &pathBar.pathCtepC, file);

                    if (oStream->is_open())
                        oStream->close();

                    oStream->clear();
                    oStream->open(pathBar.pathPointC, std::ios_base::in | std::ios_base::ate);
                    if (!oStream->is_open()){
                        _cpuCoul->RE = -1;
                        throw -1;
                    }
                    //endregion
                }
                //endregion
            }
            else if (viBF == ViBPec){
                //region Pec
                float pecViB = VeeF(ctepF); // F
                if (pecViB == 3){
                    //region iStream
                    iStream->close();
                    //endregion
                }
                else if (pecViB == 2){
                    //region oStream
                    oStream->close();
                    //endregion
                }
                else if (pecViB == 1){
                    //region PecFile
                    int64_t file = VeeD(ctepF); // D
                    pathBar.pathCtepC = pathBar.pathFilePointC;
                    BeFilePath(pathBar.pathPointC, &pathBar.pathCtepC, file);
                    PecFile(pathBar.pathPointC);
                    //endregion
                }
                //endregion
            }
            else if (viBF == 0){
                //region OneShot
                float viB = VeeF(ctepF);
                if (viB == 3){
                    //region iStream
                    int64_t file = VeeD(ctepF); // D
                    int64_t filePointC = VeeD(ctepF); // D
                    char *cpuPointC = VeeP(ctepF); // P
                    int64_t limitC = VeeD(ctepF); // D
                    int64_t bePointF = VeeD(ctepF); // D

                    //region Open
                    pathBar.pathCtepC = pathBar.pathFilePointC;
                    BeFilePath(pathBar.pathPointC, &pathBar.pathCtepC, file);

                    if (iStream->is_open())
                        iStream->close();

                    iStream->clear();
                    iStream->open(pathBar.pathPointC, std::ios_base::in | std::ios_base::ate);
                    if (!iStream->is_open()){
                        _cpuCoul->RE = -1;
                        throw -1;
                    }
                    //endregion

                    //region Read
                    if (limitC < 0)
                        limitC = iStream->tellg();

                    if (filePointC >= 0)
                        iStream->seekg(filePointC);
                    filePointC = (int64_t)iStream->tellg();
                    iStream->read(cpuPointC, (std::streamsize)limitC);

                    if (bePointF >= 0){
                        float *bePointF0 = _cpuCoul->eoBar.pointCe + bePointF;
                        BeD(bePointF0, filePointC); // *D
                        BeD(bePointF0, (int64_t)iStream->tellg() - filePointC); // *D
                    }
                    //endregion

                    //region Close
                    iStream->close();
                    //endregion

                    //endregion
                }
                else if (viB == 2){
                    //region oStream
                    int64_t file = VeeD(ctepF); // D
                    int64_t filePointC = VeeD(ctepF); // D
                    char *cpuPointC = VeeP(ctepF); // P
                    int64_t limitC = VeeD(ctepF); // D
                    int64_t bePointF = VeeD(ctepF); // D

                    //region Open
                    pathBar.pathCtepC = pathBar.pathFilePointC;
                    BeFilePath(pathBar.pathPointC, &pathBar.pathCtepC, file);

                    if (oStream->is_open())
                        oStream->close();

                    oStream->clear();
                    oStream->open(pathBar.pathPointC, std::ios_base::in | std::ios_base::ate);
                    if (!oStream->is_open()){
                        _cpuCoul->RE = -1;
                        throw -1;
                    }
                    //endregion

                    //region Write
                    if (filePointC >= 0)
                        oStream->seekp(filePointC);
                    filePointC = (int64_t)oStream->tellp();
                    oStream->write(cpuPointC, (std::streamsize)limitC);

                    if (bePointF >= 0){
                        float *bePointF0 = _cpuCoul->eoBar.pointCe + bePointF;
                        BeD(bePointF0, filePointC); // *D
                        BeD(bePointF0, (int64_t)iStream->tellg() - filePointC); // *D
                    }
                    //endregion

                    //region Close
                    oStream->close();
                    //endregion

                    //endregion
                }
                //endregion
            }
            ++viBCtepF;
        }
        _ctepF = ctepF;
    } catch (...){
        _ctepF = ctepF;
        throw -1;
    }
}
void CpuFill::Pec(){
    if (VB >= 4){
        VB -= 4;

        delete oStream;
    }
    if (VB >= 2){
        VB -= 2;

        delete iStream;
    }
    if (VB >= 1){
        VB -= 1;

        delete[] pathBar.pathPointC;
    }
}
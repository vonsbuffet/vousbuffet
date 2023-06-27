#ifndef CpuCoul_H
#define CpuCoul_H

#include "VBCc.h"

void *CpuCoulUne(void * _cpuCoul);

class CpuCoul {
public:

    void Ce();
    void Be(CpuCoul *_cpuCoul, float *&_ctepF);
    void Vee(CpuCoul *_cpuCoul, float *&_ctepF);
    void Pec();

    // Extra Sauce
    int64_t VB;
    int64_t ViB;
    int64_t veeVB, komaVB;
    int32_t *veePointI;
    int64_t RE;
    float *bePointF;
    pthread_t pthread;
};

#endif //CpuCoul_H

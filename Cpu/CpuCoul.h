#ifndef CpuCoul_H
#define CpuCoul_H

#include "VBCc.h"

struct EoBarCpuCoul{
    float *pointCe;
    int32_t limitCe;
    int32_t *pointBe;
    int32_t limitBe;
    int32_t *pointVee;
    int32_t limitVee;
};

void *CpuCoulUne(void * _cpuCoul);
extern int64_t coulKomaVB;
void CoulKomaCe(CpuCoul *_cpuCoul, EoBarCpuCoul *_eoBar);
void CoulKomaPec(CpuCoul *_cpuCoul, EoBarCpuCoul *_eoBar);

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
    int32_t *vPxVeePointI;
    EoBarCpuCoul eoBar;
    int64_t RE;
    float *bePointF;
    pthread_t pthread;
};

#endif //CpuCoul_H

#ifndef CpuCoul_H
#define CpuCoul_H

#include "VBCc.h"

#define BVFNE 1
#define BVFE 2
#define BVFGE 3
#define BVFG 4
#define BVFLimit 4

#define BVFVeePoint 0
#define BVFVee0Point 1
#define BVFCtepI 2

#define BVDNE 5
#define BVDE 6
#define BVDGE 7
#define BVDG 8
#define BVDLimit 8

#define BVDVeePoint 0
#define BVDVee0Point 1
#define BVDCtepI 2

#define BVKNE 9
#define BVKE 10
#define BVKGE 11
#define BVKG 12
#define BVKLimit 12

#define BVKVeePoint 0
#define BVKVee0Point 1
#define BVKVeeLimitPoint 2
#define BVKPointVB 3
#define BVKCtepI 4

#define VBFE 1
#define VBFA 2
#define VBFS 3
#define VBFM 4
#define VBFD 5
#define VBFLimit 5
#define VBStrNo 0
#define VBStrReLU 1
#define VBStrSig 2
#define VBStrTanh 3
#define VBStrDSig 4
#define VBStrDTanh 5

#define VBFBePoint 0
#define VBFVeePoint 1
#define VBFVee0Point 2
#define VBFVeePointLimit 3
#define VBFStrainViB 4
#define VBFCtepI 5

#define VBDE 6
#define VBDA 7
#define VBDS 8
#define VBDM 9
#define VBDD 10
#define VBDMod 11
#define VBDLimit 11

#define VBDBePoint 0
#define VBDVeePoint 1
#define VBDVee0Point 2
#define VBDVeePointLimit 3
#define VBDCtepI 4

#define VBKFF 12
#define VBKFI 13
#define VBKIF 14
#define VBKLimit 14

#define VBKBePoint 0
#define VBKVeePoint 1
#define VBKVeeLimitPoint 2
#define VBKPointVB 3
#define VBKCtepI 4

#define VBV 15
#define VBVLimit 15

#define VBVBePoint 0
#define VBVVeePoint 1
#define VBVPointVB 2
#define VBVCtepI 3

#define VBP 16
#define VBPLimit 16

#define VBC 17
#define VBCLimit 17

#define VBCBeOrVeePoint 0
#define VBCCtepI 1

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
    int32_t *pointI;
    float *pointF;
    int32_t *veePointI;
    int64_t RE;
    float *bePointF;
    pthread_t pthread;
};

#endif //CpuCoul_H

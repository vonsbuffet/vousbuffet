#ifndef CpuFill_H
#define CpuFill_H

#include <iostream>
#include <fstream>

#include "VBCc.h"

class CpuCoul;
struct PathBarCpuFill{
    int64_t pathFilePointC, pathLimitC, pathCtepC;
    char *pathPointC;
};

class CpuFill{
public:

    void Ce();
    void Be(CpuCoul *_cpuCoul, float *&_ctepF);
    void Vee(CpuCoul *_cpuCoul, float *&_ctepF);
    void Pec();

    int64_t VB;
    PathBarCpuFill pathBar;
    std::ofstream *oStream;
    std::ifstream *iStream;
};

#endif //CpuFiler_H

#ifndef CpuAndy_H
#define CpuAndy_H

#include "android_native_app_glue.h"
#include "jni.h"
#include <sys/stat.h>

#include "VBCc.h"

class CpuCoul;

extern CpuCoul *androidMainCpuCoul;
extern float swapVB;

class CpuAndy {
public:

    void Ce();
    void Be(CpuCoul *_cpuCoul, float *&_ctepF);
    void Vee(CpuCoul *_cpuCoul, float *&_ctepF);
    void Pec();

    int64_t VB;
    JavaVM *vm;
};





#endif //CpuAndy_H

#ifndef Jeneral_H
#define Jeneral_H

#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <cmath>
#include <sys/types.h>
#include <android/log.h>
#include "../VBCc.h"

extern int64_t directoryFileLimit;
extern float *nullPointerF;

void PrintI(int32_t *_pointI, int32_t _limitI);

void PrintF(float *_pointF, int32_t _limitF);

float VeeF(float *&_ctepF);

int32_t VeeFI(float *&_ctepF);

uint32_t VeeFU(float *&_ctepF);

int64_t VeeD(float *&_ctepF);

char *VeeP(float *&_ctepF);

char *VeeS(float *&_ctepF);

char VeeC(float *&_ctepF);

void BeF(float *&_ctepF, float _f);

void BeFU(float *&_ctepF, uint32_t _fu) ;

void BeFI(float *&_ctepF, int32_t _fi);

void BeD(float *&_ctepF, int64_t _d);

void BeP(float *&_ctepF, uint32_t _cpuTruKe, int64_t _truCPoint);

void BeS(float *&_ctepF, const char *_pointC);

void BeF(float *_pointF, int32_t &_ctepF, float _f);

void BeFU(float *_pointF, int32_t &_ctepF, uint32_t _fu) ;

void BeFI(float *_pointF, int32_t &_ctepF, int32_t _fi);

void BeD(float *_pointF, int32_t &_ctepF, int64_t _d);

void BeP(float *_pointF, int32_t &_ctepF, int64_t _cpuBar, int64_t _pointC);

void BeFS(float *_pointF, int32_t &_ctepF, const char *_pointC);

void VeeBeStr(char *_vee, char *_be, int64_t *_ctep);

void BeFileC(char *_path, int64_t *_ctep, int64_t _filBitc);
void BeFilePath(char *_path, int64_t *_ctep, int64_t _file);

int32_t PecFile(char *_path);

static const char* kTAG = "VBCc";
#define LOGI(...) \
    ((void)__android_log_print(ANDROID_LOG_INFO, kTAG, __VA_ARGS__))

class ExtraSauce : public std::exception {
public:
    ExtraSauce(const char* message) : message_(message) {
        LOGI("%s", message_.c_str());
    }
private:
    std::string message_;
};

#endif //Jeneral_H

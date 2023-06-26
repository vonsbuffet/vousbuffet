#include "Jeneral.h"

int64_t directoryFileLimit = 2100000000; // Or Change it to 65530? But new AndroidOS wouldn't let me use another directory.
float *nullPointerF = nullptr;

void PrintI(int32_t *_pointI, int32_t _limitI){
    std::stringstream stream;
    int32_t ctepI = 0;
    while (ctepI < _limitI){
        stream.str("");
        stream << ctepI << " = " << _pointI[ctepI] << "\n";
        LOGI("%s", stream.str().c_str());
        ++ctepI;
    }
}

void PrintF(float *_pointF, int32_t _limitF){
    std::stringstream stream;
    int32_t ctepF = 0;
    while (ctepF < _limitF){
        stream.str("");
        stream << ctepF << " = " << _pointF[ctepF] << "\n";
        LOGI("%s", stream.str().c_str());
        ++ctepF;
    }
}

float VeeF(float *&_ctepF){
    float f = *_ctepF;
    ++_ctepF;
    return f;
}

int32_t VeeFI(float *&_ctepF){
    int32_t fi = (int32_t)*_ctepF;
    ++_ctepF;
    return fi;
}

uint32_t VeeFU(float *&_ctepF){
    uint32_t fu = (uint32_t)*_ctepF;
    ++_ctepF;
    return fu;
}

int64_t VeeD(float *&_ctepF){
    int64_t d = (int64_t)*_ctepF;
    ++_ctepF;
    d += 16777216 * (int64_t)*_ctepF;
    ++_ctepF;
    return d;
}

char *VeeP(float *&_ctepF){
    // CpuBar
    int64_t cpuBarPoint = (int64_t)*(_ctepF++);
    cpuBarPoint += 16777216 * (int64_t)*(_ctepF++);
    CpuBar *cpuBar = vbcc.cpuBarc + cpuBarPoint;
    // PointC
    int64_t pointC = (int64_t)*(_ctepF++);
    pointC += 16777216 * (int64_t)*(_ctepF++);
    char *point = &(cpuBar->pointC[pointC]);
    //
    return point;
}

char *VeeS(float *&_ctepF){
    uint32_t limitC = (uint32_t)*_ctepF;
    ++_ctepF;
    char *pointC = new char[limitC + 1];
    uint32_t ctepC = 0;
    while (ctepC < limitC){
        pointC[ctepC] = (char)*_ctepF;
        ++_ctepF;
        ++ctepC;
    }
    pointC[ctepC] = 0;
    return pointC;
}

char VeeC(float *&_ctepF){
    char c = (char)*_ctepF;
    ++_ctepF;
    return c;
}

void BeF(float *&_ctepF, float _f){
    *_ctepF = _f;
    ++_ctepF;
}

void BeFU(float *&_ctepF, uint32_t _fu) {
    *_ctepF = (float)_fu;
    ++_ctepF;
}

void BeFI(float *&_ctepF, int32_t _fi){
    *_ctepF = (float)_fi;
    ++_ctepF;
}

void BeD(float *&_ctepF, int64_t _d){
    *_ctepF = (float)(_d % 16777216);
    ++_ctepF;
    *_ctepF = (float)(_d / 16777216);
    ++_ctepF;
}

void BeP(float *&_ctepF, uint32_t _cpuTruKe, int64_t _truCPoint){
    *_ctepF = (float)_cpuTruKe;
    ++_ctepF;
    *_ctepF = (float)(_truCPoint % 16777216);
    ++_ctepF;
    *_ctepF = (float)(_truCPoint / 16777216);
    ++_ctepF;
}

void BeS(float *&_ctepF, const char *_pointC){
    const char *truC = _pointC;
    while (*truC != '\0'){
        *_ctepF = (float)*truC;
        ++_ctepF;
        ++truC;
    }
    *_ctepF = (float)(truC - _pointC);

}

void BeF(float *_pointF, int32_t &_ctepF, float _f){
    _pointF[_ctepF++] = _f;
}

void BeFU(float *_pointF, int32_t &_ctepF, uint32_t _fu) {
    _pointF[_ctepF++] = (float)_fu;
}

void BeFI(float *_pointF, int32_t &_ctepF, int32_t _fi){
    _pointF[_ctepF++] = (float)_fi;
}

void BeD(float *_pointF, int32_t &_ctepF, int64_t _d){
    _pointF[_ctepF++] = (float)(_d % 16777216);
    _pointF[_ctepF++] = (float)(_d / 16777216);
}

void BeP(float *_pointF, int32_t &_ctepF, int64_t _cpuBar, int64_t _pointC){
    _pointF[_ctepF++] = (float)(_cpuBar % 16777216);
    _pointF[_ctepF++] = (float)(_cpuBar / 16777216);
    _pointF[_ctepF++] = (float)(_pointC % 16777216);
    _pointF[_ctepF++] = (float)(_pointC / 16777216);
}

void BeFS(float *_pointF, int32_t &_ctepF, const char *_pointC){
    const char *pointC = _pointC;
    int32_t ctepPointF = _ctepF++;
    while (*pointC != '\0'){
        _pointF[_ctepF++] = (float)*pointC;
        ++pointC;
    }
    _pointF[ctepPointF] = (float)(_ctepF - 1 - ctepPointF);

}

void VeeBeStr(char *_vee, char *_be, int64_t *_ctep){
    int64_t ctep = -1;
    do{
        ++ctep;
        _be[ctep] = _vee[ctep];
    } while (_vee[ctep] != '\0');
    *_ctep = ctep;
}

void BeFileC(char *_path, int64_t *_ctep, int64_t _filBitc){
    int64_t limit = 10;
    *_ctep += 1;
    while (limit <= _filBitc){
        limit *= 10;
        *_ctep += 1;
    }
    int64_t point = *_ctep;
    limit = 10;
    do {
        _path[--(*_ctep)] = (char)(48 + _filBitc % limit);
        _filBitc /= limit;
    } while (_filBitc > 0);
    *_ctep = point;
}
void BeFilePath(char *_path, int64_t *_ctep, int64_t _file){
    int64_t ctep = _file - directoryFileLimit;
    while (ctep > 0){
        _path[(*_ctep)++] = 'B';
        _path[(*_ctep)++] = 'V';
        _path[(*_ctep)++] = '/';
        ctep -= directoryFileLimit;
    }
    BeFileC(_path,_ctep,_file);
    _path[(*_ctep)] = '\0';
}

int32_t PecFile(char *_path){
    int32_t RE = remove(_path);
    return RE;
}
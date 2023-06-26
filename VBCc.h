#ifndef VBCc_H
#define VBCc_H

#pragma once

#include "Jeneral/Jeneral.h"

#include "Cpu/CpuAndy.h"
#include "Cpu/CpuBar.h"
#include "Cpu/CpuBite.h"
#include "Cpu/CpuCoul.h"
#include "Cpu/CpuFill.h"
#include "Cpu/CpuKlok.h"
#include "Cpu/CpuLink.h"

#include "Gpu/GpuVu.h"
#include "Gpu/Gpu.h"
#include "Gpu/GpuBar.h"
#include "Gpu/GpuBarGramBag.h"
#include "Gpu/GpuBarGramBeGram.h"
#include "Gpu/GpuCpuKomaBag.h"
#include "Gpu/GpuGnBag.h"
#include "Gpu/GpuGram.h"
#include "Gpu/GpuGramBeGram.h"
#include "Gpu/GpuKomaBag.h"
#include "Gpu/GpuLink.h"
#include "Gpu/GpuMulte.h"
#include "Gpu/GpuMulteBag.h"
#include "Gpu/GpuMulteCampler.h"
#include "Gpu/GpuMulteGram.h"
#include "Gpu/GpuQew.h"
#include "Gpu/GpuUne.h"
#include "Gpu/GpuUneGram.h"

#define ViBPeev -3
#define ViBPeb -2
#define ViBPec -1
#define ViBCe 1
#define ViBBe 2
#define ViBVee 3

#define CpuViBAndy 4
#define CpuViBBar 5
#define CpuViBBite 6
#define CpuViBCoul 7
#define CpuViBFill 8
#define CpuViBKlok 9
#define CpuViBLink 10

#define GpuViBGpu -4
#define GpuViBBar -5
#define GpuViBBarGramBag -6
#define GpuViBBarGramBeGram -7
#define GpuViBCpuKomaBag -8
#define GpuViBGnBag -9
#define GpuViBGram -10
#define GpuViBGramBeGram -11
#define GpuViBKomaBag -12
#define GpuViBLink -13
#define GpuViBMulte -14
#define GpuViBMulteBag -15
#define GpuViBMulteCampler -16
#define GpuViBMulteGram -17
#define GpuViBQew -18
#define GpuViBUne -19
#define GpuViBUneGram -20
#define GpuViBVu -21

#define ErrorVB 2
#define ErrorLinkVB 3

class CpuAndy;
class CpuBar;
class CpuBite;
class CpuCoul;
class CpuFill;
class CpuKlok;
class CpuLink;

class Gpu;
class GpuBar;
class GpuBarGramBag;
class GpuBarGramBeGram;
class GpuCpuKomaBag;
class GpuGnBag;
class GpuGram;
class GpuGramBeGram;
class GpuKomaBag;
class GpuLink;
class GpuMulte;
class GpuMulteBag;
class GpuMulteCampler;
class GpuMulteGram;
class GpuQew;
class GpuUne;
class GpuUneGram;
class GpuVu;

class VBCc {
public:

    void Ce();
    void Be(CpuCoul *_cpuCoul, float *&_ctepF);
    void Vee(CpuCoul *_cpuCoul, float *&_ctepF);
    void Pec();

    int64_t VB;

    int64_t cpuAndyLimit;
    CpuAndy *cpuAndyc;
    android_app *androidApp;

    int64_t cpuBarLimit;
    CpuBar *cpuBarc;

    int64_t cpuBiteLimit;
    CpuBite *cpuBitec;

    int64_t cpuCoulLimit;
    CpuCoul *cpuCoulc;

    int64_t cpuFillLimit;
    CpuFill *cpuFillc;

    int64_t cpuKlokLimit;
    CpuKlok *cpuKlokc;

    int64_t cpuLinkLimit;
    CpuLink *cpuLinkc;

    int64_t gpuLimit;
    Gpu *gpuc;

    int64_t gpuBarLimit;
    GpuBar *gpuBarc;

    int64_t gpuBarGramBagLimit;
    GpuBarGramBag *gpuBarGramBagc;

    int64_t gpuBarGramBeGramLimit;
    GpuBarGramBeGram *gpuBarGramBeGramc;

    int64_t gpuCpuKomaBagLimit;
    GpuCpuKomaBag *gpuCpuKomaBagc;

    int64_t gpuGnBagLimit;
    GpuGnBag *gpuGnBagc;

    int64_t gpuGramLimit;
    GpuGram *gpuGramc;

    int64_t gpuGramBeGramLimit;
    GpuGramBeGram *gpuGramBeGramc;

    int64_t gpuKomaBagLimit;
    GpuKomaBag *gpuKomaBagc;

    int64_t gpuLinkLimit;
    GpuLink *gpuLinkc;

    int64_t gpuMulteLimit;
    GpuMulte *gpuMultec;

    int64_t gpuMulteBagLimit;
    GpuMulteBag *gpuMulteBagc;

    int64_t gpuMulteCamplerLimit;
    GpuMulteCampler *gpuMulteCamplerc;

    int64_t gpuMulteGramLimit;
    GpuMulteGram *gpuMulteGramc;

    int64_t gpuQewLimit;
    GpuQew *gpuQewc;

    int64_t gpuUneLimit;
    GpuUne *gpuUnec;

    int64_t gpuUneGramLimit;
    GpuUneGram *gpuUneGramc;

    int64_t gpuVuLimit;
    GpuVu *gpuVuc;

};
extern VBCc vbcc;

#endif //VBCc_H

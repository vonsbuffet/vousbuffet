#include "VBCc.h"

// Extra Sauce
VBCc vbcc;
// Enough Sauce

void VBCc::Ce(){
    VB = 0;
}
void VBCc::Be(CpuCoul *_cpuCoul, float *&_ctepF){
    float *ctepF = _ctepF;
    try{
        float VB0 = VeeF(ctepF); // F
        if (VB0 >= 1){
            VB0 -= 1;

            //region Limit(c)
            //region Cpu
            cpuAndyLimit = VeeD(ctepF); // D
            cpuAndyc = (CpuAndy *)new char[cpuAndyLimit * sizeof(CpuAndy)];
            int64_t cpuAndyCtep = 0;
            while (cpuAndyCtep < cpuAndyLimit)
                (cpuAndyc + cpuAndyCtep++)->Ce();
            //
            cpuBarLimit = VeeD(ctepF); // D
            cpuBarc = (CpuBar *)new char[cpuBarLimit * sizeof(CpuBar)];
            int64_t cpuBarCtep = 0;
            while (cpuBarCtep < cpuBarLimit)
                (cpuBarc + cpuBarCtep++)->Ce();
            //
            cpuBiteLimit = VeeD(ctepF); // D
            cpuBitec = (CpuBite *)new char[cpuBiteLimit * sizeof(CpuBite)];
            int64_t cpuBiteCtep = 0;
            while (cpuBiteCtep < cpuBiteLimit)
                (cpuBitec + cpuBiteCtep++)->Ce();
            //
            cpuBrainLimit = VeeD(ctepF); // D
            cpuBrainc = (CpuBrain *)new char[cpuBrainLimit * sizeof(CpuBrain)];
            int64_t cpuBrainCtep = 0;
            while (cpuBrainCtep < cpuBrainLimit)
                (cpuBrainc + cpuBrainCtep++)->Ce();
            //
            cpuBuildLimit = VeeD(ctepF); // D
            cpuBuildc = (CpuBuild *)new char[cpuBuildLimit * sizeof(CpuBuild)];
            int64_t cpuBuildCtep = 0;
            while (cpuBuildCtep < cpuBuildLimit)
                (cpuBuildc + cpuBuildCtep++)->Ce();
            //
            cpuCedLimit = VeeD(ctepF); // D
            cpuCedc = (CpuCed *)new char[cpuCedLimit * sizeof(CpuCed)];
            int64_t cpuCedCtep = 0;
            while (cpuCedCtep < cpuCedLimit)
                (cpuCedc + cpuCedCtep++)->Ce();
            //
            cpuCoulLimit = VeeD(ctepF); // D
            cpuCoulc = (CpuCoul *)new char[cpuCoulLimit * sizeof(CpuCoul)];
            int64_t cpuCoulCtep = 0;
            while (cpuCoulCtep < cpuCoulLimit)
                (cpuCoulc + cpuCoulCtep++)->Ce();
            //
            cpuCpacLimit = VeeD(ctepF); // D
            cpuCpacc = (CpuCpac *)new char[cpuCpacLimit * sizeof(CpuCpac)];
            int64_t cpuCpacCtep = 0;
            while (cpuCpacCtep < cpuCpacLimit)
                (cpuCpacc + cpuCpacCtep++)->Ce();
            //
            cpuCynLimit = VeeD(ctepF); // D
            cpuCync = (CpuCyn *)new char[cpuCynLimit * sizeof(CpuCyn)];
            int64_t cpuCynCtep = 0;
            while (cpuCynCtep < cpuCynLimit)
                (cpuCync + cpuCynCtep++)->Ce();
            //
            cpuFillLimit = VeeD(ctepF); // D
            cpuFillc = (CpuFill *)new char[cpuFillLimit * sizeof(CpuFill)];
            int64_t cpuFillCtep = 0;
            while (cpuFillCtep < cpuFillLimit)
                (cpuFillc + cpuFillCtep++)->Ce();
            //
            cpuKeyLimit = VeeD(ctepF); // D
            cpuKeyc = (CpuKey *)new char[cpuKeyLimit * sizeof(CpuKey)];
            int64_t cpuKeyCtep = 0;
            while (cpuKeyCtep < cpuKeyLimit)
                (cpuKeyc + cpuKeyCtep++)->Ce();
            //
            cpuKlokLimit = VeeD(ctepF); // D
            cpuKlokc = (CpuKlok *)new char[cpuKlokLimit * sizeof(CpuKlok)];
            int64_t cpuKlokCtep = 0;
            while (cpuKlokCtep < cpuKlokLimit)
                (cpuKlokc + cpuKlokCtep++)->Ce();
            //
            cpuPopLimit = VeeD(ctepF); // D
            cpuPopc = (CpuPop *)new char[cpuPopLimit * sizeof(CpuPop)];
            int64_t cpuPopCtep = 0;
            while (cpuPopCtep < cpuPopLimit)
                (cpuPopc + cpuPopCtep++)->Ce();
            //endregion
            //region Gpu
            gpuLimit = VeeD(ctepF); // D
            gpuc = (Gpu *)new char[gpuLimit * sizeof(Gpu)];
            int64_t gpuCtep = 0;
            while (gpuCtep < gpuLimit)
                (gpuc + gpuCtep++)->Ce();
            //
            gpuBarLimit = VeeD(ctepF); // D
            gpuBarc = (GpuBar *)new char[gpuBarLimit * sizeof(GpuBar)];
            int64_t gpuBarCtep = 0;
            while (gpuBarCtep < gpuBarLimit)
                (gpuBarc + gpuBarCtep++)->Ce();
            //
            gpuBarGramBagLimit = VeeD(ctepF); // D
            gpuBarGramBagc = (GpuBarGramBag *)new char[gpuBarGramBagLimit * sizeof(GpuBarGramBag)];
            int64_t gpuBarGramBagCtep = 0;
            while (gpuBarGramBagCtep < gpuBarGramBagLimit)
                (gpuBarGramBagc + gpuBarGramBagCtep++)->Ce();
            //
            gpuBarGramBeGramLimit = VeeD(ctepF); // D
            gpuBarGramBeGramc = (GpuBarGramBeGram *)new char[gpuBarGramBeGramLimit * sizeof(GpuBarGramBeGram)];
            int64_t gpuBarGramBeGramCtep = 0;
            while (gpuBarGramBeGramCtep < gpuBarGramBeGramLimit)
                (gpuBarGramBeGramc + gpuBarGramBeGramCtep++)->Ce();
            //
            gpuCedLimit = VeeD(ctepF); // D
            gpuCedc = (GpuCed *)new char[gpuCedLimit * sizeof(GpuCed)];
            int64_t gpuCedCtep = 0;
            while (gpuCedCtep < gpuCedLimit)
                (gpuCedc + gpuCedCtep++)->Ce();
            //
            gpuCpuKomaBagLimit = VeeD(ctepF); // D
            gpuCpuKomaBagc = (GpuCpuKomaBag *)new char[gpuCpuKomaBagLimit * sizeof(GpuCpuKomaBag)];
            int64_t gpuCpuKomaBagCtep = 0;
            while (gpuCpuKomaBagCtep < gpuCpuKomaBagLimit)
                (gpuCpuKomaBagc + gpuCpuKomaBagCtep++)->Ce();
            //
            gpuCynLimit = VeeD(ctepF); // D
            gpuCync = (GpuCyn *)new char[gpuCynLimit * sizeof(GpuCyn)];
            int64_t gpuCynCtep = 0;
            while (gpuCynCtep < gpuCynLimit)
                (gpuCync + gpuCynCtep++)->Ce();
            //
            gpuGnBagLimit = VeeD(ctepF); // D
            gpuGnBagc = (GpuGnBag *)new char[gpuGnBagLimit * sizeof(GpuGnBag)];
            int64_t gpuGnBagCtep = 0;
            while (gpuGnBagCtep < gpuGnBagLimit)
                (gpuGnBagc + gpuGnBagCtep++)->Ce();
            //
            gpuGramLimit = VeeD(ctepF); // D
            gpuGramc = (GpuGram *)new char[gpuGramLimit * sizeof(GpuGram)];
            int64_t gpuGramCtep = 0;
            while (gpuGramCtep < gpuGramLimit)
                (gpuGramc + gpuGramCtep++)->Ce();
            //
            gpuGramBeGramLimit = VeeD(ctepF); // D
            gpuGramBeGramc = (GpuGramBeGram *)new char[gpuGramBeGramLimit * sizeof(GpuGramBeGram)];
            int64_t gpuGramBeGramCtep = 0;
            while (gpuGramBeGramCtep < gpuGramBeGramLimit)
                (gpuGramBeGramc + gpuGramBeGramCtep++)->Ce();
            //
            gpuKomaBagLimit = VeeD(ctepF); // D
            gpuKomaBagc = (GpuKomaBag *)new char[gpuKomaBagLimit * sizeof(GpuKomaBag)];
            int64_t gpuKomaBagCtep = 0;
            while (gpuKomaBagCtep < gpuKomaBagLimit)
                (gpuKomaBagc + gpuKomaBagCtep++)->Ce();
            //
            gpuLinkLimit = VeeD(ctepF); // D
            gpuLinkc = (GpuLink *)new char[gpuLinkLimit * sizeof(GpuLink)];
            int64_t gpuLinkCtep = 0;
            while (gpuLinkCtep < gpuLinkLimit)
                (gpuLinkc + gpuLinkCtep++)->Ce();
            //
            gpuMulteLimit = VeeD(ctepF); // D
            gpuMultec = (GpuMulte *)new char[gpuMulteLimit * sizeof(GpuMulte)];
            int64_t gpuMulteCtep = 0;
            while (gpuMulteCtep < gpuMulteLimit)
                (gpuMultec + gpuMulteCtep++)->Ce();
            //
            gpuMulteBagLimit = VeeD(ctepF); // D
            gpuMulteBagc = (GpuMulteBag *)new char[gpuMulteBagLimit * sizeof(GpuMulteBag)];
            int64_t gpuMulteBagCtep = 0;
            while (gpuMulteBagCtep < gpuMulteBagLimit)
                (gpuMulteBagc + gpuMulteBagCtep++)->Ce();
            //
            gpuMulteCamplerLimit = VeeD(ctepF); // D
            gpuMulteCamplerc = (GpuMulteCampler *)new char[gpuMulteCamplerLimit * sizeof(GpuMulteCampler)];
            int64_t gpuMulteCamplerCtep = 0;
            while (gpuMulteCamplerCtep < gpuMulteCamplerLimit)
                (gpuMulteCamplerc + gpuMulteCamplerCtep++)->Ce();
            //
            gpuMulteGramLimit = VeeD(ctepF); // D
            gpuMulteGramc = (GpuMulteGram *)new char[gpuMulteGramLimit * sizeof(GpuMulteGram)];
            int64_t gpuMulteGramCtep = 0;
            while (gpuMulteGramCtep < gpuMulteGramLimit)
                (gpuMulteGramc + gpuMulteGramCtep++)->Ce();
            //
            gpuQewLimit = VeeD(ctepF); // D
            gpuQewc = (GpuQew *)new char[gpuQewLimit * sizeof(GpuQew)];
            int64_t gpuQewCtep = 0;
            while (gpuQewCtep < gpuQewLimit)
                (gpuQewc + gpuQewCtep++)->Ce();
            //
            gpuUneLimit = VeeD(ctepF); // D
            gpuUnec = (GpuUne *)new char[gpuUneLimit * sizeof(GpuUne)];
            int64_t gpuUneCtep = 0;
            while (gpuUneCtep < gpuUneLimit)
                (gpuUnec + gpuUneCtep++)->Ce();
            //
            gpuUneGramLimit = VeeD(ctepF); // D
            gpuUneGramc = (GpuUneGram *)new char[gpuUneGramLimit * sizeof(GpuUneGram)];
            int64_t gpuUneGramCtep = 0;
            while (gpuUneGramCtep < gpuUneGramLimit)
                (gpuUneGramc + gpuUneGramCtep++)->Ce();
            //
            gpuVuLimit = VeeD(ctepF); // D
            gpuVuc = (GpuVu *)new char[gpuVuLimit * sizeof(GpuVu)];
            int64_t gpuVuCtep = 0;
            while (gpuVuCtep < gpuVuLimit)
                (gpuVuc + gpuVuCtep++)->Ce();
            //endregion
            //
            VB += 1;
            //endregion
        }
        _ctepF = ctepF;
    }
    catch(...){
        _ctepF = ctepF;
        throw ExtraSauce("Error :: VBCc:Be");
    }
}
void VBCc::Vee(CpuCoul *_cpuCoul, float *&_ctepF){
    float *ctepF = _ctepF;
    try{
        float viBLimit = VeeF(ctepF); // F
        float viBCtep = 0;
        float viB;
        while (viBCtep < viBLimit){
            viB = VeeF(ctepF); // F
            if (viB > 0){
                //region Cpu
                if (viB == CpuViBAndy){
                    //region CpuAndy
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuAndyLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuAndy:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuAndyc[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuAndyLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuAndy:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuAndyc[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuAndyLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuAndy:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuAndyc[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuAndyLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuAndy:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuAndyc[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == CpuViBBar){
                    //region CpuBar
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuBarLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuBar:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuBarc[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuBarLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuBar:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuBarc[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuBarLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuBar:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuBarc[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuBarLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuBar:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuBarc[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == CpuViBBite){
                    //region CpuBite
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuBiteLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuBite:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuBitec[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuBiteLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuBite:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuBitec[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuBiteLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuBite:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuBitec[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuBiteLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuBite:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuBitec[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == CpuViBBrain){
                    //region CpuBrain
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuBrainLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuBrain:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuBrainc[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuBrainLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuBrain:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuBrainc[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuBrainLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuBrain:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuBrainc[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuBrainLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuBrain:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuBrainc[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == CpuViBBuild){
                    //region CpuBuild
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuBuildLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuBuild:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuBuildc[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuBuildLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuBuild:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuBuildc[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuBuildLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuBuild:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuBuildc[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuBuildLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuBuild:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuBuildc[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == CpuViBCed){
                    //region CpuCed
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuCedLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuCed:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuCedc[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuCedLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuCed:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuCedc[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuCedLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuCed:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuCedc[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuCedLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuCed:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuCedc[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == CpuViBCoul){
                    //region CpuCoul
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuCoulLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuCoul:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuCoulc[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuCoulLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuCoul:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuCoulc[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuCoulLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuCoul:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuCoulc[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuCoulLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuCoul:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuCoulc[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == CpuViBCpac){
                    //region CpuCpac
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuCpacLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuCpac:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuCpacc[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuCpacLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuCpac:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuCpacc[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuCpacLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuCpac:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuCpacc[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuCpacLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuCpac:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuCpacc[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == CpuViBCyn){
                    //region CpuCyn
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuCynLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuCyn:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuCync[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuCynLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuCyn:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuCync[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuCynLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuCyn:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuCync[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuCynLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuCyn:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuCync[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == CpuViBFill){
                    //region CpuFill
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuFillLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuFill:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuFillc[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuFillLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuFill:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuFillc[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuFillLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuFill:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuFillc[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuFillLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuFill:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuFillc[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == CpuViBKey){
                    //region CpuKey
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuKeyLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuKey:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuKeyc[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuKeyLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuKey:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuKeyc[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuKeyLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuKey:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuKeyc[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuKeyLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuKey:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuKeyc[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == CpuViBKlok){
                    //region CpuKlok
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuKlokLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuKlok:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuKlokc[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuKlokLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuKlok:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuKlokc[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuKlokLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuKlok:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuKlokc[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuKlokLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuKlok:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuKlokc[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == CpuViBPop){
                    //region CpuPop
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit) {
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee) {
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuPopLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuPop:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuPopc[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe) {
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuPopLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuPop:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuPopc[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe) {
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuPopLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuPop:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuPopc[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec) {
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > cpuPopLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[CpuPop:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                cpuPopc[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                //endregion
            }
            else if (viB < 0){
                //region Gpu
                if (viB == GpuViBGpu){
                    //region Gpu
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[Gpu:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuc[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[Gpu:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuc[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[Gpu:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuc[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[Gpu:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuc[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == GpuViBBar){
                    //region GpuBar
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuBarLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuBar:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuBarc[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuBarLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuBar:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuBarc[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuBarLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuBar:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuBarc[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuBarLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuBar:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuBarc[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == GpuViBBarGramBag){
                    //region GpuBarGramBag
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuBarGramBagLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuBarGramBag:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuBarGramBagc[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuBarGramBagLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuBarGramBag:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuBarGramBagc[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuBarGramBagLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuBarGramBag:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuBarGramBagc[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuBarGramBagLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuBarGramBag:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuBarGramBagc[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == GpuViBBarGramBeGram){
                    //region GpuBarGramBeGram
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuBarGramBeGramLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuBarGramBeGram:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuBarGramBeGramc[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuBarGramBeGramLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuBarGramBeGram:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuBarGramBeGramc[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuBarGramBeGramLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuBarGramBeGram:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuBarGramBeGramc[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuBarGramBeGramLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuBarGramBeGram:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuBarGramBeGramc[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == GpuViBCed){
                    //region GpuCed
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuCedLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuCed:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuCedc[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuCedLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuCed:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuCedc[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuCedLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuCed:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuCedc[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuCedLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuCed:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuCedc[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == GpuViBCpuKomaBag){
                    //region GpuCpuKomaBag
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuCpuKomaBagLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuCpuKomaBag:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuCpuKomaBagc[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuCpuKomaBagLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuCpuKomaBag:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuCpuKomaBagc[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuCpuKomaBagLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuCpuKomaBag:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuCpuKomaBagc[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuCpuKomaBagLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuCpuKomaBag:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuCpuKomaBagc[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == GpuViBCyn){
                    //region GpuCyn
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuCynLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuCyn:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuCync[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuCynLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuCyn:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuCync[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuCynLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuCyn:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuCync[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuCynLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuCyn:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuCync[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == GpuViBGnBag){
                    //region GpuGnBag
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuGnBagLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuGnBag:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuGnBagc[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuGnBagLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuGnBag:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuGnBagc[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuGnBagLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuGnBag:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuGnBagc[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuGnBagLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuGnBag:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuGnBagc[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == GpuViBGram){
                    //region GpuGram
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuGramLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuGram:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuGramc[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuGramLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuGram:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuGramc[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuGramLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuGram:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuGramc[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuGramLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuGram:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuGramc[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == GpuViBGramBeGram){
                    //region GpuGramBeGram
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuGramBeGramLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuGramBeGram:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuGramBeGramc[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuGramBeGramLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuGramBeGram:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuGramBeGramc[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuGramBeGramLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuGramBeGram:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuGramBeGramc[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuGramBeGramLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuGramBeGram:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuGramBeGramc[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == GpuViBKomaBag){
                    //region GpuKomaBag
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuKomaBagLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuKomaBag:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuKomaBagc[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuKomaBagLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuKomaBag:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuKomaBagc[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuKomaBagLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuKomaBag:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuKomaBagc[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuKomaBagLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuKomaBag:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuKomaBagc[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == GpuViBLink){
                    //region GpuLink
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuLinkLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuLink:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuLinkc[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuLinkLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuLink:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuLinkc[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuLinkLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuLink:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuLinkc[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuLinkLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuLink:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuLinkc[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == GpuViBMulte){
                    //region GpuMulte
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuMulteLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuMulte:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuMultec[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuMulteLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuMulte:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuMultec[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuMulteLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuMulte:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuMultec[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuMulteLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuMulte:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuMultec[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == GpuViBMulteBag){
                    //region GpuMulteBag
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuMulteBagLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuMulteBag:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuMulteBagc[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuMulteBagLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuMulteBag:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuMulteBagc[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuMulteBagLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuMulteBag:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuMulteBagc[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuMulteBagLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuMulteBag:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuMulteBagc[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == GpuViBMulteCampler){
                    //region GpuMulteCampler
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuMulteCamplerLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuMulteCampler:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuMulteCamplerc[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuMulteCamplerLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuMulteCampler:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuMulteCamplerc[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuMulteCamplerLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuMulteCampler:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuMulteCamplerc[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuMulteCamplerLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuMulteCampler:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuMulteCamplerc[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == GpuViBMulteGram){
                    //region GpuMulteGram
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuMulteGramLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuMulteGram:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuMulteGramc[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuMulteGramLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuMulteGram:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuMulteGramc[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuMulteGramLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuMulteGram:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuMulteGramc[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuMulteGramLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuMulteGram:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuMulteGramc[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == GpuViBQew){
                    //region GpuQew
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuQewLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuQew:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuQewc[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuQewLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuQew:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuQewc[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuQewLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuQew:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuQewc[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuQewLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuQew:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuQewc[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == GpuViBUne){
                    //region GpuUne
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuUneLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuUne:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuUnec[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuUneLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuUne:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuUnec[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuUneLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuUne:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuUnec[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuUneLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuUne:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuUnec[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == GpuViBUneGram){
                    //region GpuUneGram
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuUneGramLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuUneGram:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuUneGramc[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuUneGramLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuUneGram:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuUneGramc[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuUneGramLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuUneGram:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuUneGramc[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuUneGramLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuUneGram:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuUneGramc[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                else if (viB == GpuViBVu){
                    //region GpuVu
                    float viB0Limit = VeeF(ctepF); // F
                    float viB0Ctep = 0;
                    while (viB0Ctep < viB0Limit){
                        float viB0 = VeeF(ctepF); // F
                        if (viB0 == ViBVee){
                            //region Vee
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuVuLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuVu:Vee Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuVuc[pointCtep++].Vee(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBBe){
                            //region Be
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuVuLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuVu:Be Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuVuc[pointCtep++].Be(_cpuCoul, ctepF);
                            //endregion
                        }
                        else if (viB0 == ViBCe){
                            //region Ce
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuVuLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuVu:Ce Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuVuc[pointCtep++].Ce();
                            //endregion
                        }
                        else if (viB0 == ViBPec){
                            //region Pec
                            uint64_t pointCtep = (uint64_t)VeeD(ctepF); // D
                            uint64_t pointLimit = pointCtep + (uint64_t)VeeD(ctepF); // D
                            if (pointLimit > gpuVuLimit)
                                throw ExtraSauce("Error :: VBCc:Vee[GpuVu:Pec Limit Exceeded]");
                            while (pointCtep < pointLimit)
                                gpuVuc[pointCtep++].Pec();
                            //endregion
                        }
                        ++viB0Ctep;
                    }
                    //endregion
                }
                //endregion
            }

            ++viBCtep;
        }
        _ctepF = ctepF;
    }
    catch(...){
        if (_cpuCoul != nullptr){
            _cpuCoul->bePointF[0] = 1;
            _cpuCoul->bePointF[1] = (float)(_cpuCoul->RE % 16777216);
            _cpuCoul->bePointF[2] = (float)(_cpuCoul->RE / 16777216);
            _cpuCoul->bePointF[3] = (float)((ctepF - _ctepF) % 16777216);
            _cpuCoul->bePointF[4] = (float)((ctepF - _ctepF) / 16777216);
        }
    }
}
void VBCc::Pec(){
    if (VB >= 1){
        VB -= 1;

        int32_t pointCtep;
        //region CpuCoul
        bool clear = true;
        pointCtep = 0;
        while (pointCtep < cpuCoulLimit){
            CpuCoul *cpuCoul = &(cpuCoulc[pointCtep]);
            if (cpuCoul->VB >= 2){
                cpuCoul->VB += 4;
                cpuCoul->veeVB = -1;
                clear = false;
            }
            else if (cpuCoul->VB >= 1) {
                cpuCoul->Pec();
            }
            ++pointCtep;
        }
        if (clear){
            delete[] cpuCoulc;
        }
        //endregion
        //region Gpu [ Idle ]
        pointCtep = 0;
        while (pointCtep < gpuLimit){
            Gpu *gpu = &(gpuc[pointCtep]);
            uint32_t qewCtep = 0;
            while (qewCtep < gpu->queueLimit)
                vkQueueWaitIdle(gpu->queuec[qewCtep++]);
            ++pointCtep;
        }
        //endregion
        //region CpuAndy
        pointCtep = 0;
        while (pointCtep < cpuAndyLimit){
            CpuAndy *cpuAndy = &(cpuAndyc[pointCtep]);
            cpuAndy->Pec();
            ++pointCtep;
        }
        delete[] cpuAndyc;
        //endregion
        //region CpuBar
        pointCtep = 0;
        while (pointCtep < cpuBarLimit){
            CpuBar *cpuBar = &(cpuBarc[pointCtep]);
            cpuBar->Pec();
            ++pointCtep;
        }
        delete[] cpuBarc;
        //endregion
        //region CpuBrain
        pointCtep = 0;
        while (pointCtep < cpuBrainLimit){
            CpuBrain *cpuBrain = &(cpuBrainc[pointCtep]);
            cpuBrain->Pec();
            ++pointCtep;
        }
        delete[] cpuBrainc;
        //endregion
        //region CpuBuild
        pointCtep = 0;
        while (pointCtep < cpuBuildLimit){
            CpuBuild *cpuBuild = &(cpuBuildc[pointCtep]);
            cpuBuild->Pec();
            ++pointCtep;
        }
        delete[] cpuBuildc;
        //endregion
        //region CpuCed
        pointCtep = 0;
        while (pointCtep < cpuCedLimit){
            class CpuCed *cpuCed = &(cpuCedc[pointCtep]);
            cpuCed->Pec();
            ++pointCtep;
        }
        delete[] cpuCedc;
        //endregion
        //region CpuCpac
        pointCtep = 0;
        while (pointCtep < cpuCpacLimit){
            CpuCpac *cpuCpac = &(cpuCpacc[pointCtep]);
            cpuCpac->Pec();
            ++pointCtep;
        }
        delete[] cpuCpacc;
        //endregion
        //region CpuCyn
        pointCtep = 0;
        while (pointCtep < cpuCynLimit){
            CpuCyn *cpuCyn = &(cpuCync[pointCtep]);
            cpuCyn->Pec();
            ++pointCtep;
        }
        delete[] cpuCync;
        //endregion
        //region CpuFill
        pointCtep = 0;
        while (pointCtep < cpuFillLimit){
            CpuFill *cpuFill = &(cpuFillc[pointCtep]);
            cpuFill->Pec();
            ++pointCtep;
        }
        delete[] cpuFillc;
        //endregion
        //region CpuKey
        pointCtep = 0;
        while (pointCtep < cpuKeyLimit){
            CpuKey *cpuKey = &(cpuKeyc[pointCtep]);
            cpuKey->Pec();
            ++pointCtep;
        }
        delete[] cpuKeyc;
        //endregion
        //region CpuKlok
        pointCtep = 0;
        while (pointCtep < cpuKlokLimit){
            CpuKlok *cpuKlok = &(cpuKlokc[pointCtep]);
            cpuKlok->Pec();
            ++pointCtep;
        }
        delete[] cpuKlokc;
        //endregion
        //region CpuPop
        pointCtep = 0;
        while (pointCtep < cpuPopLimit){
            CpuPop *cpuPop = &(cpuPopc[pointCtep]);
            cpuPop->Pec();
            ++pointCtep;
        }
        delete[] cpuPopc;
        //endregion
        //region GpuCpuKomaBag
        pointCtep = 0;
        while (pointCtep < gpuCpuKomaBagLimit){
            GpuCpuKomaBag *gpuCpuKomaBag = &(gpuCpuKomaBagc[pointCtep]);
            gpuCpuKomaBag->Pec();
            ++pointCtep;
        }
        delete[] gpuCpuKomaBagc;
        //endregion
        //region GpuKomaBag
        pointCtep = 0;
        while (pointCtep < gpuKomaBagLimit){
            GpuKomaBag *gpuKomaBag = &(gpuKomaBagc[pointCtep]);
            gpuKomaBag->Pec();
            ++pointCtep;
        }
        delete[] gpuKomaBagc;
        //endregion
        //region GpuGnBag
        pointCtep = 0;
        while (pointCtep < gpuGnBagLimit){
            GpuGnBag *gpuGnBag = &(gpuGnBagc[pointCtep]);
            gpuGnBag->Pec();
            ++pointCtep;
        }
        delete[] gpuGnBagc;
        //endregion
        //region GpuGram
        pointCtep = 0;
        while (pointCtep < gpuGramLimit){
            GpuGram *gpuGram = &(gpuGramc[pointCtep]);
            gpuGram->Pec();
            ++pointCtep;
        }
        delete[] gpuGramc;
        //endregion
        //region GpuGramBeGram
        pointCtep = 0;
        while (pointCtep < gpuGramBeGramLimit){
            GpuGramBeGram *gpuGramBeGram = &(gpuGramBeGramc[pointCtep]);
            gpuGramBeGram->Pec();
            ++pointCtep;
        }
        delete[] gpuGramBeGramc;
        //endregion
        //region GpuBarGramBag
        pointCtep = 0;
        while (pointCtep < gpuBarGramBagLimit){
            GpuBarGramBag *gpuBarGramBag = &(gpuBarGramBagc[pointCtep]);
            gpuBarGramBag->Pec();
            ++pointCtep;
        }
        delete[] gpuBarGramBagc;
        //endregion
        //region GpuBarGramBeGram
        pointCtep = 0;
        while (pointCtep < gpuBarGramBeGramLimit){
            GpuBarGramBeGram *gpuBarGramBeGram = &(gpuBarGramBeGramc[pointCtep]);
            gpuBarGramBeGram->Pec();
            ++pointCtep;
        }
        delete[] gpuBarGramBeGramc;
        //endregion
        //region GpuCyn
        pointCtep = 0;
        while (pointCtep < gpuCynLimit){
            GpuCyn *gpuCyn = &(gpuCync[pointCtep]);
            gpuCyn->Pec();
            ++pointCtep;
        }
        delete[] gpuCync;
        //endregion
        //region GpuLink
        pointCtep = 0;
        while (pointCtep < gpuLinkLimit){
            GpuLink *gpuLink = &(gpuLinkc[pointCtep]);
            gpuLink->Pec();
            ++pointCtep;
        }
        delete[] gpuLinkc;
        //endregion
        //region GpuMulteGram
        pointCtep = 0;
        while (pointCtep < gpuMulteGramLimit){
            GpuMulteGram *gpuMulteGram = &(gpuMulteGramc[pointCtep]);
            gpuMulteGram->Pec();
            ++pointCtep;
        }
        delete[] gpuMulteGramc;
        //endregion
        //region GpuMulte
        pointCtep = 0;
        while (pointCtep < gpuMulteLimit){
            GpuMulte *gpuMulte = &(gpuMultec[pointCtep]);
            gpuMulte->Pec();
            ++pointCtep;
        }
        delete[] gpuMultec;
        //endregion
        //region GpuMulteBag
        pointCtep = 0;
        while (pointCtep < gpuMulteBagLimit){
            GpuMulteBag *gpuMulteBag = &(gpuMulteBagc[pointCtep]);
            gpuMulteBag->Pec();
            ++pointCtep;
        }
        delete[] gpuMulteBagc;
        //endregion
        //region GpuUneGram
        pointCtep = 0;
        while (pointCtep < gpuUneGramLimit){
            GpuUneGram *gpuUneGram = &(gpuUneGramc[pointCtep]);
            gpuUneGram->Pec();
            ++pointCtep;
        }
        delete[] gpuUneGramc;
        //endregion
        //region GpuUne
        pointCtep = 0;
        while (pointCtep < gpuUneLimit){
            GpuUne *gpuUne = &(gpuUnec[pointCtep]);
            gpuUne->Pec();
            ++pointCtep;
        }
        delete[] gpuUnec;
        //endregion
        //region GpuBar
        pointCtep = 0;
        while (pointCtep < gpuBarLimit){
            GpuBar *gpuBar = &(gpuBarc[pointCtep]);
            gpuBar->Pec();
            ++pointCtep;
        }
        delete[] gpuBarc;
        //endregion
        //region GpuQew
        pointCtep = 0;
        while (pointCtep < gpuQewLimit){
            GpuQew *gpuQew = &(gpuQewc[pointCtep]);
            gpuQew->Pec();
            ++pointCtep;
        }
        delete[] gpuQewc;
        //endregion
        //region Gpu
        pointCtep = 0;
        while (pointCtep < gpuLimit){
            Gpu *gpu = &(gpuc[pointCtep]);
            gpu->Pec();
            ++pointCtep;
        }
        delete[] gpuc;
        //endregion
        //region GpuVu
        pointCtep = 0;
        while (pointCtep < gpuVuLimit){
            GpuVu *gpuVu = &(gpuVuc[pointCtep]);
            gpuVu->Pec();
            ++pointCtep;
        }
        delete[] gpuVuc;
        //endregion
        //region GpuCed
        pointCtep = 0;
        while (pointCtep < gpuCedLimit){
            GpuCed *gpuCed = &(gpuCedc[pointCtep]);
            gpuCed->Pec();
            ++pointCtep;
        }
        delete[] gpuCedc;
        //endregion
    }
}
#include "CpuLink.h"

void CpuLink::Ce(){
    VB = 0;
}
void CpuLink::Be(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float VB0 = VeeF(ctepF); // F
        if (VB0 >= 512){
            VB0 -= 512;

            //region Pec
            Pec();
            //endregion
        }
        if (VB0 >= 256) {
            VB0 -= 256;

            //region UDP | IPv6
            float blockViB = VeeF(ctepF); // F
            if (blockViB == 0){
                socketI = socket(AF_INET6, SOCK_DGRAM, 0);
                if (socketI == -1){
                    _cpuCoul->RE = errno;
                    throw -1;
                }
            } else if (blockViB == 1){
                socketI = socket(AF_INET6, SOCK_DGRAM | SOCK_NONBLOCK, 0);
                if (socketI == -1){
                    _cpuCoul->RE = errno;
                    throw -1;
                }
            }

            VB += 1;
            //endregion
        }
        if (VB0 >= 128){
            VB0 -= 128;

            //region UDP | IPv4
            float blockViB = VeeF(ctepF); // F
            if (blockViB == 0){
                socketI = socket(AF_INET, SOCK_DGRAM, 0);
                if (socketI == -1){
                    _cpuCoul->RE = errno;
                    throw -1;
                }
            } else if (blockViB == 1){
                socketI = socket(AF_INET, SOCK_DGRAM | SOCK_NONBLOCK, 0);
                if (socketI == -1){
                    _cpuCoul->RE = errno;
                    throw -1;
                }
            }
            VB += 2;
            //endregion
        }
        if (VB0 >= 64) {
            VB0 -= 64;

            //region TCP | IPv6
            ipViB = AF_INET6;
            blockViB = VeeF(ctepF); // F
            if (blockViB == 0){
                socketI = socket(AF_INET6, SOCK_STREAM, 0);
                if (socketI == -1){
                    _cpuCoul->RE = errno;
                    throw -1;
                }
            } else if (blockViB == 1){
                socketI = socket(AF_INET6, SOCK_STREAM | SOCK_NONBLOCK, 0);
                if (socketI == -1){
                    _cpuCoul->RE = errno;
                    throw -1;
                }
            }
            VB += 4;
            //endregion
        }
        if (VB0 >= 32){
            VB0 -= 32;

            //region TCP | IPv4
            ipViB = AF_INET;
            blockViB = VeeF(ctepF); // F
            if (blockViB == 0){
                socketI = socket(AF_INET, SOCK_STREAM, 0);
                if (socketI == -1){
                    _cpuCoul->RE = errno;
                    throw -1;
                }
            } else if (blockViB == 1){
                socketI = socket(AF_INET, SOCK_STREAM | SOCK_NONBLOCK, 0);
                if (socketI == -1){
                    _cpuCoul->RE = errno;
                    throw -1;
                }
            }
            VB += 8;
            //endregion
        }
        if (VB0 >= 16){
            VB0 -= 16;

            //region Bind | IPv6
            addr6.sin6_family = AF_INET6;
            addr6.sin6_addr = in6addr_any;
            addr6.sin6_port = htons(VeeFU(ctepF)); // F
            int32_t RE = bind(socketI, (struct sockaddr *)&addr6, sizeof(addr6));
            if (RE == -1){
                _cpuCoul->RE = errno;
                throw -1;
            }
            //endregion
        }
        if (VB0 >= 8){
            VB0 -= 8;

            //region Bind | IPv4
            addr4.sin_family = AF_INET;
            addr4.sin_addr.s_addr = INADDR_ANY;
            addr4.sin_port = htons(VeeFU(ctepF)); // F
            int32_t RE = bind(socketI, (struct sockaddr *)&addr4, sizeof(addr4));
            if (RE == -1){
                _cpuCoul->RE = errno;
                throw -1;
            }
            //endregion
        }
        if (VB0 >= 4){
            VB0 -= 4;

            //region Listen
            int32_t queueLimit = (int32_t)VeeD(ctepF); // D
            listen(socketI, queueLimit);
            //endregion
        }
        if (VB0 >= 2){
            VB0 -= 2;

            //region TCP Connection Limit
            tcpSocketLimit = VeeD(ctepF); // D
            tcpSocketc = new int[tcpSocketLimit];
            VB += 16;

            int64_t tcpSocketCtep = 0;
            while (tcpSocketCtep < tcpSocketLimit){
                tcpSocketc[tcpSocketCtep++] = -1;
            }
            VB += 32;
            //endregion
        }
        if (VB0 >= 1){
            VB0 -= 1;

            //region Socket Options
            VB1PeCe = VeeF(ctepF); // F
            float VB1 = VB1PeCe;
            if (VB1 >= 32){
                VB1 -= 32;

                //region Recv | Timeout
                recvTimeBar.tv_sec = (long)VeeD(ctepF); // D
                recvTimeBar.tv_usec = (long)VeeD(ctepF); // D
                setsockopt(socketI, SOL_SOCKET, SO_RCVTIMEO, (const char*)&recvTimeBar, sizeof recvTimeBar);
                //endregion
            }
            if (VB1 >= 16){
                VB1 -= 16;

                //region Recv | BV
                recvBV = (int)VeeD(ctepF); // D
                setsockopt(socketI, SOL_SOCKET, SO_RCVLOWAT, &recvBV, sizeof(recvBV));
                //endregion
            }
            if (VB1 >= 8){
                VB1 -= 8;

                //region Recv | BufferSize
                recvBufferLimitC = (int)VeeD(ctepF); // D
                setsockopt(socketI, SOL_SOCKET, SO_RCVBUF, &recvBufferLimitC, sizeof(recvBufferLimitC));
                //endregion
            }
            if (VB1 >= 4){
                VB1 -= 4;

                //region Send | Timeout
                sendTimeBar.tv_sec = (long)VeeD(ctepF); // D
                sendTimeBar.tv_usec = (long)VeeD(ctepF); // D
                setsockopt(socketI, SOL_SOCKET, SO_SNDTIMEO, (const char*)&sendTimeBar, sizeof sendTimeBar);
                //endregion
            }
            if (VB1 >= 2){
                VB1 -= 2;

                //region Send | BV
                sendBV = (int)VeeD(ctepF); // D
                setsockopt(socketI, SOL_SOCKET, SO_SNDLOWAT, &sendBV, sizeof(sendBV));
                //endregion
            }
            if (VB1 >= 1){
                VB1 -= 1;

                //region Send | BufferSize
                sendBufferLimitC = (int)VeeD(ctepF); // D
                setsockopt(socketI, SOL_SOCKET, SO_SNDBUF, &sendBufferLimitC, sizeof(sendBufferLimitC));
                //endregion
            }
            //endregion
        }
        _ctepF = ctepF;
    } catch (...){
        _ctepF = ctepF;
        throw -1;
    }
}
void CpuLink::Vee(CpuCoul *_cpuCoul, float *&_ctepF) {
    float *ctepF = _ctepF;
    try{
        float viBLimit = VeeF(ctepF); // F
        float viBCtep = 0;
        float viB;
        while (viBCtep < viBLimit) {
            viB = VeeF(ctepF); // F
            if (viB == ViBVee){
                //region Vee
                if (VB == 1){
                    //region UDP | IPv6
                    float *ipPointF = (float *)VeeP(ctepF); // P (ipPointC)
                    float *pakPointF = (float *)VeeP(ctepF); // P (pakPointC)

                    float *ipCtepF = ipPointF + 1;
                    addr6.sin6_family = (sa_family_t)VeeFU(ipCtepF);
                    addr6.sin6_port = htons(VeeFU(ipCtepF));
                    addr6.sin6_addr.in6_u.u6_addr8[0] = (uint8_t)VeeFU(ipCtepF);
                    addr6.sin6_addr.in6_u.u6_addr8[1] = (uint8_t)VeeFU(ipCtepF);
                    addr6.sin6_addr.in6_u.u6_addr8[2] = (uint8_t)VeeFU(ipCtepF);
                    addr6.sin6_addr.in6_u.u6_addr8[3] = (uint8_t)VeeFU(ipCtepF);
                    addr6.sin6_addr.in6_u.u6_addr8[4] = (uint8_t)VeeFU(ipCtepF);
                    addr6.sin6_addr.in6_u.u6_addr8[5] = (uint8_t)VeeFU(ipCtepF);
                    addr6.sin6_addr.in6_u.u6_addr8[6] = (uint8_t)VeeFU(ipCtepF);
                    addr6.sin6_addr.in6_u.u6_addr8[7] = (uint8_t)VeeFU(ipCtepF);
                    addr6.sin6_addr.in6_u.u6_addr8[8] = (uint8_t)VeeFU(ipCtepF);
                    addr6.sin6_addr.in6_u.u6_addr8[9] = (uint8_t)VeeFU(ipCtepF);
                    addr6.sin6_addr.in6_u.u6_addr8[10] = (uint8_t)VeeFU(ipCtepF);
                    addr6.sin6_addr.in6_u.u6_addr8[11] = (uint8_t)VeeFU(ipCtepF);
                    addr6.sin6_addr.in6_u.u6_addr8[12] = (uint8_t)VeeFU(ipCtepF);
                    addr6.sin6_addr.in6_u.u6_addr8[13] = (uint8_t)VeeFU(ipCtepF);
                    addr6.sin6_addr.in6_u.u6_addr8[14] = (uint8_t)VeeFU(ipCtepF);
                    addr6.sin6_addr.in6_u.u6_addr8[15] = (uint8_t)VeeFU(ipCtepF);

                    float *pakCtepF = pakPointF;
                    int64_t pakLimitC = VeeD(pakCtepF);
                    pakLimitC = sendto(socketI, (void *)pakCtepF, (size_t)pakLimitC, 0, (struct sockaddr *)&addr6, sizeof(addr6));
                    if (pakLimitC < 0){
                        _cpuCoul->RE = errno;
                        throw -1;
                    }
                    //endregion
                } else if (VB == 2){
                    //region UDP | IPv4
                    float *ipPointF = (float *)VeeP(ctepF); // P (ipPointC)
                    float *pakPointF = (float *)VeeP(ctepF); // P (pakPointC)

                    uint8_t ipv4[4];
                    float *ipCtepF = ipPointF + 1;
                    addr4.sin_family = (sa_family_t)VeeFU(ipCtepF);
                    addr4.sin_port = htons(VeeFU(ipCtepF));
                    ipv4[0] = (uint8_t)VeeFU(ipCtepF);
                    ipv4[1] = (uint8_t)VeeFU(ipCtepF);
                    ipv4[2] = (uint8_t)VeeFU(ipCtepF);
                    ipv4[3] = (uint8_t)VeeFU(ipCtepF);
                    addr4.sin_addr.s_addr = *(uint32_t *)ipv4;

                    float *pakCtepF = pakPointF;
                    int64_t pakLimitC = VeeD(pakCtepF);
                    pakLimitC = sendto(socketI, (void *)pakCtepF, (size_t)pakLimitC, 0, (struct sockaddr *)&addr4, sizeof(addr4));
                    if (pakLimitC < 0){
                        _cpuCoul->RE = errno;
                        throw -1;
                    }
                    //endregion
                } else if (VB <= 8){
                    //region TCP | Client | IPv6 or IPv4
                    char *streamPointC = VeeP(ctepF); // P
                    int64_t streamLimitC = VeeD(ctepF); // D
                    float *truLimitCPointF = (float *)VeeP(ctepF); // P

                    streamLimitC = write(socketI, (void *)streamPointC, (size_t)streamLimitC);
                    if (streamLimitC < 0){
                        _cpuCoul->RE = errno;
                        throw -1;
                    }
                    BeD(truLimitCPointF, streamLimitC); // *D
                    //endregion
                } else if (VB <= 56){
                    //region TCP | Server | IPv6 or IPv4
                    char *streamPointC = VeeP(ctepF); // P
                    int64_t streamLimitC = VeeD(ctepF); // D
                    float *truLimitCPointF = (float *)VeeP(ctepF); // P
                    int64_t tcpSocketPoint = VeeD(ctepF); // D

                    streamLimitC = write(tcpSocketc[tcpSocketPoint], (void *)streamPointC, (size_t)streamLimitC);
                    if (streamLimitC < 0){
                        _cpuCoul->RE = errno;
                        throw -1;
                    }
                    BeD(truLimitCPointF, streamLimitC); // *D
                    //endregion
                }
                //endregion
            } else if (viB == ViBBe){
                //region Be
                if (VB == 1){
                    //region UDP | IPv6
                    float *ipPointF = (float *)VeeP(ctepF); // P (ipPointC)
                    float *pakPointF = (float *)VeeP(ctepF); // P (pakPointC)
                    int64_t pakLimitC = VeeD(ctepF); // D

                    socklen_t addr6LimitC;
                    float *pakCtepF = pakPointF + 2;
                    pakLimitC = recvfrom(socketI, (void *)pakCtepF, (size_t)pakLimitC, 0, (struct sockaddr *)&addr6, &addr6LimitC);
                    if (pakLimitC < 0){
                        _cpuCoul->RE = errno;
                        throw -1;
                    }

                    // IP Bio(c)
                    BeF(ipPointF, (float)1); // *F
                    BeF(ipPointF, (float)(AF_INET6)); // *F
                    BeF(ipPointF, (float)(addr6.sin6_port)); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[0])); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[1])); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[2])); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[3])); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[4])); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[5])); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[6])); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[7])); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[8])); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[9])); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[10])); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[11])); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[12])); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[13])); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[14])); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[15])); // *F

                    // Pak Bio(c)
                    BeD(pakPointF, pakLimitC); // *D
                    //endregion
                } else if (VB == 2){
                    //region UDP | IPv4
                    float *ipPointF = (float *)VeeP(ctepF); // P (ipPointC)
                    float *pakPointF = (float *)VeeP(ctepF); // P (pakPointC)
                    int64_t pakLimitC = VeeD(ctepF); // D

                    socklen_t addr4LimitC;
                    float *pakCtepF = pakPointF + 2;
                    pakLimitC = recvfrom(socketI, (void *)pakCtepF, (size_t)pakLimitC, 0, (struct sockaddr *)&addr4, &addr4LimitC);
                    if (pakLimitC < 0){
                        _cpuCoul->RE = errno;
                        throw -1;
                    }

                    // IP Bio(c)
                    BeF(ipPointF, (float)1); // *F
                    BeF(ipPointF, (float)(AF_INET)); // *F
                    BeF(ipPointF, (float)(addr4.sin_port)); // *F
                    uint8_t *ipv4 = (uint8_t *)&addr4.sin_addr.s_addr;
                    BeF(ipPointF, (float)(ipv4[0])); // *F
                    BeF(ipPointF, (float)(ipv4[1])); // *F
                    BeF(ipPointF, (float)(ipv4[2])); // *F
                    BeF(ipPointF, (float)(ipv4[3])); // *F

                    // Pak Bio(c)
                    BeD(pakPointF, pakLimitC); // *D

                    //endregion
                } else if (VB <= 8){
                    //region TCP | Client | IPv6 or IPv4
                    char *streamPointC = VeeP(ctepF); // P
                    int64_t streamLimitC = VeeD(ctepF); // D
                    float *truLimitCPointF = (float *)VeeP(ctepF); // P

                    streamLimitC = read(socketI, (void *)streamPointC, (size_t)streamLimitC);
                    if (streamLimitC == -1){
                        _cpuCoul->RE = errno;
                        throw -1;
                    }

                    BeD(truLimitCPointF, streamLimitC); // *D
                    //endregion
                } else if (VB <= 56){
                    //region TCP | Server | IPv6 or IPv4
                    char *streamPointC = VeeP(ctepF); // P
                    int64_t streamLimitC = VeeD(ctepF); // D
                    float *truLimitCPointF = (float *)VeeP(ctepF); // P
                    int64_t socketPoint = VeeD(ctepF); // D

                    streamLimitC = read(tcpSocketc[socketPoint], (void *)streamPointC, (size_t)streamLimitC);
                    if (streamLimitC == -1){
                        _cpuCoul->RE = errno;
                        throw -1;
                    }

                    BeD(truLimitCPointF, streamLimitC); // *D
                    //endregion
                }
                //endregion
            } else if (viB == ViBCe){
                //region Ce
                if (VB == 4){
                    //region TCP | Connect | IPv6
                    float *ipPointF = (float *)VeeP(ctepF); // P (ipPointC)

                    float *ipCtepF = ipPointF + 1;
                    addr6.sin6_family = (sa_family_t)VeeFU(ipCtepF);
                    addr6.sin6_port = htons(VeeFU(ipCtepF));
                    addr6.sin6_addr.in6_u.u6_addr8[0] = (uint8_t)VeeFU(ipCtepF);
                    addr6.sin6_addr.in6_u.u6_addr8[1] = (uint8_t)VeeFU(ipCtepF);
                    addr6.sin6_addr.in6_u.u6_addr8[2] = (uint8_t)VeeFU(ipCtepF);
                    addr6.sin6_addr.in6_u.u6_addr8[3] = (uint8_t)VeeFU(ipCtepF);
                    addr6.sin6_addr.in6_u.u6_addr8[4] = (uint8_t)VeeFU(ipCtepF);
                    addr6.sin6_addr.in6_u.u6_addr8[5] = (uint8_t)VeeFU(ipCtepF);
                    addr6.sin6_addr.in6_u.u6_addr8[6] = (uint8_t)VeeFU(ipCtepF);
                    addr6.sin6_addr.in6_u.u6_addr8[7] = (uint8_t)VeeFU(ipCtepF);
                    addr6.sin6_addr.in6_u.u6_addr8[8] = (uint8_t)VeeFU(ipCtepF);
                    addr6.sin6_addr.in6_u.u6_addr8[9] = (uint8_t)VeeFU(ipCtepF);
                    addr6.sin6_addr.in6_u.u6_addr8[10] = (uint8_t)VeeFU(ipCtepF);
                    addr6.sin6_addr.in6_u.u6_addr8[11] = (uint8_t)VeeFU(ipCtepF);
                    addr6.sin6_addr.in6_u.u6_addr8[12] = (uint8_t)VeeFU(ipCtepF);
                    addr6.sin6_addr.in6_u.u6_addr8[13] = (uint8_t)VeeFU(ipCtepF);
                    addr6.sin6_addr.in6_u.u6_addr8[14] = (uint8_t)VeeFU(ipCtepF);
                    addr6.sin6_addr.in6_u.u6_addr8[15] = (uint8_t)VeeFU(ipCtepF);

                    int32_t RE = connect(socketI, (struct sockaddr *)&addr6, sizeof(addr6));
                    if (RE == -1){
                        _cpuCoul->RE = errno;
                        throw -1;
                    }
                    //endregion
                } else if (VB == 8){
                    //region TCP | Connect | IPv4
                    float *ipPointF = (float *)VeeP(ctepF); // P (ipPointC)

                    uint8_t ipv4[4];
                    float *ipCtepF = ipPointF + 1;
                    addr4.sin_family = (sa_family_t)VeeFU(ipCtepF);
                    addr4.sin_port = htons(VeeFU(ipCtepF));
                    ipv4[0] = (uint8_t)VeeFU(ipCtepF);
                    ipv4[1] = (uint8_t)VeeFU(ipCtepF);
                    ipv4[2] = (uint8_t)VeeFU(ipCtepF);
                    ipv4[3] = (uint8_t)VeeFU(ipCtepF);
                    addr4.sin_addr.s_addr = *(uint32_t *)ipv4;

                    int32_t RE = connect(socketI, (struct sockaddr *)&addr4, sizeof(addr4));
                    if (RE == -1){
                        _cpuCoul->RE = errno;
                        throw -1;
                    }
                    //endregion
                } else if (VB == 52){
                    //region TCP | Accept | IPv6
                    float *ipPointF = (float *)VeeP(ctepF); // P
                    int64_t tcpSocketPoint = VeeD(ctepF); // D
                    float socketViB = VeeF(ctepF); // F
                    float VB1 = VeeF(ctepF); // F

                    struct sockaddr_in6 veeAddr6;
                    socklen_t veeAddrLimitC;
                    int socketI0 = -1;

                    if (socketViB == 0)
                        socketI0 = accept(socketI, (struct sockaddr *)&veeAddr6, &veeAddrLimitC);
                    else if (socketViB == 1)
                        socketI0 = accept4(socketI, (struct sockaddr *)&veeAddr6, &veeAddrLimitC, SOCK_NONBLOCK);

                    if (socketI0 == -1){
                        _cpuCoul->RE = errno;
                        throw -1;
                    }
                    tcpSocketc[tcpSocketPoint] = socketI0;
                    //region Socket Options
                    if (VB1 >= 32){
                        VB1 -= 32;

                        //region Recv | Timeout
                        struct timeval timeBar;
                        timeBar.tv_sec = (long)VeeD(ctepF); // D
                        timeBar.tv_usec = (long)VeeD(ctepF); // D

                        setsockopt(socketI0, SOL_SOCKET, SO_RCVTIMEO, (const char*)&timeBar, sizeof timeBar);
                        //endregion
                    }
                    if (VB1 >= 16){
                        VB1 -= 16;

                        //region Recv | BV
                        int recvBV = (int)VeeD(ctepF); // D

                        setsockopt(socketI0, SOL_SOCKET, SO_RCVLOWAT, &recvBV, sizeof(recvBV));
                        //endregion
                    }
                    if (VB1 >= 8){
                        VB1 -= 8;

                        //region Recv | BufferSize
                        int recvBufferLimitC = (int)VeeD(ctepF); // D

                        setsockopt(socketI0, SOL_SOCKET, SO_RCVBUF, &recvBufferLimitC, sizeof(recvBufferLimitC));
                        //endregion
                    }
                    if (VB1 >= 4){
                        VB1 -= 4;

                        //region Send | Timeout
                        struct timeval timeBar;
                        timeBar.tv_sec = (long)VeeD(ctepF); // D
                        timeBar.tv_usec = (long)VeeD(ctepF); // D

                        setsockopt(socketI0, SOL_SOCKET, SO_SNDTIMEO, (const char*)&timeBar, sizeof timeBar);
                        //endregion
                    }
                    if (VB1 >= 2){
                        VB1 -= 2;

                        //region Send | BV
                        int recvBV = (int)VeeD(ctepF); // D

                        setsockopt(socketI0, SOL_SOCKET, SO_SNDLOWAT, &recvBV, sizeof(recvBV));
                        //endregion
                    }
                    if (VB1 >= 1){
                        VB1 -= 1;

                        //region Send | BufferSize
                        int bufferSizeLimitC = (int)VeeD(ctepF); // D

                        setsockopt(socketI0, SOL_SOCKET, SO_SNDBUF, &bufferSizeLimitC, sizeof(bufferSizeLimitC));
                        //endregion
                    }
                    //endregion

                    BeF(ipPointF, (float)2); // *F
                    BeF(ipPointF, (float)(AF_INET6)); // *F
                    BeF(ipPointF, (float)(addr6.sin6_port)); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[0])); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[1])); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[2])); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[3])); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[4])); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[5])); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[6])); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[7])); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[8])); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[9])); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[10])); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[11])); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[12])); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[13])); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[14])); // *F
                    BeF(ipPointF, (float)(addr6.sin6_addr.in6_u.u6_addr8[15])); // *F
                    //endregion
                } else if (VB == 56){
                    //region TCP | Accept | IPv4
                    float *ipPointF = (float *)VeeP(ctepF); // P (ipPointC)
                    int64_t tcpSocketPoint = VeeD(ctepF); // D
                    float socketViB = VeeF(ctepF); // F
                    float VB1 = VeeF(ctepF); // F

                    struct sockaddr_in veeAddr4;
                    socklen_t veeAddrLimitC;
                    int socketI0 = -1;

                    if (socketViB == 0)
                        socketI0 = accept(socketI, (struct sockaddr *)&veeAddr4, &veeAddrLimitC);
                    else if (socketViB == 1)
                        socketI0 = accept4(socketI, (struct sockaddr *)&veeAddr4, &veeAddrLimitC, SOCK_NONBLOCK);

                    if (socketI0 == -1){
                        _cpuCoul->RE = errno;
                        throw -1;
                    }
                    tcpSocketc[tcpSocketPoint] = socketI0;
                    //region Socket Options
                    if (VB1 >= 32){
                        VB1 -= 32;

                        //region Recv | Timeout
                        struct timeval timeBar;
                        timeBar.tv_sec = (long)VeeD(ctepF); // D
                        timeBar.tv_usec = (long)VeeD(ctepF); // D

                        setsockopt(socketI0, SOL_SOCKET, SO_RCVTIMEO, (const char*)&timeBar, sizeof timeBar);
                        //endregion
                    }
                    if (VB1 >= 16){
                        VB1 -= 16;

                        //region Recv | BV
                        int recvBV = (int)VeeD(ctepF); // D

                        setsockopt(socketI0, SOL_SOCKET, SO_RCVLOWAT, &recvBV, sizeof(recvBV));
                        //endregion
                    }
                    if (VB1 >= 8){
                        VB1 -= 8;

                        //region Recv | BufferSize
                        int recvBufferLimitC = (int)VeeD(ctepF); // D

                        setsockopt(socketI0, SOL_SOCKET, SO_RCVBUF, &recvBufferLimitC, sizeof(recvBufferLimitC));
                        //endregion
                    }
                    if (VB1 >= 4){
                        VB1 -= 4;

                        //region Send | Timeout
                        struct timeval timeBar;
                        timeBar.tv_sec = (long)VeeD(ctepF); // D
                        timeBar.tv_usec = (long)VeeD(ctepF); // D

                        setsockopt(socketI0, SOL_SOCKET, SO_SNDTIMEO, (const char*)&timeBar, sizeof timeBar);
                        //endregion
                    }
                    if (VB1 >= 2){
                        VB1 -= 2;

                        //region Send | BV
                        int recvBV = (int)VeeD(ctepF); // D

                        setsockopt(socketI0, SOL_SOCKET, SO_SNDLOWAT, &recvBV, sizeof(recvBV));
                        //endregion
                    }
                    if (VB1 >= 1){
                        VB1 -= 1;

                        //region Send | BufferSize
                        int bufferSizeLimitC = (int)VeeD(ctepF); // D

                        setsockopt(socketI0, SOL_SOCKET, SO_SNDBUF, &bufferSizeLimitC, sizeof(bufferSizeLimitC));
                        //endregion
                    }
                    //endregion

                    BeF(ipPointF, (float)2); // *F
                    BeF(ipPointF, (float)(AF_INET)); // *F
                    BeF(ipPointF, (float)(addr4.sin_port)); // *F
                    uint8_t *ipv4 = (uint8_t *)&addr4.sin_addr.s_addr;
                    BeF(ipPointF, (float)(ipv4[0])); // *F
                    BeF(ipPointF, (float)(ipv4[1])); // *F
                    BeF(ipPointF, (float)(ipv4[2])); // *F
                    BeF(ipPointF, (float)(ipv4[3])); // *F
                    //endregion
                }
                //endregion
            } else if (viB == ViBPec){
                //region Pec
                if (VB <= 8){
                    close(socketI);
                    VB = 0;

                    if (ipViB == AF_INET6){
                        //region TCP | IPv6
                        if (blockViB == 0){
                            socketI = socket(AF_INET6, SOCK_STREAM, 0);
                            if (socketI == -1){
                                _cpuCoul->RE = errno;
                                throw -1;
                            }
                        } else if (blockViB == 1){
                            socketI = socket(AF_INET6, SOCK_STREAM | SOCK_NONBLOCK, 0);
                            if (socketI == -1){
                                _cpuCoul->RE = errno;
                                throw -1;
                            }
                        }
                        VB += 4;
                        //endregion
                    } else if (ipViB == AF_INET){
                        //region TCP | IPv4
                        if (blockViB == 0){
                            socketI = socket(AF_INET, SOCK_STREAM, 0);
                            if (socketI == -1){
                                _cpuCoul->RE = errno;
                                throw -1;
                            }
                        } else if (blockViB == 1){
                            socketI = socket(AF_INET, SOCK_STREAM | SOCK_NONBLOCK, 0);
                            if (socketI == -1){
                                _cpuCoul->RE = errno;
                                throw -1;
                            }
                        }
                        VB += 8;
                        //endregion
                    }
                    //region Socket Options
                    float VB1 = VB1PeCe;
                    if (VB1 >= 32){
                        VB1 -= 32;

                        //region Recv | Timeout
                        setsockopt(socketI, SOL_SOCKET, SO_RCVTIMEO, (const char*)&recvTimeBar, sizeof recvTimeBar);
                        //endregion
                    }
                    if (VB1 >= 16){
                        VB1 -= 16;

                        //region Recv | BV
                        setsockopt(socketI, SOL_SOCKET, SO_RCVLOWAT, &recvBV, sizeof(recvBV));
                        //endregion
                    }
                    if (VB1 >= 8){
                        VB1 -= 8;

                        //region Recv | BufferSize
                        setsockopt(socketI, SOL_SOCKET, SO_RCVBUF, &recvBufferLimitC, sizeof(recvBufferLimitC));
                        //endregion
                    }
                    if (VB1 >= 4){
                        VB1 -= 4;

                        //region Send | Timeout
                        setsockopt(socketI, SOL_SOCKET, SO_SNDTIMEO, (const char*)&sendTimeBar, sizeof sendTimeBar);
                        //endregion
                    }
                    if (VB1 >= 2){
                        VB1 -= 2;

                        //region Send | BV
                        setsockopt(socketI, SOL_SOCKET, SO_SNDLOWAT, &sendBV, sizeof(sendBV));
                        //endregion
                    }
                    if (VB1 >= 1){
                        VB1 -= 1;

                        //region Send | BufferSize
                        setsockopt(socketI, SOL_SOCKET, SO_SNDBUF, &sendBufferLimitC, sizeof(sendBufferLimitC));
                        //endregion
                    }
                    //endregion
                } else if (VB >= 52){
                    int64_t tcpSocketPoint = VeeD(ctepF); // D

                    close(tcpSocketc[tcpSocketPoint]);
                    tcpSocketc[tcpSocketPoint] = -1;
                }

                //endregion
            }
            ++viBCtep;
        }
        _ctepF = ctepF;
    } catch (...){
        _ctepF = ctepF;
        throw -1;
    }
}
void CpuLink::Pec(){
    if (VB >= 16){
        VB -= 16;

        if (VB >= 32){
            VB -= 32;

            int64_t tcpSocketCtep = 0;
            while (tcpSocketCtep < tcpSocketLimit){
                if (tcpSocketc[tcpSocketCtep] != -1)
                    close(tcpSocketc[tcpSocketCtep]);
                ++tcpSocketCtep;
            }
        }
        delete[] tcpSocketc;
    }
    if (VB > 0){
        VB = 0;

        close(socketI);
    }
}

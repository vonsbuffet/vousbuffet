//
// Link your plug. Lets get it...
//

#ifndef CpuLink_H
#define CpuLink_H

#include <ViBer.h>

#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <linux/in6.h>
#include <netdb.h>
#include <arpa/inet.h>


class ViBer;
class CpuCoul;

class CpuLink{
public:
    CpuLink();
    ~CpuLink();

    void Pec();
    void Ce();
    void Be(VBCc *_viBer, CpuCoul *_cpuCoul, float *&_ctepF);
    void Vee(VBCc *_viBer, CpuCoul *_cpuCoul, float *&_ctepF);

    int64_t VB;
    float VB1PeCe;
    float ipViB;
    float blockViB;
    struct timeval recvTimeBar;
    int recvBV;
    int recvBufferLimitC;
    struct timeval sendTimeBar;
    int sendBV;
    int sendBufferLimitC;
    struct sockaddr_in6 addr6;
    struct sockaddr_in addr4;
    int socketI;
    int64_t tcpSocketLimit;
    int *tcpSocketc;
};

#endif //CpuLink_H

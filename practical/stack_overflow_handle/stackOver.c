#include <stdio.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <signal.h>
#include <errno.h>
#include <stdlib.h>

#define handle_error(msg) \
    do { perror(msg); exit(EXIT_FAILURE); } while (0)

struct sigaction osa;


/*
void foo(){
    foo();
}
*/
static void handler(int sig, siginfo_t *si, void *unused)
{
//    printf("Got SIGSEGV at address: 0x%lx\n",(long) si->si_addr);
    printf("Implements the handler only\n");
//    (*osa.sa_handler)(sig);

/*
    sigaction(SIGSEGV, &osa, NULL);
    raise(SIGSEGV);
*/
}

int main(){
    struct rlimit *rlp;
    struct sigaction sa;

    osa.sa_flags = SA_SIGINFO;
    sa.sa_flags = SA_RESETHAND;
    sigemptyset(&sa.sa_mask);
    sigemptyset(&osa.sa_mask);
    sa.sa_sigaction = handler;
    if (sigaction(SIGSEGV, &sa, &osa) == -1)
        handle_error("sigaction");

/*
    int x = getrlimit(RLIMIT_STACK,rlp);
    printf("program start cur = %llu\n",rlp->rlim_cur);
    printf("program start max = %llu\n",rlp->rlim_max);
    //foo();
*/
    while(1){
        sleep(1);
    }
}

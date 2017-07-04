#include<stdio.h>
#include<pthread.h>

int done = 0;

pthread_mutex_t m = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t c = PTHREAD_COND_INITIALIZER;

void thr_exit() {
    printf("thr_exit enter\n");
    pthread_mutex_lock(&m);
    printf("mutex found\n");
    done = 1;
    pthread_cond_signal(&c);
    pthread_mutex_unlock(&m);
}

void *child(void *arg) {
    printf("enter to child\n");
    sleep(1);
    printf("child\n");
    thr_exit();
    return NULL;
}

void thr_join() {
    printf("enter to thr join\n");
    pthread_mutex_lock(&m);
    while(done == 0){
        printf("enter to while again\n");
        sleep(10);
        printf("after the sleep\n");
        pthread_cond_wait(&c, &m);
    }
    pthread_mutex_unlock(&m);
}

int main() {
    printf("parent: begin\n");
    pthread_t p;
    pthread_create(&p, NULL, child, NULL);
//    sleep(1);
    thr_join();
    printf("parent: end\n");\
    return 0;
}

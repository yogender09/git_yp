#include<stdio.h>

struct ring_buffer_event {
    unsigned int type:2, len:3, time_delta:27;
    unsigned int array[];
};

int main(){
    struct ring_buffer_event event;
    event.type = 3;
    event.len = 2;
    int a = event.len<<2;
    if(event.len == 2)
        printf("hello world %d\n", a);
}

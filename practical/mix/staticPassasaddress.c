#include<stdio.h>

void foo_sum(int *i){
    *i = 20;
    printf("%d\n",*i);
}


int main(){
    static int i = 10;
    foo_sum(&i);
    printf("%d\n",i);
    return 0;
}

#include<stdio.h>
#define max 5
foo()
{
    static int prev_max = max;
        printf("%d %d\n",prev_max,max);
    prev_max = max;
}


int main()
{
    foo();
    foo();
    foo();
    foo();    
}

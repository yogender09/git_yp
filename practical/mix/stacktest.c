/*This program is to see how stck grows downwards in x86*/
#include<stdio.h>

int main()
{
int a1 = 0, a2 = 1;
int a3 = 0;
int a4[15];
int count = a2;
int *ptr = &a1;
printf("a1=%p, a2=%p, a3=%p, a4=%p\n", &a1, &a2, &a3, &a4);
printf("a3[0]=%p, a3[1]=%p, a3[2]=%p\n", &a4[0],&a4[1],&a4[2]);
printf("a1=%p, a2=%p, a3=%p\n", ptr, (ptr+1), (ptr+2));  //Not correct
printf("a1=%p, a2=%p, a3=%p\n", ptr, (ptr-1), (ptr-2)); //correct
ptr++;
printf("a4=%p\n",ptr); //pointer arthematic
printf("shift b4 %d\n",count);
while(a2+1!=1){
    a2 <<=1;
    count++;
}
printf("size after %d %d %d %d\n",count/8,a1,a2,a3);
return 0;
}

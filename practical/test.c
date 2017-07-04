#include<stdio.h>
#include<stdlib.h>
void n (int a, char *str, int c, int d)
{
int k = 40;
printf("happy now 2\n");
abort();
}

void m (int a, char *str, int c)
{
int d = 30;
n(a,str,c,d);
}

void l (int a, char *str)
{
int c = 20;
m(a,str,c);
}

void p (int a){
char str[10]="my way";
printf("happy now 1\n");
l(a,str);
//error();
//kill();
}

int main(){

int a = 10;
p(a);
//printf("%d\n",p(a,20,30,str));

abort();
return 0;
}

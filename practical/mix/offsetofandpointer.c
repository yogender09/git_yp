#include<stdio.h>
#include<stdlib.h>

struct a{
int a;
int b;
int c;
int d;
};

struct b {
int a;
int c;
int d;
};

union my{
struct b l;
struct a k;
};


struct k{
int a;
union my p;
};


int main(){

struct k *null = (struct k *)malloc(sizeof(struct k));
 printf("%d\n",&((struct a*)0)->b);
 printf("%d\n",&null->p.k.b);
}


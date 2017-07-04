#include<stdio.h>
#include<stdlib.h>

int main(){
int arr[0];
printf("before-> %p\n",arr);
arr = (int *)malloc(10*sizeof(int));
printf("after-> %p\n",arr);
}

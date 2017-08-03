/* Trying all type of const int ptr combinations. */
/*first const can be before or after datatype*/

#include<stdio.h>



int main()
{
const const int *p; :is same as const int *p
int const *p1;
int *const p2;
const int const *p3;
const int *const p4;
int const const *p5; :is same as const int *p5
int const *const p6;

return 0;
}


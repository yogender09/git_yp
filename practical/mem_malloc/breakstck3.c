/* breakstack3.c
   Jim Plank
   CS360
   Memory Lecture 
   October, 1996 */

#include <stdio.h>

a(int *i)
{
  char iptr[50000000]; 
  *i = 1;
}

int main()
{
  int i;

  i = 1;
  printf("Calling a.  i = %d\n", i);
  a(&i);
  printf("After a is done.  i = %d\n", i);
}


/* testaddr2.c
   Jim Plank
   CS360
   Memory Lecture 
   October, 1996/March, 2011 */

#include <stdio.h>

extern end;
extern etext;

typedef unsigned long UL;

int main()
{
  char *s;
  char c;

  printf("&etext = 0x%lx\n", (unsigned long int) &etext);
  printf("&end   = 0x%lx\n", (unsigned long int) &end);

  printf("\n");

    printf("Enter memory location in hex (start with 0x): ");
    fflush(stdout);
   
    if (scanf("0x%lx", (UL *) &s) != 1) {
      printf("Try again -- start your number with 0x\n");
    } else {
  
      printf("Reading 0x%lx:  ", (unsigned long) s);
      fflush(stdout);
      c = *s;
      printf("%d\n", c);
      printf("Writing %d back to  0x%lx:  ", c, (unsigned long) s);
      fflush(stdout);
      *s = c;
      printf("ok\n");
    }
}

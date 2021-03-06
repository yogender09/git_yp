/* testaddr3a.c
   Jim Plank
   CS360
   Memory Lecture 
   October, 1996 */

#include <stdio.h>
#include <stdlib.h>

extern end;
extern etext;

typedef unsigned long UL;

int main(int argv, char *argc )
{
  char *s;
  char c;
  char *buf;

//  if(argc[0] == '0')
    buf = (char *) malloc(1000);

  printf("&etext = 0x%lx\n", (UL) &etext);
  printf("&end   = 0x%lx\n", (UL) &end);
  printf("sbrk(0)= 0x%lx\n", (UL) sbrk(0));
  printf("buf    = 0x%lx\n", (UL) buf);
  printf("&c     = 0x%lx\n", (UL) &c);

  printf("\n");

  printf("Enter memory location in hex (start with 0x): ");
  fflush(stdout);

  if (scanf("0x%lx", (UL *) &s) != 1) {
    printf("Try again -- start your number with 0x\n");
    exit(1);
  }

  printf("Reading 0x%lx:  ", (UL) s);
  fflush(stdout);
  c = *s;
  printf("%d\n", c);
  printf("Writing %d back to  0x%lx:  ", c, (UL) s);
  fflush(stdout);
  *s = c;
  printf("ok\n");
}

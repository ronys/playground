#include "stdio.h"

extern char *play();
extern char *ground();
extern void jack();

int main()
{
  int N = atoi(argv[2]);
  printf("Welcome to Git's %s%s!\n", play(), ground());
  jack(argv[1], N);
  return 0;
}


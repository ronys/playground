#include "stdio.h"

extern char *play();
extern char *ground();
extern void jack();

int main()
{
  printf("Welcome to Git's %s%s!\n", play(), ground());
  jack();
  return 0;
}


#include "stdio.h"

extern char *play();
extern char *ground();

int main()
{
  printf("Welcome to Git's %s%s!\n", play(), ground());
  printf("All work and no play makes Jack a dull boy.");
  return 0;
}


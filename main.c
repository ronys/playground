#include "stdio.h"

extern char *play();
extern char *ground();

int main()
{
  printf("Welcome to Git's %s%s!\n", play(), ground());
  return 0;
}


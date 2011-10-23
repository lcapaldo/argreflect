#include <stdio.h>

int main(int argc, char **argv)
{
  int i;
  for(i = 0; i != argc; ++i)
  {
     printf("%s%c", argv[i], '\0');
  }
  return 0;
}

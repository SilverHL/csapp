#include <stdio.h>
#include <stdbool.h>
bool equal(int x, int y)
{
  return !(~x & y);
}

int main()
{
  printf("%d", equal(4, 4));
}

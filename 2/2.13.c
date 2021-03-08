#include <stdio.h>

#include "common.c"

int bis(int x, int m)
{
  int result = x | m;
  return result;
}
int bic(int x, int m)
{
  int result = x ^ m; 
}

int bool_or(int x, int y)
{
  int result = bis(x, y);
  return result;
}

int bool_xor(int x, int y)
{
  int result = bis(bic(x, y), bic(y, x));
  return result;
}


int main()
{

}


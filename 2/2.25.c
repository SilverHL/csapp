#include <stdio.h>
#include "common.c"

float sum_element(float a[], int length)
{
  unsigned i;
  float result = 0;

  unsigned test = length - 1;
  show_bytes((byte_pointer)&test, sizeof(int));
  
  for (int i = 0; i <= length-1; i++)
    result += a[i];
  return result;
}

int main()
{
  float a[2] = {1.1, 2.2};
  float res = sum_element(a, 0);
}
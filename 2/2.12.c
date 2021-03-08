#include <stdio.h>

typedef unsigned char *byte_pointer;
void show_bytes(byte_pointer ptr, size_t len)
{
  size_t i;
  for (i = 0; i < len; ++i) 
  {
    printf("%.2x", ptr[i]);
  }
  printf("\n");
}

int main()
{
  int i = 0x87654321;
  int i1 = i & 0xFF;
  int i2 = ~ 0xFF;
  int i3 = i ^ i2;
  int i4 = i | 0xFF;
  show_bytes((byte_pointer)&i, sizeof(int));
  show_bytes((byte_pointer)&i1, sizeof(int));
  show_bytes((byte_pointer)&i2, sizeof(int));
  show_bytes((byte_pointer)&i3, sizeof(int));
  show_bytes((byte_pointer)&i4, sizeof(int));

}
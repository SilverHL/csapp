#include <stdio.h>


int eff(int i)
{
    return i;
}

void foo(int i)
{
    int c = eff(i-2);

}

int main()
{
    foo(97);
}
#include <stdio.h>

int add(int a, int b)
{
    return (a + b);
}

int sub(int a, int b)
{
    return (a - b);
}

int mul(int a, int b)
{
    return (a * b);
}

double div(int a, int b)
{
    if (b != 0)
        return ((double) a / b);
    else
        return (0);
}

int mod(int a, int b)
{
    if (b != 0)
        return (a % b);
    else
        return (0);
}
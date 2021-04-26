#include <stdio.h>
int max001(int x,int y,int z)
{
    int max;
    if (x>=y)
    {
        if (x>=z)
        {
            max = x;
        }
        else
        {
            max = z;
        }
    }
    else
    {
        if (y>=z)
        {
            max = y;
        }
        else
        {
            max = z;
        }
    }
    return (max);
}
int main()
{
    int a, b, c, t;
    scanf("%d%d%d", &a, &b, &c);
    t = max001(a, b,c);
    printf("%d\n", t);
}
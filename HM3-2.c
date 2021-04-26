#include <stdio.h>
int main()
{
    int n, i=1,a=1;
    long m = 1,sum=0;
    printf("n?:");
    scanf("%d", &n);
    for (a = 1; a <=n; a++)
    {
        for (i = 1; i <= a;i++)
        {
            m = m * i;
        }
        sum = sum + m;
    }
    printf("1!+2!+...+n!=%ld", sum);
}
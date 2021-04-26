#include <stdio.h>
int main()
{
    int i, n;
    float sum;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if(i%2==1)
        {
            sum = sum + (1.0 / i);
        }
        else
        {
            sum = sum - (1.0 / i);
        }
    }
    printf("%.8f", sum);
}
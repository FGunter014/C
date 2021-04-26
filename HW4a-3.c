#include <stdio.h>
int f(int a,int b)
{
    int x;
    int find = 0;
    for (x = 1;!find; x++)
    {
        if (x%a==0 && x%b==0)
        {
            find = 1;
        }
    }
    return x-1;
}       //函数定义欧几里德算法
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", f(a, b));
}
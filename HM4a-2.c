#include <stdio.h>
int prime(int n)
{
    int i;
    if(n<2)
    {
        return 0;
    }
    for(i=2;i*i<=n;i++)
        if(n%i==0)
            return 0;
    return 1;
}       //函数定义
int main()
{
    int n;
    int ret;
    scanf("%d", &n);
    ret = prime(n);       //函数调用
printf("%d\n", ret);
}
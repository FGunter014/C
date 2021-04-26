#include <stdio.h>
int min001(int a,int b)
{
    if (a<=b)
    {
        return (a);
    }
    else
    {
        return (b);
    }
}
int f(int a,int b)
{
    int i;
    for (i = min001(a, b); i <= min001(a, b); i--)
    {
        if (a%i==0 && b%i==0)
        {
            return (i);
        }
    }
}       //函数定义
int main()
{
    int a,b;
    printf("请输入两个正整数n：");
    scanf("%d%d",&a,&b);
    printf("%d和%d的最大公约数是%d",a,b,f(a,b));       //函数调用
}
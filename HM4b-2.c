#include <stdio.h>
int change(int *num1,int *num2)
{
    int t;
    t = *num1;
    *num1 = *num2;
    *num2 = t;
}

int sort(int *x,int *y,int *z)
{
    int i;
    for (i = 1; i <=2; i++)
    {
        if (*x<*y)
        {
            change(x, y);
        }
        if (*y<*x)
        {
            change(y, z);
        }
    }
    
}       //函数定义
int main()
{
    int a,b,c,t;
    printf("请输入三个整数n：");
    scanf("%d%d%d",&a,&b,&c);
    sort(&a,&b,&c);
    printf("排列结果是%d>%d>%d",a,b,c);      
}
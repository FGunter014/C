#include <stdio.h>
int count(int n) //count函数用于计算n的因子数
{
    int i,j=1;
    for(i=2;i<n;i++)
    {
        if(n%i==0) j++; 
    }
        return (j);
}   
int main()
{
    int i;
    for (i = 1; i <= 20; i++) 
    {
        if (count(i)%2!=0)
            printf("%d ", i);
    }
}
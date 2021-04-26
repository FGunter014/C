#include <stdio.h>
int huiwei(int x) 
{
    int i,num[5];
	for (i=0;i<=4;i++)
	{
		num[i]=x%10;
		x/=10;
	}
	if (num[0]==num[4]&&num[1]==num[3]) return 1;
	else return 0;
}      //函数定义
int main()
{
    int x;
    printf("\n请输入一个五位整数：");
    scanf("%d",&x);
    if(huiwei(x)==1)   printf("yes!\n");   //调用函数huiwen()来判断是否是回文数
    else printf("no!\n");
 }
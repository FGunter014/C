#include "stdio.h" 
int main() 
{ 
	int a,b,c;
	printf("3 Int:");
	scanf("%d,%d,%d",&a,&b,&c);
	if (a>b && a>c)
	{
		printf("max=%d",a);
	}
	if (b>a && b>c)
	{
		printf("max=%d",b);
	}
	if (c>b && a<c)
	{
		printf("max=%d",c);
	}
}

#include "stdio.h" 
int main() 
{ 
	char a,b,c;
	printf("3 Big Character:");
	scanf("%c,%c,%c",&a,&b,&c);
	a=a+32;
	b=b+32;
	c=c+32;
	printf("%c,%c,%c",a,b,c);
}

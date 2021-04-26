#include "stdio.h" 
int main() 
{ 
	double a,b,c,d;
	printf("3 Double:");
	scanf("%lf,%lf,%lf",&a,&b,&c);
	d=(a+b+c)/3;
	printf("+%020.4lf",d);
}

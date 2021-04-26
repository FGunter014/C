#include "stdio.h" 
int main() 
{ 
	int x,one,ten,hundred;
	printf("Int<1000:");
	scanf("%d",&x);
	hundred=x/100;
	x=x-hundred*100;
	ten=x/10;
	x=x-ten*10;
	one=x/1;
	printf("one:%d,ten:%d,hundred:%d",one,ten,hundred);
}

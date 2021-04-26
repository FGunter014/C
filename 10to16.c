#include <stdio.h>
int main()
{
	int x,y;
	int i=0;
	int m;
	char z,c;
	char a[1000]; 
	char hex[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	printf("X,int,10:");
	scanf("%d",&x);
	do
	{
		y=x%16;
		x=x/16;
		switch (y)
		{
			case 0:z='0';break;
			case 1:z='1';break;
			case 2:z='2';break;
			case 3:z='3';break;
			case 4:z='4';break;
			case 5:z='5';break;
			case 6:z='6';break;
			case 7:z='7';break;
			case 8:z='8';break;
			case 9:z='9';break;
			case 10:z='A';break;
			case 11:z='B';break;
			case 12:z='C';break;
			case 13:z='D';break;
			case 14:z='E';break;
			case 15:z='F';break;
		}
		a[i++]=z; 
		printf("%d,%d,%s\n",x,y,a);
	}
	while(x!=0 && y!=0);
 	gets(a);
 	for(m=strlen(a);m--;)//<--------------
 	printf("%c",a[m]);//<--------------
} 

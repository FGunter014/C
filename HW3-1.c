#include <stdio.h>
int main()
{
    int year, month, day, flag,i=0,sum=0;
    printf("Year,month,day:");
    scanf("%d,%d,%d", &year, &month, &day);
    if (year%400==0)
        flag = 1;
    else
    {
        if (year%4==0&&year%100!=0)
            flag = 1;
        else
            flag = 0;
    }
    switch (month)
    {
    case 1:
    case 3: 
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:i = 31;break;
    case 4:
    case 6:
    case 9:
    case 11:i = 30;break;
    case 2:
    {
        if (flag==1)
        {
            day = 29;
        }
        else
        {
            day = 28;
        }
    }
    break;
    default:
        printf("Month input error\n");
    }
    switch (month)
    {
        case 12:
            sum = sum + 30;
        case 11:
            sum = sum + 31;
        case 10:
            sum = sum + 30;
        case 9:
            sum = sum + 31;
        case 8:
            sum = sum + 31;
        case 7:
            sum = sum + 30;
        case 6:
            sum = sum + 31;
        case 5:
            sum = sum + 30;
        case 4:
            sum = sum + 31;
        case 3:
            sum = sum + i;
        case 2:
            sum = sum + 31;
        case 1:
            sum = sum + 0;
        break;
    }
    printf("第%d天\n！",sum+1);
}
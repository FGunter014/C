#include <stdio.h>
int main()
{
    float score, sum = 0, average;
    int n = 0,fail=0;
    printf("10 Students Score:(The last score is negative,Separate with )");
    scanf("%f", &score);
    while (score>=0)
    {
        if (score<60)
        {
            fail = fail + 1;
        }
        sum += score;
        n++;
        scanf("%f", &score);
    }
    if (n!=0)
    {
        average = sum / n;
    }
    printf("Average:%f\nFailed:%d", average,fail);
}
#include <stdio.h>
int main()
{
    char ch;
    printf("Some strings:");
    scanf("%c", &ch);
    while (ch!='\n')
    {
        if (ch<='Z'&&ch>='A')
        {
            printf("%c", ch);
        }
        scanf("%c", &ch);
    }
}
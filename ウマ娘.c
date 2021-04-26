#include <stdio.h>
/*
int main()
{
    int a, b, c, d, e;//begin
    int A, B, C, D, E;//ending
    double ta, tb, tc, td, te;//times
    int dA, dB, dC, dD, dE;//delta
    printf("Begin:");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    printf("End:");
    scanf("%d%d%d%d%d", &A, &B, &C, &D, &E);
    dA = A - a;//13ta+8td+3te=dA
    dB = B - b;//11tb+6tc=dB
    dC = C - c;//5ta+12tc+5td=dC
    dD = D - d;//5tb+12td=dD
    dE = E - e;//13te=dE
    //系数矩阵
    //   速 耐 力 毅 智 Pt
    //速 13    5       2
    //耐    11    5    2
    //力    6  12      2
    //毅 8     5  12   2
    //智 3          13 4
    te = dE / 13;

    printf("%d%d%d%d%d", a, b, c, d, e);
    printf("%d%d%d%d%d", A, B, C, D, E);


}
*/
//系数矩阵
#include <stdio.h>

/*
int matrixprint(double a[5][6])
{
    int i, j;
    for(i=0; i<5; i++) 
    { 
        for(j=0; j<6; j++) 
        { 
            printf("%2.0lf  ", a[i][j]); 
        } 
        printf("\n"); 
    } 
}
*/

int main()
{
    double a[5][6] = 
    { 
        {12,0,6,0,0}, 
        {0,14,0,5,0}, 
        {0,12,19,0,0},
        {5,0,7,11,0},
        {2,0,0,0,10},
    };
    int i,j,sum;
    double b[5][6];
    double begin[5],target[5],delta[5];
    char c;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("%2.0lf  ",a[i][j]);
        }
        printf("\n");
    }
    
    //以上是初始矩阵
    for(i=0;i<5;i++)
    {
        for(j=0;j<6;j++)
        {
            b[j][i]=a[i][j]; 
        }
    }
    /*
    printf("转置矩阵为\n"); 
    for(i=0; i<5; i++) 
    { 
        for(j=0; j<6; j++) 
        { 
            printf("%2.0lf  ", b[i][j]); 
        } 
        printf("\n"); 
    } 
    */
    //以上是转置矩阵
    printf("\n请输入初始值1x5矩阵：");
    for(j=0; j<5; j++) 
    { 
        scanf("%lf", &begin[j]); 
    }
   /*
    printf("Name?:");
    scanf("%c", &c);
    if (c="琵琶晨光")
    {
        double target[5] = {650,650,550,650,700};
    }
    
    */
    
    printf("请输入目标值1x5矩阵：");
    for(j=0; j<5; j++) 
    { 
        scanf("%lf", &target[j]); 
    } 
    
    /*
    printf("初始矩阵为\n"); 
    for(j=0; j<5; j++) 
    { 
        printf("%2.0lf  ", begin[j]); 
    }
    printf("\n");
    printf("目标矩阵为\n");
    for(j=0; j<5; j++) 
    { 
        printf("%2.0lf  ", target[j]); 
    } 
    */
    //以上是输入目标和初始值矩阵
    printf("差值矩阵为:");
    for (j = 0; j < 5; j++)
    {
        delta[j] = target[j] - begin[j];
        printf("%2.0lf  ", delta[j]);
    }
    printf("\n");
    //以上是差值矩阵
    //printf("\n请输入新增加的一列的元素：\n");
    for(i=0; i<5; i++) 
    {
        b[i][5]=delta[i];
    } 
    /*
    printf("\n增加一列后的矩阵为\n"); 
    for(i=0; i<5; i++) 
    { 
        for(j=0; j<6; j++) 
        { 
            printf("%2.0lf  ", b[i][j]); 
        } 
        printf("\n"); 
    } 
    */
   
    double s[5];

    for ( i = 0; i < 5; i++)
    {
        j = 0;
        while (j<6)
        {
            if (b[i][j]!=0)
            {
                s[i] = b[i][j];
                break;
            }
            j++;
        }
        //printf("%2.0lf  ", s[i]);
    }
    //除数储存
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 6 ; j++)
        {
            b[i][j] = b[i][j] / s[i];
        }
    }
    /*
    printf("\n一次行变换后：\n");
    for(i=0; i<5; i++) 
    { 
        for(j=0; j<6; j++) 
        { 
            printf("%2.0lf  ", b[i][j]); 
        } 
        printf("\n"); 
    }
    */
    for ( j = 0; j < 6; j++)
    {
        b[2][j] = b[2][j] - b[0][j];
        b[3][j] = b[3][j] - b[1][j];
    }
    /*
    printf("\n二次行变换后：\n");
    for(i=0; i<5; i++) 
    { 
        for(j=0; j<6; j++) 
        { 
            printf("%2.5lf  ", b[i][j]); 
        } 
        printf("\n"); 
    }
    */
    for ( i = 0; i < 5; i++)
    {
        j = 0;
        while (j<6)
        {
            if (b[i][j]!=0)
            {
                s[i] = b[i][j];
                break;
            }
            j++;
        }
        //printf("%2.5lf  ", s[i]);
    }
    //除数第二次储存
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 6 ; j++)
        {
            b[i][j] = b[i][j] / s[i];
        }
    }
    /*
    printf("\n三次行变换后：\n");
    for(i=0; i<5; i++) 
    { 
        for(j=0; j<6; j++) 
        { 
            printf("%2.5lf  ", b[i][j]); 
        } 
        printf("\n"); 
    }
    */
    for ( j = 0; j < 5; j++)
    {
        b[3][j] = b[3][j] - b[2][j];
    }
    /*
    printf("\n四次行变换后：\n");
    for(i=0; i<5; i++) 
    { 
        for(j=0; j<6; j++) 
        { 
            printf("%2.5lf  ", b[i][j]); 
        } 
        printf("\n"); 
    }
    */   
    for ( i = 0; i < 5; i++)
    {
        j = 0;
        while (j<6)
        {
            if (b[i][j]!=0)
            {
                s[i] = b[i][j];
                break;
            }
            j++;
        }
        //printf("%2.5lf  ", s[i]);
    }
    //除数第三次储存
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 6 ; j++)
        {
            b[i][j] = b[i][j] / s[i];
        }
    }
    /*
    printf("\n五次行变换后：\n");
    for(i=0; i<5; i++) 
    { 
        for(j=0; j<6; j++) 
        { 
            printf("%2.5lf  ", b[i][j]); 
        } 
        printf("\n"); 
    }
    */
    double t[4];
   
    t[4] = b[4][5];
    printf("te(Intelligence) = %2.5lf\n", t[4]);
    t[3] = b[3][5] - b[3][4] * t[4];
    printf("td(Willpower) = %2.5lf\n", t[3]);
    t[2] = b[2][5] - b[2][4] * t[4] - b[2][3] * t[3];
    printf("tc(Power) = %2.5lf\n", t[2]);
    t[1] = b[1][5] - b[1][4] * t[4] - b[1][3] * t[3] - b[1][2] * t[2];
    printf("tb(Endurance) = %2.5lf\n", t[1]);
    t[0] = b[0][5] - b[0][4] * t[4] - b[0][3] * t[3] - b[0][2] * t[2] - b[0][1] * t[1];
    printf("ta(Speed) = %2.5lf\n", t[0]);

    /*
    for ( i = 4; i = 0; i--)
    {
        for (j = 5; j = 1; j--)
        {
            t[i] = b[i][j] - b[i - 1][j - 1] * t[i - 1];
            printf("t%d = %2.5lf\n", i, t[i]);
        }
    }
    */
    
    

}
//行阶梯式解法

#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <math.h>

int max(int x, int y)
{
    if (x >= y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    printf("Enter The Number Of Objects : \n");
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter The Weight ");
        printf("%d. ", i + 1);
        scanf("%d", &a[i]);
        printf("Enter The Profit Corresponding To The Weight ");
        printf("%d. ", i + 1);
        scanf("%d", &b[i]);
    }

    printf("\n");
    printf("Enter The Capacity : \n");
    int n1;
    scanf("%d", &n1);

    int c[n + 1][n1 + 1];
    for (int j = 0; j <= n; j++)
    {
        for (int k = 0; k <= n1; k++)
        {
            if (j == 0 || k == 0)
            {
                c[j][k] = 0;
            }
            else if ((k - a[j - 1]) >= 0)
            {
                c[j][k] = max(c[j - 1][k], c[j - 1][k - a[j - 1]] + b[j - 1]);
            }
            else
            {
                c[j][k] = c[j - 1][k];
            }
        }
    }

    printf("\n");
    printf("Required Solution Is Shown Below : \n");
    for (int j = 0; j <= n; j++)
    {
        for (int k = 0; k <= n1; k++)
        {
            printf("%d  ", c[j][k]);
        }
        printf("\n");
    }

    int sol = c[n][n1];
    printf("\n");
    printf("Maximun Profit Is : %d", sol);

    printf("\n");
    printf("Weights Providing Maximum Profit :  ");
    int p, q;
    for (int k = 0; k < n; k++)
    {
        if (sol > 0)
        {
            for (int i = 0; i <= n; i++)
            {
                for (int j = 0; j <= n1; j++)
                {
                    if (c[i][j] == sol)
                    {
                        p = i;
                        q = j;
                        break;
                        break;
                    }
                }
            }
            for (int l = 0; l <= n; l++)
            {
                if (c[p][q] == c[p - 1][q])
                {
                    p--;
                }
                else
                {
                    sol = sol - b[p - 1];
                    printf("%d    ", a[p - 1]);
                    break;
                }
            }
        }
        else
        {
            break;
        }
    }
}
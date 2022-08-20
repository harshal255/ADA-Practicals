#include <stdio.h>
#include <time.h>

int main()
{
    int a[1000];
    for (int i = 0; i < 1000; i++)
    {
        a[i] = (rand() % (1000 + 1));
    }
    printf("\n");

    int temp;
    time_t s, e;
    s = clock();
    for (int i = 0; i < 999; i++)
    {
        for (int j = 0; j < 999 - i; j++)
        {
            if (a[j + 1] <= a[j])
            {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
    e = clock();
    float time = (difftime(e, s) / CLOCKS_PER_SEC);

    printf("Bubble Sorted Array Is : \n");
    for (int i = 0; i < 1000; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");
    printf("Time : %lf", time);
    printf("\n");
    return 0;
}
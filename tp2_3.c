#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 7

int main()
{

    srand(time(NULL));

    int i, j;
    int matriz[N][M];
    int *p_matriz = matriz[0][0];

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            *p_matriz = 1 + rand() % 100;
            printf("%d  ", *p_matriz);
            p_matriz++;
        }
        printf("\n");
        p_matriz++;
    }

    return 0;
}

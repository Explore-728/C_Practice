#include <stdio.h>
#include <stdlib.h>

#define MAXN 10
typedef float ElementType;

ElementType Average( ElementType S[], int N );

int main ()
{
    ElementType S[MAXN];
    int N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &S[i]);
    printf("%f\n", Average(S, N));
    system("pause");

    return 0;
}

ElementType Average( ElementType S[], int N )
{
    int i;
    ElementType sum = 0.0;
    ElementType ret;
    for(i=0; i<N; i++){
        sum += S[i];
    }
    ret = sum/N;
    return ret;
}
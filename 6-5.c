#include <stdio.h>
#include <stdlib.h>

#define MAXN 10
typedef float ElementType;

ElementType Max( ElementType S[], int N );

int main ()
{
    ElementType S[MAXN];
    int N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &S[i]);
    printf("%f\n", Max(S, N));
    system("pause");

    return 0;
}

ElementType Max( ElementType S[], int N )
{
    int i;
    ElementType max = S[0];
    
    for (i=1; i<N; i++){
        if(max<S[i]){
            max = S[i];
        }
    }
    return max;
}    
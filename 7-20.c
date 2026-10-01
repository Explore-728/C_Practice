#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int i,j;
    scanf("%d",&N);

    for(i = 1;i <= N;i++){
        for(j = 1;j <= i;j++){
            printf("%d*%d=%-4d",j,i,i*j);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
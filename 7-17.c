#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,U,D;
    int i,count = 0;
    int total = 0;
    scanf("%d %d %d",&N,&U,&D);

    while(total < N){
        total += U;
        count += 1;
        if(total < N){
            total -= D;
            count += 1;
        }
    }

    printf("%d",count);

    system("pause");
    return 0;
}
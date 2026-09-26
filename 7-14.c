#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B;
    int i,n;
    n = 0;
    int sum = 0;
    scanf("%d %d",&A,&B);

    for(i=A;i<=B;i++){
        n += 1;
        printf("%5d",i);
        sum += i;
        if(n%5 == 0){
            printf("\n");
        }
    }
    printf("\nSum = %d",sum);

    system("pause");

    return 0;
}
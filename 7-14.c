#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B;
    int i;
    int sum = 0;
    scanf("%d %d",&A,&B);

    for(i=A;i<=B;i++){
        printf("%5d",i);
        sum += i;
    }
    printf("\nSum = %d",sum);

    system("pause");

    return 0;
}
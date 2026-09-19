#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);

    if(a<=60){
        printf("Speed: %d - OK",a);
    }else{
        printf("Speed: %d - Speeding",a);
    }

    system("pause");

    return 0;
}
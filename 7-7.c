#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d:%d",&a,&b);

    if( a <= 12){
        printf("%d:%d AM",a,b);
    }else{
        printf("%d:%d PM",a - 12,b);
    }
    system("pause");
    return 0;
}
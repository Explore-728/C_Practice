#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d:%d",&a,&b);

    if( a < 12){
        printf("%d:%dAM",a,b);
    }else{
        printf("%d:%dPM",a - 12,b);
    }
    system("pause");
    return 0;
}
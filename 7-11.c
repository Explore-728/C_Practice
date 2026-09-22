#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x,y;
    scanf("%lf",&x);

    if(x<=15){
        y = 4*x/3;
    }else{
        y = 2.5*x-17.5;
    }

    printf("%0.2lf",y);

    system("pause");

    return 0;
}
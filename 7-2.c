#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ago;
    int pass;
    int now;
    int hour1,hour2,hour;
    int min1,min2,min;
    int a,b;

    scanf("%d %d",&ago,&pass);
    hour1 = ago / 100;
    hour2 = pass / 60;
    min1 = ago % 100;
    min2 = pass % 60;

    hour = (hour1 + hour2) * 60;
    min = min1 + min2;

    now = hour + min;

    a = now / 60;
    b = now % 60;

    printf ("%d%02d",a,b);
    system("pause");

    return 0;

}
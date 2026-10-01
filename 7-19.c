#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

    double y,f;

    y = (98-n) / 3;
    f = (2 * (98 - n)) / 3 + 1;

    printf("%.2lf",y + 0.01 * f);

    system("pause");
    return 0;
}
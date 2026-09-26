#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x;
    double sum = 1;
    double n = 1;
    double i = 1;
    scanf("%lf",&x);

    while(n > x){
        i += 1;
        n = n *( (i-1) / (2 * i - 1));
        sum += n;
    }

    sum = sum * 2;
    printf("%0.6lf",sum);

    system("pause");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,b,c,d;

    scanf("%d",&i);
    a = i/100;
    b = i/10%10;
    c = i%100;
    d = c*100 + b*10 + a;

    printf("%d",d);

    system("pause");
    
    return 0;
}
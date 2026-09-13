#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int foot,inch;
    
    scanf("%d",&i);
    foot = i/30.48;
    inch = 12 * (i/30.48 - foot);

    printf("%d %d",foot,inch);

    system ("pause");


    return 0;
}

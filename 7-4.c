#include <stdio.h>
#include <stdlib.h>

int main()
{
    int begin,end;

    scanf("%d",&begin);

    end = begin/16 * 10 + begin%16;

    printf("%d",end);

    system("pause");

    return 0;

}
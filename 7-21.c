#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d",&N);

    int X,Y;
    int found = 0;

    for(X=1;X<100;X++){
        for(Y=X;Y<100;Y++){
            if(X*X+Y*Y==N){
                printf("%d %d\n",X,Y);
                found = 1;
            }
        }
    }

    if(!found){
        printf("No Solution");
    }

    system("pause");
    return 0;
}
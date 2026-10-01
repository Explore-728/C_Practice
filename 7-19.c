#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

    int y,f;

    int found = 0;
    for(y = 0; y < 100;y++){
        for(f = 0; f < 100;f++){
            if(98*f - 199*y == n){
                printf("%d.%d",y,f);
                found = 1;
                break;
            }
        }
        if(found){
            break;
        }
    }

    if(!found){
        printf("No Solution");
    }

    system("pause");
    return 0;
}
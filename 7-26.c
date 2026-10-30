#include <stdio.h>

int main()
{
    char s;
    int len = 0;
    int is_first = 1;

    while((s = getchar()) != '.'){
        if(s == ' '){
            if(len > 0){
                if(is_first){
                    printf("%d",len);
                    is_first = 0;
                }else{
                    printf(" %d",len);
                }
            }

            len = 0;
        }else{
            len ++;
        }
    }

    if(len > 0){
        if(is_first){
            printf("%d",len);
        }else{
            printf(" %d",len);
        }
    }
        
    return 0;
}
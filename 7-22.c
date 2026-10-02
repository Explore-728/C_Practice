#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d",&T);

    int i;
    int a=0,b=0;
    int sleep_time = 0;

    for(i = 1; i <= T; i++){
        b += 3;
        if(sleep_time == 0){
            a += 9;
            if(i % 10 == 0 && a > b){
                sleep_time = 30;
            }
        }else{
            sleep_time --;
        }
    }

    if(a > b){
        printf("^_^ %d",a);
    }else if(a == b){
        printf("-_- %d",a);
    }else if(a < b){
        printf("@_@ %d",b);
    }

    system("pause");
    return 0;
}
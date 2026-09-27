#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A;
    int i,j,k;
    int count = 0;
    scanf("%d",&A);

    for(i=A;i<=A+3;i++){
        for(j=A;j<=A+3;j++){
            if(i != j){
                for(k=A;k<=A+3;k++){
                    if(i != k && k != j){
                        printf("%d",i*100 + j*10 + k);
                        count += 1;
                        if(count%6 == 0){
                            printf("\n");
                        }else{
                            printf(" ");
                        }
                    }
                }
            }
        }
    }

    system("pause");
    return 0;
}
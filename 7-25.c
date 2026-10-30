#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d",&N);

    if(N<0){
        printf("fu ");
        N = -N;
    }

    int i;
    char s[20];
    char big_s[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu",};

    sprintf(s,"%d",N);
    int len = strlen(s);

    for(i=0;i<len;i++){
        int digit = s[i] - '0';
        if(i==0){
            printf("%s",big_s[digit]);
            continue;
        }
        printf(" %s",big_s[digit]);
    }

    system("pause");
    return 0;
}
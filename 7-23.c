#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d",&N);

     if (N == 0) {
        printf("a");
        return 0;
    }

    int i;
    char s[20];
    int flag_zero = 0;
    char num_to_letter[] = "abcdefghij";
    char unit[] = {' ', 'S', 'B', 'Q', 'W', 'S', 'B', 'Q', 'Y'};

    sprintf(s,"%d",N);
    int len = strlen(s);

    for(i=0;i<len;i++){
        int digit = s[i] - '0';

        if(digit == 0){
            flag_zero = 1;
            continue;
        }

        if(flag_zero == 1){
            printf("a");
            flag_zero = 0;
        }

        printf("%c",num_to_letter[digit]);

        if (unit[len - 1 - i] != ' ') {
            printf("%c", unit[len - 1 - i]);
        }
    }

    system("pause");
    return 0;
}
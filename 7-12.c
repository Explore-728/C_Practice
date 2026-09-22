#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    char c;
    
    scanf("%d %c %d",&a,&c,&b);

    if(c != '+' && c != '-' && c != '*' && c != '/' && c != '%'){
        printf("ERROR");
        system("pause");
        return 0;
    }

    if(c == '+'){
        printf("%d",a + b);
    }else if(c == '-'){
        printf("%d",a - b);
    }else if(c == '*'){
        printf("%d",a * b);
    }else if(c == '/'){
        printf("%d",a / b);
    }else{
        printf("%d",a % b);
    }

    system("pause");

    return 0;

}
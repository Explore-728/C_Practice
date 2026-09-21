#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    if(a>=5){
        if(b<=40){
            printf("%.2f",b*50*1.0);
        }else{
            printf("%.2f",(40*50+(b-40)*50*1.5))*1.0;
        }
    }else{
        if(b<=40){
            printf("%.2f",b*30*1.0);
        }else{
            printf("%.2f",(40*30+(b-40)*30*1.5))*1.0;
        }
    }

    system("pause");

    return 0;
}
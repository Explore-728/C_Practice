#include <stdio.h>
#include <stdlib.h>

double a3,a2,a1,a0;

double out(double i)
{
    return a3*i*i*i + a2*i*i + a1*i + a0;
}

int main()
{
    scanf("%lf %lf %lf %lf",&a3,&a2,&a1,&a0);

    double a,b;
    scanf("%lf %lf",&a,&b);

    if(b - a < 0.01){
        printf("%.2lf",(a+b)/2);
        return 0;
    }

    if(out(a)*out(b)<0){
        while(b - a >= 0.01){
            if(out((a+b)/2)*out(a)>0){
                a = (a+b)/2;
            }else{
                b = (a+b)/2;
            }
        }
        printf("%.2lf",(a+b)/2);
    }else if(out(a)==0){
        printf("%.2lf",a);
    }else if(out(b)==0){
        printf("%.2lf",b);
    }

    system("pause");
    return 0;
}
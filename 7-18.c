#include <stdio.h>

double a3,a2,a1,a0;

double f(double i)
{
    return a3*i*i*i + a2*i*i + a1*i + a0;
}

int main()
{
    scanf("%lf %lf %lf %lf",&a3,&a2,&a1,&a0);

    double a,b;
    scanf("%lf %lf",&a,&b);

    while(b-a>=0.01){
        double mid = (a + b)/2;

        if(f(mid) == 0){
            break;
        }

        if(f(mid) * f(a) > 0){
            a = mid;
        }else{
            b = mid;
        }

    }

    printf("%.2lf",(a+b)/2);

    return 0;
}
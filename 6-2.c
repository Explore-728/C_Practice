#include <stdio.h>
#include <stdlib.h>

#define MAXN 10

double f( int n, double a[], double x );

int main()
{
    int n, i;
    double a[MAXN], x;
    
    scanf("%d %lf", &n, &x);                       //n决定项数
    for ( i=0; i<=n; i++ )
        scanf("%lf", &a[i]);                       //为每一项赋值
    printf("%lf\n", f(n, a, x));
    system("pause");
    return 0;
}

double f( int n, double a[], double x )
{
    int k;
    double sum = 0;
    double ans = 1;
    for(k=0;k<=n;k++){
        sum += a[k]*ans;
        ans *= x;
    }
    return sum;
}
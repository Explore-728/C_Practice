#include <stdio.h>
#include <Stdlib.h>

int gcd(int a,int b)
{
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int N,M;
    scanf("%d/%d",&N,&M);

    int g = gcd(N,M);

    N = N / g;
    M = M / g;

    printf("%d/%d",N,M);

    system("pause");
    return 0;

}
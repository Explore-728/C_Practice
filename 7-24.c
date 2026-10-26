#include <stdio.h>
#include <Stdlib.h>

int main()
{
    int N,M;
    scanf("%d/%d",&N,&M);

    if(N == M){
        printf("1/1");
        return 0;
    }else if(N > M && N % M == 0){
        printf("%d/1",N / M);
        return 0;
    }else if(M > N && M % N == 0){
        printf("1/%d",M/N);
        return 0;
    }

    while(N % 2 == 0 && M % 2 == 0){
        N /= 2;
        M /= 2;
    }

    while(N % 3 == 0 && M % 3 == 0){
        N /= 3;
        M /= 3;
    }

    printf("%d/%d",N,M);

    system("pause");
    return 0;

}
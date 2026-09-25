#include <stdio.h>

int main()
{
    double O,H,L,C;
    scanf("%lf %lf %lf %lf",&O,&H,&L,&C);

    if(C < O){
        printf("BW-Solid");
    }else if(C > O){
        printf("R-Hollow");
    }else{
        printf("R-Cross");
    }

    if(L<O && L<C && H>O && H>C){
        printf(" with Lower Shadow and Upper Shadow");
    }else if(H>O && H>C){
        printf(" with Upper Shadow");
    }else if(L<O && L<C){
        printf(" with Lower Shadow");
    }
    
    return 0;
}
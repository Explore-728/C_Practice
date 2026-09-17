#include <stdio.h>
#include <stdlib.h>

typedef struct Node *PtrToNode;
struct Node{
    int Data;
    PtrToNode Next;
};
typedef PtrToNode List;

int FactorialSum( List L );

int main()
{
    int N,i;
    List L,p;

    scanf("%d",&N);
    L = NULL;

    for(i=0; i<N; i++){
        p = (List)malloc(sizeof(struct Node));
        scanf("%d",&p->Data);
        p ->Next = L;
        L = p;
    }
    printf("%d\n",FactorialSum(L));

    system ("pause");

    return 0;
}

int FactorialSum( List L )
{
    int sum = 0;

    PtrToNode p = L;

    while(p != NULL){
        int fact = 1;
        int i;
        for (i=1; i<=p->Data;i++){
            fact *= i;
        }
        sum += fact; 

        p=p->Next;
    }
    return sum;
}
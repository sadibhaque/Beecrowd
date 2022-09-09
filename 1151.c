#include<stdio.h>
int main()
{
    int N,i,t1=0,t2=1,nt=t1+t2;

    scanf("%d",&N);

    printf("%d %d",t1,t2);

    for(i=3; i<=N; i++)
    {
        printf(" %d",nt);
        t1=t2;
        t2=nt;
        nt=t1+t2;
        
        
    }
    printf("\n");

}

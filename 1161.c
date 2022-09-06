#include<stdio.h>
int main()
{
    long long int  i,j,M,N;
    long long fact1=1,fact2=1;

   while(scanf("%lld %lld",&M,&N)!=EOF)
   {
        fact1=1,fact2=1;
        for(i=1; i<=M; i++)
        {
            fact1*=i;
        }

        for(j=1; j<=N; j++)
        {
            fact2*=j;
        }

        printf("%lld\n", fact1+fact2);
   }
    return 0;
}

#include <stdio.h>

int main()
{
   int M,N,i;
   int sum = 0;
   int min,max;

   scanf("%d",&M);
   scanf("%d",&N);

    if(M<N)
    {
        min=M;
        max=N;
    }
    else
    {
        min=N;
        max=M;
    }
    

    for(i=min; i<=max; i++)
    {
        if(i%13 != 0)
        {
            sum=sum+i;
        }
        
    }
    printf("%d\n",sum);
}

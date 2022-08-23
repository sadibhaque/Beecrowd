#include <stdio.h>

int main() {

    while (1)
    {
        int M,N,min,max,sum=0;

        scanf("%d %d",&M,&N);

        if(M<=0 || N<=0)
            break;

        if(M<N)
        {
            min=M;
            max=N;
        }
        else
        {
            min=N;
            max=M;
        };


        for (int i = min; i <= max; ++i){

            sum=sum+i;

            printf("%d ",i);

        }
        printf("Sum=%d\n",sum);
    }

}

#include<stdio.h>
int main()
{
    int N,X,Y,i;
    float min;

    scanf("%d",&N);

    for ( i = 0; i <N ; ++i) {
        scanf("%d %d",&X,&Y);

        if(Y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            min=(float)X/Y;
            printf("%.1f\n",min);
        }

    }
}

#include <stdio.h>
int main()
{
    int J,K,L,i,max,mid,min;

    scanf("%d %d %d",&J,&K,&L);

    if (J<K && J<L)
    {
        if(K<L)
        printf("%d\n%d\n%d\n",J,K,L);
        else 
        printf("%d\n%d\n%d\n",J,L,K);
    }

    if (K<J && K<L)
    {
        if(J<L)
        printf("%d\n%d\n%d\n",K,J,L);
        else
        printf("%d\n%d\n%d\n",K,L,J);
    }
    
    if (L<J && L<K)
    {
        if (J<K)
        printf("%d\n%d\n%d\n",L,J,K);
        else
        printf("%d\n%d\n%d\n",L,K,J);
        
    }

    printf("\n%d\n%d\n%d\n",J,K,L);

    
}

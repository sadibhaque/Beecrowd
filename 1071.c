#include <stdio.h>
int main()
{
    int a,i,b,min,max,c=0;

    scanf("%d %d",&a,&b);

    if (a<b)
    {
        min=a;
        max=b;
    }

    else

    {
        min=b;
        max=a;
    }
    

    for(i=(min+1); i<max; i++)
    {
        
        if (i%2 != 0)
        {
            c=c+i;
        }     

    }

    printf("%d\n",c);

}

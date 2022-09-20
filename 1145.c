#include <stdio.h>

int main()
{
   int b=0,X,Y;

   scanf("%d %d",&X,&Y);

   for(int i=1; i<=Y; i++)
   {
        printf("%d",i);
        b++;
        if(b==X)
        {
            printf("\n");
            b=0;
        }
        else
        printf(" ");
        
   }

}

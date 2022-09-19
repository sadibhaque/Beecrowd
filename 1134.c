#include <stdio.h>

int main()
{
   int x;
   int a=0,b=0,c=0;

   while (1)
   {
    scanf("%d",&x);


    if(x==4)
       break;

    else
    {
        if(x==1) a++;
        else if(x==2) b++;
        else if(x==3) c++;
        else continue;
    }
   }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",b);
    printf("Diesel: %d\n",c);

    
   
   
}

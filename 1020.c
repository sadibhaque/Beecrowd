#include <stdio.h>

int main()
{
   
   int age,y,m,d;

   scanf("%d",&age);

   y=age/365;

   m=(age%365)/30;

   d=age-((y*365)+(m*30));

   printf("%d ano(s)\n",y);
   printf("%d mes(es)\n",m);
   printf("%d dia(s)\n",d);



   return 0;
}
#include <stdio.h>

int main()
{
   
   float N1,N2,N3,N4,N5,AVG,AVG2;
   
   scanf("%f %f %f %f",&N1,&N2,&N3,&N4);

   AVG = (N1*2 + N2*3 + N3*4 +N4)/10;

   printf("Media: %.1f\n",AVG);

   if (AVG>=7.0)
   {
      printf("Aluno aprovado.\n");
   }

   else if (AVG<5.0)
   {
      printf("Aluno reprovado.\n");
   }
   
   else if (AVG>=5.0 && AVG<=6.9)
   {
      printf("Aluno em exame.\n");
      scanf("%f",&N5);
      printf("Nota do exame: %.1f\n",N5);
      
      AVG2 = (AVG+N5)/2;
      if (AVG2>=5.0)
      {
         printf("Aluno aprovado.\n");
      }
      else if(AVG2<=4.9)
      {
         printf("Aluno reprovado.\n");
      }
      
      printf("Media final: %.1f\n",AVG2);
   }

   return 0;
} 

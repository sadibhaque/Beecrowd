#include<stdio.h>
int main()
{
    int x,y,z;

    printf("Input : ");

    scanf("%d/%d/%d",&x,&y,&z);

    printf("%d/%d/%d\n",y,x,z);
    printf("%d/%d/%d\n",z,y,x);
    printf("%d-%d-%d\n",x,y,z);



  return 0;
}
